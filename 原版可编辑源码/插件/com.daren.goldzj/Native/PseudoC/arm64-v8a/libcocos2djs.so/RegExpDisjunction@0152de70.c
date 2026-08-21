
/* v8::internal::RegExpDisjunction::RegExpDisjunction(v8::internal::ZoneList<v8::internal::RegExpTree*>*)
    */

void __thiscall
v8::internal::RegExpDisjunction::RegExpDisjunction(RegExpDisjunction *this,ZoneList *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  *(undefined ***)this = &PTR__RegExpTree_01cc71d8;
  *(ZoneList **)(this + 8) = param_1;
  plVar4 = (long *)**(undefined8 **)param_1;
  uVar1 = (**(code **)(*plVar4 + 0x38))(plVar4);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
  *(undefined4 *)(this + 0x14) = uVar1;
  if (1 < *(int *)(param_1 + 0xc)) {
    lVar5 = 1;
    do {
      iVar3 = *(int *)(this + 0x10);
      plVar4 = *(long **)(*(long *)param_1 + lVar5 * 8);
      iVar2 = (**(code **)(*plVar4 + 0x38))(plVar4);
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      *(int *)(this + 0x10) = iVar3;
      iVar2 = *(int *)(this + 0x14);
      iVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      *(int *)(this + 0x14) = iVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  return;
}

