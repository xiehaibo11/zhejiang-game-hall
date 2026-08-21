
undefined8 FT_Get_Glyph_Name(long param_1,uint param_2,undefined1 *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  
  if (param_1 == 0) {
    uVar2 = 0x23;
  }
  else {
    uVar2 = 6;
    if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
      *param_3 = 0;
      if (*(long *)(param_1 + 0x20) <= (long)(ulong)param_2) {
        return 0x10;
      }
      if ((*(byte *)(param_1 + 0x11) >> 1 & 1) != 0) {
        plVar4 = (long *)(*(long *)(param_1 + 0xf0) + 0x50);
        puVar3 = (undefined8 *)*plVar4;
        if (puVar3 != (undefined8 *)0xfffffffffffffffe) {
          if (puVar3 == (undefined8 *)0x0) {
            pcVar5 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
            if (pcVar5 == (code *)0x0) {
              puVar3 = (undefined8 *)0x0;
            }
            else {
              puVar3 = (undefined8 *)(*pcVar5)(*(long **)(param_1 + 0xb0),"glyph-dict");
              plVar4 = (long *)(*(long *)(param_1 + 0xf0) + 0x50);
            }
            puVar1 = (undefined8 *)0xfffffffffffffffe;
            if (puVar3 != (undefined8 *)0x0) {
              puVar1 = puVar3;
            }
            *plVar4 = (long)puVar1;
          }
          if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e187b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (*(code *)*puVar3)(param_1,param_2,param_3,param_4);
            return uVar2;
          }
        }
      }
      return 6;
    }
  }
  return uVar2;
}

