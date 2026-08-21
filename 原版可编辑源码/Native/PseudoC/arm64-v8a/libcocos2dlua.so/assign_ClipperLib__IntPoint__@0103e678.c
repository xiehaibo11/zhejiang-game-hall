
/* std::__ndk1::enable_if<__is_forward_iterator<ClipperLib::IntPoint*>::value&&is_constructible<ClipperLib::IntPoint,
   std::__ndk1::iterator_traits<ClipperLib::IntPoint*>::reference>::value, void>::type
   std::__ndk1::vector<ClipperLib::IntPoint, std::__ndk1::allocator<ClipperLib::IntPoint>
   >::assign<ClipperLib::IntPoint*>(ClipperLib::IntPoint*, ClipperLib::IntPoint*) */

void __thiscall
std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
assign<ClipperLib::IntPoint*>
          (vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *this,
          IntPoint *param_1,IntPoint *param_2)

{
  IntPoint *__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x10);
  pvVar4 = *(void **)this;
  sVar3 = (long)param_2 - (long)param_1;
  uVar5 = (long)sVar3 >> 4;
                    /* catch() { ... } // from try @ 0103e654 with catch @ 0103e6a8 */
  if ((ulong)(lVar1 - (long)pvVar4 >> 4) < uVar5) {
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + 8) = pvVar4;
      operator_delete(pvVar4);
                    /* catch() { ... } // from try @ 0103e6f0 with catch @ 0103e6c4 */
      lVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar5 >> 0x3c != 0) {
LAB_0103e6fc:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 4) < 0x7ffffffffffffff) {
      uVar2 = lVar1 >> 3;
                    /* try { // try from 0103e6e8 to 0113e6ef has its CatchHandler @ 0103e734 */
                    /* try { // try from 0103e6f0 to 0113e74f has its CatchHandler @ 0103e6c4 */
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3c != 0)) goto LAB_0103e6fc;
    }
    else {
      uVar5 = 0xfffffffffffffff;
    }
    pvVar4 = operator_new(uVar5 * 0x10);
    *(void **)this = pvVar4;
    *(void **)(this + 8) = pvVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar5 * 0x10);
    if (0 < (long)sVar3) {
      memcpy(pvVar4,param_1,sVar3);
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    *(void **)(this + 8) = pvVar4;
  }
  else {
    uVar2 = *(long *)(this + 8) - (long)pvVar4 >> 4;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar4);
    if (uVar5 <= uVar2) {
      __src = param_2;
    }
    sVar3 = (long)__src - (long)param_1;
    if (sVar3 != 0) {
                    /* catch() { ... } // from try @ 0103e6e8 with catch @ 0103e734 */
      memmove(pvVar4,param_1,sVar3);
    }
    if (uVar2 < uVar5) {
      pvVar4 = *(void **)(this + 8);
      sVar3 = (long)param_2 - (long)__src;
      if (0 < (long)sVar3) {
        memcpy(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
      *(void **)(this + 8) = pvVar4;
    }
    else {
      *(void **)(this + 8) = (void *)((long)pvVar4 + ((long)sVar3 >> 4) * 0x10);
    }
  }
  return;
}

