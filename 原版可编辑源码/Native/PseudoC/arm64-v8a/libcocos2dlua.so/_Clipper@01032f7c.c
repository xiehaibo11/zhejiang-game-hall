
/* ClipperLib::Clipper::~Clipper() */

void __thiscall ClipperLib::Clipper::~Clipper(Clipper *this)

{
  void *pvVar1;
  long *in_x1;
  long lVar2;
  
                    /* try { // try from 01032f80 to 01132f87 has its CatchHandler @ 010331c4 */
                    /* try { // try from 01032f88 to 0113308f has its CatchHandler @ 01031838 */
  lVar2 = *in_x1;
  *(long *)this = lVar2;
  *(long *)(this + *(long *)(lVar2 + -0x18)) = in_x1[1];
  (**(code **)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + 0x10))();
  std::__ndk1::__tree<long_long,std::__ndk1::greater<long_long>,std::__ndk1::allocator<long_long>>::
  destroy((__tree<long_long,std::__ndk1::greater<long_long>,std::__ndk1::allocator<long_long>> *)
          (this + 0x70),*(__tree_node **)(this + 0x78));
  *(Clipper **)(this + 0x70) = this + 0x78;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  std::__ndk1::__tree<long_long,std::__ndk1::greater<long_long>,std::__ndk1::allocator<long_long>>::
  destroy((__tree<long_long,std::__ndk1::greater<long_long>,std::__ndk1::allocator<long_long>> *)
          (this + 0x70),(__tree_node *)0x0);
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

