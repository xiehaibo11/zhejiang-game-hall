
/* fairygui::GComponent::constructFromResource(std::__ndk1::vector<fairygui::GObject*,
   std::__ndk1::allocator<fairygui::GObject*> >*, int) */

void __thiscall
fairygui::GComponent::constructFromResource(GComponent *this,vector *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  PackageItem *pPVar11;
  ulong uVar12;
  ScrollPane *this_00;
  GController *pGVar13;
  basic_string *pbVar14;
  UIPackage *this_01;
  PackageItem *pPVar15;
  basic_string *pbVar16;
  long lVar17;
  PixelHitTest *this_02;
  PixelHitTest *pPVar18;
  Transition *this_03;
  undefined8 *puVar19;
  ulong uVar20;
  ByteBuffer *this_04;
  long *plVar21;
  Size *pSVar22;
  long lVar23;
  Ref *pRVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  Ref *local_80;
  long local_78;
  
                    /* try { // try from 00a730a8 to 00b730db has its CatchHandler @ 00a7312c */
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  pPVar11 = (PackageItem *)PackageItem::getBranch(*(PackageItem **)(this + 0xb0));
                    /* try { // try from 00a730dc to 00b73177 has its CatchHandler @ 00a72e9c */
  if (pPVar11[0x110] == (PackageItem)0x0) {
    pPVar11[0x110] = (PackageItem)0x1;
    TranslationHelper::translateComponent(pPVar11);
  }
  this_04 = *(ByteBuffer **)(pPVar11 + 0x88);
  ByteBuffer::seek(this_04,0,0);
  this[0x98] = (GComponent)0x1;
  iVar9 = ByteBuffer::readInt(this_04);
  pSVar22 = (Size *)(this + 0x78);
  *(float *)pSVar22 = (float)iVar9;
                    /* catch() { ... } // from try @ 00a73090 with catch @ 00a73128 */
  iVar9 = ByteBuffer::readInt(this_04);
                    /* catch() { ... } // from try @ 00a730a8 with catch @ 00a7312c */
  *(float *)(this + 0x7c) = (float)iVar9;
  cocos2d::Size::operator=((Size *)(this + 0x80),pSVar22);
  GObject::setSize((GObject *)this,*(float *)pSVar22,*(float *)(this + 0x7c),false);
  uVar12 = ByteBuffer::readBool(this_04);
                    /* catch() { ... } // from try @ 00a7305c with catch @ 00a7315c */
  if ((uVar12 & 1) != 0) {
    iVar9 = ByteBuffer::readInt(this_04);
    *(float *)(this + 0x88) = (float)iVar9;
    iVar9 = ByteBuffer::readInt(this_04);
    *(float *)(this + 0x90) = (float)iVar9;
    iVar9 = ByteBuffer::readInt(this_04);
    *(float *)(this + 0x8c) = (float)iVar9;
    iVar9 = ByteBuffer::readInt(this_04);
    *(float *)(this + 0x94) = (float)iVar9;
  }
  uVar12 = ByteBuffer::readBool(this_04);
  if ((uVar12 & 1) != 0) {
    fVar26 = (float)ByteBuffer::readFloat(this_04);
    fVar27 = (float)ByteBuffer::readFloat(this_04);
    bVar6 = ByteBuffer::readBool(this_04);
    GObject::setPivot((GObject *)this,fVar26,fVar27,(bool)(bVar6 & 1));
  }
  uVar12 = ByteBuffer::readBool(this_04);
  if ((uVar12 & 1) != 0) {
    iVar9 = ByteBuffer::readInt(this_04);
                    /* try { // try from 00a731f8 to 00b7324f has its CatchHandler @ 00a731f8
                       catch() { ... } // from try @ 00a731f8 with catch @ 00a731f8
                       catch() { ... } // from try @ 00a7328c with catch @ 00a731f8
                       catch() { ... } // from try @ 00a7330c with catch @ 00a731f8
                       catch() { ... } // from try @ 00a7336c with catch @ 00a731f8 */
    *(float *)(this + 0x23c) = (float)iVar9;
    iVar9 = ByteBuffer::readInt(this_04);
    *(float *)(this + 0x244) = (float)iVar9;
    iVar9 = ByteBuffer::readInt(this_04);
    *(float *)(this + 0x238) = (float)iVar9;
    iVar9 = ByteBuffer::readInt(this_04);
    *(float *)(this + 0x240) = (float)iVar9;
  }
  cVar7 = ByteBuffer::readByte(this_04);
  if (cVar7 == '\x02') {
    uVar3 = *(undefined4 *)(this_04 + 0x1c);
                    /* try { // try from 00a73250 to 00b7328b has its CatchHandler @ 00a733ac */
    ByteBuffer::seek(this_04,0,7);
    this_00 = operator_new(0x138);
    ScrollPane::ScrollPane(this_00,this);
    *(ScrollPane **)(this + 0x230) = this_00;
    ScrollPane::setup(this_00,this_04);
    *(undefined4 *)(this_04 + 0x1c) = uVar3;
  }
  else {
    setupOverflow(this,(int)cVar7);
  }
                    /* try { // try from 00a7328c to 00b732af has its CatchHandler @ 00a731f8 */
  uVar12 = ByteBuffer::readBool(this_04);
  if ((uVar12 & 1) != 0) {
    *(int *)(this_04 + 0x1c) = *(int *)(this_04 + 0x1c) + 8;
  }
                    /* try { // try from 00a732b0 to 00b7330b has its CatchHandler @ 00a733b0 */
  this[0x1d8] = (GComponent)0x1;
  ByteBuffer::seek(this_04,0,1);
  sVar8 = ByteBuffer::readShort(this_04);
  iVar9 = (int)sVar8;
  if (0 < iVar9) {
    do {
      sVar8 = ByteBuffer::readShort(this_04);
      iVar10 = *(int *)(this_04 + 0x1c);
      pGVar13 = operator_new(0xc0);
      GController::GController(pGVar13);
      puVar19 = *(undefined8 **)(this + 0x200);
                    /* try { // try from 00a73340 to 00b73353 has its CatchHandler @ 00a733ac */
      local_80 = (Ref *)pGVar13;
      if (puVar19 == *(undefined8 **)(this + 0x208)) {
        std::__ndk1::vector<fairygui::GController*,std::__ndk1::allocator<fairygui::GController*>>::
        __push_back_slow_path<fairygui::GController*const&>
                  ((vector<fairygui::GController*,std::__ndk1::allocator<fairygui::GController*>> *)
                   (this + 0x1f8),(GController **)&local_80);
      }
      else {
        *puVar19 = pGVar13;
        *(undefined8 **)(this + 0x200) = puVar19 + 1;
      }
      cocos2d::Ref::retain(local_80);
      *(GComponent **)(pGVar13 + 0x68) = this;
      GController::setup(pGVar13,this_04);
      cocos2d::Ref::release((Ref *)pGVar13);
      iVar9 = iVar9 + -1;
      *(int *)(this_04 + 0x1c) = iVar10 + sVar8;
                    /* try { // try from 00a7330c to 00b7333f has its CatchHandler @ 00a731f8 */
    } while (iVar9 != 0);
  }
                    /* try { // try from 00a73358 to 00b7336b has its CatchHandler @ 00a733b0 */
  ByteBuffer::seek(this_04,0,2);
                    /* try { // try from 00a7336c to 00b733cb has its CatchHandler @ 00a731f8 */
  sVar8 = ByteBuffer::readShort(this_04);
  uVar4 = (uint)sVar8;
  uVar12 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    uVar20 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_2 << 3;
    uVar25 = uVar12;
    do {
      sVar8 = ByteBuffer::readShort(this_04);
      iVar9 = *(int *)(this_04 + 0x1c);
      if (param_1 == (vector *)0x0) {
        ByteBuffer::seek(this_04,iVar9,0);
        cVar7 = ByteBuffer::readByte(this_04);
        pbVar16 = (basic_string *)ByteBuffer::readS(this_04);
        pbVar14 = (basic_string *)ByteBuffer::readS(this_04);
        uVar1 = (ulong)((byte)*pbVar16 >> 1);
        if (((byte)*pbVar16 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar16 + 8);
        }
        if (uVar1 != 0) {
          uVar1 = (ulong)((byte)*pbVar14 >> 1);
          if (((byte)*pbVar14 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar14 + 8);
          }
          if (uVar1 == 0) {
            this_01 = *(UIPackage **)(pPVar11 + 0x28);
          }
          else {
            this_01 = (UIPackage *)UIPackage::getById(pbVar14);
          }
          if ((this_01 != (UIPackage *)0x0) &&
             (pPVar15 = (PackageItem *)UIPackage::getItem(this_01,pbVar16),
             pPVar15 != (PackageItem *)0x0)) {
            pRVar24 = (Ref *)UIObjectFactory::newObject(pPVar15);
            (**(code **)(*(long *)pRVar24 + 0x40))();
            goto LAB_00a73488;
          }
        }
        pRVar24 = (Ref *)UIObjectFactory::newObject((int)cVar7);
      }
      else {
        pRVar24 = *(Ref **)(*(long *)param_1 + uVar20);
      }
LAB_00a73488:
      pRVar24[0x98] = (Ref)0x1;
      (**(code **)(*(long *)pRVar24 + 0xa0))(pRVar24,this_04,iVar9);
      *(GComponent **)(pRVar24 + 0xa0) = this;
      puVar19 = *(undefined8 **)(this + 0x1e8);
      local_80 = pRVar24;
      if (puVar19 == *(undefined8 **)(this + 0x1f0)) {
                    /* try { // try from 00a734bc to 00b7350f has its CatchHandler @ 00a734bc
                       catch() { ... } // from try @ 00a734bc with catch @ 00a734bc
                       catch() { ... } // from try @ 00a735bc with catch @ 00a734bc
                       catch() { ... } // from try @ 00a73620 with catch @ 00a734bc */
        std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::
        __push_back_slow_path<fairygui::GObject*const&>
                  ((vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *)
                   (this + 0x1e0),(GObject **)&local_80);
      }
      else {
        *puVar19 = pRVar24;
        *(undefined8 **)(this + 0x1e8) = puVar19 + 1;
      }
      cocos2d::Ref::retain(local_80);
                    /* catch() { ... } // from try @ 00a73250 with catch @ 00a733ac
                       catch() { ... } // from try @ 00a73340 with catch @ 00a733ac */
      uVar25 = uVar25 - 1;
                    /* catch() { ... } // from try @ 00a732b0 with catch @ 00a733b0
                       catch() { ... } // from try @ 00a73358 with catch @ 00a733b0 */
      uVar20 = uVar20 + 8;
      *(int *)(this_04 + 0x1c) = iVar9 + sVar8;
    } while (uVar25 != 0);
  }
  ByteBuffer::seek(this_04,0,3);
  Relations::setup(*(Relations **)(this + 0x138),this_04,true);
  ByteBuffer::seek(this_04,0,2);
  *(int *)(this_04 + 0x1c) = *(int *)(this_04 + 0x1c) + 2;
  if ((int)uVar4 < 1) {
    ByteBuffer::seek(this_04,0,2);
    *(int *)(this_04 + 0x1c) = *(int *)(this_04 + 0x1c) + 2;
  }
  else {
                    /* try { // try from 00a73510 to 00b73527 has its CatchHandler @ 00a73668 */
    uVar20 = 0;
    do {
      sVar8 = ByteBuffer::readShort(this_04);
      iVar9 = *(int *)(this_04 + 0x1c);
      ByteBuffer::seek(this_04,iVar9,3);
                    /* try { // try from 00a73534 to 00b7354f has its CatchHandler @ 00a73664 */
      Relations::setup(*(Relations **)(*(long *)(*(long *)(this + 0x1e0) + uVar20 * 8) + 0x138),
                       this_04,false);
      uVar20 = uVar20 + 1;
      *(int *)(this_04 + 0x1c) = iVar9 + sVar8;
    } while (uVar12 != uVar20);
                    /* try { // try from 00a7355c to 00b7358f has its CatchHandler @ 00a7366c */
    ByteBuffer::seek(this_04,0,2);
    *(int *)(this_04 + 0x1c) = *(int *)(this_04 + 0x1c) + 2;
    if (0 < (int)uVar4) {
      uVar20 = 0;
      do {
        sVar8 = ByteBuffer::readShort(this_04);
        iVar9 = *(int *)(this_04 + 0x1c);
        plVar21 = *(long **)(*(long *)(this + 0x1e0) + uVar20 * 8);
                    /* try { // try from 00a735a4 to 00b735bb has its CatchHandler @ 00a73660 */
        (**(code **)(*plVar21 + 0xa8))(plVar21,this_04);
        uVar20 = uVar20 + 1;
        *(undefined1 *)(plVar21 + 0x13) = 0;
                    /* try { // try from 00a735bc to 00b735f3 has its CatchHandler @ 00a734bc */
        *(int *)(this_04 + 0x1c) = iVar9 + sVar8;
      } while (uVar12 != uVar20);
    }
  }
                    /* try { // try from 00a735f4 to 00b73607 has its CatchHandler @ 00a73668 */
  ByteBuffer::seek(this_04,0,4);
  *(int *)(this_04 + 0x1c) = *(int *)(this_04 + 0x1c) + 2;
  bVar6 = ByteBuffer::readBool(this_04);
                    /* try { // try from 00a7360c to 00b7361f has its CatchHandler @ 00a7366c */
  this[0x270] = (GComponent)(bVar6 & 1);
  sVar8 = ByteBuffer::readShort(this_04);
                    /* try { // try from 00a73620 to 00b73687 has its CatchHandler @ 00a734bc */
  if (sVar8 != -1) {
    bVar6 = ByteBuffer::readBool(this_04);
    setMask(this,*(Node **)(*(long *)(*(long *)(this + 0x1e0) + (long)sVar8 * 8) + 0xa8),
            (bool)(bVar6 & 1));
  }
  pbVar16 = (basic_string *)ByteBuffer::readS(this_04);
                    /* catch() { ... } // from try @ 00a735a4 with catch @ 00a73660 */
  iVar9 = ByteBuffer::readInt(this_04);
                    /* catch() { ... } // from try @ 00a73534 with catch @ 00a73664 */
                    /* catch() { ... } // from try @ 00a73510 with catch @ 00a73668
                       catch() { ... } // from try @ 00a735f4 with catch @ 00a73668 */
                    /* catch() { ... } // from try @ 00a7355c with catch @ 00a7366c
                       catch() { ... } // from try @ 00a7360c with catch @ 00a7366c */
  iVar10 = ByteBuffer::readInt(this_04);
  uVar12 = (ulong)((byte)*pbVar16 >> 1);
  if (((byte)*pbVar16 & 1) != 0) {
    uVar12 = *(ulong *)(pbVar16 + 8);
  }
  if (((uVar12 != 0) &&
      (lVar17 = UIPackage::getItem(*(UIPackage **)(pPVar11 + 0x28),pbVar16), lVar17 != 0)) &&
     (*(long *)(lVar17 + 0xc0) != 0)) {
    this_02 = operator_new(0x20);
    PixelHitTest::PixelHitTest(this_02,*(PixelHitTestData **)(lVar17 + 0xc0),iVar9,iVar10);
    pPVar18 = *(PixelHitTest **)(this + 0x268);
    if (pPVar18 != this_02) {
      if (pPVar18 != (PixelHitTest *)0x0) {
        operator_delete(pPVar18);
      }
      *(PixelHitTest **)(this + 0x268) = this_02;
    }
  }
  ByteBuffer::seek(this_04,0,5);
  sVar8 = ByteBuffer::readShort(this_04);
  iVar9 = (int)sVar8;
  if (0 < iVar9) {
    do {
      sVar8 = ByteBuffer::readShort(this_04);
      iVar10 = *(int *)(this_04 + 0x1c);
      this_03 = operator_new(0xe0);
      Transition::Transition(this_03,this);
      Transition::setup(this_03,this_04);
      puVar19 = *(undefined8 **)(this + 0x218);
      local_80 = (Ref *)this_03;
      if (puVar19 == *(undefined8 **)(this + 0x220)) {
        std::__ndk1::vector<fairygui::Transition*,std::__ndk1::allocator<fairygui::Transition*>>::
        __push_back_slow_path<fairygui::Transition*const&>
                  ((vector<fairygui::Transition*,std::__ndk1::allocator<fairygui::Transition*>> *)
                   (this + 0x210),(Transition **)&local_80);
      }
      else {
        *puVar19 = this_03;
        *(undefined8 **)(this + 0x218) = puVar19 + 1;
      }
      cocos2d::Ref::retain(local_80);
      cocos2d::Ref::release((Ref *)this_03);
      iVar9 = iVar9 + -1;
      *(int *)(this_04 + 0x1c) = iVar10 + sVar8;
    } while (iVar9 != 0);
  }
  puVar2 = *(undefined8 **)(this + 0x200);
  for (puVar19 = *(undefined8 **)(this + 0x1f8); puVar19 != puVar2; puVar19 = puVar19 + 1) {
    lVar17 = *(long *)(this + 0x1e0);
    pGVar13 = (GController *)*puVar19;
    *(GController **)(this + 0x278) = pGVar13;
    if (0 < *(long *)(this + 0x1e8) - lVar17) {
      lVar23 = 0;
      do {
        plVar21 = *(long **)(lVar17 + lVar23 * 8);
        (**(code **)(*plVar21 + 0x78))(plVar21,pGVar13);
        lVar17 = *(long *)(this + 0x1e0);
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(long *)(this + 0x1e8) - lVar17 >> 3);
    }
    *(undefined8 *)(this + 0x278) = 0;
    GController::runActions(pGVar13);
  }
  this[0x1d8] = (GComponent)0x0;
  this[0x98] = (GComponent)0x0;
  buildNativeDisplayList(this);
  if ((*(long *)(this + 0x230) != 0) || (this[0x259] != (GComponent)0x0)) {
    this[600] = (GComponent)0x1;
    lVar17 = cocos2d::Director::getInstance();
    uVar12 = cocos2d::Scheduler::isScheduled
                       (*(_func_void_float **)(lVar17 + 0xa0),(Ref *)__selector_doUpdateBounds);
    if ((uVar12 & 1) == 0) {
      lVar17 = cocos2d::Director::getInstance();
      cocos2d::Scheduler::schedule
                (*(Scheduler **)(lVar17 + 0xa0),__selector_doUpdateBounds,(Ref *)0x0,0.0,
                 SUB81(this,0));
    }
  }
  if (*(int *)(pPVar11 + 0x34) != 9) {
    (**(code **)(*(long *)this + 0xd8))(this,this_04);
  }
  (**(code **)(*(long *)this + 0xe0))(this);
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

