
/* bool seval_to_Map_string_key<cocos2d::middleware::Texture2D*>(se::Value const&,
   cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::middleware::Texture2D*>*) */

bool seval_to_Map_string_key<cocos2d::middleware::Texture2D*>(Value *param_1,Map *param_2)

{
  basic_string *pbVar1;
  long lVar2;
  Object *this;
  ulong uVar3;
  Object *this_00;
  Texture2D *pTVar4;
  basic_string *pbVar5;
  bool bVar6;
  basic_string *pbVar7;
  basic_string *local_70;
  basic_string *local_68;
  undefined8 local_60;
  Value aVStack_58 [8];
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = (Object *)se::Value::toObject(param_1);
  local_70 = (basic_string *)0x0;
  local_68 = (basic_string *)0x0;
  local_60 = 0;
  uVar3 = se::Object::getAllKeys(this,(vector *)&local_70);
  if ((uVar3 & 1) == 0) {
    cocos2d::
    Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::middleware::Texture2D*>
    ::clear((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::middleware::Texture2D*>
             *)param_2);
    bVar6 = false;
    pbVar1 = local_70;
  }
  else {
    se::Value::Value(aVStack_58);
    pbVar7 = local_68;
    for (pbVar1 = local_70; pbVar1 != pbVar7; pbVar1 = pbVar1 + 0x18) {
      if (((byte)*pbVar1 & 1) == 0) {
        pbVar5 = pbVar1 + 1;
      }
      else {
        pbVar5 = *(basic_string **)(pbVar1 + 0x10);
      }
      uVar3 = se::Object::getProperty(this,(char *)pbVar5,aVStack_58);
      if (((uVar3 & 1) == 0) || (local_50 != '\x05')) {
        cocos2d::
        Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::middleware::Texture2D*>
        ::clear((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::middleware::Texture2D*>
                 *)param_2);
        bVar6 = false;
        goto LAB_00c10690;
      }
      this_00 = (Object *)se::Value::toObject(aVStack_58);
      pTVar4 = (Texture2D *)se::Object::getPrivateData(this_00);
      cocos2d::
      Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::middleware::Texture2D*>
      ::insert((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::middleware::Texture2D*>
                *)param_2,pbVar1,pTVar4);
    }
    bVar6 = true;
LAB_00c10690:
    se::Value::~Value(aVStack_58);
    pbVar1 = local_70;
  }
  local_70 = pbVar1;
  pbVar7 = local_68;
  if (pbVar1 != (basic_string *)0x0) {
    while (pbVar5 = pbVar7, pbVar5 != pbVar1) {
      pbVar7 = pbVar5 + -0x18;
      if (((byte)*pbVar7 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -8));
      }
    }
    local_68 = pbVar1;
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}

