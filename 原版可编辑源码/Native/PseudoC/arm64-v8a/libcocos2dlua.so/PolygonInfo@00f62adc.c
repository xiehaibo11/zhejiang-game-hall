
/* cocos2d::PolygonInfo::PolygonInfo(cocos2d::PolygonInfo const&) */

void __thiscall cocos2d::PolygonInfo::PolygonInfo(PolygonInfo *this,PolygonInfo *param_1)

{
  Vec3 *pVVar1;
  PolygonInfo *pPVar2;
  int iVar3;
  undefined1 auVar4 [16];
  Vec3 *__dest;
  void *__dest_00;
  ulong uVar5;
  int iVar6;
  Vec3 *this_00;
  ulong uVar7;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00f62b08 to 01062dc7 has its CatchHandler @ 00f62e50 */
  this[0x18] = (PolygonInfo)0x1;
  Rect::Rect((Rect *)(this + 0x1c));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (this != param_1) {
    uVar5 = *(ulong *)(param_1 + 0x38);
    pPVar2 = *(PolygonInfo **)(param_1 + 0x40);
    if (((byte)param_1[0x30] & 1) == 0) {
      pPVar2 = param_1 + 0x31;
      uVar5 = (ulong)((byte)param_1[0x30] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),(char *)pPVar2,uVar5);
  }
  this[0x18] = (PolygonInfo)0x1;
  Rect::operator=((Rect *)(this + 0x1c),(Rect *)(param_1 + 0x1c));
  iVar6 = *(int *)(param_1 + 0x10);
  uVar7 = (ulong)iVar6;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7;
  uVar5 = (uVar7 + (long)iVar6 * 2) * 8;
  if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  __dest = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
  if ((__dest != (Vec3 *)0x0) && (iVar6 != 0)) {
    this_00 = __dest;
    do {
      Vec3::Vec3(this_00);
      Color4B::Color4B((Color4B *)(this_00 + 0xc));
      pVVar1 = this_00 + 0x18;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined4 *)(this_00 + 0x14) = 0;
      this_00 = pVVar1;
    } while (pVVar1 != __dest + uVar7 * 0x18);
    iVar6 = *(int *)(param_1 + 0x10);
  }
  *(Vec3 **)this = __dest;
  iVar3 = *(int *)(param_1 + 0x14);
  uVar7 = (ulong)iVar3;
  uVar5 = uVar7 * 2;
  if (CARRY8(uVar7,uVar7)) {
    uVar5 = 0xffffffffffffffff;
  }
  __dest_00 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
  *(void **)(this + 8) = __dest_00;
  *(int *)(this + 0x10) = iVar6;
  *(int *)(this + 0x14) = iVar3;
  memcpy(__dest,*(void **)param_1,(long)*(int *)(param_1 + 0x10) * 0x18);
  memcpy(__dest_00,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x14) << 1);
  return;
}

