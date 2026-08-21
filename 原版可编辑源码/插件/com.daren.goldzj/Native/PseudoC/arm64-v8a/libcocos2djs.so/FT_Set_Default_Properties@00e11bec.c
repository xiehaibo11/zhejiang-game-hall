
void FT_Set_Default_Properties(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte local_1fc [132];
  byte local_178 [132];
  byte local_f4 [148];
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)getenv("FREETYPE_PROPERTIES");
  if (pbVar3 != (byte *)0x0) {
    bVar1 = *pbVar3;
    if (bVar1 != 9) goto LAB_00e11c68;
    while( true ) {
      do {
        do {
          pbVar3 = pbVar3 + 1;
          bVar1 = *pbVar3;
        } while (bVar1 == 9);
LAB_00e11c68:
      } while (bVar1 == 0x20);
      if (bVar1 == 0) break;
      uVar5 = 0;
      while ((bVar1 != 0 && (bVar1 != 0x3a))) {
        local_f4[uVar5] = bVar1;
        if (0x7f < uVar5 + 1) {
          pbVar6 = pbVar3 + uVar5 + 1;
          local_f4[(int)uVar5 + 1] = 0;
          if (pbVar6 != pbVar3) goto LAB_00e11cc4;
          goto LAB_00e11d9c;
        }
        bVar1 = pbVar3[uVar5 + 1];
        uVar5 = uVar5 + 1;
      }
      pbVar6 = pbVar3 + uVar5;
      local_f4[uVar5 & 0xffffffff] = 0;
      if (pbVar6 == pbVar3) break;
LAB_00e11cc4:
      if (*pbVar6 != 0x3a) break;
      uVar5 = 0;
      do {
        bVar1 = pbVar6[uVar5 + 1];
        if ((bVar1 == 0) || (bVar1 == 0x3d)) break;
        local_178[uVar5] = bVar1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x80);
      pbVar6 = pbVar6 + uVar5 + 1;
      local_178[uVar5 & 0xffffffff] = 0;
      if ((uVar5 == 0) || (*pbVar6 != 0x3d)) break;
      uVar5 = 0;
      do {
        bVar1 = pbVar6[uVar5 + 1];
        if ((bVar1 < 0x21) && ((1L << ((ulong)bVar1 & 0x3f) & 0x100000201U) != 0)) break;
        local_1fc[uVar5] = bVar1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x80);
      pbVar3 = pbVar6 + uVar5 + 1;
      local_1fc[uVar5 & 0xffffffff] = 0;
      if (((0x20 < *pbVar3) || ((1L << ((ulong)*pbVar3 & 0x3f) & 0x100000201U) == 0)) ||
         (uVar5 == 0)) break;
      FUN_00e19884(param_1,local_f4,local_178,local_1fc);
    }
  }
LAB_00e11d9c:
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

