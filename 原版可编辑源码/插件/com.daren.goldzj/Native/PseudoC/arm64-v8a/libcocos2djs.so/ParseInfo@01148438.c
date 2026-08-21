
/* v8::internal::ParseInfo::ParseInfo(v8::internal::AccountingAllocator*) */

void __thiscall v8::internal::ParseInfo::ParseInfo(ParseInfo *this,AccountingAllocator *param_1)

{
  Zone *this_00;
  
  this_00 = operator_new(0x40);
  Zone::Zone(this_00,param_1,"../../src/parsing/parse-info.cc:23");
  *(undefined8 *)(this + 0x34) = 0xffffffff;
  *(undefined8 *)(this + 0x3c) = 0xffffffff00000000;
  *(Zone **)this = this_00;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xaf) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x30) = 0x200;
  *(undefined8 *)(this + 0x44) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 200) = 0;
  return;
}

