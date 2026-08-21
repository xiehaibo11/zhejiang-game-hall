
/* cocos2d::ui::Layout::setBackGroundColorType(cocos2d::ui::Layout::BackGroundColorType) */

void __thiscall cocos2d::ui::Layout::setBackGroundColorType(Layout *this,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(this + 0x568);
  if (iVar1 == param_2) {
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      if (*(long *)(this + 0x580) != 0) {
                    /* try { // try from 00dafd78 to 00eafd87 has its CatchHandler @ 00dafdac */
                    /* try { // try from 00dafd88 to 00eafdeb has its CatchHandler @ 00dafb20 */
        (**(code **)(*(long *)this + 0x550))(this,*(long *)(this + 0x580),1);
                    /* catch() { ... } // from try @ 00dafc3c with catch @ 00dafd8c */
        *(undefined8 *)(this + 0x580) = 0;
      }
      goto LAB_00dafd90;
    }
    if (iVar1 != 0) goto LAB_00dafd90;
    if (*(long *)(this + 0x580) != 0) {
      (**(code **)(*(long *)this + 0x550))(this,*(long *)(this + 0x580),1);
      *(undefined8 *)(this + 0x580) = 0;
    }
  }
  if (*(long *)(this + 0x588) != 0) {
    (**(code **)(*(long *)this + 0x550))(this,*(long *)(this + 0x588),1);
    *(undefined8 *)(this + 0x588) = 0;
  }
LAB_00dafd90:
  *(int *)(this + 0x568) = param_2;
  if (param_2 == 2) {
    plVar2 = (long *)LayerGradient::create();
    *(long **)(this + 0x588) = plVar2;
    (**(code **)(*plVar2 + 0x160))(plVar2,this + 0x80);
                    /* try { // try from 00dafe14 to 00eafe57 has its CatchHandler @ 00dafecc */
    (**(code **)(**(long **)(this + 0x588) + 0x490))(*(long **)(this + 0x588),this[0x5a4]);
    LayerGradient::setStartColor(*(Color3B **)(this + 0x588));
    LayerGradient::setEndColor(*(LayerGradient **)(this + 0x588),(Color3B *)(this + 0x596));
    LayerGradient::setVector(*(LayerGradient **)(this + 0x588),this + 0x59c);
    lVar4 = *(long *)this;
    uVar3 = *(undefined8 *)(this + 0x588);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    plVar2 = (long *)LayerColor::create();
    *(long **)(this + 0x580) = plVar2;
                    /* catch() { ... } // from try @ 00dafbec with catch @ 00dafdac
                       catch() { ... } // from try @ 00dafd78 with catch @ 00dafdac */
    (**(code **)(*plVar2 + 0x160))(plVar2,this + 0x80);
                    /* catch() { ... } // from try @ 00dafc48 with catch @ 00dafdc8 */
    (**(code **)(**(long **)(this + 0x580) + 0x490))(*(long **)(this + 0x580),this[0x5a4]);
    (**(code **)(**(long **)(this + 0x580) + 0x4c0))(*(long **)(this + 0x580),this + 0x590);
    lVar4 = *(long *)this;
    uVar3 = *(undefined8 *)(this + 0x580);
                    /* catch() { ... } // from try @ 00dafe58 with catch @ 00dafdec */
  }
                    /* try { // try from 00dafe58 to 00eaff03 has its CatchHandler @ 00dafdec */
                    /* WARNING: Could not recover jumptable at 0x00dafe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x540))(this,uVar3,0xfffffffe,0xffffffff);
  return;
}

