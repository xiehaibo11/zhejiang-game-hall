
void X509_policy_tree_free(X509_POLICY_TREE *tree)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (tree != (X509_POLICY_TREE *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)(tree + 0x18));
    OPENSSL_sk_pop_free(*(undefined8 *)(tree + 0x20),&DAT_00b67d2c);
    if (0 < *(int *)(tree + 8)) {
      puVar2 = *(undefined8 **)tree;
      iVar1 = 0;
      do {
        X509_free((X509 *)*puVar2);
        OPENSSL_sk_pop_free(puVar2[1],policy_node_free);
        policy_node_free(puVar2[2]);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 4;
      } while (iVar1 < *(int *)(tree + 8));
    }
                    /* catch() { ... } // from try @ 00b67c14 with catch @ 00b67cdc */
    OPENSSL_sk_pop_free(*(undefined8 *)(tree + 0x10),policy_data_free);
    CRYPTO_free(*(void **)tree);
    CRYPTO_free(tree);
    return;
  }
  return;
}

