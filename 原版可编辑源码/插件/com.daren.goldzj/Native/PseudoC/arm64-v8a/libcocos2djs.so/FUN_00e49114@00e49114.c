
undefined8 FUN_00e49114(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FT_Get_Module(*(undefined8 *)(param_1 + 8),"truetype");
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = *puVar1;
    return 0;
  }
  return 0xb;
}

