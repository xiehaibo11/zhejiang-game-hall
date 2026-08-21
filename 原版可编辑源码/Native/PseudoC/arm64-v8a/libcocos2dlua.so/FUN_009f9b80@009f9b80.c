
ulong FUN_009f9b80(undefined8 param_1,undefined4 param_2,uint *param_3)

{
  char *pcVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  
  dVar11 = (double)lua_tonumber();
  if (param_3 == (uint *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x9f9d38);
    (*pcVar4)();
  }
  if (dVar11 == 0.0) {
    iVar5 = lua_type(param_1,param_2);
    *param_3 = (uint)(iVar5 == 3);
    if (iVar5 != 3) {
      pcVar7 = (char *)lua_tolstring(param_1,param_2,0);
      if (pcVar7 == (char *)0x0) {
        return 0;
      }
      bVar3 = false;
      pcVar8 = pcVar7;
LAB_009f9c5c:
      switch(*pcVar8) {
      case '\0':
switchD_009f9c74_caseD_0:
        uVar9 = 0;
        break;
      case '#':
      case '+':
      case '-':
        goto switchD_009f9c74_caseD_23;
      case '0':
                    /* try { // try from 009f9c94 to 00af9c9b has its CatchHandler @ 009f9d90 */
        if ((byte)(pcVar8[1] | 0x20U) == 0x78) {
                    /* try { // try from 009f9c9c to 00af9cbf has its CatchHandler @ 009f9c2c */
          if (pcVar8[2] != '\0') {
            uVar9 = 0;
            lVar10 = 3;
            goto LAB_009f9cac;
          }
          goto switchD_009f9c74_caseD_0;
        }
      default:
        uVar9 = 0;
        lVar10 = 1;
        goto LAB_009f9cdc;
      }
      goto LAB_009f9d20;
    }
  }
  else {
    *param_3 = 1;
  }
  if ((dVar11 < -9.223372036854776e+18) || (9.223372036854776e+18 < dVar11)) {
    luaL_error(param_1,"number has no integer representation");
  }
  return (long)dVar11;
  while( true ) {
    pcVar1 = pcVar8 + lVar10;
                    /* try { // try from 009f9cc0 to 00af9ccb has its CatchHandler @ 009f9d90 */
    uVar9 = (long)iVar5 | uVar9 << 4;
    lVar10 = lVar10 + 1;
    if (*pcVar1 == '\0') break;
LAB_009f9cac:
    iVar5 = FUN_009f9d38();
    if (iVar5 < 0) goto LAB_009f9d0c;
  }
  goto LAB_009f9d20;
switchD_009f9c74_caseD_23:
  bVar3 = (bool)(bVar3 ^ *pcVar8 == '-');
  pcVar8 = pcVar8 + 1;
  goto LAB_009f9c5c;
LAB_009f9d0c:
                    /* try { // try from 009f9d1c to 00af9d23 has its CatchHandler @ 009f9d8c */
  luaL_error(param_1,"integer format error: \'%s\'",pcVar7);
  goto LAB_009f9d20;
  while( true ) {
    pcVar1 = pcVar8 + lVar10;
                    /* try { // try from 009f9cf4 to 00af9cfb has its CatchHandler @ 009f9d8c */
    uVar9 = uVar9 * 10 + (long)(int)uVar6;
    lVar10 = lVar10 + 1;
                    /* try { // try from 009f9cfc to 00af9d1b has its CatchHandler @ 009f9c2c */
    if (*pcVar1 == '\0') break;
LAB_009f9cdc:
    uVar6 = FUN_009f9d38();
    if (10 < uVar6) goto LAB_009f9d0c;
  }
LAB_009f9d20:
                    /* try { // try from 009f9d24 to 00af9d43 has its CatchHandler @ 009f9c2c */
  uVar2 = -uVar9;
  if (!bVar3) {
    uVar2 = uVar9;
  }
  *param_3 = 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f9c9c with catch @ 009f9c2c
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9ccc with catch @ 009f9c2c
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9cfc with catch @ 009f9c2c
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9d24 with catch @ 009f9c2c
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9d50 with catch @ 009f9c2c
                        */
  return uVar2;
}

