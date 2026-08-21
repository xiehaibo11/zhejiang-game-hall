
/* v8::internal::compiler::EffectControlLinearizer::LowerStoreTypedElement(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStoreTypedElement
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  undefined4 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  long lVar6;
  Node *pNVar7;
  AccessBuilder aAStack_68 [24];
  
  uVar3 = ExternalArrayTypeOf(*(Operator **)param_1);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar1 = *(Node **)(pNVar4 + 8);
  pNVar5 = *(Node **)(pNVar4 + 0x10);
  pNVar2 = *(Node **)(pNVar4 + 0x18);
  pNVar7 = *(Node **)(pNVar4 + 0x20);
  this_00 = (GraphAssembler *)(this + 0x38);
  GraphAssembler::Retain(this_00,*(Node **)pNVar4);
  lVar6 = *(long *)pNVar1;
  if (*(short *)(lVar6 + 0x10) == 0x18) {
    if (*(long *)(lVar6 + 0x30) == 0) goto LAB_016af928;
  }
  else if ((*(short *)(lVar6 + 0x10) == 0x17) && (*(int *)(lVar6 + 0x2c) == 0)) goto LAB_016af928;
  pNVar4 = (Node *)GraphAssembler::ChangeTaggedToCompressed(this_00,pNVar1);
  pNVar4 = (Node *)GraphAssembler::BitcastTaggedToWord(this_00,pNVar4);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar4 = (Node *)GraphAssembler::ChangeUint32ToUint64(this_00,pNVar4);
  }
  pNVar5 = (Node *)GraphAssembler::UnsafePointerAdd(this_00,pNVar4,pNVar5);
LAB_016af928:
  AccessBuilder::ForTypedArrayElement(aAStack_68,uVar3,1,1);
  GraphAssembler::StoreElement(this_00,(ElementAccess *)aAStack_68,pNVar5,pNVar2,pNVar7);
  return;
}

