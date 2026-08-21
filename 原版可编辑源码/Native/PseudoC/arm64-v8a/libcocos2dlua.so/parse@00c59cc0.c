
/* cocostudio::ComAttribute::parse(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocostudio::ComAttribute::parse(ComAttribute *this,basic_string *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  byte local_60 [16];
  void *local_50;
  void *local_48;
  void *pvStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x18))(local_60,plVar3,param_1);
  local_48 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    local_48 = local_50;
  }
  pvStack_40 = local_48;
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
            ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              *)(this + 0x78),(GenericStringStream *)&local_48);
  iVar1 = *(int *)(this + 0xd0);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}

