
/* v8::PropertyDescriptor::set_enumerable(bool) */

void __thiscall v8::PropertyDescriptor::set_enumerable(PropertyDescriptor *this,bool param_1)

{
  **(byte **)this = **(byte **)this & 0xfc | param_1 | 2;
  return;
}

