
/* fairygui::GLoader::loadFromPackage() */

void __thiscall fairygui::GLoader::loadFromPackage(GLoader *this)

{
  int iVar1;
  GLoader GVar2;
  long lVar3;
  PackageItem *pPVar4;
  Ref *pRVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined **local_70;
  GLoader *pGStack_68;
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pPVar4 = (PackageItem *)UIPackage::getItemByURL((basic_string *)(this + 0x1d8));
  *(PackageItem **)(this + 0x208) = pPVar4;
  if (pPVar4 == (PackageItem *)0x0) goto LAB_00a7f3f8;
  pPVar4 = (PackageItem *)PackageItem::getBranch(pPVar4);
                    /* try { // try from 00a7f258 to 00b7f2b3 has its CatchHandler @ 00a7f358 */
  *(PackageItem **)(this + 0x208) = pPVar4;
  uVar8 = NEON_scvtf(*(undefined8 *)(pPVar4 + 0x68),4);
  *(undefined8 *)(this + 0x78) = uVar8;
  pPVar4 = (PackageItem *)PackageItem::getHighResolution(pPVar4);
  *(PackageItem **)(this + 0x208) = pPVar4;
  PackageItem::load(pPVar4);
  lVar6 = *(long *)(this + 0x208);
  iVar1 = *(int *)(lVar6 + 0x30);
  if (iVar1 == 3) {
    lVar6 = UIPackage::createObjectFromURL((basic_string *)(this + 0x1d8));
                    /* try { // try from 00a7f314 to 00b7f373 has its CatchHandler @ 00a7f1bc */
    if ((lVar6 == 0) ||
       (pRVar5 = (Ref *)__dynamic_cast(lVar6,&GObject::typeinfo,&GComponent::typeinfo,0),
       pRVar5 == (Ref *)0x0)) goto LAB_00a7f3f8;
    *(Ref **)(this + 0x228) = pRVar5;
    cocos2d::Ref::retain(pRVar5);
    local_70 = &PTR_FUN_016a5ea8;
    pGStack_68 = this;
    local_50 = (long *)&local_70;
                    /* catch() { ... } // from try @ 00a7f210 with catch @ 00a7f354
                       catch() { ... } // from try @ 00a7f2e8 with catch @ 00a7f354 */
                    /* catch() { ... } // from try @ 00a7f258 with catch @ 00a7f358
                       catch() { ... } // from try @ 00a7f300 with catch @ 00a7f358 */
    UIEventDispatcher::addEventListener
              (*(UIEventDispatcher **)(this + 0x228),0x15,(function *)&local_70,
               (EventTag *)&EventTag::None);
    if (&local_70 == (undefined ***)local_50) {
      pcVar7 = *(code **)(*local_50 + 0x20);
LAB_00a7f3d4:
      (*pcVar7)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar7 = *(code **)(*local_50 + 0x28);
      goto LAB_00a7f3d4;
    }
    (**(code **)(**(long **)(this + 0xa8) + 0x208))
              (*(long **)(this + 0xa8),*(undefined8 *)(*(long *)(this + 0x228) + 0xa8));
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(this + 0x210) = 2;
    if (*(ActionMovieClip **)(this + 0x230) == (ActionMovieClip *)0x0) {
      pRVar5 = (Ref *)ActionMovieClip::create
                                (*(Animation **)(lVar6 + 200),*(float *)(lVar6 + 0xd4),false);
      *(Ref **)(this + 0x230) = pRVar5;
      cocos2d::Ref::retain(pRVar5);
      GVar2 = this[0x214];
    }
    else {
      ActionMovieClip::setAnimation
                (*(ActionMovieClip **)(this + 0x230),*(Animation **)(lVar6 + 200),
                 *(float *)(lVar6 + 0xd4),false);
      GVar2 = this[0x214];
                    /* try { // try from 00a7f2e8 to 00b7f2fb has its CatchHandler @ 00a7f354 */
    }
    if (GVar2 == (GLoader)0x0) {
      ActionMovieClip::setFrame(*(ActionMovieClip **)(this + 0x230),*(int *)(this + 0x218));
    }
    else {
      (**(code **)(**(long **)(this + 0x220) + 0x3a8))
                (*(long **)(this + 0x220),*(undefined8 *)(this + 0x230));
                    /* try { // try from 00a7f300 to 00b7f313 has its CatchHandler @ 00a7f358 */
    }
  }
  else {
    if (iVar1 != 0) {
      if (this[0x1f8] != (GLoader)0x0) {
        GObject::setSize((GObject *)this,(float)*(int *)(lVar6 + 0x68),(float)*(int *)(lVar6 + 0x6c)
                         ,false);
      }
      goto LAB_00a7f3f8;
    }
    *(undefined4 *)(this + 0x210) = 1;
    (**(code **)(**(long **)(this + 0x220) + 0x610))
              (*(long **)(this + 0x220),*(undefined8 *)(lVar6 + 0xb8));
                    /* try { // try from 00a7f2b4 to 00b7f2e7 has its CatchHandler @ 00a7f1bc */
    if (*(Rect **)(*(long *)(this + 0x208) + 0xa8) != (Rect *)0x0) {
      FUISprite::setScale9Grid
                (*(FUISprite **)(this + 0x220),*(Rect **)(*(long *)(this + 0x208) + 0xa8));
    }
  }
  updateLayout(this);
LAB_00a7f3f8:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

