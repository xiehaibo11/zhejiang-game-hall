
/* cocos2d::renderer::ModelBatcher::commit(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::Assembler*, int) */

void __thiscall
cocos2d::renderer::ModelBatcher::commit
          (ModelBatcher *this,NodeProxy *param_1,Assembler *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ModelBatcher MVar3;
  bool bVar4;
  Ref *this_00;
  Ref *this_01;
  Ref *pRVar5;
  Mat4 *pMVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(int *)(this + 0x4c) != 1) {
    if (*(int *)(this + 0x4c) == 2) {
      flushIA(this);
    }
    if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x60));
      *(undefined8 *)(this + 0x60) = 0;
    }
    *(undefined4 *)(this + 0x4c) = 1;
  }
  MVar3 = *(ModelBatcher *)(param_2 + 0x28);
  pMVar6 = *(Mat4 **)(param_2 + 0x30);
  if (pMVar6 == (Mat4 *)0x0) {
    pMVar6 = *(Mat4 **)(param_1 + 0x98);
  }
  if (param_2[0x88] != (Assembler)0x0 || MVar3 == (ModelBatcher)0x0) {
    pMVar6 = (Mat4 *)Mat4::IDENTITY;
  }
  if (((*(byte **)(param_2 + 0x18) == (byte *)0x0) || ((**(byte **)(param_2 + 0x18) & 1) == 0)) &&
     (-1 < **(int **)(param_1 + 0x80))) {
    bVar4 = false;
  }
  else {
    bVar4 = param_2[0x89] == (Assembler)0x0;
  }
  lVar1 = *(long *)(param_2 + 0x40);
  lVar2 = *(long *)(param_2 + 0x48);
  if (lVar2 - lVar1 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      (**(code **)(*(long *)param_2 + 0x28))(param_2,uVar8);
      if ((uVar8 < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 5)) &&
         (this_00 = (Ref *)Assembler::IARenderData::getEffect
                                     ((IARenderData *)(*(long *)(param_2 + 0x40) + lVar7)),
         this_00 != (Ref *)0x0)) {
        if (((*(long *)(this + 0x60) == 0) ||
            ((*(double *)(*(long *)(this + 0x60) + 0x10) != *(double *)(this_00 + 0x10) ||
             (MVar3 != (ModelBatcher)0x0)))) || (*(int *)(this + 4) != param_3)) {
          flush(this);
          this_01 = *(Ref **)(this + 0x50);
          pRVar5 = (Ref *)0x0;
          if (this[8] != (ModelBatcher)0x0) {
            pRVar5 = (Ref *)param_1;
          }
          if (this_01 != pRVar5) {
            if (this_01 != (Ref *)0x0) {
              Ref::release(this_01);
            }
            *(Ref **)(this + 0x50) = pRVar5;
            if (pRVar5 != (Ref *)0x0) {
              Ref::retain(pRVar5);
            }
          }
          pRVar5 = *(Ref **)(this + 0x60);
          if (pRVar5 != this_00) {
            if (pRVar5 != (Ref *)0x0) {
              Ref::release(pRVar5);
            }
            *(Ref **)(this + 0x60) = this_00;
            Ref::retain(this_00);
          }
          Mat4::set((Mat4 *)(this + 0xc),pMVar6);
          this[8] = MVar3;
          *(int *)(this + 4) = param_3;
        }
        if (bVar4) {
          (**(code **)(*(long *)param_2 + 0x48))(param_2,uVar8,param_1[0x43]);
        }
        (**(code **)(*(long *)param_2 + 0x30))(param_2,param_1,this,uVar8);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar8 < (ulong)(lVar2 - lVar1 >> 5));
  }
  return;
}

