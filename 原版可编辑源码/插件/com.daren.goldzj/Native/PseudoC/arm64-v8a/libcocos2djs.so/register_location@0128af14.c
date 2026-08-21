
/* v8::internal::RegExpMacroAssemblerARM64::register_location(int) */

void v8::internal::RegExpMacroAssemblerARM64::register_location(int param_1)

{
  int in_w1;
  undefined8 *in_x8;
  
  if (*(int *)((ulong)(uint)param_1 + 0x34) <= in_w1) {
    *(int *)((ulong)(uint)param_1 + 0x34) = in_w1 + 1;
  }
  *in_x8 = 0x400000001d;
  *(undefined4 *)(in_x8 + 1) = 0;
  in_x8[3] = (long)(in_w1 * -4 + 0xc);
  *(undefined4 *)((long)in_x8 + 0x14) = 2;
  *(undefined8 *)((long)in_x8 + 0xc) = 0xffffffff;
  in_x8[4] = 0xffffffff00000000;
  in_x8[5] = 0xffffffff;
  return;
}

