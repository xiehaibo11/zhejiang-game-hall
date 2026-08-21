
/* cocos2d::PUParticleSystem3D::processParticle(cocos2d::DataPool<cocos2d::Particle3D>&, bool&,
   bool&, float) */

void __thiscall
cocos2d::PUParticleSystem3D::processParticle
          (PUParticleSystem3D *this,DataPool *param_1,bool *param_2,bool *param_3,float param_4)

{
  DataPool *pDVar1;
  long *plVar2;
  ulong uVar3;
  DataPool *pDVar4;
  long lVar5;
  PUParticle3D *pPVar6;
  PUEmitter *this_00;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 in_register_00005004;
  undefined8 uVar10;
  
  uVar10 = CONCAT44(in_register_00005004,param_4);
  getDerivedScale(this);
  pDVar4 = *(DataPool **)(param_1 + 0x10);
  pDVar1 = param_1 + 8;
  *(DataPool **)param_1 = pDVar4;
  if ((pDVar1 != pDVar4) &&
     (pPVar6 = *(PUParticle3D **)(pDVar4 + 0x10), pPVar6 != (PUParticle3D *)0x0)) {
    while( true ) {
      if (param_4 <= *(float *)(pPVar6 + 300)) {
        puVar7 = *(undefined8 **)(pPVar6 + 0x108);
        puVar9 = *(undefined8 **)(pPVar6 + 0x110);
        *(float *)(pPVar6 + 0x134) =
             (*(float *)(pPVar6 + 0x130) - *(float *)(pPVar6 + 300)) / *(float *)(pPVar6 + 0x130);
        for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
          (**(code **)(*(long *)*puVar7 + 0x28))(uVar10,(long *)*puVar7,pPVar6);
        }
        puVar9 = *(undefined8 **)(this + 0x388);
        for (puVar7 = *(undefined8 **)(this + 0x380); puVar7 != puVar9; puVar7 = puVar7 + 1) {
          this_00 = (PUEmitter *)*puVar7;
          uVar3 = PUEmitter::isEnabled(this_00);
          if (((uVar3 & 1) != 0) && (this_00[0x1f8] == (PUEmitter)0x0)) {
            (**(code **)(*(long *)this_00 + 0x10))(uVar10,this_00,pPVar6);
          }
        }
        puVar9 = *(undefined8 **)(this + 0x318);
        for (puVar7 = *(undefined8 **)(this + 0x310); puVar7 != puVar9; puVar7 = puVar7 + 1) {
          if (((PUAffector *)*puVar7)[0x30] != (PUAffector)0x0) {
            PUAffector::process((PUAffector *)*puVar7,pPVar6,param_4,*param_2);
          }
        }
        plVar2 = *(long **)(this + 0x328);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x48))(uVar10,plVar2,pPVar6,*param_2);
        }
        if (this[0x379] != (PUParticleSystem3D)0x0) {
          if (*(int *)(pPVar6 + 0x90) == 1) {
            plVar2 = *(long **)(pPVar6 + 0x78);
            (**(code **)(*plVar2 + 0xf8))(plVar2,pPVar6 + 8);
            (**(code **)(*plVar2 + 0x1a0))(plVar2,pPVar6 + 0x14);
            forceUpdate(param_4);
          }
          else if (*(int *)(pPVar6 + 0x90) == 2) {
            plVar2 = *(long **)(pPVar6 + 0x78);
            lVar5 = *(long *)(pPVar6 + 8);
            *(undefined4 *)(plVar2 + 8) = *(undefined4 *)(pPVar6 + 0x10);
            plVar2[7] = lVar5;
            (**(code **)(*plVar2 + 0x68))(uVar10,plVar2);
            executeEmitParticles((PUEmitter *)this,(uint)plVar2,param_4);
          }
        }
        *param_2 = false;
        *(undefined8 *)(pPVar6 + 0xa0) = *(undefined8 *)(pPVar6 + 8);
        *(undefined4 *)(pPVar6 + 0xa8) = *(undefined4 *)(pPVar6 + 0x10);
        processMotion((PUParticle3D *)this,param_4,(Vec3 *)pPVar6,true);
      }
      else {
        *(uint *)(pPVar6 + 0x124) = *(uint *)(pPVar6 + 0x124) | 1;
        if (*(int *)(pPVar6 + 0x90) == 1) {
          unPrepared(*(PUParticleSystem3D **)(pPVar6 + 0x78));
        }
        else if (*(int *)(pPVar6 + 0x90) == 2) {
          (**(code **)(**(long **)(pPVar6 + 0x78) + 0x50))();
        }
        puVar9 = *(undefined8 **)(pPVar6 + 0x110);
        for (puVar7 = *(undefined8 **)(pPVar6 + 0x108); puVar7 != puVar9; puVar7 = puVar7 + 1) {
          (**(code **)(*(long *)*puVar7 + 0x38))(uVar10,(long *)*puVar7,pPVar6);
        }
        puVar9 = *(undefined8 **)(this + 0x428);
        for (puVar7 = *(undefined8 **)(this + 0x420); puVar7 != puVar9; puVar7 = puVar7 + 1) {
          (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,this,pPVar6);
        }
        plVar8 = *(long **)param_1;
        plVar2 = operator_new(0x18);
        lVar5 = plVar8[2];
        plVar2[1] = (long)(param_1 + 0x20);
        plVar2[2] = lVar5;
        lVar5 = *(long *)(param_1 + 0x20);
        *plVar2 = lVar5;
        *(long **)(lVar5 + 8) = plVar2;
        *(long **)(param_1 + 0x20) = plVar2;
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
        lVar5 = *plVar8;
        pDVar4 = (DataPool *)plVar8[1];
        *(DataPool **)(lVar5 + 8) = pDVar4;
        *(long *)plVar8[1] = lVar5;
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
        operator_delete(plVar8);
        *(DataPool **)param_1 = pDVar4;
        if ((pDVar1 != pDVar4) && (*(DataPool **)(param_1 + 0x10) != pDVar4)) {
          *(undefined8 *)param_1 = *(undefined8 *)pDVar4;
        }
      }
      puVar9 = *(undefined8 **)(this + 0x3a0);
      for (puVar7 = *(undefined8 **)(this + 0x398); puVar7 != puVar9; puVar7 = puVar7 + 1) {
        plVar2 = (long *)*puVar7;
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if ((uVar3 & 1) != 0) {
          (**(code **)(*plVar2 + 0x40))(uVar10,plVar2,pPVar6,*param_3);
        }
      }
      *(uint *)(pPVar6 + 0x124) = *(uint *)(pPVar6 + 0x124) & 1;
      *(float *)(pPVar6 + 300) = *(float *)(pPVar6 + 300) - param_4;
      *param_3 = false;
      if (*(DataPool **)param_1 == pDVar1) break;
      pDVar4 = *(DataPool **)(*(DataPool **)param_1 + 8);
      *(DataPool **)param_1 = pDVar4;
      if (pDVar1 == pDVar4) {
        return;
      }
      pPVar6 = *(PUParticle3D **)(pDVar4 + 0x10);
      if (pPVar6 == (PUParticle3D *)0x0) {
        return;
      }
    }
  }
  return;
}

