
void FUN_009cf444(undefined8 param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  double dVar6;
  
  dVar6 = (double)lua_tonumber(param_1,param_4);
  if (*(int *)(param_2 + 0x530) == 1) {
    if (NAN(dVar6)) {
      uVar4 = *(uint *)((long)param_3 + 0xc);
      if ((int)((int)param_3[1] + ~uVar4) < 3) {
        strbuf_resize(param_3,uVar4 + 3);
        uVar4 = *(uint *)((long)param_3 + 0xc);
      }
      lVar5 = *param_3;
      iVar2 = 3;
      *(undefined1 *)((undefined2 *)(lVar5 + (int)uVar4) + 1) = 0x4e;
      *(undefined2 *)(lVar5 + (int)uVar4) = 0x614e;
      goto LAB_009cf680;
    }
    if (ABS(dVar6) == INFINITY) {
      uVar4 = *(uint *)((long)param_3 + 0xc);
      iVar2 = (int)param_3[1] + ~uVar4;
      if (0.0 <= dVar6) {
        if (iVar2 < 8) {
          strbuf_resize(param_3,uVar4 + 8);
          uVar4 = *(uint *)((long)param_3 + 0xc);
        }
        *(undefined8 *)(*param_3 + (long)(int)uVar4) = 0x7974696e69666e49;
        iVar2 = 8;
      }
      else {
        if (iVar2 < 9) {
          strbuf_resize(param_3,uVar4 + 9);
          uVar4 = *(uint *)((long)param_3 + 0xc);
        }
        builtin_strncpy((char *)(*param_3 + (long)(int)uVar4),"-Infinity",9);
        iVar2 = 9;
      }
      goto LAB_009cf680;
    }
  }
  else if (*(int *)(param_2 + 0x530) == 0) {
    if ((NAN(dVar6)) || (ABS(dVar6) == INFINITY)) {
      if (*(int *)(param_2 + 0x538) == 0) {
        strbuf_free(param_3);
      }
      uVar1 = lua_type(param_1,param_4);
      uVar3 = lua_typename(param_1,uVar1);
      luaL_error(param_1,&DAT_012f06de,uVar3,"must not be NaN or Infinity");
    }
  }
  else if ((NAN(dVar6)) || (ABS(dVar6) == INFINITY)) {
    uVar4 = *(uint *)((long)param_3 + 0xc);
    if ((int)((int)param_3[1] + ~uVar4) < 4) {
      strbuf_resize(param_3,uVar4 + 4);
      uVar4 = *(uint *)((long)param_3 + 0xc);
    }
    iVar2 = 4;
    *(undefined4 *)(*param_3 + (long)(int)uVar4) = 0x6c6c756e;
    goto LAB_009cf680;
  }
  uVar4 = *(uint *)((long)param_3 + 0xc);
  if ((int)((int)param_3[1] + ~uVar4) < 0x20) {
    strbuf_resize(param_3,uVar4 + 0x20);
    uVar4 = *(uint *)((long)param_3 + 0xc);
  }
  iVar2 = fpconv_g_fmt(dVar6,*param_3 + (long)(int)uVar4,*(undefined4 *)(param_2 + 0x534));
LAB_009cf680:
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) + iVar2;
  return;
}

