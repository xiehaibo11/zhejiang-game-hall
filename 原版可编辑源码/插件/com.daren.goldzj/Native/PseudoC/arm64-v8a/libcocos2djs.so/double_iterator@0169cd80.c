
/* v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   >::double_iterator::double_iterator(v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   >::iterator,
   v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   >::iterator) */

void __thiscall
v8::internal::compiler::
PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
::double_iterator::double_iterator(double_iterator *this,void *param_2,void *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined2 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  memcpy(this,param_2,0x128);
  memcpy(this + 0x128,param_3,0x128);
  puVar5 = *(ulong **)(this + 0x10);
  puVar4 = *(ulong **)(this + 0x138);
  if ((puVar5 == (ulong *)0x0) || (puVar4 == (ulong *)0x0)) {
    if (puVar5 == (ulong *)0x0 && puVar4 == (ulong *)0x0) {
LAB_0169ce6c:
      uVar3 = 0x101;
      goto LAB_0169ced4;
    }
  }
  else if (*(int *)((long)puVar5 + 0x24) == *(int *)((long)puVar4 + 0x24)) {
    if (puVar5[5] == 0) {
      puVar6 = puVar5 + 1;
      puVar7 = puVar5;
    }
    else {
      puVar6 = (ulong *)(*(long *)(this + 8) + 0x28);
      puVar7 = (ulong *)(*(long *)(this + 8) + 0x20);
    }
    puVar2 = puVar4;
    if (puVar4[5] != 0) {
      puVar2 = (ulong *)(*(long *)(this + 0x130) + 0x20);
    }
    puVar1 = puVar4 + 1;
    if (puVar4[5] != 0) {
      puVar1 = (ulong *)(*(long *)(this + 0x130) + 0x28);
    }
    if ((*puVar7 == *puVar2) && (*puVar6 == *puVar1)) goto LAB_0169ce6c;
  }
  if (puVar5 == (ulong *)0x0) goto LAB_0169cec8;
  if (puVar4 == (ulong *)0x0) {
LAB_0169ced0:
    uVar3 = 1;
  }
  else {
    if (*(uint *)((long)puVar5 + 0x24) == *(uint *)((long)puVar4 + 0x24)) {
      if (puVar5[5] == 0) {
        puVar6 = puVar5 + 1;
      }
      else {
        puVar5 = (ulong *)(*(long *)(this + 8) + 0x20);
        puVar6 = (ulong *)(*(long *)(this + 8) + 0x28);
      }
      puVar7 = puVar4;
      if (puVar4[5] != 0) {
        puVar7 = (ulong *)(*(long *)(this + 0x130) + 0x20);
      }
      puVar2 = puVar4 + 1;
      if (puVar4[5] != 0) {
        puVar2 = (ulong *)(*(long *)(this + 0x130) + 0x28);
      }
      if ((*puVar5 < *puVar7) || (*puVar5 <= *puVar7 && *puVar6 < *puVar2)) goto LAB_0169ced0;
    }
    else if (*(uint *)((long)puVar5 + 0x24) < *(uint *)((long)puVar4 + 0x24)) goto LAB_0169ced0;
LAB_0169cec8:
    uVar3 = 0x100;
  }
LAB_0169ced4:
  *(undefined2 *)(this + 0x250) = uVar3;
  return;
}

