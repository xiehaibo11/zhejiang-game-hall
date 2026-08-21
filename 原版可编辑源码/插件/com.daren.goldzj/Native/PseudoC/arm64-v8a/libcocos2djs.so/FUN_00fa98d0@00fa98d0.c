
void FUN_00fa98d0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar2 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10 + uVar3 * 8);
      uVar5 = uVar4 & 0xfffffffffffc0000;
      uVar6 = (uint)*(undefined8 *)(uVar5 + 8);
      if ((uVar6 >> 3 & 1) == 0) {
        if (((uVar6 >> 4 & 1) == 0) && ((*(byte *)(uVar5 + 10) >> 1 & 1) == 0)) {
          if (*(int *)(uVar4 - 1) != param_2) {
LAB_00fa9908:
            lVar1 = lVar2 * 8;
            lVar2 = lVar2 + 1;
            *(ulong *)(param_1 + lVar1 + 0x10) = uVar4;
          }
        }
        else if ((*(uint *)(*(long *)(uVar5 + 0x108) + (uVar4 - uVar5 >> 7 & 0x1ffffff) * 4) >>
                  (ulong)((uint)(uVar4 - uVar5 >> 2) & 0x1f) & 1) != 0) goto LAB_00fa9908;
      }
      else if ((*(uint *)(uVar4 - 1) & 1) == 0) {
        uVar4 = (uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 1;
        goto LAB_00fa9908;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulong *)(param_1 + 8));
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}

