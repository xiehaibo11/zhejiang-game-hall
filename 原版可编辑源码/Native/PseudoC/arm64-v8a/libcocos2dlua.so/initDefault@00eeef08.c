
/* cocos2d::Camera::initDefault() */

undefined8 __thiscall cocos2d::Camera::initDefault(Camera *this)

{
  long lVar1;
  Director *pDVar2;
  Size *pSVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_70 [16];
  Vec3 aVStack_60 [16];
  Vec3 aVStack_50 [16];
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pDVar2 = (Director *)Director::getInstance();
  pSVar3 = (Size *)Director::getWinSize(pDVar2);
  Size::Size((Size *)&local_40,pSVar3);
  lVar4 = Director::getInstance();
  if (*(int *)(lVar4 + 0x194) == 1) {
    pDVar2 = (Director *)Director::getInstance();
    fVar5 = (float)Director::getZEye(pDVar2);
    fVar6 = fVar5 + fStack_3c * 0.5;
    *(undefined4 *)(this + 0x410) = 0x42700000;
    *(undefined4 *)(this + 0x420) = 0x41200000;
    *(float *)(this + 0x41c) = local_40 / fStack_3c;
    *(float *)(this + 0x424) = fVar6;
    Mat4::createPerspective(60.0,local_40 / fStack_3c,10.0,fVar6,(Mat4 *)(this + 0x300));
    this[0x428] = (Camera)0x1;
    this[0x494] = (Camera)0x1;
    *(undefined4 *)(this + 0x40c) = 1;
    Vec3::Vec3(aVStack_50,local_40 * 0.5,fStack_3c * 0.5,fVar5);
    Vec3::Vec3(aVStack_60,local_40 * 0.5,fStack_3c * 0.5,0.0);
    Vec3::Vec3(aVStack_70,0.0,1.0,0.0);
    (**(code **)(*(long *)this + 0xf8))(this,aVStack_50);
    (**(code **)(*(long *)this + 0x530))(this,aVStack_60,aVStack_70);
  }
  else if (*(int *)(lVar4 + 0x194) == 0) {
    *(undefined8 *)(this + 0x420) = 0x44800000c4800000;
    *(float *)(this + 0x414) = local_40;
    *(float *)(this + 0x418) = fStack_3c;
    Mat4::createOrthographicOffCenter
              (0.0,local_40,0.0,fStack_3c,-1024.0,1024.0,(Mat4 *)(this + 0x300));
    this[0x428] = (Camera)0x1;
    this[0x494] = (Camera)0x1;
    *(undefined4 *)(this + 0x40c) = 2;
    Vec3::Vec3(aVStack_50,0.0,0.0,0.0);
    (**(code **)(*(long *)this + 0xf8))(this,aVStack_50);
    Vec3::Vec3(aVStack_50,0.0,0.0,0.0);
    (**(code **)(*(long *)this + 400))(this,aVStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

