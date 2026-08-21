
/* cocostudio::Armature::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocostudio::Armature::draw(Armature *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  Bone *this_00;
  undefined8 uVar5;
  Texture2D *this_01;
  ulong uVar6;
  Armature *pAVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar1 = *(long **)(this + 0x178);
  plVar2 = *(long **)(this + 0x180);
  if (plVar1 != plVar2) {
    plVar10 = (long *)*plVar1;
    do {
      if (plVar10 != (long *)0x0) {
        this_00 = (Bone *)__dynamic_cast(plVar10,&cocos2d::Node::typeinfo,&Bone::typeinfo,0);
        if (this_00 == (Bone *)0x0) {
LAB_00c37e08:
          pcVar9 = *(code **)(*plVar10 + 0x358);
        }
        else {
          plVar10 = (long *)Bone::getDisplayRenderNode(this_00);
          if (plVar10 == (long *)0x0) goto LAB_00c37e24;
          iVar4 = Bone::getDisplayRenderNodeType(this_00);
          if (iVar4 != 1) {
            if (iVar4 != 0) goto LAB_00c37e08;
            (**(code **)(*plVar10 + 0x3e0))(plVar10);
            uVar5 = (**(code **)(*(long *)this_00 + 0x5b0))(this_00);
            if (((int)uVar5 == 1) && ((int)((ulong)uVar5 >> 0x20) == 0x303)) {
              if ((*(int *)(this + 0x360) != 1) || (*(int *)(this + 0x364) != 0x303)) {
LAB_00c37ef4:
                lVar8 = *plVar10;
                pAVar7 = this + 0x360;
                goto LAB_00c37f1c;
              }
              this_01 = (Texture2D *)(**(code **)(*plVar10 + 0x550))(plVar10);
              uVar6 = cocos2d::Texture2D::hasPremultipliedAlpha(this_01);
              if ((uVar6 & 1) != 0) goto LAB_00c37ef4;
              pcVar9 = *(code **)(*plVar10 + 0x5e0);
              pAVar7 = (Armature *)&cocos2d::BlendFunc::ALPHA_NON_PREMULTIPLIED;
            }
            else {
              local_70 = (**(code **)(*(long *)this_00 + 0x5b0))(this_00);
              lVar8 = *plVar10;
              pAVar7 = (Armature *)&local_70;
LAB_00c37f1c:
              pcVar9 = *(code **)(lVar8 + 0x5e0);
            }
            (*pcVar9)(plVar10,pAVar7);
          }
          pcVar9 = *(code **)(*plVar10 + 0x348);
        }
        (*pcVar9)(plVar10,param_1,param_2,param_3);
      }
LAB_00c37e24:
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) break;
      plVar10 = (long *)*plVar1;
    } while( true );
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

