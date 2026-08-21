
X509_POLICY_LEVEL * X509_policy_tree_get0_level(X509_POLICY_TREE *tree,int i)

{
  X509_POLICY_LEVEL *pXVar1;
  
  pXVar1 = (X509_POLICY_LEVEL *)0x0;
  if ((tree != (X509_POLICY_TREE *)0x0) && (-1 < i)) {
    if (*(int *)(tree + 8) <= i) {
      return (X509_POLICY_LEVEL *)0x0;
    }
    pXVar1 = (X509_POLICY_LEVEL *)(*(long *)tree + (long)i * 0x20);
  }
  return pXVar1;
}

