
undefined8 FT_Render_Glyph(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      uVar1 = FUN_00e18cc4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 8),param_1,
                           param_2);
      return uVar1;
    }
  }
  return 6;
}

