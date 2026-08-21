
void X509_policy_tree_free(X509_POLICY_TREE *tree)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (tree != (X509_POLICY_TREE *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)(tree + 0x18));
                    /* try { // try from 00b77104 to 00c7710f has its CatchHandler @ 00b7717c */
    OPENSSL_sk_pop_free(*(undefined8 *)(tree + 0x20),&LAB_00b771ac);
                    /* try { // try from 00b77110 to 00c77133 has its CatchHandler @ 00b770d4 */
    if (0 < *(int *)(tree + 8)) {
      puVar2 = *(undefined8 **)tree;
      iVar1 = 0;
      do {
        X509_free((X509 *)*puVar2);
                    /* try { // try from 00b77134 to 00c7713f has its CatchHandler @ 00b77178 */
        OPENSSL_sk_pop_free(puVar2[1],policy_node_free);
                    /* try { // try from 00b77140 to 00c77197 has its CatchHandler @ 00b770d4 */
        policy_node_free(puVar2[2]);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 4;
      } while (iVar1 < *(int *)(tree + 8));
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(tree + 0x10),policy_data_free);
                    /* catch() { ... } // from try @ 00b77134 with catch @ 00b77178 */
                    /* catch() { ... } // from try @ 00b77104 with catch @ 00b7717c */
    CRYPTO_free(*(void **)tree);
    CRYPTO_free(tree);
    return;
  }
  return;
}

