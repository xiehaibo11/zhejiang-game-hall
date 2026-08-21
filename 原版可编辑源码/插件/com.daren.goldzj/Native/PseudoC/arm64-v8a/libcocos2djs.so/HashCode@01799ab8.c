
/* v8::internal::compiler::NodeProperties::HashCode(v8::internal::compiler::Node*) */

ulong v8::internal::compiler::NodeProperties::HashCode(Node *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar4;
  Node *pNVar5;
  ulong uVar3;
  
  uVar2 = (**(code **)(**(long **)param_1 + 0x18))();
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
  }
  pNVar5 = param_1 + 0x20;
  uVar3 = base::hash_value(uVar1);
  uVar3 = base::hash_combine(0,uVar3);
  uVar2 = base::hash_value(uVar2);
  uVar2 = base::hash_combine(uVar3,uVar2);
  uVar1 = (byte)param_1[0x17] & 0xf;
  if (uVar1 == 0xf) {
    uVar1 = *(uint *)(*(long *)pNVar5 + 8);
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  if (uVar1 != 0) {
    lVar4 = (long)(int)uVar1 << 3;
    do {
      uVar3 = base::hash_value(*(uint *)(*(long *)pNVar5 + 0x14) & 0xffffff);
      uVar3 = base::hash_combine(0,uVar3);
      uVar2 = base::hash_value(uVar2);
      uVar2 = base::hash_combine(uVar3,uVar2);
      lVar4 = lVar4 + -8;
      pNVar5 = pNVar5 + 8;
    } while (lVar4 != 0);
  }
  return uVar2;
}

