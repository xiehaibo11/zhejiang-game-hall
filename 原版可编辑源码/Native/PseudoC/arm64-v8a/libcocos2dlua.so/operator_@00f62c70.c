
/* cocos2d::PolygonInfo::TEMPNAMEPLACEHOLDERVALUE(cocos2d::PolygonInfo const&) */

PolygonInfo * __thiscall cocos2d::PolygonInfo::operator=(PolygonInfo *this,PolygonInfo *param_1)

{
  Vec3 *pVVar1;
  int iVar2;
  undefined1 auVar3 [16];
  PolygonInfo *pPVar4;
  Vec3 *__dest;
  void *__dest_00;
  ulong uVar5;
  ulong uVar6;
  Vec3 *this_00;
  int iVar7;
  
  if (this != param_1) {
    if (this[0x18] != (PolygonInfo)0x0) {
      if (*(void **)this != (void *)0x0) {
        operator_delete__(*(void **)this);
        *(undefined8 *)this = 0;
      }
      if (*(void **)(this + 8) != (void *)0x0) {
        operator_delete__(*(void **)(this + 8));
        *(undefined8 *)(this + 8) = 0;
      }
    }
    uVar5 = (ulong)((byte)param_1[0x30] >> 1);
    pPVar4 = param_1 + 0x31;
    if (((byte)param_1[0x30] & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x38);
      pPVar4 = *(PolygonInfo **)(param_1 + 0x40);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),(char *)pPVar4,uVar5);
    this[0x18] = (PolygonInfo)0x1;
    Rect::operator=((Rect *)(this + 0x1c),(Rect *)(param_1 + 0x1c));
    iVar7 = *(int *)(param_1 + 0x10);
    uVar6 = (ulong)iVar7;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    uVar5 = (uVar6 + (long)iVar7 * 2) * 8;
    if (SUB168(auVar3 * ZEXT816(0x18),8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    if ((__dest != (Vec3 *)0x0) && (iVar7 != 0)) {
      this_00 = __dest;
      do {
        Vec3::Vec3(this_00);
        Color4B::Color4B((Color4B *)(this_00 + 0xc));
        pVVar1 = this_00 + 0x18;
        *(undefined4 *)(this_00 + 0x10) = 0;
        *(undefined4 *)(this_00 + 0x14) = 0;
        this_00 = pVVar1;
      } while (pVVar1 != __dest + uVar6 * 0x18);
      iVar7 = *(int *)(param_1 + 0x10);
    }
    *(Vec3 **)this = __dest;
    iVar2 = *(int *)(param_1 + 0x14);
    uVar6 = (ulong)iVar2;
    uVar5 = uVar6 * 2;
    if (CARRY8(uVar6,uVar6)) {
      uVar5 = 0xffffffffffffffff;
    }
    __dest_00 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    *(void **)(this + 8) = __dest_00;
    *(int *)(this + 0x10) = iVar7;
    *(int *)(this + 0x14) = iVar2;
    memcpy(__dest,*(void **)param_1,(long)*(int *)(param_1 + 0x10) * 0x18);
    memcpy(__dest_00,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x14) << 1);
  }
                    /* try { // try from 00f62dc8 to 01062e8b has its CatchHandler @ 00f629f0 */
  return this;
}

