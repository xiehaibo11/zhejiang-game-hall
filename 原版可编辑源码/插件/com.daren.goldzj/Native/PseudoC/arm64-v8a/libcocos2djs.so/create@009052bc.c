
/* se::Class::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, se::Object*, se::Object*, void
   (*)(v8::FunctionCallbackInfo<v8::Value> const&)) */

Class * se::Class::create(basic_string *param_1,Object *param_2,Object *param_3,
                         _func_void_FunctionCallbackInfo_ptr *param_4)

{
  Class *this;
  ulong uVar1;
  
  this = operator_new(0x50);
  Class(this);
  uVar1 = init(this,param_1,param_2,param_3,param_4);
  if ((uVar1 & 1) == 0) {
    if (*(ulong **)(this + 0x38) != (ulong *)0x0) {
      v8::V8::DisposeGlobal(*(ulong **)(this + 0x38));
      *(undefined8 *)(this + 0x38) = 0;
    }
    if (((byte)*this & 1) != 0) {
      operator_delete(*(void **)(this + 0x10));
    }
    operator_delete(this);
    this = (Class *)0x0;
  }
  return this;
}

