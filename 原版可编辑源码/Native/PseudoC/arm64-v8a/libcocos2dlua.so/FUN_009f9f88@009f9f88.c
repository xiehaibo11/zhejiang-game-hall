
int FUN_009f9f88(undefined8 param_1,int param_2,long *param_3,long *param_4,int param_5)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  char cVar13;
  byte bVar14;
  char *pcVar15;
  char *pcVar16;
  size_t __n;
  long lVar17;
  undefined *puVar18;
  ulong __n_00;
  undefined1 auVar19 [16];
  char *local_78;
  int local_6c;
  long local_68;
  
                    /* try { // try from 009f9fa0 to 00af9fab has its CatchHandler @ 009f9fe8 */
  lVar1 = tpidr_el0;
                    /* try { // try from 009f9fac to 00af9fef has its CatchHandler @ 009f9e88 */
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar15 = (char *)*param_4;
  local_78 = pcVar15;
  FUN_009fa638(param_1,param_5 < 0x65,1,"format level overflow");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f9f50 with catch @ 009f9fe8
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9f78 with catch @ 009f9fe8
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9fa0 with catch @ 009f9fe8
                        */
  cVar13 = *pcVar15;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f9ef0 with catch @ 009f9fec
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9f1c with catch @ 009f9fec
                        */
  if (cVar13 != '\0') {
                    /* try { // try from 009f9ff0 to 00afa0bb has its CatchHandler @ 009f9ff0
                       catch() { ... } // from try @ 009f9ff0 with catch @ 009f9ff0
                       catch() { ... } // from try @ 009fa0e4 with catch @ 009f9ff0 */
    pcVar16 = pcVar15;
    do {
      iVar4 = (int)cVar13;
      if (iVar4 < 99) {
        if (iVar4 == 0x23) {
          uVar10 = FUN_009f9b80(param_1,param_2,&local_6c);
          if (local_6c == 0) {
            uVar5 = lua_type(param_1,param_2);
            uVar11 = lua_typename(param_1,uVar5);
                    /* catch() { ... } // from try @ 009fa3bc with catch @ 009fa434 */
            lua_pushfstring(param_1,"%s expected, got %s","number/string",uVar11);
            uVar11 = lua_tolstring(param_1,0xffffffff,0);
            luaL_argerror(param_1,param_2,uVar11);
          }
          FUN_009fa700(param_1,param_3,uVar10);
          goto LAB_009fa00c;
        }
        if (iVar4 == 0x28) {
          lVar17 = *param_3;
          local_78 = pcVar16 + 1;
          param_2 = FUN_009f9f88(param_1,param_2,param_3,&local_78,param_5 + 1);
          FUN_009fa700(param_1,param_3,lVar17);
          pcVar16 = local_78;
                    /* catch() { ... } // from try @ 009fa0bc with catch @ 009fa130 */
          goto LAB_009fa010;
        }
        if (iVar4 != 0x29) goto switchD_009fa048_caseD_65;
        if (param_5 == 0) {
          luaL_argerror(param_1,1,"unexpected \')\' in format");
        }
        goto LAB_009fa5fc;
      }
      switch(iVar4) {
      case 99:
        auVar19 = FUN_009f9e20(param_1,param_2);
        pvVar8 = auVar19._0_8_;
        if (pvVar8 == (void *)0x0) {
          uVar5 = lua_type(param_1,param_2);
          uVar10 = lua_typename(param_1,uVar5);
          lua_pushfstring(param_1,"%s expected, got %s","string/buffer/slice",uVar10);
          uVar10 = lua_tolstring(param_1,0xffffffff,0);
          luaL_argerror(param_1,param_2,uVar10);
        }
                    /* try { // try from 009fa0bc to 00afa0e3 has its CatchHandler @ 009fa130 */
        __n = auVar19._8_8_ - (long)pvVar8;
        pvVar12 = (void *)FUN_009f9d60(param_3,__n);
        if (pvVar12 != (void *)0x0) {
          memcpy(pvVar12,pvVar8,__n);
          lVar17 = *param_3 + __n;
                    /* try { // try from 009fa0e4 to 00afa14b has its CatchHandler @ 009f9ff0 */
LAB_009fa008:
          *param_3 = lVar17;
        }
        break;
      case 100:
        uVar5 = FUN_009f9b80(param_1,param_2,&local_6c);
        if (local_6c == 0) {
          uVar2 = lua_type(param_1,param_2);
          uVar10 = lua_typename(param_1,uVar2);
          lua_pushfstring(param_1,"%s expected, got %s","number/string",uVar10);
          uVar10 = lua_tolstring(param_1,0xffffffff,0);
          luaL_argerror(param_1,param_2,uVar10);
        }
        puVar6 = (undefined1 *)FUN_009f9d60(param_3,4);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = (char)uVar5;
          puVar6[1] = (char)((uint)uVar5 >> 8);
          puVar6[2] = (char)((uint)uVar5 >> 0x10);
          puVar6[3] = (char)((uint)uVar5 >> 0x18);
          lVar17 = *param_3 + 4;
LAB_009fa5b4:
          *param_3 = lVar17;
        }
        goto LAB_009fa5b8;
      default:
switchD_009fa048_caseD_65:
        uVar3 = FUN_009fa908(pcVar16);
        FUN_009fa638(param_1,~uVar3 >> 0x1f,1,"invalid formater: \'%c\'",iVar4);
        iVar4 = FUN_009fa99c(param_1,param_3,param_2,uVar3,0);
        uVar10 = lua_typename(param_1,iVar4);
        puVar18 = &DAT_012f5b1a;
        if (uVar3 - 1 < 0x12) {
          puVar18 = (&PTR_s_double_014a84ad_5_016a1e80)[(int)(uVar3 - 1)];
        }
        uVar5 = lua_type(param_1,param_2);
        uVar11 = lua_typename(param_1,uVar5);
        FUN_009fa638(param_1,iVar4 == 0,param_2,"%s expected for type \'%s\', got %s",uVar10,puVar18
                     ,uVar11);
        param_2 = param_2 + 1;
        goto LAB_009fa010;
      case 0x71:
        uVar10 = FUN_009f9b80(param_1,param_2,&local_6c);
        if (local_6c == 0) {
          uVar5 = lua_type(param_1,param_2);
          uVar11 = lua_typename(param_1,uVar5);
          lua_pushfstring(param_1,"%s expected, got %s","number/string",uVar11);
          uVar11 = lua_tolstring(param_1,0xffffffff,0);
          luaL_argerror(param_1,param_2,uVar11);
        }
        puVar7 = (undefined8 *)FUN_009f9d60(param_3,8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = uVar10;
          lVar17 = *param_3 + 8;
          goto LAB_009fa008;
        }
        break;
      case 0x73:
        auVar19 = FUN_009f9e20(param_1,param_2);
        pvVar8 = auVar19._0_8_;
        if (pvVar8 == (void *)0x0) {
          uVar5 = lua_type(param_1,param_2);
          uVar10 = lua_typename(param_1,uVar5);
          lua_pushfstring(param_1,"%s expected, got %s","string/buffer/slice",uVar10);
                    /* try { // try from 009fa36c to 00afa3bb has its CatchHandler @ 009fa36c
                       catch() { ... } // from try @ 009fa36c with catch @ 009fa36c
                       catch() { ... } // from try @ 009fa3e0 with catch @ 009fa36c */
          uVar10 = lua_tolstring(param_1,0xffffffff,0);
          luaL_argerror(param_1,param_2,uVar10);
        }
        __n_00 = auVar19._8_8_ - (long)pvVar8;
        lVar17 = FUN_009f9d60(param_3,__n_00 + 5);
        if (lVar17 != 0) {
          pbVar9 = (byte *)FUN_009f9d60(param_3,5);
          if (pbVar9 != (byte *)0x0) {
            uVar3 = (uint)__n_00;
            if ((__n_00 >> 7 & 0x1ffffff) == 0) {
              bVar14 = (byte)__n_00 & 0x7f;
              lVar17 = 1;
            }
            else {
              *pbVar9 = (byte)__n_00 | 0x80;
                    /* try { // try from 009fa3bc to 00afa3df has its CatchHandler @ 009fa434 */
              if (uVar3 >> 0xe == 0) {
                bVar14 = (byte)(uVar3 >> 7) & 0x7f;
                lVar17 = 2;
                pbVar9 = pbVar9 + 1;
              }
              else {
                pbVar9[1] = (byte)(__n_00 >> 7) | 0x80;
                if (uVar3 >> 0x15 == 0) {
                  bVar14 = (byte)(uVar3 >> 0xe) & 0x7f;
                  lVar17 = 3;
                  pbVar9 = pbVar9 + 2;
                }
                else {
                  bVar14 = (byte)(__n_00 >> 0x18) >> 4;
                  pbVar9[2] = (byte)(uVar3 >> 0xe) | 0x80;
                  if (uVar3 >> 0x1c == 0) {
                    bVar14 = (byte)(uVar3 >> 0x15) & 0x7f;
                    lVar17 = 4;
                    pbVar9 = pbVar9 + 3;
                  }
                  else {
                    /* try { // try from 009fa3e0 to 00afa447 has its CatchHandler @ 009fa36c */
                    pbVar9[3] = (byte)(uVar3 >> 0x15) | 0x80;
                    lVar17 = 5;
                    pbVar9 = pbVar9 + 4;
                  }
                }
              }
            }
            *pbVar9 = bVar14;
            *param_3 = *param_3 + lVar17;
          }
          pvVar12 = (void *)FUN_009f9d60(param_3,__n_00);
          if (pvVar12 != (void *)0x0) {
            memcpy(pvVar12,pvVar8,__n_00);
            lVar17 = *param_3 + __n_00;
            goto LAB_009fa5b4;
          }
        }
LAB_009fa5b8:
        param_2 = param_2 + 1;
        goto LAB_009fa010;
      case 0x76:
        uVar10 = FUN_009f9b80(param_1,param_2,&local_6c);
        if (local_6c == 0) {
          uVar5 = lua_type(param_1,param_2);
          uVar11 = lua_typename(param_1,uVar5);
          lua_pushfstring(param_1,"%s expected, got %s","number/string",uVar11);
          uVar11 = lua_tolstring(param_1,0xffffffff,0);
          luaL_argerror(param_1,param_2,uVar11);
        }
        lVar17 = FUN_009f9d60(param_3,10);
        if (lVar17 != 0) {
          iVar4 = FUN_009fb0c8(lVar17,uVar10);
          lVar17 = *param_3 + (long)iVar4;
          goto LAB_009fa008;
        }
      }
LAB_009fa00c:
      param_2 = param_2 + 1;
LAB_009fa010:
      pcVar15 = pcVar16 + 1;
      cVar13 = pcVar16[1];
      pcVar16 = pcVar15;
      local_78 = pcVar15;
    } while (cVar13 != '\0');
  }
  pcVar16 = pcVar15;
  if (param_5 != 0) {
    luaL_argerror(param_1,2,"unmatch \'(\' in format");
  }
LAB_009fa5fc:
  *param_4 = (long)pcVar16;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009fa634 to 00afa683 has its CatchHandler @ 009fa634
                       catch() { ... } // from try @ 009fa634 with catch @ 009fa634
                       catch() { ... } // from try @ 009fa6a8 with catch @ 009fa634 */
  __stack_chk_fail();
}

