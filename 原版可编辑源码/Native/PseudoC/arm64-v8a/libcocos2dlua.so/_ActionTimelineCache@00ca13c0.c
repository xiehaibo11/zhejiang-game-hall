
/* cocostudio::timeline::ActionTimelineCache::~ActionTimelineCache() */

void __thiscall
cocostudio::timeline::ActionTimelineCache::~ActionTimelineCache(ActionTimelineCache *this)

{
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::ActionTimeline*>
  *this_00;
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  code *pcVar4;
  
  this_00 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::ActionTimeline*>
             *)(this + 0x28);
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::ActionTimeline*>
  ::clear(this_00);
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this_00;
  *(undefined8 *)this_00 = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x10);
  do {
    if (puVar1 == (void *)0x0) {
      pvVar2 = *(void **)this;
      *(undefined8 *)this = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        return;
      }
      return;
    }
    plVar3 = (long *)puVar1[10];
    pvVar2 = (void *)*puVar1;
    if (puVar1 + 6 == plVar3) {
      pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_00ca146c:
      (*pcVar4)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar3 + 0x28);
      goto LAB_00ca146c;
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  } while( true );
}

