
/* cocos2d::renderer::ModelBatcher::flushIA() */

void __thiscall cocos2d::renderer::ModelBatcher::flushIA(ModelBatcher *this)

{
  long lVar1;
  Model *this_00;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Model *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x4c) == 2) {
    if (((this[9] == (ModelBatcher)0x0) ||
        (*(EffectVariant **)(this + 0x60) == (EffectVariant *)0x0)) || (*(int *)(this + 0x90) < 1))
    {
      InputAssembler::clear((InputAssembler *)(this + 0x78));
    }
    else {
      StencilManager::handleEffect
                (*(StencilManager **)(this + 0x70),*(EffectVariant **)(this + 0x60));
      local_40 = (Model *)0x0;
      lVar2 = *(long *)(this + 0x98);
      if ((ulong)(long)*(int *)this < (ulong)(*(long *)(this + 0xa0) - lVar2 >> 3)) {
        local_40 = *(Model **)(lVar2 + (long)*(int *)this * 8);
      }
      else {
        this_00 = operator_new(0x80);
        Model::Model(this_00);
        local_40 = this_00;
        if (*(undefined8 **)(this + 0xa0) == *(undefined8 **)(this + 0xa8)) {
          std::__ndk1::
          vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>>::
          __push_back_slow_path<cocos2d::renderer::Model*const&>
                    ((vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>>
                      *)(this + 0x98),&local_40);
        }
        else {
          **(undefined8 **)(this + 0xa0) = this_00;
          *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 8;
        }
      }
      uVar3 = *(undefined8 *)(this + 0x3c);
      uVar5 = *(undefined8 *)(this + 0x34);
      uVar4 = *(undefined8 *)(this + 0x2c);
      uVar7 = *(undefined8 *)(this + 0x24);
      uVar6 = *(undefined8 *)(this + 0x1c);
      *(int *)this = *(int *)this + 1;
      uVar9 = *(undefined8 *)(this + 0x14);
      uVar8 = *(undefined8 *)(this + 0xc);
      *(undefined8 *)(local_40 + 0x40) = *(undefined8 *)(this + 0x44);
      *(undefined8 *)(local_40 + 0x38) = uVar3;
      *(undefined8 *)(local_40 + 0x30) = uVar5;
      *(undefined8 *)(local_40 + 0x28) = uVar4;
      *(undefined8 *)(local_40 + 0x20) = uVar7;
      *(undefined8 *)(local_40 + 0x18) = uVar6;
      *(undefined8 *)(local_40 + 0x10) = uVar9;
      *(undefined8 *)(local_40 + 8) = uVar8;
      *(undefined4 *)(local_40 + 0x74) = *(undefined4 *)(this + 4);
      Model::setEffect(local_40,*(EffectVariant **)(this + 0x60));
      Model::setNode(local_40,*(NodeProxy **)(this + 0x50));
      Model::setInputAssembler(local_40,(InputAssembler *)(this + 0x78));
      InputAssembler::clear((InputAssembler *)(this + 0x78));
      Scene::addModel(*(Scene **)(*(long *)(this + 0x68) + 8),local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

