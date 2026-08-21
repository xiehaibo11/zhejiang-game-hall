
/* cocos2d::extension::Manifest::loadJson(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::loadJson(Manifest *this,basic_string *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 local_68;
  void *pvStack_60;
  void *local_58;
  void *local_50;
  void *pvStack_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00dfa188 to 00efa19b has its CatchHandler @ 00dfa3e0 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  clear(this);
  pvStack_48 = (void *)0x0;
  local_40 = (void *)0x0;
                    /* try { // try from 00dfa1b8 to 00efa1bf has its CatchHandler @ 00dfa3c4 */
  local_50 = (void *)0x0;
  uVar4 = (**(code **)(**(long **)(this + 0x28) + 0x128))(*(long **)(this + 0x28),param_1);
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 00dfa1d4 to 00efa1d7 has its CatchHandler @ 00dfa440 */
                    /* try { // try from 00dfa1dc to 00efa1e7 has its CatchHandler @ 00dfa3dc */
                    /* try { // try from 00dfa1e8 to 00efa1f3 has its CatchHandler @ 00dfa404 */
    (**(code **)(**(long **)(this + 0x28) + 0x18))(&local_68,*(long **)(this + 0x28),param_1);
    pvStack_48 = pvStack_60;
    local_50 = local_68;
                    /* try { // try from 00dfa200 to 00efa20b has its CatchHandler @ 00dfa380 */
    local_40 = local_58;
    pvVar1 = (void *)((ulong)local_68 >> 1 & 0x7f);
    if (((ulong)local_68 & 1) != 0) {
      pvVar1 = pvStack_60;
    }
    if (pvVar1 != (void *)0x0) {
                    /* try { // try from 00dfa218 to 00efa223 has its CatchHandler @ 00dfa38c */
      uVar4 = (ulong)local_68 & 1;
      local_68 = (void *)((ulong)&local_50 | 1);
      if (uVar4 != 0) {
        local_68 = local_58;
      }
      pvStack_60 = local_68;
      rapidjson::
      GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
      ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                  *)(this + 0x140),(GenericStringStream *)&local_68);
      if (*(int *)(this + 0x198) != 0) {
        pvStack_60 = (void *)0x0;
        local_58 = (void *)0x0;
        pvVar1 = (void *)0x0;
        if (*(long *)(this + 0x1a0) != 0) {
          pvVar1 = (void *)(*(long *)(this + 0x1a0) - 1);
        }
        pvVar2 = (void *)((ulong)local_50 >> 1 & 0x7f);
        if (((ulong)local_50 & 1) != 0) {
          pvVar2 = pvStack_48;
        }
        uVar4 = (long)pvVar2 - (long)pvVar1;
        local_68 = (void *)0x0;
        if (pvVar2 < pvVar1) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pvVar2 = (void *)((ulong)&local_50 | 1);
        if (((ulong)local_50 & 1) != 0) {
          pvVar2 = local_40;
        }
        if (9 < uVar4) {
          uVar4 = 10;
        }
        uVar5 = (int)uVar4 << 1;
                    /* try { // try from 00dfa294 to 00efa2c7 has its CatchHandler @ 00dfa4a8 */
        local_68 = (void *)(ulong)(byte)uVar5;
        if (uVar4 != 0) {
          __memcpy_chk((ulong)&local_68 | 1,(long)pvVar2 + (long)pvVar1,uVar4,0x17);
          uVar5 = (uint)(byte)local_68._0_1_;
        }
        *(undefined1 *)((long)&local_68 + uVar4 + 1) = 0;
        if ((uVar5 & 1) != 0) {
          operator_delete(local_58);
        }
      }
    }
  }
                    /* try { // try from 00dfa2c8 to 00efa4ff has its CatchHandler @ 00df9d68 */
  if (((ulong)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

