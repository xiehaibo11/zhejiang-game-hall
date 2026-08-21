
/* std::__ndk1::shared_ptr<cocos2d::FontFreeTypeLibrary>::~shared_ptr() */

void __thiscall
std::__ndk1::shared_ptr<cocos2d::FontFreeTypeLibrary>::~shared_ptr
          (shared_ptr<cocos2d::FontFreeTypeLibrary> *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  
  this_00 = *(__shared_weak_count **)(this + 8);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
                    /* try { // try from 009f3c70 to 00af3c83 has its CatchHandler @ 009f3d3c */
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* try { // try from 009f3c84 to 00af3d37 has its CatchHandler @ 009f3bcc */
      __shared_weak_count::__release_weak(this_00);
      return;
    }
  }
  return;
}

