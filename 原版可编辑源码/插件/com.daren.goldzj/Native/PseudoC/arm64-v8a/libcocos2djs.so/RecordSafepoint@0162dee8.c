
/* v8::internal::compiler::CodeGenerator::RecordSafepoint(v8::internal::compiler::ReferenceMap*,
   v8::internal::Safepoint::DeoptMode) */

void v8::internal::compiler::CodeGenerator::RecordSafepoint(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ZoneChunkList<int> *this;
  ulong uVar4;
  ulong *puVar5;
  int local_34;
  
  this = (ZoneChunkList<int> *)
         SafepointTableBuilder::DefineSafepoint(param_1 + 0x298,param_1 + 0xd0);
  puVar5 = (ulong *)*param_2;
  puVar3 = (ulong *)param_2[1];
  if (puVar5 != puVar3) {
    iVar1 = *(int *)(**(long **)(param_1 + 0x18) + 4);
    iVar2 = *(int *)(**(long **)(param_1 + 0x18) + 8);
    do {
      uVar4 = *puVar5;
      if ((((uVar4 & 0x1c) == 0xc) && (((uint)(uVar4 >> 5) & 0xff) < 0xb)) &&
         (local_34 = (int)((long)uVar4 >> 0x23), iVar1 - iVar2 <= local_34)) {
        ZoneChunkList<int>::push_back(this,&local_34);
      }
      puVar5 = puVar5 + 1;
    } while (puVar3 != puVar5);
  }
  return;
}

