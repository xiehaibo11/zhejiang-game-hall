
/* v8::internal::RegExpAlternative::RegExpAlternative(v8::internal::ZoneList<v8::internal::RegExpTree*>*)
    */

void __thiscall
v8::internal::RegExpAlternative::RegExpAlternative(RegExpAlternative *this,ZoneList *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__RegExpTree_01cc7300;
  *(ZoneList **)(this + 8) = param_1;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar4 = 0;
    do {
      plVar3 = *(long **)(*(long *)param_1 + lVar4 * 8);
      iVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
      iVar1 = 0x7fffffff;
      if (iVar2 <= 0x7fffffff - *(int *)(this + 0x10)) {
        iVar1 = *(int *)(this + 0x10) + iVar2;
      }
      *(int *)(this + 0x10) = iVar1;
      iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
      lVar4 = lVar4 + 1;
      iVar1 = 0x7fffffff;
      if (iVar2 <= 0x7fffffff - *(int *)(this + 0x14)) {
        iVar1 = *(int *)(this + 0x14) + iVar2;
      }
      *(int *)(this + 0x14) = iVar1;
    } while (lVar4 < *(int *)(param_1 + 0xc));
  }
  return;
}

