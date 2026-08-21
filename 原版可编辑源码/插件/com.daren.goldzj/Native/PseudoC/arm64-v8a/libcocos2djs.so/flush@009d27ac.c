
/* cocos2d::renderer::ModelBatcher::flush() */

void __thiscall cocos2d::renderer::ModelBatcher::flush(ModelBatcher *this)

{
  InputAssembler *this_00;
  int iVar1;
  int iVar2;
  long lVar3;
  Model *this_01;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Model *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((((*(int *)(this + 0x4c) == 1) && (this[9] != (ModelBatcher)0x0)) &&
      (*(long *)(this + 0x60) != 0)) && (lVar4 = *(long *)(this + 0x58), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x20);
    iVar2 = *(int *)(lVar4 + 0x24) - iVar1;
    if (0 < iVar2) {
      this_00 = (InputAssembler *)(this + 0x78);
      InputAssembler::setVertexBuffer(this_00,*(VertexBuffer **)(lVar4 + 0x88));
      InputAssembler::setIndexBuffer(this_00,*(IndexBuffer **)(*(long *)(this + 0x58) + 0x90));
      *(int *)(this + 0x8c) = iVar1;
      *(int *)(this + 0x90) = iVar2;
      StencilManager::handleEffect
                (*(StencilManager **)(this + 0x70),*(EffectVariant **)(this + 0x60));
      local_50 = (Model *)0x0;
      lVar4 = *(long *)(this + 0x98);
      if ((ulong)(long)*(int *)this < (ulong)(*(long *)(this + 0xa0) - lVar4 >> 3)) {
        local_50 = *(Model **)(lVar4 + (long)*(int *)this * 8);
      }
      else {
        this_01 = operator_new(0x80);
        Model::Model(this_01);
        local_50 = this_01;
        if (*(undefined8 **)(this + 0xa0) == *(undefined8 **)(this + 0xa8)) {
          std::__ndk1::
          vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>>::
          __push_back_slow_path<cocos2d::renderer::Model*const&>
                    ((vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>>
                      *)(this + 0x98),&local_50);
        }
        else {
          **(undefined8 **)(this + 0xa0) = this_01;
          *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 8;
        }
      }
      uVar5 = *(undefined8 *)(this + 0x3c);
      uVar7 = *(undefined8 *)(this + 0x34);
      uVar6 = *(undefined8 *)(this + 0x2c);
      uVar9 = *(undefined8 *)(this + 0x24);
      uVar8 = *(undefined8 *)(this + 0x1c);
      *(int *)this = *(int *)this + 1;
      uVar11 = *(undefined8 *)(this + 0x14);
      uVar10 = *(undefined8 *)(this + 0xc);
      *(undefined8 *)(local_50 + 0x40) = *(undefined8 *)(this + 0x44);
      *(undefined8 *)(local_50 + 0x38) = uVar5;
      *(undefined8 *)(local_50 + 0x30) = uVar7;
      *(undefined8 *)(local_50 + 0x28) = uVar6;
      *(undefined8 *)(local_50 + 0x20) = uVar9;
      *(undefined8 *)(local_50 + 0x18) = uVar8;
      *(undefined8 *)(local_50 + 0x10) = uVar11;
      *(undefined8 *)(local_50 + 8) = uVar10;
      *(undefined4 *)(local_50 + 0x74) = *(undefined4 *)(this + 4);
      Model::setEffect(local_50,*(EffectVariant **)(this + 0x60));
      Model::setNode(local_50,*(NodeProxy **)(this + 0x50));
      Model::setInputAssembler(local_50,this_00);
      InputAssembler::clear(this_00);
      Scene::addModel(*(Scene **)(*(long *)(this + 0x68) + 8),local_50);
      lVar4 = *(long *)(this + 0x58);
      *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar4 + 0x1c);
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar4 + 0x2c);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar4 + 0x24);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

