
/* v8::internal::JsonParser<unsigned
   short>::JsonContinuation::JsonContinuation(v8::internal::Isolate*,
   v8::internal::JsonParser<unsigned short>::JsonContinuation::Type, unsigned long) */

void __thiscall
v8::internal::JsonParser<unsigned_short>::JsonContinuation::JsonContinuation
          (JsonContinuation *this,long param_1,uint param_3,int param_4)

{
  *(long *)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x95a0);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(uint *)(this + 0x18) = param_3 & 3 | param_4 << 2;
  return;
}

