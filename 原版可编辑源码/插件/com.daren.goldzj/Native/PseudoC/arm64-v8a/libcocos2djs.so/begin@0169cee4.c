
/* v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   >::iterator::begin(v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   >::FocusedTree const*, v8::internal::compiler::CsaLoadElimination::FieldInfo) */

void v8::internal::compiler::
     PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
     ::iterator::begin(iterator *param_1_00,long param_1,long param_3,undefined8 param_4)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  *(undefined4 *)param_1_00 = 0;
  *(undefined8 *)(param_1_00 + 0x10) = 0;
  *(undefined8 *)(param_1_00 + 8) = 0;
  *(long *)(param_1_00 + 0x118) = param_3;
  *(undefined8 *)(param_1_00 + 0x120) = param_4;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + (long)(int)uVar4 * 8 + 0x30);
      lVar3 = param_1;
      lVar6 = lVar5;
      if ((*(int *)(param_1 + 0x24) << (ulong)(uVar4 & 0x1f) < 0) &&
         (lVar3 = lVar5, lVar6 = param_1, lVar5 == 0)) {
        *(undefined8 *)(param_1_00 + (long)(int)uVar4 * 8 + 0x18) = 0;
      }
      else {
        *(long *)(param_1_00 + (long)(int)uVar4 * 8 + 0x18) = lVar6;
        param_1 = lVar3;
      }
      uVar4 = *(int *)param_1_00 + 1;
      *(uint *)param_1_00 = uVar4;
    } while ((int)uVar4 < (int)*(char *)(param_1 + 0x20));
  }
  *(long *)(param_1_00 + 0x10) = param_1;
  if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1_00 + 8) = **(undefined8 **)(param_1 + 0x28);
  }
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    plVar1 = (long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x28) != 0) {
      plVar1 = (long *)(*(long *)(param_1_00 + 8) + 0x30);
    }
    if (*plVar1 != param_3) break;
    pbVar2 = (byte *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x28) != 0) {
      pbVar2 = (byte *)(*(long *)(param_1_00 + 8) + 0x38);
    }
    if ((uint)*pbVar2 != ((uint)param_4 & 0xff)) {
      return;
    }
    operator++(param_1_00);
    param_1 = *(long *)(param_1_00 + 0x10);
  }
  return;
}

