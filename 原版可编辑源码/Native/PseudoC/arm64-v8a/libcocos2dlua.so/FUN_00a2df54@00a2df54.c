
undefined8 FUN_00a2df54(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00a2df58 to 00b2e027 has its CatchHandler @ 00a2df58
                       catch() { ... } // from try @ 00a2df58 with catch @ 00a2df58
                       catch() { ... } // from try @ 00a2e0a8 with catch @ 00a2df58 */
  uVar2 = FUN_00a5cedc();
  if ((int)uVar2 == 0) {
    lVar1 = param_1 + (long)param_2 * 8;
    param_1 = param_1 + (long)param_2 * 0x28;
    *(undefined1 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(code **)(lVar1 + 0x278) = FUN_00a38e5c;
    *(code **)(lVar1 + 0x288) = FUN_00a38d40;
  }
  else {
    uVar2 = 0x50;
  }
  return uVar2;
}

