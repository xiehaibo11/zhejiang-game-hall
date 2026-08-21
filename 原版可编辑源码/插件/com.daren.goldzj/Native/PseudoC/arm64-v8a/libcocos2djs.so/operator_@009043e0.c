
/* se::Value::TEMPNAMEPLACEHOLDERVALUE(se::Value const&) */

Value * __thiscall se::Value::operator=(Value *this,Value *param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  
  if (this != param_1) {
    reset(this,param_1[8]);
    switch(this[8]) {
    case (Value)0x0:
    case (Value)0x1:
      *(undefined8 *)this = 0;
      break;
    case (Value)0x2:
      *(undefined8 *)this = *(undefined8 *)param_1;
      break;
    case (Value)0x3:
      *this = *param_1;
      break;
    case (Value)0x4:
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                param_1;
      if (*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this
          != pbVar3) {
        uVar1 = *(ulong *)(pbVar3 + 8);
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar3 + 0x10);
        if (((byte)*pbVar3 & 1) == 0) {
          pbVar2 = pbVar3 + 1;
          uVar1 = (ulong)((byte)*pbVar3 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )this,(char *)pbVar2,uVar1);
      }
      break;
    case (Value)0x5:
      setObject(this,*(Object **)param_1,(bool)param_1[9]);
    }
  }
  return this;
}

