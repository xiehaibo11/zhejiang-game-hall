
stack_st_X509_POLICY_NODE * X509_policy_tree_get0_user_policies(X509_POLICY_TREE *tree)

{
  X509_POLICY_TREE *pXVar1;
  stack_st_X509_POLICY_NODE *psVar2;
  
  psVar2 = (stack_st_X509_POLICY_NODE *)0x0;
  if (tree != (X509_POLICY_TREE *)0x0) {
    pXVar1 = tree + 0x20;
    if (((byte)tree[0x28] & 2) != 0) {
      pXVar1 = tree + 0x18;
    }
    psVar2 = *(stack_st_X509_POLICY_NODE **)pXVar1;
  }
  return psVar2;
}

