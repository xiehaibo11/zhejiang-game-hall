
/* fairygui::GMovieClip::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall
fairygui::GMovieClip::setup_beforeAdd(GMovieClip *this,ByteBuffer *param_1,int param_2)

{
  Action *pAVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined4 local_44;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  GObject::setup_beforeAdd((GObject *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,5);
  uVar5 = ByteBuffer::readBool(param_1);
  if ((uVar5 & 1) != 0) {
    local_44 = ByteBuffer::readColor(param_1);
    cocos2d::Color3B::Color3B(aCStack_40,(Color4B *)&local_44);
    (**(code **)(**(long **)(this + 0x1d8) + 0x4c0))(*(long **)(this + 0x1d8),aCStack_40);
  }
  bVar3 = ByteBuffer::readByte(param_1);
  cocos2d::Sprite::setFlippedX(*(Sprite **)(this + 0x1d8),(bVar3 | 2) == 3);
  cocos2d::Sprite::setFlippedY(*(Sprite **)(this + 0x1d8),(bVar3 | 1) == 3);
  iVar4 = ByteBuffer::readInt(param_1);
  ActionMovieClip::setFrame(*(ActionMovieClip **)(this + 0x1e0),iVar4);
  bVar3 = ByteBuffer::readBool(param_1);
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
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

