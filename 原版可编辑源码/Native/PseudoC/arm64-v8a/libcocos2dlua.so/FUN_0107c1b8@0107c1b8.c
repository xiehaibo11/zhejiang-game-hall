
void FUN_0107c1b8(long param_1,long param_2)

{
  undefined4 uVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107be78 with catch @ 0107c1c8
                        */
  uVar1 = (**(code **)(param_2 + 0x68))(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  return;
}

