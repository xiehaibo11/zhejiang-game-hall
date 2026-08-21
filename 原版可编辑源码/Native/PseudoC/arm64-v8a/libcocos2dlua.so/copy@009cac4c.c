
/* cocos2d::LuaValue::copy(cocos2d::LuaValue const&) */

void __thiscall cocos2d::LuaValue::copy(LuaValue *this,LuaValue *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>> *this_00;
  Ref *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_02;
  long *plVar3;
  long lVar4;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>>>
  *p_Var5;
  long *plVar6;
  long *plVar7;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 8) = uVar1;
  switch(uVar1) {
  case 3:
    this_00 = operator_new(0x18);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 this_00,*(basic_string **)param_1);
    break;
  case 4:
    this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (this_00 != (list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>> *)0x0) {
      plVar6 = *(long **)param_1;
      p_Var5 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>>>
                *)(this_00 + 8);
      *(undefined8 *)p_Var5 = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>>>
        **)this_00 = p_Var5;
      plVar7 = (long *)*plVar6;
      while (plVar7 != plVar6 + 1) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>>>
        ::
        __emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::LuaValue>const&>
                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::LuaValue>>>
                    *)this_00,p_Var5,plVar7 + 4,plVar7 + 4);
        plVar3 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar3 = plVar7 + 2;
          bVar2 = (long *)*(long *)*plVar3 != plVar7;
          plVar7 = (long *)*plVar3;
          if (bVar2) {
            do {
              lVar4 = *plVar3;
              plVar3 = (long *)(lVar4 + 0x10);
              plVar7 = (long *)*plVar3;
            } while (*plVar7 != lVar4);
          }
        }
        else {
          do {
            plVar7 = plVar3;
            plVar3 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
    }
    break;
  case 5:
    this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (this_00 != (list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>> *)0x0) {
      std::__ndk1::list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>>::list
                (this_00,*(list **)param_1);
    }
    break;
  case 6:
    this_01 = *(Ref **)param_1;
    *(Ref **)this = this_01;
    Ref::retain(this_01);
    this_02 = operator_new(0x18);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(this_02,*(basic_string **)(param_1 + 0x10));
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = this_02;
  default:
    goto switchD_009cac98_default;
  }
  *(list<cocos2d::LuaValue,std::__ndk1::allocator<cocos2d::LuaValue>> **)this = this_00;
switchD_009cac98_default:
  return;
}

