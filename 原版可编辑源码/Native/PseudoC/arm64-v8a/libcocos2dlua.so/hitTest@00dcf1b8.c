
/* cocos2d::ui::TextField::hitTest(cocos2d::Vec2 const&, cocos2d::Camera const*, cocos2d::Vec3*)
   const */

uint cocos2d::ui::TextField::hitTest(Vec2 *param_1,Camera *param_2,Vec3 *param_3)

{
  long lVar1;
  uint uVar2;
  Size *pSVar3;
  float *pfVar4;
  Rect aRStack_90 [16];
  float local_80;
  float fStack_7c;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[0x500] == '\0') {
    uVar2 = Widget::hitTest((Widget *)param_1,param_2,(Camera *)param_3,(Vec3 *)0x0);
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00dcf2cc;
  }
  else {
    pSVar3 = (Size *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
    Size::Size((Size *)&local_80,pSVar3);
    pfVar4 = (float *)(**(code **)(*(long *)param_1 + 0x150))(param_1);
    Rect::Rect(aRStack_90,*pfVar4 * (local_80 - *(float *)(param_1 + 0x4f8)),
               pfVar4[1] * (fStack_7c - *(float *)(param_1 + 0x4fc)),*(float *)(param_1 + 0x4f8),
               *(float *)(param_1 + 0x4fc));
    (**(code **)(*(long *)param_1 + 0x448))(aMStack_78,param_1);
    uVar2 = isScreenPointInRect(param_2,(Camera *)param_3,aMStack_78,aRStack_90,(Vec3 *)0x0);
    Mat4::~Mat4(aMStack_78);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00dcf2cc:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar2 & 1;
}

