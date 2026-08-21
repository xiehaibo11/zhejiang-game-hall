
/* cocostudio::JsonLocalizationManager::initLanguageData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

undefined4 __thiscall
cocostudio::JsonLocalizationManager::initLanguageData
          (JsonLocalizationManager *this,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  *pGVar7;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  void *local_48;
  void *pvStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x18))(local_60,plVar4,param_2);
  bVar3 = local_60[0];
  uVar1 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    uVar1 = local_58;
  }
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    pGVar7 = *(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
               **)(this + 8);
    if (pGVar7 == (GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                   *)0x0) {
      pGVar7 = operator_new(0x68);
      *(undefined4 *)(pGVar7 + 0x58) = 0;
      *(undefined8 *)(pGVar7 + 0x38) = 0;
      *(undefined8 *)(pGVar7 + 0x30) = 0;
      *(undefined8 *)(pGVar7 + 0x48) = 0;
      *(undefined8 *)(pGVar7 + 0x40) = 0;
      *(undefined8 *)(pGVar7 + 0x18) = 0;
      *(undefined8 *)(pGVar7 + 0x10) = 0;
      *(undefined8 *)(pGVar7 + 0x28) = 0;
      *(undefined8 *)(pGVar7 + 0x20) = 0;
      *(undefined8 *)(pGVar7 + 8) = 0;
      *(undefined8 *)pGVar7 = 0;
      *(undefined8 *)(pGVar7 + 0x50) = 0x400;
      *(undefined8 *)(pGVar7 + 0x60) = 0;
      puVar5 = operator_new(0x28);
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0x10000;
      puVar5[2] = 0;
      *(undefined8 **)(pGVar7 + 0x18) = puVar5;
      *(undefined8 **)(pGVar7 + 0x20) = puVar5;
      *puVar5 = 0;
      *(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
        **)(this + 8) = pGVar7;
    }
    local_48 = (void *)((ulong)local_60 | 1);
    if ((bVar3 & 1) != 0) {
      local_48 = local_50;
    }
    pvStack_40 = local_48;
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
              (pGVar7,(GenericStringStream *)&local_48);
    pGVar7 = *(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
               **)(this + 8);
    if (*(short *)(pGVar7 + 0x16) == 3) {
      uVar6 = 1;
    }
    else {
      if (pGVar7 != (GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                     *)0x0) {
        rapidjson::
        GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
        ::~GenericDocument(pGVar7);
        operator_delete(pGVar7);
      }
      uVar6 = 0;
      *(undefined8 *)(this + 8) = 0;
    }
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

