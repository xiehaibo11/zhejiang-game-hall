
/* cocos2d::BatchSprite3D::getDepth() */

void __thiscall cocos2d::BatchSprite3D::getDepth(BatchSprite3D *this)

{
  long lVar1;
  long lVar2;
  Camera *this_00;
  undefined4 uVar3;
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(*(long *)(this + 0x338) + 0x280) != '\0') {
    (**(code **)(*(long *)this + 0x430))(aMStack_68,this);
    lVar2 = Camera::getVisitingCamera();
    if (lVar2 != 0) {
      this_00 = (Camera *)Camera::getVisitingCamera();
      uVar3 = Camera::getDepthInView(this_00,aMStack_68);
      *(undefined4 *)(this + 0x2fc) = uVar3;
    }
    Mat4::~Mat4(aMStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(this + 0x2fc));
}

