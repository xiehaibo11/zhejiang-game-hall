
uint FUN_0109c78c(long param_1,uint *param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (uVar2 != 0) {
    uVar6 = *param_2;
    uVar9 = 0;
    if (param_3 != '\0') {
      uVar6 = uVar6 + 1;
    }
    uVar7 = (ulong)uVar2;
    do {
      while( true ) {
        uVar3 = uVar9 + (uint)uVar7 >> 1;
        uVar8 = (ulong)uVar3;
        puVar1 = (uint *)(*(long *)(param_1 + 0x18) + 0x10 + (ulong)(uVar3 * 0xc));
        uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
        uVar5 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if (uVar6 < (uVar4 >> 0x10 | uVar4 << 0x10)) break;
        if (uVar6 <= uVar5) {
          uVar9 = (puVar1[2] & 0xff00ff00) >> 8 | (puVar1[2] & 0xff00ff) << 8;
          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
          goto joined_r0x0109c868;
        }
        uVar9 = uVar3 + 1;
        if ((uint)uVar7 <= uVar9) goto LAB_0109c814;
      }
      uVar7 = uVar8;
    } while (uVar9 < uVar3);
LAB_0109c814:
    uVar9 = 0;
joined_r0x0109c868:
    if (param_3 == '\0') {
      return uVar9;
    }
    if ((uVar6 <= uVar5) || (uVar8 = (ulong)(uVar3 + 1), uVar3 + 1 != uVar2)) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(ulong *)(param_1 + 0x30) = (ulong)uVar6;
      *(ulong *)(param_1 + 0x40) = uVar8;
      if (uVar9 == 0) {
        FUN_0109c8a0(param_1);
        if (*(char *)(param_1 + 0x28) == '\0') {
          return 0;
        }
        uVar9 = *(uint *)(param_1 + 0x38);
        if (uVar9 == 0) {
          return 0;
        }
        uVar6 = (uint)*(undefined8 *)(param_1 + 0x30);
      }
      else {
        *(uint *)(param_1 + 0x38) = uVar9;
      }
      *param_2 = uVar6;
      return uVar9;
    }
  }
  return 0;
}

