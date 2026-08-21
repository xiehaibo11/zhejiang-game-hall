
/* v8::internal::SafepointTableBuilder::DefineSafepoint(v8::internal::Assembler*,
   v8::internal::Safepoint::DeoptMode) */

undefined8
v8::internal::SafepointTableBuilder::DefineSafepoint
          (ZoneChunkList<v8::internal::SafepointTableBuilder::DeoptimizationInfo> *param_1,
          long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  Zone *this;
  int local_48 [4];
  undefined8 *local_38;
  
  this = *(Zone **)(param_1 + 0x28);
  local_48[1] = -1;
  local_48[2] = -1;
  local_48[0] = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x10);
  local_38 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)local_38) < 0x20) {
    local_38 = (undefined8 *)Zone::NewExpand(this,0x20);
  }
  else {
    *(undefined8 **)(this + 0x10) = local_38 + 4;
  }
  local_38[2] = 0;
  local_38[3] = 0;
  *local_38 = this;
  local_38[1] = 0;
  puVar1 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar1) < 0x38) {
    puVar1 = (undefined8 *)Zone::NewExpand(this,0x38);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar1 + 7;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 8;
  local_38[2] = puVar1;
  local_38[3] = puVar1;
  ZoneChunkList<v8::internal::SafepointTableBuilder::DeoptimizationInfo>::push_back
            (param_1,(DeoptimizationInfo *)local_48);
  lVar2 = *(long *)(param_1 + 0x18);
  iVar3 = *(int *)(lVar2 + 4);
  if (iVar3 == 0) {
    lVar2 = *(long *)(lVar2 + 0x10);
    iVar3 = *(int *)(lVar2 + 4);
  }
  return *(undefined8 *)(lVar2 + (ulong)(iVar3 - 1) * 0x18 + 0x28);
}

