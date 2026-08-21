
/* v8::internal::compiler::NodeProperties::Equals(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

undefined8 v8::internal::compiler::NodeProperties::Equals(Node *param_1,Node *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  Node *pNVar7;
  Node *pNVar8;
  
  uVar3 = (**(code **)(**(long **)param_1 + 0x10))(*(long **)param_1,*(undefined8 *)param_2);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    uVar6 = uVar4;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
    }
    uVar1 = *(uint *)(param_2 + 0x14) & 0xf000000;
    if (uVar1 == 0xf000000) {
      uVar2 = *(uint *)(*(long *)(param_2 + 0x20) + 8);
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x14) >> 0x18 & 0xf;
    }
    if (uVar6 == uVar2) {
      pNVar7 = param_1 + 0x20;
      if (uVar4 == 0xf) {
        uVar4 = *(uint *)(*(long *)pNVar7 + 8);
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      pNVar8 = param_2 + 0x20;
      if (uVar1 == 0xf000000) {
        pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      if (uVar4 != 0) {
        lVar5 = (long)(int)uVar4 << 3;
        do {
          if (((*(uint *)(*(long *)pNVar8 + 0x14) ^ *(uint *)(*(long *)pNVar7 + 0x14)) & 0xffffff)
              != 0) {
            return 0;
          }
          pNVar7 = pNVar7 + 8;
          lVar5 = lVar5 + -8;
          pNVar8 = pNVar8 + 8;
        } while (lVar5 != 0);
      }
      return 1;
    }
  }
  return 0;
}

