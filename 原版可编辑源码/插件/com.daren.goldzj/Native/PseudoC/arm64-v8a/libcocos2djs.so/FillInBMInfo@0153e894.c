
/* v8::internal::ChoiceNode::FillInBMInfo(v8::internal::Isolate*, int, int,
   v8::internal::BoyerMooreLookahead*, bool) */

void __thiscall
v8::internal::ChoiceNode::FillInBMInfo
          (ChoiceNode *this,Isolate *param_1,int param_2,int param_3,BoyerMooreLookahead *param_4,
          bool param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = *(long **)(this + 0x38);
  iVar1 = *(int *)((long)plVar6 + 0xc);
  if (0 < iVar1) {
    lVar7 = 0;
    lVar8 = 0;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (param_3 + -1) / iVar1;
    }
    do {
      lVar4 = *(long *)(*plVar6 + lVar7 + 8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0xc) != 0)) {
        if (param_2 < *(int *)param_4) {
          lVar8 = (long)param_2;
          do {
            puVar5 = *(undefined8 **)(**(long **)(param_4 + 0x18) + lVar8 * 8);
            *(undefined4 *)((long)puVar5 + 0x14) = 3;
            if (*(int *)(puVar5 + 2) != 0x80) {
              *(undefined4 *)(puVar5 + 2) = 0x80;
              *puVar5 = 0xffffffffffffffff;
              puVar5[1] = 0xffffffffffffffff;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)param_4);
        }
        break;
      }
      plVar3 = *(long **)(*plVar6 + lVar7);
      (**(code **)(*plVar3 + 0x48))(plVar3,param_1,param_2,iVar2,param_4,(ulong)param_5);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < *(int *)((long)plVar6 + 0xc));
  }
  if (param_2 == 0) {
    *(BoyerMooreLookahead **)(this + (ulong)param_5 * 8 + 0x20) = param_4;
  }
  return;
}

