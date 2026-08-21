
/* cocos2d::TextRenderGroup::fill(cocos2d::renderer::CustomAssembler*, int, cocos2d::LabelLayout*,
   cocos2d::renderer::EffectVariant*) */

int __thiscall
cocos2d::TextRenderGroup::fill
          (TextRenderGroup *this,CustomAssembler *param_1,int param_2,LabelLayout *param_3,
          EffectVariant *param_4)

{
  int iVar1;
  MeshBuffer *this_00;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  TextRenderGroupItem *this_01;
  EffectVariant *this_02;
  ulong uVar5;
  long *plVar6;
  
  for (plVar6 = *(long **)(this + 0x10); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    this_01 = (TextRenderGroupItem *)plVar6[3];
    if (0 < *(int *)(this_01 + 0x18)) {
      TextRenderGroupItem::addIndexes(this_01);
      this_00 = *(MeshBuffer **)(this_01 + 8);
      iVar1 = *(int *)(this_01 + 0x18);
      uVar5 = *(long *)(this_00 + 0x58) + (long)(iVar1 * 0x50);
      if (*(ulong *)(this_00 + 0x50) < uVar5) {
        this_00[0x68] = (MeshBuffer)0x1;
      }
      else {
        *(ulong *)(this_00 + 0x58) = uVar5;
      }
      uVar5 = *(long *)(this_00 + 0xf8) + (long)(iVar1 * 0xc);
      if (*(ulong *)(this_00 + 0xf0) < uVar5) {
        this_00[0x108] = (MeshBuffer)0x1;
      }
      else {
        *(ulong *)(this_00 + 0xf8) = uVar5;
      }
      middleware::MeshBuffer::uploadIB(this_00);
      middleware::MeshBuffer::uploadVB(*(MeshBuffer **)(this_01 + 8));
      *(undefined4 *)(this_01 + 0x20) = 0;
      uVar5 = (ulong)param_2;
      lVar3 = *(long *)(plVar6[3] + 8);
      lVar4 = *(long *)(lVar3 + 0x38) * 8;
      (**(code **)(*(long *)param_1 + 0x30))
                (param_1,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0x20) + lVar4),
                 *(undefined8 *)(*(long *)(lVar3 + 8) + lVar4));
      (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar5,0,*(int *)(plVar6[3] + 0x18) * 6);
      if (uVar5 < (ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3)) {
        this_02 = *(EffectVariant **)(*(long *)(param_1 + 0x50) + uVar5 * 8);
      }
      else {
        this_02 = (EffectVariant *)0x0;
      }
      if ((param_4 != (EffectVariant *)0x0) && (this_02 == (EffectVariant *)0x0)) {
        this_02 = operator_new(0x40);
        renderer::EffectVariant::EffectVariant(this_02);
        Ref::autorelease((Ref *)this_02);
        renderer::EffectVariant::copy(this_02,param_4);
        (**(code **)(*(long *)param_1 + 0x48))(param_1,uVar5,this_02);
      }
      puVar2 = (undefined8 *)(**(code **)(*(long *)this_02 + 0x10))(this_02);
      lVar3 = *(long *)(*(long *)*puVar2 + 0x78);
      puVar2 = (undefined8 *)(**(code **)(*(long *)param_4 + 0x10))(param_4);
      if (lVar3 != *(long *)(*(long *)*puVar2 + 0x78)) {
        renderer::EffectVariant::copy(this_02,param_4);
      }
      if (this_02 != (EffectVariant *)0x0) {
        renderer::EffectBase::setProperty
                  ((EffectBase *)this_02,(basic_string *)&DAT_01d38010,(void *)plVar6[2],-1);
      }
      param_2 = param_2 + 1;
    }
  }
  return param_2;
}

