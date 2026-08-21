
/* fairygui::GLoader::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void __thiscall fairygui::GLoader::setProp(GLoader *this,undefined4 param_2,Value *param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  Action *pAVar6;
  ActionMovieClip *this_00;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(param_2) {
  case 2:
    uVar3 = cocos2d::Value::asUnsignedInt(param_3);
    uVar5 = ToolSet::intToColor(uVar3);
                    /* try { // try from 00a7f730 to 00b7f763 has its CatchHandler @ 00a7f638 */
    local_2e = (undefined1)((ulong)uVar5 >> 0x10);
    local_30 = (undefined2)uVar5;
    (**(code **)(**(long **)(this + 0x220) + 0x4c0))(*(long **)(this + 0x220),&local_30);
    break;
  default:
    GObject::setProp(this);
    break;
  case 4:
    bVar2 = cocos2d::Value::asBool(param_3);
                    /* try { // try from 00a7f790 to 00b7f7ef has its CatchHandler @ 00a7f638 */
    if (this[0x214] == (GLoader)(bVar2 & 1)) break;
    this[0x214] = (GLoader)(bVar2 & 1);
    if (*(long *)(this + 0x230) != 0) {
      pAVar6 = *(Action **)(this + 0x220);
      if ((bVar2 & 1) == 0) {
        cocos2d::Node::stopAction(pAVar6);
      }
      else {
        (**(code **)(*(long *)pAVar6 + 0x3a8))(pAVar6);
      }
    }
    goto LAB_00a7f800;
  case 5:
    iVar4 = cocos2d::Value::asInt(param_3);
                    /* try { // try from 00a7f764 to 00b7f777 has its CatchHandler @ 00a7f7d0 */
    if (*(int *)(this + 0x218) == iVar4) break;
    *(int *)(this + 0x218) = iVar4;
    if (*(ActionMovieClip **)(this + 0x230) != (ActionMovieClip *)0x0) {
                    /* try { // try from 00a7f77c to 00b7f78f has its CatchHandler @ 00a7f7d4 */
      ActionMovieClip::setFrame(*(ActionMovieClip **)(this + 0x230),iVar4);
    }
LAB_00a7f800:
    GObject::updateGear((GObject *)this,5);
    break;
  case 6:
    this_00 = *(ActionMovieClip **)(this + 0x230);
    if (this_00 != (ActionMovieClip *)0x0) {
                    /* catch() { ... } // from try @ 00a7f68c with catch @ 00a7f7d0
                       catch() { ... } // from try @ 00a7f764 with catch @ 00a7f7d0 */
      fVar8 = (float)cocos2d::Value::asFloat(param_3);
                    /* catch() { ... } // from try @ 00a7f6d4 with catch @ 00a7f7d4
                       catch() { ... } // from try @ 00a7f77c with catch @ 00a7f7d4 */
      ActionMovieClip::advance(this_00,fVar8);
    }
    break;
  case 7:
    lVar7 = *(long *)(this + 0x230);
    if (lVar7 != 0) {
      uVar9 = cocos2d::Value::asFloat(param_3);
      *(undefined4 *)(lVar7 + 0x68) = uVar9;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

