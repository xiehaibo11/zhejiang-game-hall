
undefined8 FUN_00135348(long *param_1,ulong param_2,long param_3,long param_4)

{
  long __offset;
  ulong uVar1;
  int iVar2;
  __off64_t _Var3;
  undefined8 uVar4;
  FILE *__stream;
  long lVar5;
  
  uVar1 = param_4 - param_3;
  if (uVar1 == 0) {
LAB_00135428:
    uVar4 = 1;
  }
  else {
    lVar5 = *param_1;
    if ((*(ulong *)(lVar5 + 8) < uVar1) || (*(ulong *)(lVar5 + 8) - uVar1 < param_2))
    goto LAB_00135430;
    __offset = *(long *)(lVar5 + 0x30) + param_2;
    if (*(long *)(lVar5 + 0x28) == __offset) {
LAB_00135404:
      uVar4 = FUN_00134f28(*(undefined8 *)(lVar5 + 0x20),param_3,param_3 + uVar1);
      if ((int)uVar4 != 0) {
        *(ulong *)(lVar5 + 0x28) = uVar1 + param_2 + *(long *)(lVar5 + 0x30);
        goto LAB_00135428;
      }
    }
    else {
      __stream = *(FILE **)(lVar5 + 0x20);
      if (__offset != (int)__offset) {
        iVar2 = feof(__stream);
        if (iVar2 != 0) {
          rewind(__stream);
        }
        setbuf(__stream,(char *)0x0);
        iVar2 = fileno(__stream);
        if ((iVar2 < 0) || (_Var3 = lseek64(iVar2,__offset,0), _Var3 < 0)) goto LAB_00135430;
        goto LAB_00135404;
      }
      iVar2 = fseek(__stream,__offset,0);
      if (iVar2 == 0) goto LAB_00135404;
LAB_00135430:
      uVar4 = 0;
    }
    *(undefined4 *)(lVar5 + 0x38) = 1;
    *(undefined8 *)(lVar5 + 0x28) = 0xffffffffffffffff;
  }
  return uVar4;
}

