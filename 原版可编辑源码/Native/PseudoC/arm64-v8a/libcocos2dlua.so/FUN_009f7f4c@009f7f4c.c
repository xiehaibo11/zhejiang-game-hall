
undefined8 FUN_009f7f4c(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  long unaff_x22;
  long local_70 [3];
  long alStack_58 [3];
  ulong local_38;
  
  plVar7 = local_70;
  plVar3 = (long *)luaL_checkudata(param_1,1,"pb.Slice");
  lVar4 = lua_objlen(param_1,1);
  FUN_009fa638(param_1,lVar4 == 0x60,1,&DAT_012f5b84);
  iVar2 = lua_type(param_1,2);
  if (0 < iVar2) {
    uVar9 = plVar3[1] - plVar3[2];
    lVar5 = luaL_optinteger(param_1,2,1);
    lVar4 = lVar5;
    if ((lVar5 < 0) && (lVar4 = 0, (ulong)-lVar5 <= uVar9)) {
      lVar4 = uVar9 + lVar5 + 1;
    }
    uVar6 = luaL_optinteger(param_1,3,uVar9);
    uVar8 = uVar6;
    if (((long)uVar6 < 0) && (uVar8 = 0, -uVar6 <= uVar9)) {
      uVar8 = uVar9 + uVar6 + 1;
    }
    unaff_x21 = plVar3[2];
    if (lVar4 < 2) {
      lVar4 = 1;
    }
    if ((long)uVar8 <= (long)uVar9) {
      uVar9 = uVar8;
    }
    lVar5 = 0;
    if (lVar4 <= (long)uVar9) {
      lVar5 = (uVar9 - lVar4) + 1;
    }
    lVar4 = unaff_x21 + lVar4 + -1;
    unaff_x22 = lVar4 + lVar5;
    goto LAB_009f80c0;
  }
  lVar4 = *plVar3;
  lVar5 = FUN_009fb4dc(plVar3,&local_38);
  if (lVar5 == 0) {
LAB_009f8078:
    bVar1 = false;
    *plVar3 = lVar4;
  }
  else {
    unaff_x21 = *plVar3;
    if ((ulong)(plVar3[1] - unaff_x21) < local_38) goto LAB_009f8078;
    unaff_x22 = unaff_x21 + local_38;
    bVar1 = unaff_x22 != lVar4;
    *plVar3 = unaff_x22;
    lVar4 = unaff_x22;
  }
  FUN_009fa638(param_1,bVar1,1,"bytes wireformat expected at offset %d",
               ((int)lVar4 - (int)plVar3[2]) + 1);
  plVar7 = alStack_58;
  lVar4 = unaff_x21;
LAB_009f80c0:
  *plVar7 = lVar4;
  plVar7[1] = unaff_x22;
  plVar7[2] = unaff_x21;
  FUN_009fb3f4(param_1,plVar3);
  lua_settop(param_1,1);
  return 1;
}

