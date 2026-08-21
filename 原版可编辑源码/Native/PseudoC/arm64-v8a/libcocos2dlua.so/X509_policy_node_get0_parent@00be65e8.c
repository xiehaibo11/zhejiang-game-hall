
X509_POLICY_NODE * X509_policy_node_get0_parent(X509_POLICY_NODE *node)

{
  X509_POLICY_NODE *pXVar1;
  
  pXVar1 = (X509_POLICY_NODE *)0x0;
  if (node != (X509_POLICY_NODE *)0x0) {
    pXVar1 = *(X509_POLICY_NODE **)(node + 8);
  }
  return pXVar1;
}

