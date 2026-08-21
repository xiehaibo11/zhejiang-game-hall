
/* v8::internal::compiler::MapInference::InsertMapChecks(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node*,
   v8::internal::compiler::FeedbackSource const&) */

void __thiscall
v8::internal::compiler::MapInference::InsertMapChecks
          (MapInference *this,JSGraph *param_1,Node **param_2,Node *param_3,FeedbackSource *param_4)

{
  undefined8 *puVar1;
  Operator *pOVar2;
  Node *pNVar3;
  undefined8 *puVar4;
  Graph *this_00;
  Node *local_68;
  Node *pNStack_60;
  Node *local_58;
  undefined8 local_38;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  if (*(undefined8 **)(this + 0x10) == puVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HaveMaps()");
  }
  if ((*(long *)param_4 != 0) && (*(int *)(param_4 + 8) != -1)) {
    local_38 = 1;
    puVar4 = *(undefined8 **)(this + 0x10);
    do {
      puVar5 = puVar4 + 1;
      ZoneHandleSet<v8::internal::Map>::insert
                ((ZoneHandleSet<v8::internal::Map> *)&local_38,*puVar4,**(undefined8 **)param_1);
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
    this_00 = *(Graph **)param_1;
    pOVar2 = (Operator *)
             SimplifiedOperatorBuilder::CheckMaps
                       (*(SimplifiedOperatorBuilder **)(param_1 + 0x178),0,local_38,param_4);
    local_68 = *(Node **)(this + 8);
    pNStack_60 = *param_2;
    local_58 = param_3;
    pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,3,&local_68,false);
    *param_2 = pNVar3;
    *(undefined4 *)(this + 0x28) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","feedback.IsValid()");
}

