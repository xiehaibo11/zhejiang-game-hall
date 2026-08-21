
/* v8::internal::AssemblerOptions::Default(v8::internal::Isolate*, bool) */

void __thiscall
v8::internal::AssemblerOptions::Default(AssemblerOptions *this,Isolate *param_1,bool param_2)

{
  AssemblerOptions AVar1;
  byte *in_x8;
  long lVar2;
  
  in_x8[1] = 0;
  in_x8[2] = 0;
  in_x8[3] = 0;
  in_x8[4] = 0;
  in_x8[0x10] = 0;
  in_x8[0x11] = 0;
  AVar1 = this[0xb6b8];
  lVar2 = *(long *)(this + 0xc678);
  in_x8[5] = lVar2 == 0;
  *in_x8 = AVar1 != (AssemblerOptions)0x0 | (byte)param_1 & 1;
  in_x8[2] = lVar2 == 0 & ((AVar1 != (AssemblerOptions)0x0 | (byte)param_1) ^ 1);
  *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(*(long *)(this + 0x9070) + 0x30);
  return;
}

