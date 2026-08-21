
/* std::__ndk1::enable_if<__is_forward_iterator<fairygui::GObject**>::value&&is_constructible<fairygui::GObject*,
   std::__ndk1::iterator_traits<fairygui::GObject**>::reference>::value, void>::type
   std::__ndk1::vector<fairygui::GObject*, std::__ndk1::allocator<fairygui::GObject*>
   >::assign<fairygui::GObject**>(fairygui::GObject**, fairygui::GObject**) */

void __thiscall
std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::
assign<fairygui::GObject**>
          (vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *this,
          GObject **param_1,GObject **param_2)

{
  GObject **__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x10);
                    /* try { // try from 00a8a0f8 to 00b8a12f has its CatchHandler @ 00a8a1b4 */
  pvVar4 = *(void **)this;
  sVar3 = (long)param_2 - (long)param_1;
  uVar5 = (long)sVar3 >> 3;
  if ((ulong)(lVar1 - (long)pvVar4 >> 3) < uVar5) {
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + 8) = pvVar4;
      operator_delete(pvVar4);
      lVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00a8a130 to 00b8a15f has its CatchHandler @ 00a8a0a8 */
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar5 >> 0x3d != 0) {
LAB_00a8a160:
                    /* try { // try from 00a8a160 to 00b8a173 has its CatchHandler @ 00a8a1b4 */
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 3) < 0xfffffffffffffff) {
      uVar2 = lVar1 >> 2;
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3d != 0)) goto LAB_00a8a160;
    }
    else {
      uVar5 = 0x1fffffffffffffff;
    }
    pvVar4 = operator_new(uVar5 * 8);
    *(void **)this = pvVar4;
    *(void **)(this + 8) = pvVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar5 * 8);
    if (0 < (long)sVar3) {
      memcpy(pvVar4,param_1,sVar3);
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    *(void **)(this + 8) = pvVar4;
  }
  else {
                    /* try { // try from 00a8a174 to 00b8a1cf has its CatchHandler @ 00a8a0a8 */
    uVar2 = *(long *)(this + 8) - (long)pvVar4 >> 3;
    __src = (GObject **)((long)param_1 + (*(long *)(this + 8) - (long)pvVar4));
    if (uVar5 <= uVar2) {
      __src = param_2;
    }
    sVar3 = (long)__src - (long)param_1;
    if (sVar3 != 0) {
      memmove(pvVar4,param_1,sVar3);
    }
    if (uVar2 < uVar5) {
      pvVar4 = *(void **)(this + 8);
      sVar3 = (long)param_2 - (long)__src;
      if (0 < (long)sVar3) {
                    /* catch() { ... } // from try @ 00a8a0f8 with catch @ 00a8a1b4
                       catch() { ... } // from try @ 00a8a160 with catch @ 00a8a1b4 */
        memcpy(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
      *(void **)(this + 8) = pvVar4;
    }
    else {
                    /* try { // try from 00a8a1d0 to 00b8a227 has its CatchHandler @ 00a8a1d0
                       catch() { ... } // from try @ 00a8a1d0 with catch @ 00a8a1d0
                       catch() { ... } // from try @ 00a8a30c with catch @ 00a8a1d0
                       catch() { ... } // from try @ 00a8a3fc with catch @ 00a8a1d0
                       catch() { ... } // from try @ 00a8a50c with catch @ 00a8a1d0
                       catch() { ... } // from try @ 00a8a608 with catch @ 00a8a1d0 */
      *(void **)(this + 8) = (void *)((long)pvVar4 + ((long)sVar3 >> 3) * 8);
    }
  }
                    /* try { // try from 00a8a228 to 00b8a293 has its CatchHandler @ 00a8a630 */
  return;
}

