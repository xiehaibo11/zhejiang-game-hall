
/* v8::internal::interpreter::BytecodeGenerator::AllocateDeferredConstants(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::AllocateDeferredConstants
          (BytecodeGenerator *this,Isolate *param_1,undefined8 param_3)

{
  ArrayLiteral *this_00;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  GlobalDeclarationsBuilder *pGVar5;
  long *plVar6;
  ObjectLiteral *this_01;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar7;
  
  puVar9 = *(undefined8 **)(this + 0x210);
  puVar11 = *(undefined8 **)(this + 0x218);
  if (puVar9 != puVar11) {
    do {
      pGVar5 = (GlobalDeclarationsBuilder *)*puVar9;
      lVar2 = GlobalDeclarationsBuilder::AllocateDeclarations
                        (pGVar5,*(undefined8 *)(this + 0x1d0),param_3,param_1);
      if (lVar2 == 0) goto LAB_0150b324;
      BytecodeArrayBuilder::SetDeferredConstantPoolEntry
                (this + 0x18,*(undefined8 *)(pGVar5 + 0x20),lVar2);
      puVar9 = puVar9 + 1;
    } while (puVar11 != puVar9);
  }
  puVar9 = *(undefined8 **)(this + 0x230);
  puVar11 = *(undefined8 **)(this + 0x238);
  if (puVar9 != puVar11) {
    do {
      uVar3 = puVar9[1];
      lVar2 = Compiler::GetSharedFunctionInfo(*puVar9,param_3,param_1);
      if (lVar2 == 0) {
LAB_0150b324:
        this[8] = (BytecodeGenerator)0x1;
        return;
      }
      BytecodeArrayBuilder::SetDeferredConstantPoolEntry(this + 0x18,uVar3,lVar2);
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar11);
  }
  plVar10 = *(long **)(this + 600);
  if (*(long **)(this + 0x250) != plVar10) {
    plVar6 = *(long **)(this + 0x250);
    do {
      plVar7 = plVar6 + 2;
      lVar2 = *plVar6;
      lVar1 = plVar6[1];
      uVar3 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x10))
                        (*(long **)(lVar2 + 0x10),param_1,**(undefined8 **)(lVar2 + 8));
      uVar3 = FunctionTemplateInfo::GetOrCreateSharedFunctionInfo
                        (param_1,uVar3,**(undefined8 **)(lVar2 + 8));
      BytecodeArrayBuilder::SetDeferredConstantPoolEntry(this + 0x18,lVar1,uVar3);
      plVar6 = plVar7;
    } while (plVar7 != plVar10);
  }
  puVar9 = *(undefined8 **)(this + 0x270);
  puVar11 = *(undefined8 **)(this + 0x278);
  if (puVar9 != puVar11) {
    do {
      this_01 = (ObjectLiteral *)*puVar9;
      if (0 < *(int *)(this_01 + 0xc)) {
        lVar2 = *(long *)(this_01 + 0x10);
        uVar3 = puVar9[1];
        if (lVar2 == 0) {
          ObjectLiteral::BuildBoilerplateDescription(this_01,param_1);
          lVar2 = *(long *)(this_01 + 0x10);
        }
        BytecodeArrayBuilder::SetDeferredConstantPoolEntry(this + 0x18,uVar3,lVar2);
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar11);
  }
  puVar9 = *(undefined8 **)(this + 0x290);
  puVar11 = *(undefined8 **)(this + 0x298);
  if (puVar9 != puVar11) {
    do {
      this_00 = (ArrayLiteral *)*puVar9;
      uVar3 = puVar9[1];
      lVar2 = *(long *)(this_00 + 0x10);
      if (lVar2 == 0) {
        ArrayLiteral::BuildBoilerplateDescription(this_00,param_1);
        lVar2 = *(long *)(this_00 + 0x10);
      }
      BytecodeArrayBuilder::SetDeferredConstantPoolEntry(this + 0x18,uVar3,lVar2);
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar11);
  }
  puVar9 = *(undefined8 **)(this + 0x2b8);
  if (*(undefined8 **)(this + 0x2b0) != puVar9) {
    puVar11 = *(undefined8 **)(this + 0x2b0);
    do {
      puVar8 = puVar11 + 2;
      uVar3 = puVar11[1];
      uVar4 = ClassBoilerplate::BuildClassBoilerplate(param_1,(ClassLiteral *)*puVar11);
      BytecodeArrayBuilder::SetDeferredConstantPoolEntry(this + 0x18,uVar3,uVar4);
      puVar11 = puVar8;
    } while (puVar8 != puVar9);
  }
  puVar9 = *(undefined8 **)(this + 0x2d8);
  if (*(undefined8 **)(this + 0x2d0) != puVar9) {
    puVar11 = *(undefined8 **)(this + 0x2d0);
    do {
      puVar8 = puVar11 + 2;
      uVar3 = puVar11[1];
      uVar4 = GetTemplateObject::GetOrBuildDescription((GetTemplateObject *)*puVar11,param_1);
      BytecodeArrayBuilder::SetDeferredConstantPoolEntry(this + 0x18,uVar3,uVar4);
      puVar11 = puVar8;
    } while (puVar8 != puVar9);
  }
  return;
}

