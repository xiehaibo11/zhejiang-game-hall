
/* cocos2d::network::HttpClient::dispatchResponseCallbacks() */

void __thiscall cocos2d::network::HttpClient::dispatchResponseCallbacks(HttpClient *this)

{
  mutex *this_00;
  undefined8 *__dest;
  size_t __n;
  long lVar1;
  long *plVar2;
  HttpClient *pHVar3;
  Ref *pRVar4;
  code *pcVar5;
  ulong uVar6;
  Ref *this_01;
  Ref *this_02;
  Ref *local_68;
  HttpClient *pHStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (mutex *)(this + 0x118);
  std::__ndk1::mutex::lock(this_00);
  __dest = *(undefined8 **)(this + 0x100);
  if (__dest == *(undefined8 **)(this + 0x108)) {
    std::__ndk1::mutex::unlock(this_00);
    goto LAB_00e99900;
  }
  this_01 = (Ref *)*__dest;
  Ref::release(this_01);
  __n = *(long *)(this + 0x108) - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x108) = __dest + ((long)__n >> 3);
  std::__ndk1::mutex::unlock(this_00);
  if (this_01 == (Ref *)0x0) goto LAB_00e99900;
  this_02 = *(Ref **)(this_01 + 0x28);
  plVar2 = *(long **)(this_02 + 0xb0);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(this_02 + 0x70) != 0) {
      pcVar5 = *(code **)(this_02 + 0x78);
      uVar6 = *(ulong *)(this_02 + 0x80) & 1;
      if (uVar6 != 0 || pcVar5 != (code *)0x0) {
        plVar2 = (long *)(*(long *)(this_02 + 0x70) + ((long)*(ulong *)(this_02 + 0x80) >> 1));
        pHVar3 = this;
        pRVar4 = this_01;
        if (uVar6 != 0) {
          pcVar5 = *(code **)(pcVar5 + *plVar2);
        }
        goto LAB_00e998e0;
      }
    }
  }
  else {
    pcVar5 = *(code **)(*plVar2 + 0x30);
    pHVar3 = (HttpClient *)&pHStack_60;
    pRVar4 = (Ref *)&local_68;
    local_68 = this_01;
    pHStack_60 = this;
LAB_00e998e0:
    (*pcVar5)(plVar2,pHVar3,pRVar4);
  }
  Ref::release(this_01);
  Ref::release(this_02);
LAB_00e99900:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

