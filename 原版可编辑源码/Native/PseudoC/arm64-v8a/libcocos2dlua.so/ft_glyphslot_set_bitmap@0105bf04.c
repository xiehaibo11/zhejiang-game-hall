
void ft_glyphslot_set_bitmap(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  
                    /* try { // try from 0105bf14 to 0115bf23 has its CatchHandler @ 0105bf3c */
  lVar1 = *(long *)(param_1 + 0x128);
  if ((lVar1 == 0) || (uVar2 = *(uint *)(lVar1 + 8), (uVar2 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105bf14 with catch @ 0105bf3c
                        */
    if (*(long *)(param_1 + 0xa8) != 0) {
                    /* try { // try from 0105bf50 to 0115c07f has its CatchHandler @ 0105bf50
                       catch() { ... } // from try @ 0105bf50 with catch @ 0105bf50
                       catch() { ... } // from try @ 0105c0a0 with catch @ 0105bf50 */
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xb8) + 0x10))();
      lVar1 = *(long *)(param_1 + 0x128);
      uVar2 = *(uint *)(lVar1 + 8);
    }
    *(long *)(param_1 + 0xa8) = 0;
    *(uint *)(lVar1 + 8) = uVar2 & 0xfffffffe;
  }
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}

