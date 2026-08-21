
stack_st_X509_POLICY_NODE * X509_policy_tree_get0_policies(X509_POLICY_TREE *tree)

{
  stack_st_X509_POLICY_NODE *psVar1;
  
  psVar1 = (stack_st_X509_POLICY_NODE *)0x0;
  if (tree != (X509_POLICY_TREE *)0x0) {
    psVar1 = *(stack_st_X509_POLICY_NODE **)(tree + 0x18);
  }
  return psVar1;
}

