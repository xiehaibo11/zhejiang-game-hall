
/* v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   >::Get(std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> const&)
   const */

PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
* __thiscall
v8::internal::compiler::
PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
::Get(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      *this,pair *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  
  uVar3 = base::hash_value(*(ulong *)(param_1 + 8));
  uVar3 = base::hash_combine(0,uVar3);
  uVar4 = base::hash_value(*(ulong *)param_1);
  uVar2 = base::hash_combine(uVar3,uVar4);
  plVar5 = *(long **)this;
  if (plVar5 != (long *)0x0) {
    uVar6 = 0;
    while (*(uint *)((long)plVar5 + 0x24) != uVar2) {
      plVar9 = plVar5 + (long)(int)uVar6 + 5;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        plVar9 = plVar9 + 1;
      } while (-1 < (int)((*(uint *)((long)plVar5 + 0x24) ^ uVar2) << (ulong)(uVar7 & 0x1f)));
      if (((int)(char)plVar5[4] <= (int)uVar7) || (plVar5 = (long *)*plVar9, plVar5 == (long *)0x0))
      goto LAB_0169bb08;
    }
    if (plVar5[5] == 0) {
      if ((*(long *)param_1 == *plVar5) && (*(long *)(param_1 + 8) == plVar5[1])) {
        return (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                *)(plVar5 + 2);
      }
    }
    else {
      plVar9 = (long *)(plVar5[5] + 8);
      plVar5 = (long *)*plVar9;
      if (plVar5 != (long *)0x0) {
        uVar3 = *(ulong *)param_1;
        plVar8 = plVar9;
        do {
          if ((ulong)plVar5[4] < uVar3) {
            plVar1 = (long *)plVar5[1];
          }
          else if ((uVar3 < (ulong)plVar5[4]) || (*(ulong *)(param_1 + 8) <= (ulong)plVar5[5])) {
            plVar1 = (long *)*plVar5;
            plVar8 = plVar5;
          }
          else {
            plVar1 = (long *)plVar5[1];
          }
          plVar5 = plVar1;
        } while (plVar5 != (long *)0x0);
        if (((plVar8 != plVar9) && ((ulong)plVar8[4] <= uVar3)) &&
           (((ulong)plVar8[4] < uVar3 || ((ulong)plVar8[5] <= *(ulong *)(param_1 + 8))))) {
          return (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                  *)(plVar8 + 6);
        }
      }
    }
  }
LAB_0169bb08:
  return this + 8;
}

