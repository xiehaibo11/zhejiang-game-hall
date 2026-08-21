
/* v8::internal::HeapEntry::HeapEntry(v8::internal::HeapSnapshot*, int,
   v8::internal::HeapEntry::Type, char const*, unsigned int, unsigned long, unsigned int) */

void __thiscall
v8::internal::HeapEntry::HeapEntry
          (HeapEntry *this,undefined8 param_1,int param_2,uint param_4,undefined8 param_5,
          undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  *(undefined8 *)(this + 8) = param_7;
  *(undefined8 *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_5;
  *(uint *)this = param_4 & 0xf | param_2 << 4;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x20) = param_6;
  *(undefined4 *)(this + 0x24) = param_8;
  return;
}

