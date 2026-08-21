
void FT_Done_GlyphSlot(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105c328 with catch @ 0105c350
                        */
  if (param_1 != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 0x98);
    lVar2 = *plVar1;
                    /* try { // try from 0105c364 to 0115c4bb has its CatchHandler @ 0105c364
                       catch() { ... } // from try @ 0105c364 with catch @ 0105c364
                       catch() { ... } // from try @ 0105c4d8 with catch @ 0105c364 */
    if (lVar2 != 0) {
      lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 0x10);
      lVar4 = 0;
      do {
        lVar3 = lVar2;
        if (lVar3 == param_1) {
          if (lVar4 != 0) {
            plVar1 = (long *)(lVar4 + 0x10);
          }
          *plVar1 = *(long *)(param_1 + 0x10);
          if (*(code **)(param_1 + 0x28) != (code *)0x0) {
            (**(code **)(param_1 + 0x28))(param_1);
          }
          FUN_0105c1d8(param_1);
                    /* WARNING: Could not recover jumptable at 0x0105c3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x10))(lVar5,param_1);
          return;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        lVar4 = lVar3;
      } while (*(long *)(lVar3 + 0x10) != 0);
    }
  }
  return;
}

