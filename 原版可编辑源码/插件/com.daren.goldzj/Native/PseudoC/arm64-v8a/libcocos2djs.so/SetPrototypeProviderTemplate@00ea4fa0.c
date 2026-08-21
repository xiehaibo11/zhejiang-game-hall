
/* v8::FunctionTemplate::SetPrototypeProviderTemplate(v8::Local<v8::FunctionTemplate>) */

void __thiscall
v8::FunctionTemplate::SetPrototypeProviderTemplate(FunctionTemplate *this,ulong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *(uint *)(this + 4);
  lVar8 = (ulong)uVar1 << 0x20;
  uVar2 = *(undefined4 *)(lVar8 + 0x2c60);
  *(undefined4 *)(lVar8 + 0x2c60) = 5;
  uVar7 = *(ulong *)this & 0xffffffff00000000;
  uVar3 = *(uint *)(*(ulong *)this + 0x23);
  uVar6 = *(ulong *)(uVar7 + 0xa0);
  uVar5 = uVar6;
  if (uVar3 != (uint)uVar6) {
    uVar5 = (ulong)*(uint *)((uVar7 | uVar3) + 3);
  }
  uVar4 = (uint)uVar5;
  if (((uVar5 & 1) == 0) || (uVar4 != *(uint *)(lVar8 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","self->GetPrototypeTemplate().IsUndefined(i_isolate)");
  }
  if (uVar3 != (uint)uVar6) {
    uVar6 = (ulong)*(uint *)((uVar7 | uVar3) + 0xb);
  }
  if (((uVar6 & 1) != 0) && ((uint)uVar6 == uVar4)) {
    if (uVar3 == uVar4) {
      uVar5 = internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(lVar8,this);
    }
    else {
      uVar5 = CONCAT44(uVar1,uVar3);
    }
    uVar6 = *param_2;
    *(int *)(uVar5 + 7) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar6);
        uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar6);
      }
    }
    *(undefined4 *)(lVar8 + 0x2c60) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","self->GetParentTemplate().IsUndefined(i_isolate)");
}

