
/* se::Object::toString() const */

void se::Object::toString(void)

{
  ObjectWrap *this;
  long lVar1;
  Isolate *pIVar2;
  long in_x0;
  Object *this_00;
  ulong uVar3;
  Value *pVVar4;
  undefined8 uVar5;
  size_t sVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char *local_48 [2];
  long local_38;
  
  pIVar2 = DAT_01d371a8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ObjectWrap *)(in_x0 + 0x18);
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)in_x8 = 0;
  this_00 = (Object *)ObjectWrap::handle(this,pIVar2);
  uVar3 = v8::Object::IsCallable(this_00);
  if ((uVar3 & 1) == 0) {
    pVVar4 = (Value *)ObjectWrap::handle(this,DAT_01d371a8);
    uVar3 = v8::Value::IsArray(pVVar4);
    if ((uVar3 & 1) == 0) {
      pVVar4 = (Value *)ObjectWrap::handle(this,DAT_01d371a8);
      uVar3 = v8::Value::IsTypedArray(pVVar4);
      if ((uVar3 & 1) == 0) {
        pVVar4 = (Value *)ObjectWrap::handle(this,DAT_01d371a8);
        uVar3 = v8::Value::IsArrayBuffer(pVVar4);
        if ((uVar3 & 1) == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (in_x8,"[object Object]",0xf);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (in_x8,"[object ArrayBuffer]",0x14);
        }
        goto LAB_00906eb0;
      }
    }
  }
  pIVar2 = DAT_01d371a8;
  uVar5 = ObjectWrap::handle(this,DAT_01d371a8);
  v8::String::Utf8Value::Utf8Value((Utf8Value *)local_48,pIVar2,uVar5);
  sVar6 = strlen(local_48[0]);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(in_x8,local_48[0],sVar6);
  v8::String::Utf8Value::~Utf8Value((Utf8Value *)local_48);
LAB_00906eb0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

