
/* cocostudio::WidgetReader::getResourcePath(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void cocostudio::WidgetReader::getResourcePath
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                *param_1,undefined8 param_2_00,GenericValue *param_2,byte *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  DictionaryHelper *this;
  char *__s;
  size_t sVar3;
  byte *pbVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = GUIReader::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_60,(basic_string *)(lVar2 + 0x28));
  this = (DictionaryHelper *)DictionaryHelper::getInstance();
  pbVar4 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar4 = param_4 + 1;
  }
  __s = (char *)DictionaryHelper::getStringValue_json(this,param_2,(char *)pbVar4,(char *)0x0);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (__s != (char *)0x0) {
    if (param_5 == 1) {
      sVar3 = strlen(__s);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,__s,sVar3);
    }
    else if (param_5 == 0) {
      FUN_007c1fb0(&local_78,local_60,__s);
      if (((byte)*param_1 & 1) == 0) {
        *(undefined2 *)param_1 = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        if (((byte)*param_1 & 1) != 0) {
          operator_delete(*(void **)(param_1 + 0x10));
          *(undefined8 *)param_1 = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x10) = local_68;
      *(undefined8 *)(param_1 + 8) = uStack_70;
      *(undefined8 *)param_1 = local_78;
    }
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

