
void FUN_016defac(undefined2 *param_1,Node *param_2,JSHeapBroker *param_3,JSGraph *param_4,
                 CompilationDependencies *param_5)

{
  MapInference *this;
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  Node *pNVar4;
  long lVar5;
  ulong uVar6;
  Node **ppNVar7;
  
  cVar1 = v8::internal::FLAG_concurrent_inlining;
  *param_1 = 0;
  if (cVar1 != '\0') {
    *(undefined4 *)((long)param_1 + 1) = 0;
    *(undefined1 *)param_1 = 1;
  }
  *(undefined2 *)((long)param_1 + 5) = 0;
  uVar3 = v8::internal::compiler::NodeProperties::GetValueInput(param_2,1);
  *(undefined8 *)(param_1 + 4) = uVar3;
  pNVar4 = (Node *)v8::internal::compiler::NodeProperties::GetEffectInput(param_2,0);
  ppNVar7 = (Node **)(param_1 + 8);
  *ppNVar7 = pNVar4;
  uVar3 = v8::internal::compiler::NodeProperties::GetControlInput(param_2,0);
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  this = (MapInference *)(param_1 + 0x10);
  v8::internal::compiler::MapInference::MapInference(this,param_3,*(Node **)(param_1 + 4),*ppNVar7);
  if (((v8::internal::FLAG_turbo_inline_array_builtins != '\0') &&
      (lVar5 = v8::internal::compiler::CallParametersOf(*(Operator **)param_2),
      (*(byte *)(lVar5 + 3) >> 4 & 1) == 0)) &&
     (uVar6 = v8::internal::compiler::MapInference::HaveMaps(this), (uVar6 & 1) != 0)) {
    uVar3 = v8::internal::compiler::MapInference::GetMaps(this);
    uVar6 = FUN_016e047c(param_3,uVar3,param_1 + 0x28);
    if ((uVar6 & 1) != 0) {
      uVar6 = v8::internal::compiler::CompilationDependencies::DependOnNoElementsProtector(param_5);
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      bVar2 = v8::internal::compiler::MapInference::RelyOnMapsPreferStability
                        (this,param_5,param_4,ppNVar7,*(Node **)(param_1 + 0xc),
                         (FeedbackSource *)(lVar5 + 8));
      *(byte *)(param_1 + 3) = bVar2 & 1;
      *(undefined1 *)((long)param_1 + 5) = 1;
    }
  }
  return;
}

