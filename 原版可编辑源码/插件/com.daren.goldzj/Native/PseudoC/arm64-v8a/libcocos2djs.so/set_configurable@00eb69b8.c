
/* v8::PropertyDescriptor::set_configurable(bool) */

void __thiscall v8::PropertyDescriptor::set_configurable(PropertyDescriptor *this,bool param_1)

{
  byte bVar1;
  
  bVar1 = 0xc;
  if (!param_1) {
    bVar1 = 8;
  }
  **(byte **)this = **(byte **)this & 0xf3 | bVar1;
  return;
}

