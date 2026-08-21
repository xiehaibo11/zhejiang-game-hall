
/* cocos2d::PointArray::clone() const */

Ref * __thiscall cocos2d::PointArray::clone(PointArray *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  Ref *this_00;
  void *pvVar4;
  void *pvVar5;
  Ref *pRVar6;
  long lVar7;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::vector
            ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)&local_70,
             (vector *)(this + 0x30));
  this_00 = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined ***)this_00 = &PTR__PointArray_016f5788;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f57b0;
    *(undefined8 *)(this_00 + 0x30) = 0;
  }
  pRVar6 = this_00 + 0x30;
  pvVar5 = *(void **)pRVar6;
  pvVar4 = pvVar5;
  if ((ulong)(*(long *)(this_00 + 0x40) - (long)pvVar5 >> 3) < 10) {
    lVar7 = *(long *)(this_00 + 0x38);
    pvVar4 = operator_new(0x50);
    lVar7 = lVar7 - (long)pvVar5;
                    /* try { // try from 00eccb34 to 00fccb9f has its CatchHandler @ 00eccb34
                       catch() { ... } // from try @ 00eccb34 with catch @ 00eccb34
                       catch() { ... } // from try @ 00eccc18 with catch @ 00eccb34 */
    if (0 < lVar7) {
      __memcpy_chk(pvVar4,pvVar5,lVar7,0x50);
      pvVar5 = *(void **)pRVar6;
    }
    *(void **)(this_00 + 0x30) = pvVar4;
    *(long *)(this_00 + 0x38) = (long)pvVar4 + lVar7;
    *(long *)(this_00 + 0x40) = (long)pvVar4 + 0x50;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
      pvVar4 = *(void **)pRVar6;
    }
  }
  uVar3 = local_60;
  pvVar2 = local_68;
  pvVar5 = local_70;
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  local_60 = 0;
  if (pvVar4 != (void *)0x0) {
    *(void **)(this_00 + 0x38) = pvVar4;
    operator_delete(pvVar4);
    *(undefined8 *)pRVar6 = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
  }
                    /* try { // try from 00eccba0 to 00fccbc7 has its CatchHandler @ 00eccc70 */
  *(void **)(this_00 + 0x30) = pvVar5;
  *(void **)(this_00 + 0x38) = pvVar2;
  *(undefined8 *)(this_00 + 0x40) = uVar3;
  Ref::autorelease(this_00);
  if (local_70 != (void *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00eccbd4 to 00fccbdb has its CatchHandler @ 00eccc5c */
                    /* try { // try from 00eccbdc to 00fccc17 has its CatchHandler @ 00eccc60 */
  return this_00;
}

