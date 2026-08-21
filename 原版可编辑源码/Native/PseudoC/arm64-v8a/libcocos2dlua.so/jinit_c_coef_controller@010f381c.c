
void jinit_c_coef_controller(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  code *pcVar6;
  
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xc0);
  *(undefined8 **)(param_1 + 0x208) = puVar2;
  *puVar2 = FUN_010f395c;
  if (param_2 == 0) {
    lVar4 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,0x500);
    puVar2[6] = lVar4 + 0x100;
    puVar2[5] = lVar4 + 0x80;
    puVar2[8] = lVar4 + 0x200;
    puVar2[7] = lVar4 + 0x180;
    puVar2[4] = lVar4;
    puVar2[10] = lVar4 + 0x300;
    puVar2[9] = lVar4 + 0x280;
    puVar2[0xc] = lVar4 + 0x400;
    puVar2[0xb] = lVar4 + 0x380;
    puVar2[0xd] = lVar4 + 0x480;
    puVar2[0xe] = 0;
  }
  else if (0 < *(int *)(param_1 + 0x5c)) {
                    /* try { // try from 010f3874 to 011f38af has its CatchHandler @ 010f3874
                       catch() { ... } // from try @ 010f3874 with catch @ 010f3874
                       catch() { ... } // from try @ 010f38b4 with catch @ 010f3874 */
    lVar4 = 0;
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x68) + 0x1c);
    do {
      pcVar6 = *(code **)(*(long *)(param_1 + 8) + 0x28);
      uVar1 = jround_up(*puVar5,(long)(int)puVar5[-5]);
      uVar3 = jround_up(puVar5[1],(long)(int)puVar5[-4]);
                    /* try { // try from 010f38b0 to 011f38b3 has its CatchHandler @ 010f38cc */
                    /* try { // try from 010f38b4 to 011f38df has its CatchHandler @ 010f3874 */
      uVar3 = (*pcVar6)(param_1,1,0,uVar1,uVar3,puVar5[-4]);
      puVar2[lVar4 + 0xe] = uVar3;
                    /* catch() { ... } // from try @ 010f38b0 with catch @ 010f38cc */
      lVar4 = lVar4 + 1;
      puVar5 = puVar5 + 0x18;
    } while (lVar4 < *(int *)(param_1 + 0x5c));
  }
  return;
}

