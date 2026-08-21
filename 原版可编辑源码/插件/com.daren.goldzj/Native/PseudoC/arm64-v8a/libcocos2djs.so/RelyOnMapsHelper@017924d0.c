
/* v8::internal::compiler::MapInference::RelyOnMapsHelper(v8::internal::compiler::CompilationDependencies*,
   v8::internal::compiler::JSGraph*, v8::internal::compiler::Node**, v8::internal::compiler::Node*,
   v8::internal::compiler::FeedbackSource const&) */

undefined8 __thiscall
v8::internal::compiler::MapInference::RelyOnMapsHelper
          (MapInference *this,CompilationDependencies *param_1,JSGraph *param_2,Node **param_3,
          Node *param_4,FeedbackSource *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ObjectRef aOStack_60 [16];
  
  if (*(int *)(this + 0x28) == 2) {
    if (param_1 == (CompilationDependencies *)0x0) {
LAB_017925a4:
      if ((*(long *)param_5 == 0) || (*(int *)(param_5 + 8) == -1)) {
        return 0;
      }
      InsertMapChecks(this,param_2,param_3,param_4,param_5);
    }
    else {
      puVar3 = *(undefined8 **)(this + 0x10);
      puVar1 = *(undefined8 **)(this + 0x18);
      if (puVar3 != puVar1) {
        do {
          ObjectRef::ObjectRef(aOStack_60,*(undefined8 *)this,*puVar3,0);
          uVar2 = ObjectRef::IsMap(aOStack_60);
          if ((uVar2 & 1) == 0) goto LAB_017925f8;
          uVar2 = MapRef::is_stable((MapRef *)aOStack_60);
          if ((uVar2 & 1) == 0) goto LAB_017925a4;
          puVar3 = puVar3 + 1;
        } while (puVar1 != puVar3);
        puVar1 = *(undefined8 **)(this + 0x18);
        for (puVar3 = *(undefined8 **)(this + 0x10); puVar3 != puVar1; puVar3 = puVar3 + 1) {
          ObjectRef::ObjectRef(aOStack_60,*(undefined8 *)this,*puVar3,0);
          uVar2 = ObjectRef::IsMap(aOStack_60);
          if ((uVar2 & 1) == 0) {
LAB_017925f8:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsMap()");
          }
          CompilationDependencies::DependOnStableMap(param_1,aOStack_60);
        }
      }
      *(undefined4 *)(this + 0x28) = 0;
    }
  }
  return 1;
}

