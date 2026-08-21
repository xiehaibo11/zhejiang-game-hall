
undefined8 FUN_016e5610(Node *param_1)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  Node *pNVar6;
  long lVar7;
  
  uVar3 = 0;
  sVar2 = *(short *)(*(long *)param_1 + 0x10);
  if ((sVar2 != 0x1e) && (sVar2 != 0x2da)) {
    if (sVar2 == 0x23) {
      plVar4 = (long *)v8::internal::compiler::NodeProperties::GetControlInput(param_1,0);
      uVar3 = 0;
      if (*(short *)(*plVar4 + 0x10) != 1) {
        uVar1 = *(uint *)(*(long *)param_1 + 0x14);
        if (0 < (int)uVar1) {
          lVar7 = 0;
          do {
            pNVar6 = param_1 + 0x20;
            if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
              pNVar6 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
            }
            uVar5 = FUN_016e5610(*(undefined8 *)(pNVar6 + lVar7));
            if ((uVar5 & 1) != 0) goto LAB_016e56c0;
            lVar7 = lVar7 + 8;
          } while ((ulong)uVar1 * 8 - lVar7 != 0);
        }
        uVar3 = 0;
      }
    }
    else {
LAB_016e56c0:
      uVar3 = 1;
    }
  }
  return uVar3;
}

