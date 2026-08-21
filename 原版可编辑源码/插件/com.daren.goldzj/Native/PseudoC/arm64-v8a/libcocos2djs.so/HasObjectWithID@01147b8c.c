
/* v8::internal::ValueDeserializer::HasObjectWithID(unsigned int) */

bool __thiscall
v8::internal::ValueDeserializer::HasObjectWithID(ValueDeserializer *this,uint param_1)

{
  uint uVar1;
  
  if ((uint)(*(int *)(**(long **)(this + 0x30) + 3) >> 1) <= param_1) {
    return false;
  }
  uVar1 = *(uint *)(**(long **)(this + 0x30) + (long)(int)(param_1 << 2) + 7);
  if ((uVar1 & 1) == 0) {
    return true;
  }
  return uVar1 != *(uint *)(*(long *)this + 0xa8);
}

