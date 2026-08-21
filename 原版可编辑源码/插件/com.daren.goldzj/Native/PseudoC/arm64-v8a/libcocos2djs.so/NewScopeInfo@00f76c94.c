
/* v8::internal::Factory::NewScopeInfo(int, v8::internal::AllocationType) */

void __thiscall
v8::internal::Factory::NewScopeInfo(Factory *this,undefined4 param_1,undefined4 param_3)

{
  NewFixedArrayWithFiller(this,0x12,param_1,*(undefined8 *)(this + 0xa0),param_3);
  return;
}

