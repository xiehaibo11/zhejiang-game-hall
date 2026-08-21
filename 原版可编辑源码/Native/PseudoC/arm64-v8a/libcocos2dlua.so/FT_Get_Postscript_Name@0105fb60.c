
undefined8 FT_Get_Postscript_Name(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0xf0);
    puVar2 = *(undefined8 **)(lVar4 + 0x38);
    if (puVar2 != (undefined8 *)0xfffffffffffffffe) {
      if (puVar2 == (undefined8 *)0x0) {
        pcVar5 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
        if (pcVar5 == (code *)0x0) {
          puVar2 = (undefined8 *)0x0;
        }
        else {
          puVar2 = (undefined8 *)(*pcVar5)(*(long **)(param_1 + 0xb0),"postscript-font-name");
          lVar4 = *(long *)(param_1 + 0xf0);
        }
        puVar1 = puVar2;
        if (puVar2 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)0xfffffffffffffffe;
        }
        *(undefined8 **)(lVar4 + 0x38) = puVar1;
      }
      if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0105fbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)*puVar2)(param_1);
        return uVar3;
      }
    }
  }
  return 0;
}

