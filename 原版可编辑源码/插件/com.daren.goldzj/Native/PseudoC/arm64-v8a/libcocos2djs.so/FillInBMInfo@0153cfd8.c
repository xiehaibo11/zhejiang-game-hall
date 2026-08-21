
/* v8::internal::ActionNode::FillInBMInfo(v8::internal::Isolate*, int, int,
   v8::internal::BoyerMooreLookahead*, bool) */

void __thiscall
v8::internal::ActionNode::FillInBMInfo
          (ActionNode *this,Isolate *param_1,int param_2,int param_3,BoyerMooreLookahead *param_4,
          bool param_5)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(this + 0x50) == 4) {
    if (param_2 < *(int *)param_4) {
      lVar1 = (long)param_2;
      do {
        puVar2 = *(undefined8 **)(**(long **)(param_4 + 0x18) + lVar1 * 8);
        *(undefined4 *)((long)puVar2 + 0x14) = 3;
        if (*(int *)(puVar2 + 2) != 0x80) {
          *(undefined4 *)(puVar2 + 2) = 0x80;
          *puVar2 = 0xffffffffffffffff;
          puVar2[1] = 0xffffffffffffffff;
        }
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)param_4);
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x38) + 0x48))
              (*(long **)(this + 0x38),param_1,param_2,param_3 + -1,param_4,(ulong)param_5);
  }
  if (param_2 == 0) {
    *(BoyerMooreLookahead **)(this + (ulong)param_5 * 8 + 0x20) = param_4;
  }
  return;
}

