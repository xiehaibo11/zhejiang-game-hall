
undefined8 FUN_00dbae00(undefined8 param_1,undefined2 *param_2,uint param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *__dest;
  char *pcVar4;
  ulong uVar5;
  void *local_48;
  
  iVar1 = FUN_00dbc6b0(param_1,param_2,&local_48);
  if (iVar1 == 0) {
    uVar5 = (ulong)param_3;
    if (*(ulong *)(param_2 + 4) != uVar5) {
      __dest = (void *)_TIFFCheckMalloc(param_1,uVar5,8,"for strip array");
      if (__dest == (void *)0x0) {
        _TIFFfree(local_48);
        return 0;
      }
      if (*(ulong *)(param_2 + 4) < uVar5) {
        _TIFFmemcpy(__dest,local_48,(*(ulong *)(param_2 + 4) & 0xffffffff) << 3);
        _TIFFmemset((void *)((long)__dest + (*(ulong *)(param_2 + 4) & 0xffffffff) * 8),0,
                    (ulong)(param_3 - (int)*(ulong *)(param_2 + 4)) << 3);
      }
      else {
        _TIFFmemcpy(__dest,local_48,uVar5 << 3);
      }
      _TIFFfree(local_48);
      local_48 = __dest;
    }
    uVar3 = 1;
    *param_4 = local_48;
  }
  else {
    lVar2 = TIFFFieldWithTag(param_1,*param_2);
    if (lVar2 == 0) {
      pcVar4 = "unknown tagname";
    }
    else {
      pcVar4 = *(char **)(lVar2 + 0x20);
    }
    FUN_00dba884(param_1,iVar1,"TIFFFetchStripThing",pcVar4,0);
    uVar3 = 0;
  }
  return uVar3;
}

