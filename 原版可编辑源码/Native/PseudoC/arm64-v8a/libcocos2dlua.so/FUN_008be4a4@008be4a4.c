
void FUN_008be4a4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  size_t __n;
  char *__dest;
  long *****ppppplVar5;
  undefined8 uVar6;
  char *extraout_x1;
  char *extraout_x1_00;
  long ***ppplVar7;
  size_t sVar8;
  long ****pppplVar9;
  long *****ppppplVar10;
  uint uVar11;
  uint uVar12;
  LuaValue aLStack_98 [24];
  long ****local_80;
  long ****local_78;
  long local_70;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isnoobj(param_1,1,auStack_68);
  if (iVar3 == 0) {
    tolua_error(param_1,"#ferror in function \'glGetSupportedExtensions\'.",auStack_68);
    uVar6 = 0;
  }
  else {
    pcVar4 = (char *)glGetString(0x1f03);
    __n = strlen(pcVar4);
    uVar1 = __n + 1;
    __dest = operator_new__(uVar1,(nothrow_t *)&std::nothrow);
    strncpy(__dest,pcVar4,__n);
    local_70 = 0;
    local_80 = (long ****)&local_80;
    local_78 = (long ****)&local_80;
    if (uVar1 != 0) {
      sVar8 = 0;
      uVar12 = 0;
      uVar11 = 0;
      pcVar4 = extraout_x1;
      do {
        if (((__dest[sVar8] == ' ') || (__dest[sVar8] == ',')) || (__n == sVar8)) {
          __dest[sVar8] = '\0';
          cocos2d::LuaValue::stringValue((LuaValue *)(__dest + (int)uVar11),pcVar4);
          ppppplVar5 = operator_new(0x28);
          *ppppplVar5 = (long ****)0x0;
          cocos2d::LuaValue::LuaValue((LuaValue *)(ppppplVar5 + 2),aLStack_98);
          *ppppplVar5 = local_80;
          ppppplVar5[1] = (long ****)&local_80;
          local_80[1] = (long ***)ppppplVar5;
          uVar12 = uVar12 + 1;
          local_70 = local_70 + 1;
          local_80 = (long ****)ppppplVar5;
          cocos2d::LuaValue::~LuaValue(aLStack_98);
          pcVar4 = extraout_x1_00;
          uVar11 = uVar12;
        }
        uVar12 = uVar12 + 1;
        sVar8 = (size_t)uVar12;
      } while (sVar8 < uVar1);
    }
    lua_createtable(param_1,0,0);
    if (&local_80 != (long *****)local_78) {
      iVar3 = 1;
      ppppplVar5 = (long *****)local_78;
      do {
        pppplVar9 = ppppplVar5[2];
        if (((ulong)*pppplVar9 & 1) == 0) {
          ppplVar7 = (long ***)((long)pppplVar9 + 1);
        }
        else {
          ppplVar7 = pppplVar9[2];
        }
        lua_pushstring(param_1,ppplVar7);
        lua_rawseti(param_1,0xfffffffe,iVar3);
        ppppplVar5 = (long *****)ppppplVar5[1];
        iVar3 = iVar3 + 1;
      } while (&local_80 != ppppplVar5);
    }
    if (__dest != (char *)0x0) {
      operator_delete__(__dest);
    }
    if (local_70 != 0) {
      pppplVar9 = (long ****)*local_78;
      pppplVar9[1] = local_80[1];
      *local_80[1] = (long **)pppplVar9;
      local_70 = 0;
      ppppplVar5 = (long *****)local_78;
      while (ppppplVar5 != &local_80) {
        ppppplVar10 = (long *****)ppppplVar5[1];
        cocos2d::LuaValue::~LuaValue((LuaValue *)(ppppplVar5 + 2));
        operator_delete(ppppplVar5);
        ppppplVar5 = ppppplVar10;
      }
    }
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

