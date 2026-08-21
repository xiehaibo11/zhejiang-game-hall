
/* fairygui::GMovieClip::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void __thiscall fairygui::GMovieClip::setProp(GMovieClip *this,undefined4 param_2,Value *param_3)

{
  Action *pAVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ActionMovieClip *this_00;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  switch(param_2) {
  case 2:
    uVar4 = cocos2d::Value::asUnsignedInt(param_3);
    uVar6 = ToolSet::intToColor(uVar4);
    local_2e = (undefined1)((ulong)uVar6 >> 0x10);
    local_30 = (undefined2)uVar6;
    (**(code **)(**(long **)(this + 0x1d8) + 0x4c0))(*(long **)(this + 0x1d8),&local_30);
    break;
  default:
    GObject::setProp(this);
    break;
  case 4:
    bVar3 = cocos2d::Value::asBool(param_3);
    if (this[0x1e8] != (GMovieClip)(bVar3 & 1)) {
      pAVar1 = *(Action **)(this + 0x1d8);
      this[0x1e8] = (GMovieClip)(bVar3 & 1);
      if ((bVar3 & 1) == 0) {
        cocos2d::Node::stopAction(pAVar1);
      }
      else {
        (**(code **)(*(long *)pAVar1 + 0x3a8))(pAVar1,*(undefined8 *)(this + 0x1e0));
      }
    }
    break;
  case 5:
    iVar5 = cocos2d::Value::asInt(param_3);
    ActionMovieClip::setFrame(*(ActionMovieClip **)(this + 0x1e0),iVar5);
    break;
  case 6:
    this_00 = *(ActionMovieClip **)(this + 0x1e0);
    fVar8 = (float)cocos2d::Value::asFloat(param_3);
    ActionMovieClip::advance(this_00,fVar8);
    break;
  case 7:
    lVar7 = *(long *)(this + 0x1e0);
    uVar9 = cocos2d::Value::asFloat(param_3);
    *(undefined4 *)(lVar7 + 0x68) = uVar9;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

