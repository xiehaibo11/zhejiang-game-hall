
/* void std::__ndk1::vector<std::__ndk1::function<void (float)>,
   std::__ndk1::allocator<std::__ndk1::function<void (float)> >
   >::__push_back_slow_path<std::__ndk1::function<void (float)> const&>(std::__ndk1::function<void
   (float)> const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::function<void(float)>,std::__ndk1::allocator<std::__ndk1::function<void(float)>>>
::__push_back_slow_path<std::__ndk1::function<void(float)>const&>
          (vector<std::__ndk1::function<void(float)>,std::__ndk1::allocator<std::__ndk1::function<void(float)>>>
           *this,function *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  
                    /* try { // try from 009f7908 to 00af790f has its CatchHandler @ 009f7a04 */
                    /* try { // try from 009f7910 to 00af7933 has its CatchHandler @ 009f78a0 */
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar11 = 0x555555555555555;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
                    /* try { // try from 009f7934 to 00af793f has its CatchHandler @ 009f7a04 */
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 009f7940 to 00af7967 has its CatchHandler @ 009f78a0 */
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 4;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar9 = lVar8 * 0x5555555555555556;
    uVar11 = uVar1;
                    /* try { // try from 009f7968 to 00af796f has its CatchHandler @ 009f7a00 */
    if (uVar1 <= uVar9) {
      uVar11 = uVar9;
    }
    if (uVar11 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_009f7980;
    }
  }
                    /* try { // try from 009f7970 to 00af798f has its CatchHandler @ 009f78a0 */
  pvVar2 = operator_new(uVar11 * 0x30);
LAB_009f7980:
  plVar3 = *(long **)(param_1 + 0x20);
  pvVar10 = (void *)((long)pvVar2 + lVar6 * 0x10);
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 009f79b8 to 00af79c3 has its CatchHandler @ 009f7a00 */
    *(undefined8 *)((long)pvVar2 + lVar6 * 0x10 + 0x20) = 0;
  }
  else {
                    /* try { // try from 009f7990 to 00af7997 has its CatchHandler @ 009f7a00 */
    if ((long *)param_1 == plVar3) {
                    /* try { // try from 009f79c4 to 00af7a07 has its CatchHandler @ 009f78a0 */
      *(void **)((long)pvVar2 + lVar6 * 0x10 + 0x20) = pvVar10;
      (**(code **)(*plVar3 + 0x18))(plVar3,pvVar10);
    }
    else {
                    /* try { // try from 009f7998 to 00af79b7 has its CatchHandler @ 009f78a0 */
      uVar4 = (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)((long)pvVar2 + lVar6 * 0x10 + 0x20) = uVar4;
    }
  }
  plVar3 = *(long **)this;
  plVar12 = *(long **)(this + 8);
  pvVar2 = (void *)((long)pvVar2 + uVar11 * 0x30);
  if (plVar12 == plVar3) {
    *(void **)this = pvVar10;
    *(long *)(this + 8) = (long)pvVar10 + 0x30;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    lVar6 = 0;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7968 with catch @ 009f7a00
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7990 with catch @ 009f7a00
                       catch(type#1 @ 00000000) { ... } // from try @ 009f79b8 with catch @ 009f7a00
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7908 with catch @ 009f7a04
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7934 with catch @ 009f7a04
                        */
      lVar8 = *(long *)((long)plVar12 + lVar6 + -0x10);
      if (lVar8 == 0) {
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x10) = 0;
      }
      else if ((long)plVar12 + lVar6 + -0x30 == lVar8) {
        *(long *)((long)pvVar10 + lVar6 + -0x10) = (long)pvVar10 + lVar6 + -0x30;
        plVar5 = *(long **)((long)plVar12 + lVar6 + -0x10);
                    /* try { // try from 009f7a48 to 00af7b43 has its CatchHandler @ 009f7a48
                       catch() { ... } // from try @ 009f7a48 with catch @ 009f7a48
                       catch() { ... } // from try @ 009f7c04 with catch @ 009f7a48 */
        (**(code **)(*plVar5 + 0x18))(plVar5,(long)pvVar10 + lVar6 + -0x30);
      }
      else {
        *(long *)((long)pvVar10 + lVar6 + -0x10) = lVar8;
        *(undefined8 *)((long)plVar12 + lVar6 + -0x10) = 0;
      }
      lVar6 = lVar6 + -0x30;
    } while ((long)plVar3 - (long)plVar12 != lVar6);
    plVar3 = *(long **)this;
    plVar12 = *(long **)(this + 8);
    *(long *)this = (long)pvVar10 + lVar6;
    *(long *)(this + 8) = (long)pvVar10 + 0x30;
    *(void **)(this + 0x10) = pvVar2;
joined_r0x009f7a74:
    if (plVar12 != plVar3) {
      plVar5 = (long *)plVar12[-2];
      plVar12 = plVar12 + -6;
      if (plVar12 != plVar5) goto code_r0x009f7a88;
      pcVar7 = *(code **)(*plVar5 + 0x20);
      goto LAB_009f7aa0;
    }
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  operator_delete(plVar3);
  return;
code_r0x009f7a88:
  if (plVar5 != (long *)0x0) {
    pcVar7 = *(code **)(*plVar5 + 0x28);
LAB_009f7aa0:
    (*pcVar7)();
  }
  goto joined_r0x009f7a74;
}

