
void speex_bits_insert_terminator(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
    while( true ) {
      speex_bits_pack(param_1,uVar1,1);
      if (*(int *)(param_1 + 0x10) == 0) break;
      uVar1 = 1;
    }
  }
  return;
}

