
undefined8 FUN_00a146c4(undefined8 param_1,uint *param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1462c with catch @ 00a146c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a14654 with catch @ 00a146c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1467c with catch @ 00a146c4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a145cc with catch @ 00a146c8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a145f8 with catch @ 00a146c8
                        */
  uVar2 = (uint)*param_3;
  if (((char)*param_3 < '\0') && (uVar2 < 0xa0)) {
    iVar1 = uVar2 - 0x80;
    puVar3 = &DAT_01302240;
  }
  else {
    if (0x25 < (uVar2 + 0x40 & 0xff)) goto LAB_00a1470c;
    iVar1 = uVar2 - 0xc0;
    puVar3 = &DAT_01302280;
  }
  uVar2 = (uint)*(ushort *)(puVar3 + (long)iVar1 * 2);
LAB_00a1470c:
  *param_2 = uVar2;
  return 1;
}

