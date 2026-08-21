
/* cocos2d::FontFreeType::~FontFreeType() */

void __thiscall cocos2d::FontFreeType::~FontFreeType(FontFreeType *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  
  *(undefined ***)this = &PTR__FontFreeType_01c6c3a8;
  if (*(long *)(this + 0x50) != 0) {
    FT_Stroker_Done();
  }
  if (*(long *)(this + 0x58) != 0) {
    FT_Done_Face();
  }
  Data::~Data((Data *)(this + 0x40));
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  this_00 = *(__shared_weak_count **)(this + 0x10);
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
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      return;
    }
  }
  return;
}

