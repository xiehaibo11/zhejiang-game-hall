
void FUN_00e2da24(long *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = (*(code *)param_1[0x81])();
  uVar7 = *param_2;
  if (uVar7 != 0) {
    uVar8 = 1;
    do {
      while( true ) {
        lVar5 = param_1[7];
        if (lVar5 < 2) {
          if (*(char *)((long)param_1 + 0x3c9) != '\0') {
            *(undefined4 *)(param_1 + 3) = 0x81;
          }
          param_1[7] = 0;
          goto LAB_00e2db98;
        }
        param_1[7] = lVar5 + -2;
        uVar2 = *(ulong *)(param_1[6] + lVar5 * 8 + -8);
        if ((uint)*(ushort *)((long)param_1 + 0x54) <= ((uint)uVar2 & 0xffff)) break;
        uVar3 = *(ulong *)(param_1[6] + (lVar5 + -2) * 8);
        uVar4 = uVar3 >> 4 & 0xf;
        if ((char)param_1[0x53] == 'r') {
          lVar5 = (uVar4 | 0x20) + (ulong)*(ushort *)(param_1 + 0x4c);
        }
        else {
          if ((char)param_1[0x53] == 'q') {
            uVar4 = uVar4 | 0x10;
          }
          lVar5 = uVar4 + *(ushort *)(param_1 + 0x4c);
        }
        if (lVar1 == lVar5) {
          uVar3 = uVar3 & 0xf;
          lVar6 = uVar3 - 8;
          lVar5 = uVar3 - 7;
          if (lVar6 < 0) {
            lVar5 = lVar6;
          }
          if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
              (*(char *)((long)param_1 + 0x42b) == '\0')) ||
             (((*(char *)((long)param_1 + 0x42c) == '\0' ||
               (*(char *)((long)param_1 + 0x42d) == '\0')) &&
              ((((char)param_1[0x79] != '\0' && ((short)param_1[0x45] != 0)) ||
               ((*(byte *)(param_1[0xe] + (uVar2 & 0xffff)) >> 4 & 1) != 0)))))) {
            (*(code *)param_1[0x7f])
                      (param_1,param_1 + 9,uVar2,
                       lVar5 << ((ulong)(6 - *(ushort *)((long)param_1 + 0x262)) & 0x3f));
          }
        }
LAB_00e2db74:
        uVar8 = uVar8 + 1;
        if (uVar7 < uVar8) goto LAB_00e2db98;
      }
      if (*(char *)((long)param_1 + 0x3c9) == '\0') goto LAB_00e2db74;
      *(undefined4 *)(param_1 + 3) = 0x86;
      uVar8 = uVar8 + 1;
    } while (uVar8 <= uVar7);
  }
LAB_00e2db98:
  param_1[8] = param_1[7];
  return;
}

