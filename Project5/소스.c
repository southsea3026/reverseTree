#include <stdio.h>
#include <stdlib.h>

typedef char TElement;
typedef struct BinTrNode {
	TElement data;
	struct BinTrNode* left;
	struct BinTrNode* right;
} TNode;
TNode* root;

void init_tree() { root = NULL; }
int is_empty_tree() { return root == NULL; }
TNode* get_root() { return root; }

TNode* create_tree(TElement val, TNode* l, TNode* r) {
	TNode* n = (TNode*)malloc(sizeof(TNode));
	n->data = val;
	n->left = l;
	n->right = r;
	return n;
}

//트리의 추가 연산 코드 포함
void preorder(TNode* n) {
	if (n != NULL) {
		printf("[%c] ", n->data);
		preorder(n->left);
		preorder(n->right);
	}
}

void main() {
	TNode* b, * c, * d, * e, * f;

	init_tree();
	c = create_tree('C', NULL, NULL);
	d = create_tree('D', NULL, NULL);
	b = create_tree('B', c, d);
	f = create_tree('F', NULL, NULL);
	e = create_tree('E', NULL, f);
	root = create_tree('A', b, e);


	printf("\n   Pre-Order : "); preorder(root);

}
