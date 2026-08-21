
uint * _TIFFFindOrRegisterField(long *param_1,uint param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  uint *puVar3;
  ulong *local_68;
  ulong local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_68 = &local_60;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  puVar3 = (uint *)param_1[0x80];
  if (((puVar3 == (uint *)0x0) || (*puVar3 != param_2)) ||
     ((param_3 != 0 && (puVar3[2] != param_3)))) {
    plVar2 = param_1;
    if ((void *)param_1[0x7e] != (void *)0x0) {
      local_60 = (ulong)param_2;
      uStack_58 = (ulong)param_3;
      plVar2 = bsearch(&local_68,(void *)param_1[0x7e],param_1[0x7f],8,FUN_00db66a4);
      if (plVar2 == (long *)0x0) {
        param_1[0x80] = 0;
      }
      else {
        puVar3 = (uint *)*plVar2;
        param_1[0x80] = (long)puVar3;
        if (puVar3 != (uint *)0x0) {
          return puVar3;
        }
      }
    }
    puVar3 = (uint *)_TIFFCreateAnonField(plVar2,param_2,param_3);
    iVar1 = _TIFFMergeFields(param_1,puVar3,1);
    if (iVar1 == 0) {
      puVar3 = (uint *)0x0;
    }
  }
  return puVar3;
}

