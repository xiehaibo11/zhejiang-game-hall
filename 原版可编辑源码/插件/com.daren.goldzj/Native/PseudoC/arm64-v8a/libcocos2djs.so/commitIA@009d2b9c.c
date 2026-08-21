
/* cocos2d::renderer::ModelBatcher::commitIA(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::CustomAssembler*, int) */

void __thiscall
cocos2d::renderer::ModelBatcher::commitIA
          (ModelBatcher *this,NodeProxy *param_1,CustomAssembler *param_2,int param_3)

{
  ModelBatcher MVar1;
  InputAssembler *pIVar2;
  ulong uVar3;
  Ref *pRVar4;
  Ref *pRVar5;
  undefined8 *puVar6;
  int iVar7;
  Mat4 *pMVar8;
  ulong uVar9;
  Ref *pRVar10;
  
  if (*(int *)(this + 0x4c) != 2) {
    if (*(int *)(this + 0x4c) == 1) {
      flush(this);
    }
    if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x60));
      *(undefined8 *)(this + 0x60) = 0;
    }
    *(undefined4 *)(this + 0x4c) = 2;
  }
  if (((*(undefined8 **)(param_2 + 0x58) != *(undefined8 **)(param_2 + 0x50)) &&
      (pRVar10 = (Ref *)**(undefined8 **)(param_2 + 0x50), pRVar10 != (Ref *)0x0)) &&
     (pIVar2 = (InputAssembler *)CustomAssembler::getIA(param_2,0), pIVar2 != (InputAssembler *)0x0)
     ) {
    uVar3 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
    pMVar8 = *(Mat4 **)(param_2 + 0x30);
    MVar1 = *(ModelBatcher *)(param_2 + 0x28);
    if (pMVar8 == (Mat4 *)0x0) {
      pMVar8 = *(Mat4 **)(param_1 + 0x98);
    }
    if (MVar1 == (ModelBatcher)0x0) {
      pMVar8 = (Mat4 *)Mat4::IDENTITY;
    }
    if (((*(long *)(this + 0x60) == 0) ||
        (*(double *)(*(long *)(this + 0x60) + 0x10) != *(double *)(pRVar10 + 0x10))) ||
       ((MVar1 != (ModelBatcher)0x0 ||
        ((*(int *)(this + 4) != param_3 ||
         (uVar9 = InputAssembler::isMergeable((InputAssembler *)(this + 0x78),pIVar2),
         (uVar9 & 1) == 0)))))) {
      flushIA(this);
      pRVar4 = *(Ref **)(this + 0x50);
      pRVar5 = (Ref *)0x0;
      if (this[8] != (ModelBatcher)0x0) {
        pRVar5 = (Ref *)param_1;
      }
      if (pRVar4 != pRVar5) {
        if (pRVar4 != (Ref *)0x0) {
          Ref::release(pRVar4);
        }
        *(Ref **)(this + 0x50) = pRVar5;
        if (pRVar5 != (Ref *)0x0) {
          Ref::retain(pRVar5);
        }
      }
      pRVar5 = *(Ref **)(this + 0x60);
      if (pRVar5 != pRVar10) {
        if (pRVar5 != (Ref *)0x0) {
          Ref::release(pRVar5);
        }
        *(Ref **)(this + 0x60) = pRVar10;
        Ref::retain(pRVar10);
      }
      Mat4::set((Mat4 *)(this + 0xc),pMVar8);
      this[8] = MVar1;
      *(int *)(this + 4) = param_3;
      InputAssembler::setVertexBuffer((InputAssembler *)(this + 0x78),*(VertexBuffer **)pIVar2);
      InputAssembler::setIndexBuffer((InputAssembler *)(this + 0x78),*(IndexBuffer **)(pIVar2 + 8));
      *(undefined4 *)(this + 0x8c) = *(undefined4 *)(pIVar2 + 0x14);
      *(undefined4 *)(this + 0x90) = 0;
    }
    if (uVar3 != 0) {
      uVar9 = 0;
      do {
        puVar6 = (undefined8 *)CustomAssembler::getIA(param_2,uVar9);
        if ((uVar9 < (ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3)) &&
           (pRVar10 = *(Ref **)(*(long *)(param_2 + 0x50) + uVar9 * 8), pRVar10 != (Ref *)0x0)) {
          if (uVar9 == 0) {
            iVar7 = *(int *)(this + 0x90);
          }
          else {
            flushIA(this);
            pRVar4 = *(Ref **)(this + 0x50);
            pRVar5 = (Ref *)0x0;
            if (this[8] != (ModelBatcher)0x0) {
              pRVar5 = (Ref *)param_1;
            }
            if (pRVar4 != pRVar5) {
              if (pRVar4 != (Ref *)0x0) {
                Ref::release(pRVar4);
              }
              *(Ref **)(this + 0x50) = pRVar5;
              if (pRVar5 != (Ref *)0x0) {
                Ref::retain(pRVar5);
              }
            }
            pRVar5 = *(Ref **)(this + 0x60);
            if (pRVar5 != pRVar10) {
              if (pRVar5 != (Ref *)0x0) {
                Ref::release(pRVar5);
              }
              *(Ref **)(this + 0x60) = pRVar10;
              Ref::retain(pRVar10);
            }
            Mat4::set((Mat4 *)(this + 0xc),pMVar8);
            this[8] = MVar1;
            *(int *)(this + 4) = param_3;
            InputAssembler::setVertexBuffer((InputAssembler *)(this + 0x78),(VertexBuffer *)*puVar6)
            ;
            InputAssembler::setIndexBuffer((InputAssembler *)(this + 0x78),(IndexBuffer *)puVar6[1])
            ;
            iVar7 = 0;
            *(undefined4 *)(this + 0x8c) = *(undefined4 *)((long)puVar6 + 0x14);
            *(undefined4 *)(this + 0x90) = 0;
          }
          *(int *)(this + 0x90) = *(int *)(puVar6 + 3) + iVar7;
        }
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
  }
  return;
}

