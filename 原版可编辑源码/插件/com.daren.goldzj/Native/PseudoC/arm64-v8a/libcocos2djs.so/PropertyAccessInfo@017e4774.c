
/* v8::internal::compiler::PropertyAccessInfo::PropertyAccessInfo(v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::PropertyAccessInfo::PropertyAccessInfo
          (PropertyAccessInfo *this,Zone *param_1)

{
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Zone **)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(Zone **)(this + 0x40) = param_1;
  this[0x68] = (PropertyAccessInfo)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 1;
  return;
}

