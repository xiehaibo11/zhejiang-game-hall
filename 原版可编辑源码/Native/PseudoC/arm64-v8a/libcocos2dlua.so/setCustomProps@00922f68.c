
/* cocostudio::CustomGUIReader::setCustomProps(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Ref*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::CustomGUIReader::setCustomProps
          (CustomGUIReader *this,basic_string *param_1,Ref *param_2,GenericValue *param_3)

{
  uint uVar1;
  long lVar2;
  void *__ptr;
  undefined1 *puVar3;
  bool bVar4;
  long lVar5;
  undefined1 *__size;
  basic_string *pbVar6;
  long *plVar7;
  void *local_c0;
  void *pvStack_b8;
  void *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  long local_48;
  
                    /* try { // try from 00922f74 to 00a22fbf has its CatchHandler @ 00922f74
                       catch() { ... } // from try @ 00922f74 with catch @ 00922f74
                       catch() { ... } // from try @ 00922fc4 with catch @ 00922f74 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x44) != 0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x100;
    pvStack_b8 = (void *)0x0;
    local_c0 = (void *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_b0 = (void *)0x0;
                    /* try { // try from 00922fc0 to 00a22fc3 has its CatchHandler @ 00923018 */
    pvStack_78 = (void *)0x0;
    local_80 = 0;
    uStack_68 = 0;
    local_70 = (void *)0x0;
                    /* try { // try from 00922fc4 to 00a2302b has its CatchHandler @ 00922f74 */
    local_60 = 0;
    uStack_58 = 0x200;
    local_50 = 0x144;
    local_4c = 0;
    local_88 = (undefined1 *)&local_c0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
              ((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)param_3,(Writer *)&local_88);
    lVar5 = cocos2d::LuaEngine::getInstance();
    plVar7 = *(long **)(lVar5 + 8);
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    bVar4 = ((byte)*param_1 & 1) == 0;
    if (bVar4) {
      pbVar6 = param_1 + 1;
    }
    uVar1 = (uint)((byte)*param_1 >> 1);
    if (!bVar4) {
      uVar1 = *(uint *)(param_1 + 8);
    }
    (**(code **)(*plVar7 + 0x88))(plVar7,pbVar6,uVar1);
                    /* catch() { ... } // from try @ 00922fc0 with catch @ 00923018 */
    (**(code **)(*plVar7 + 0x98))(plVar7,param_2,&DAT_012769c7);
    puVar3 = local_a8;
    __ptr = local_b0;
                    /* try { // try from 0092302c to 00a230e3 has its CatchHandler @ 0092302c
                       catch() { ... } // from try @ 0092302c with catch @ 0092302c
                       catch() { ... } // from try @ 00923164 with catch @ 0092302c */
    if (local_a0 < local_a8 + 1) {
      if (local_b0 == (void *)0x0) {
        __size = local_98;
        if (local_c0 == (void *)0x0) {
          local_c0 = operator_new(1);
          __size = local_98;
          pvStack_b8 = local_c0;
        }
      }
      else {
        __size = local_a0 + (((ulong)(local_a0 + (1 - (long)local_b0)) >> 1) - (long)local_b0);
                    /* try { // try from 009230e4 to 00a23117 has its CatchHandler @ 009231e4 */
      }
      lVar5 = (long)puVar3 - (long)__ptr;
      if (__size < (undefined1 *)(lVar5 + 1)) {
        __size = (undefined1 *)(lVar5 + 1);
      }
      if (__size == (undefined1 *)0x0) {
        free(__ptr);
        local_b0 = (void *)0x0;
      }
      else {
                    /* try { // try from 00923118 to 00a2312b has its CatchHandler @ 009231b0 */
        local_b0 = realloc(__ptr,(size_t)__size);
      }
      local_a8 = (undefined1 *)((long)local_b0 + lVar5);
                    /* try { // try from 00923130 to 00a23163 has its CatchHandler @ 009231b4 */
      local_a0 = (undefined1 *)((long)local_b0 + (long)__size);
    }
    *local_a8 = 0;
    (**(code **)(*plVar7 + 0x88))(plVar7,local_b0,(int)local_a8 - (int)local_b0);
    (**(code **)(*plVar7 + 200))(plVar7,*(undefined4 *)(this + 0x44),3);
    free(local_70);
    if (pvStack_78 != (void *)0x0) {
      operator_delete(pvStack_78);
    }
    free(local_b0);
    if (pvStack_b8 != (void *)0x0) {
      operator_delete(pvStack_b8);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

