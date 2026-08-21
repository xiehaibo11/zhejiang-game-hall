
undefined8 FT_Get_Name_Index(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  if (((param_1 != 0) && (param_2 != 0)) && (((uint)*(undefined8 *)(param_1 + 0x10) >> 9 & 1) != 0))
  {
    lVar4 = *(long *)(param_1 + 0xf0);
    lVar2 = *(long *)(lVar4 + 0x48);
    if (lVar2 != -2) {
      if (lVar2 == 0) {
        pcVar5 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
        if (pcVar5 == (code *)0x0) {
          lVar2 = 0;
        }
        else {
          lVar2 = (*pcVar5)(*(long **)(param_1 + 0xb0),"glyph-dict");
          lVar4 = *(long *)(param_1 + 0xf0);
        }
        lVar1 = lVar2;
        if (lVar2 == 0) {
          lVar1 = -2;
        }
        *(long *)(lVar4 + 0x48) = lVar1;
      }
      if ((lVar2 != 0) && (*(code **)(lVar2 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0105fa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar2 + 8))(param_1,param_2);
        return uVar3;
      }
    }
  }
  return 0;
}

