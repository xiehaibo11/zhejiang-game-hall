
undefined8 FUN_00dbbafc(long param_1,long param_2,int *param_3,uint param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  ulong uVar4;
  void *__src;
  uint uVar5;
  ulong uVar6;
  ulong local_58;
  uint local_44;
  
  iVar3 = TIFFDataWidth(*(undefined2 *)(param_2 + 2));
  if ((iVar3 == 0) || (uVar6 = *(ulong *)(param_2 + 8), uVar6 == 0)) {
    *param_5 = 0;
    return 0;
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = 0x7fffffff / iVar3;
  }
  if ((ulong)(long)iVar2 < uVar6) {
    return 6;
  }
  uVar5 = 0;
  if (param_4 != 0) {
    uVar5 = 0x7fffffff / param_4;
  }
  if (uVar5 < uVar6) {
    return 6;
  }
  *param_3 = (int)uVar6;
  __ptr = (void *)_TIFFCheckMalloc(param_1,uVar6 & 0xffffffff,(long)iVar3,"ReadDirEntryArray");
  if (__ptr == (void *)0x0) {
    return 7;
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar1 = iVar3 * (int)uVar6;
  if ((uVar5 >> 0x13 & 1) == 0) {
    if (4 < uVar1) {
      local_44 = *(uint *)(param_2 + 0x10);
      if ((uVar5 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_44);
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar6 = (ulong)local_44;
      if ((uVar5 >> 0xb & 1) == 0) {
LAB_00dbbc54:
        uVar4 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar6,0);
        if ((uVar4 != uVar6) ||
           (uVar6 = (**(code **)(param_1 + 0x3c0))
                              (*(undefined8 *)(param_1 + 0x3b8),__ptr,(ulong)uVar1), uVar6 != uVar1)
           ) {
LAB_00dbbcac:
          _TIFFfree(__ptr);
          return 3;
        }
        goto LAB_00dbbc24;
      }
      if (*(ulong *)(param_1 + 0x3a0) < uVar6 + uVar1) goto LAB_00dbbcac;
      goto LAB_00dbbcbc;
    }
LAB_00dbbc14:
    __src = (void *)(param_2 + 0x10);
  }
  else {
    if (uVar1 < 9) goto LAB_00dbbc14;
    local_58 = *(ulong *)(param_2 + 0x10);
    if ((uVar5 >> 7 & 1) != 0) {
      TIFFSwabLong8(&local_58);
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    uVar4 = (ulong)uVar1;
    uVar6 = local_58;
    if ((uVar5 >> 0xb & 1) == 0) goto LAB_00dbbc54;
    if (((CARRY8(local_58,uVar4)) || (local_58 + uVar4 < uVar4)) ||
       (*(ulong *)(param_1 + 0x3a0) < local_58 + uVar4)) goto LAB_00dbbcac;
LAB_00dbbcbc:
    __src = (void *)(*(long *)(param_1 + 0x398) + uVar6);
  }
  _TIFFmemcpy(__ptr,__src,(ulong)uVar1);
LAB_00dbbc24:
  *param_5 = __ptr;
  return 0;
}

