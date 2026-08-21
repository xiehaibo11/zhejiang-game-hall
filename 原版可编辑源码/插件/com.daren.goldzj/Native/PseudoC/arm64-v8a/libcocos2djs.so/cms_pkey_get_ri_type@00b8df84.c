
undefined4 cms_pkey_get_ri_type(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_14;
  
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (pcVar2 = *(code **)(*(long *)(param_1 + 0x10) + 0xb0), pcVar2 == (code *)0x0)) ||
     (iVar1 = (*pcVar2)(param_1,8,0,&local_14), iVar1 < 1)) {
    local_14 = 0;
  }
  return local_14;
}

