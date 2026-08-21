
/* std::__ndk1::__shared_ptr_emplace<cocos2d::TTFLabelAtals,
   std::__ndk1::allocator<cocos2d::TTFLabelAtals> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::TTFLabelAtals,std::__ndk1::allocator<cocos2d::TTFLabelAtals>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::TTFLabelAtals,std::__ndk1::allocator<cocos2d::TTFLabelAtals>>
           *this)

{
  __shared_weak_count *p_Var1;
  __shared_ptr_emplace<cocos2d::TTFLabelAtals,std::__ndk1::allocator<cocos2d::TTFLabelAtals>> _Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  
                    /* catch() { ... } // from try @ 009b3110 with catch @ 009b31d8 */
  p_Var6 = *(__shared_weak_count **)(this + 0x58);
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c6ad38;
  if (p_Var6 == (__shared_weak_count *)0x0) {
LAB_009b3214:
    p_Var6 = *(__shared_weak_count **)(this + 0x48);
  }
  else {
    p_Var1 = p_Var6 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 != 0) goto LAB_009b3214;
    (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
    __shared_weak_count::__release_weak(p_Var6);
    p_Var6 = *(__shared_weak_count **)(this + 0x48);
  }
  if (p_Var6 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var6 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      __shared_weak_count::__release_weak(p_Var6);
      _Var2 = this[0x18];
      goto joined_r0x009b3250;
    }
  }
  _Var2 = this[0x18];
joined_r0x009b3250:
  if (((byte)_Var2 & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
                    /* try { // try from 009b3290 to 00ab33bf has its CatchHandler @ 009b3290
                       catch() { ... } // from try @ 009b3290 with catch @ 009b3290
                       catch() { ... } // from try @ 009b33c8 with catch @ 009b3290
                       catch() { ... } // from try @ 009b345c with catch @ 009b3290
                       catch() { ... } // from try @ 009b3514 with catch @ 009b3290 */
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

