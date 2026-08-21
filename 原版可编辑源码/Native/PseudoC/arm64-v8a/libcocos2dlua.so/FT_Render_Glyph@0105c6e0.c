
undefined8 FT_Render_Glyph(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    uVar1 = FT_Render_Glyph_Internal
                      (*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 8),param_1,param_2
                      );
    return uVar1;
  }
                    /* catch() { ... } // from try @ 0105c664 with catch @ 0105c708 */
  return 6;
}

