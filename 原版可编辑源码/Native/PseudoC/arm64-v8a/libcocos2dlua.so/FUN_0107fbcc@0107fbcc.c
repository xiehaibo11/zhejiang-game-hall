
undefined8 FUN_0107fbcc(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8);
  *param_2 = 0;
  param_2[1] = 0;
  if (((undefined1 *)param_1[2] != cff_cmap_encoding_class_rec) &&
     ((undefined1 *)param_1[2] != cff_cmap_unicode_class_rec)) {
    uVar1 = FT_Get_Module(uVar1,&DAT_0145cf10);
    puVar2 = (undefined8 *)ft_module_get_service(uVar1,"tt-cmaps");
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0107fc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)*puVar2)(param_1,param_2);
      return uVar1;
    }
  }
  return 0;
}

