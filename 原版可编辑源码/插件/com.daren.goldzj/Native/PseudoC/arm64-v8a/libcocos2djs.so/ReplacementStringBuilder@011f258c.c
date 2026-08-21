
/* v8::internal::ReplacementStringBuilder::ReplacementStringBuilder(v8::internal::Heap*,
   v8::internal::Handle<v8::internal::String>, int) */

void __thiscall
v8::internal::ReplacementStringBuilder::ReplacementStringBuilder
          (ReplacementStringBuilder *this,long param_1,ulong *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  *(long *)this = param_1;
  uVar1 = Factory::NewFixedArrayWithHoles((Factory *)(param_1 + -0x8850),param_4,0);
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (ReplacementStringBuilder)0x0;
  *(ulong **)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (ReplacementStringBuilder)
               (*(byte *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) >> 3
               & 1);
  return;
}

