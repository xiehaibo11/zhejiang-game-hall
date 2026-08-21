
/* v8::internal::BitVector::Resize(int, v8::internal::Zone*) */

void __thiscall v8::internal::BitVector::Resize(BitVector *this,int param_1,Zone *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  
  if (param_1 < 0x41) {
    uVar8 = 1;
  }
  else {
    iVar7 = param_1 + 0x3e;
    if (-1 < param_1 + -1) {
      iVar7 = param_1 + -1;
    }
    uVar8 = (ulong)((iVar7 >> 6) + 1);
  }
  uVar1 = *(uint *)(this + 4);
  iVar7 = (int)uVar8;
  if ((int)uVar1 < iVar7) {
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    puVar6 = *(undefined8 **)(this + 8);
    uVar3 = uVar8 * 8;
    if (uVar3 < (ulong)(*(long *)(param_2 + 0x18) - (long)puVar2) ||
        uVar3 - (*(long *)(param_2 + 0x18) - (long)puVar2) == 0) {
      *(undefined8 **)(param_2 + 0x10) = puVar2 + uVar8;
    }
    else {
      puVar2 = (undefined8 *)Zone::NewExpand(param_2,uVar3);
    }
    *(undefined8 **)(this + 8) = puVar2;
    *(int *)(this + 4) = iVar7;
    if (iVar7 == 1) {
      *(undefined8 **)(this + 8) = puVar6;
    }
    else if (uVar1 == 1) {
      *puVar2 = puVar6;
      if (1 < *(int *)(this + 4)) {
        lVar4 = 1;
        do {
          *(undefined8 *)(*(long *)(this + 8) + lVar4 * 8) = 0;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(this + 4));
      }
    }
    else {
      lVar4 = (long)(int)uVar1;
      if (0 < (int)uVar1) {
        *puVar2 = *puVar6;
        if (uVar1 != 1) {
          uVar8 = 1;
          do {
            lVar5 = uVar8 * 8;
            puVar2 = puVar6 + uVar8;
            uVar8 = uVar8 + 1;
            *(undefined8 *)(*(long *)(this + 8) + lVar5) = *puVar2;
          } while (uVar1 != uVar8);
        }
        uVar8 = (ulong)*(uint *)(this + 4);
      }
      if ((int)uVar1 < (int)uVar8) {
        do {
          *(undefined8 *)(*(long *)(this + 8) + lVar4 * 8) = 0;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(this + 4));
      }
    }
  }
  *(int *)this = param_1;
  return;
}

