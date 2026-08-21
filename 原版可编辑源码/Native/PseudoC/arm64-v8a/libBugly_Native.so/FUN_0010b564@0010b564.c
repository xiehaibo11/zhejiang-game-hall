
void FUN_0010b564(uint param_1,ulong param_2,long param_3,char *param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  void *__ptr;
  long lVar5;
  char *__s1;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  uint __c;
  char *pcVar10;
  byte *__src;
  ulong uVar11;
  ulong __n;
  long local_88;
  char *local_80;
  long local_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  log2Console(3,"eup","getCallFrameByAddress");
  if (param_4 == (char *)0x0) {
    uVar7 = 0;
    goto LAB_0010b99c;
  }
  local_78 = 0;
  local_70 = (char *)0x0;
  local_88 = 0;
  local_80 = (char *)0x0;
  __ptr = (void *)FUN_0010c02c(param_3,&local_70,&local_78,&local_80,&local_88);
  log2Console(3,"eup","searchIpInMaps pc: %p",param_3);
  if (localMapInfoList == 0) {
    log2Console(4,"eup","There is nothing is the map info list.");
    lVar8 = local_78;
LAB_0010b6ac:
    local_78 = lVar8;
    __s1 = local_70;
    if (local_70 != (char *)0x0) goto LAB_0010b7c0;
    bVar3 = true;
LAB_0010b870:
    puVar9 = &DAT_00126263;
    if ((param_2 & 1) == 0) {
      puVar9 = &DAT_00126266;
    }
    lVar8 = local_88;
    pcVar10 = local_80;
    if (local_80 == (char *)0x0) {
      if (!bVar3) goto LAB_0010b944;
      snprintf(param_4,0x400,"#%02d    %s %016lx    <unknown>",(ulong)param_1,puVar9,param_3);
    }
    else {
LAB_0010b890:
      snprintf(param_4,0x400,"#%02d    %s %016lx    %s (%s+%lu)",(ulong)param_1,puVar9,local_78,__s1
               ,pcVar10,lVar8);
      free(__ptr);
      if (!bVar3) goto LAB_0010b964;
    }
  }
  else {
    lVar5 = findModuleInMapInfoList(localMapInfoList,param_3);
    lVar8 = local_78;
    if (lVar5 == 0) goto LAB_0010b6ac;
    __s1 = (char *)(lVar5 + 0x43);
    log2Console(3,"eup","searchIpInMaps, Found the module: %s",__s1);
    iVar4 = strcmp(__s1,"<null>");
    if ((iVar4 == 0) && (*(char *)(lVar5 + 0x40) != '\0')) {
      log2Console(3,"eup","searchIpInMaps, UNKNOWN_MAP_MODULE_NAME");
      __src = *(byte **)(lVar5 + 8);
      __c = (uint)*__src;
      if (*__src == 0) goto LAB_0010b654;
      uVar11 = 0;
      do {
        iVar4 = isascii(__c);
        if (iVar4 == 0) {
          __n = uVar11;
          if ((int)uVar11 != 0) goto LAB_0010b724;
          goto LAB_0010b654;
        }
        __c = (uint)__src[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (__c != 0);
      __n = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) goto LAB_0010b654;
LAB_0010b724:
      __s1 = calloc(1,(ulong)((int)uVar11 + 1));
      memcpy(__s1,__src,__n);
      log2Console(3,"eup","searchIpInMaps, UNKNOWN_MAP_MODULE_NAME, found:%s",__s1);
      lVar8 = *(long *)(lVar5 + 0x28);
      if (lVar8 == 0) goto LAB_0010b764;
LAB_0010b65c:
      log2Console(3,"eup","searchIpInMaps pc:%p load_addr:%08x moduleOffset:%08x",param_3,lVar8,
                  param_3 - lVar8);
      lVar1 = param_3 - lVar8;
      lVar8 = local_78;
    }
    else {
LAB_0010b654:
      lVar8 = *(long *)(lVar5 + 0x28);
      if (lVar8 != 0) goto LAB_0010b65c;
LAB_0010b764:
      lVar1 = (*(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 8)) + param_3;
      log2Console(3,"eup","searchIpInMaps pc:%p start:%08x offset:%08x moduleOffset:%08x ",param_3,
                  *(long *)(lVar5 + 8),*(long *)(lVar5 + 0x18),lVar1);
      lVar8 = local_78;
    }
    local_78 = lVar1;
    if (__s1 == (char *)0x0) goto LAB_0010b6ac;
    local_70 = __s1;
    log2Console(3,"eup","getCallFrameByAddress use the maps moduleName:%s moduleOffset:%08x",__s1,
                local_78);
LAB_0010b7c0:
    log2Console(3,"eup","getCallFrameByAddress Got module name: %s for pc: %p",__s1,param_3);
    lVar5 = local_78;
    pcVar10 = local_80;
    lVar8 = local_88;
    if (local_80 != (char *)0x0) {
      log2Console(3,"eup","getCallFrameByAddress Got function name: %s with offset: %p",local_80,
                  local_88);
      bVar3 = false;
      puVar9 = &DAT_00126263;
      if ((param_2 & 1) == 0) {
        puVar9 = &DAT_00126266;
      }
      goto LAB_0010b890;
    }
    plVar6 = (long *)searchSymbolInElfFile(__s1,local_78);
    if (plVar6 != (long *)0x0) {
      local_80 = strdup((char *)plVar6[2]);
      bVar3 = false;
      local_88 = lVar5 - *plVar6;
      goto LAB_0010b870;
    }
    log2Console(3,"eup","getCallFrameByAddress Can not find function name for pc: %p",param_3);
    log2Console(3,"eup",
                "getCallFrameByAddress Function with offset %p may only be contained in debug so of: %s"
                ,lVar5,__s1);
    puVar9 = &DAT_00126263;
    if ((param_2 & 1) == 0) {
      puVar9 = &DAT_00126266;
    }
LAB_0010b944:
    snprintf(param_4,0x400,"#%02d    %s %016lx    %s",(ulong)param_1,puVar9,local_78,__s1);
LAB_0010b964:
    lVar8 = getElfInfoWithSymbolTable(__s1,1);
    if (lVar8 != 0) {
      snprintf(param_4,0x400,"%s [%s:%s:%s]",param_4,lVar8 + 0x88,lVar8 + 0x98,lVar8 + 0xa8);
    }
  }
  uVar7 = 1;
LAB_0010b99c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

