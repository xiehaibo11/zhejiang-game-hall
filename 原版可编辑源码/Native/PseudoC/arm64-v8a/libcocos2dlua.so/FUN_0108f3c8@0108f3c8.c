
undefined8 FUN_0108f3c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  
                    /* try { // try from 0108f3d0 to 0118f3df has its CatchHandler @ 0108f514 */
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 800);
  if (*(long *)(*(long *)(param_1 + 8) + 0x98) == 0) {
    uVar1 = 0;
                    /* try { // try from 0108f404 to 0118f417 has its CatchHandler @ 0108f510 */
    puVar3 = (undefined8 *)(lVar2 + 0x98);
  }
  else {
    puVar3 = &local_28;
    uVar1 = FT_New_GlyphSlot(lVar2,&local_28);
  }
  *(undefined8 *)(param_1 + 0x130) = *puVar3;
  return uVar1;
}

