
/* std::__ndk1::__shared_ptr_emplace<cocos2d::TextRenderGroup,
   std::__ndk1::allocator<cocos2d::TextRenderGroup> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::TextRenderGroup,std::__ndk1::allocator<cocos2d::TextRenderGroup>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::TextRenderGroup,std::__ndk1::allocator<cocos2d::TextRenderGroup>>
           *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  __shared_weak_count *this_00;
  void *pvVar6;
  
                    /* try { // try from 009b1e3c to 00ab1e53 has its CatchHandler @ 009b20cc */
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c6ac48;
  puVar4 = *(void **)(this + 0x28);
  while (puVar4 != (void *)0x0) {
    this_00 = (__shared_weak_count *)puVar4[4];
    pvVar6 = (void *)*puVar4;
    if (this_00 != (__shared_weak_count *)0x0) {
                    /* try { // try from 009b1e68 to 00ab1e7b has its CatchHandler @ 009b20c8 */
      p_Var1 = this_00 + 8;
      do {
        lVar5 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
                    /* try { // try from 009b1e7c to 00ab1e8b has its CatchHandler @ 009b20b4 */
      if (lVar5 == 0) {
                    /* try { // try from 009b1e8c to 00ab1e93 has its CatchHandler @ 009b20dc */
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        __shared_weak_count::__release_weak(this_00);
      }
    }
    operator_delete(puVar4);
    puVar4 = pvVar6;
  }
  pvVar6 = *(void **)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
                    /* try { // try from 009b1eb8 to 00ab1ebf has its CatchHandler @ 009b2094 */
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

