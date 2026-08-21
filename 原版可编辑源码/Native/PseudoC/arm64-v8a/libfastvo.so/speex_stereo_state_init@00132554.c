
void speex_stereo_state_init(void)

{
  undefined8 *puVar1;
  
  puVar1 = calloc(0x18,1);
  *(undefined4 *)(puVar1 + 2) = 0xdeadbeef;
  puVar1[1] = 0x400000004000;
  *puVar1 = 0x400000010000;
  return;
}

