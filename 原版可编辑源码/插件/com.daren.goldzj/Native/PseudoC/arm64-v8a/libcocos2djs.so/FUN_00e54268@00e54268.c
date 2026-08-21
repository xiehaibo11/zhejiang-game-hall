
uint FUN_00e54268(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  uVar6 = *(uint *)(param_1[3] + 0x200c);
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  if (uVar6 != 0) {
    puVar7 = (uint *)(param_1[3] + 0x2010);
    uVar5 = *param_2 + 1;
    do {
      uVar8 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
      uVar1 = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar8 = (puVar7[1] & 0xff00ff00) >> 8 | (puVar7[1] & 0xff00ff) << 8;
      uVar2 = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar8 = uVar1;
      if (uVar1 <= uVar5) {
        uVar8 = uVar5;
      }
      uVar5 = uVar8;
      if (uVar8 <= uVar2) {
        uVar8 = (uVar1 - 1) - uVar8;
        uVar3 = (puVar7[2] & 0xff00ff00) >> 8 | (puVar7[2] & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        iVar4 = uVar3 - uVar1;
        do {
          if (uVar8 < uVar3) break;
          if (iVar4 + uVar5 != 0) {
            uVar8 = iVar4 + uVar5;
            if (uVar8 < *(uint *)(*param_1 + 0x20)) goto LAB_00e54314;
            break;
          }
          if (uVar5 == 0xffffffff) goto LAB_00e5430c;
          uVar5 = uVar5 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar5 <= uVar2);
      }
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 3;
    } while (uVar6 != 0);
  }
LAB_00e5430c:
  uVar8 = 0;
  uVar5 = 0;
LAB_00e54314:
  *param_2 = uVar5;
  return uVar8;
}

