
/* js_spine_SkeletonCacheMgr_finalizeRegistry(void*) */

void js_spine_SkeletonCacheMgr_finalizeRegistry(void *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ScriptEngine *this;
  void *pvVar3;
  long lVar4;
  long lVar5;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache*>
  *this_00;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != (void *)0x0) {
    this = (ScriptEngine *)se::ScriptEngine::getInstance();
    se::ScriptEngine::_setGarbageCollecting(this,true);
    se::State::State(aSStack_70,param_1);
    pvVar3 = (void *)se::State::nativeThisObject(aSStack_70);
    lVar4 = se::NonRefNativePtrCreatedByCtorMap::find(pvVar3);
    lVar5 = se::NonRefNativePtrCreatedByCtorMap::end();
    if (lVar4 != lVar5) {
      se::NonRefNativePtrCreatedByCtorMap::erase(lVar4);
      this_00 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache*>
                 *)se::State::nativeThisObject(aSStack_70);
      if (this_00 !=
          (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache*>
           *)0x0) {
        cocos2d::
        Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonCache*>
        ::clear(this_00);
        puVar2 = *(void **)(this_00 + 0x10);
        while (puVar2 != (void *)0x0) {
          pvVar3 = (void *)*puVar2;
          if ((*(byte *)(puVar2 + 2) & 1) != 0) {
            operator_delete((void *)puVar2[4]);
          }
          operator_delete(puVar2);
          puVar2 = pvVar3;
        }
        pvVar3 = *(void **)this_00;
        *(undefined8 *)this_00 = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        operator_delete(this_00);
      }
    }
    se::ScriptEngine::_setGarbageCollecting(this,false);
    se::State::~State(aSStack_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

