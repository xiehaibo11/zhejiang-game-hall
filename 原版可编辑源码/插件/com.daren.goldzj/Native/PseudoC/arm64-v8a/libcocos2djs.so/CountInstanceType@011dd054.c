
/* v8::internal::Serializer::CountInstanceType(v8::internal::Map, int, v8::internal::SnapshotSpace)
    */

void __thiscall
v8::internal::Serializer::CountInstanceType(Serializer *this,long param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (ulong)*(ushort *)(param_2 + 7) * 4;
  lVar1 = (ulong)*(ushort *)(param_2 + 7) * 8;
  *(int *)(*(long *)(this + (long)param_4 * 8 + 0x168) + lVar2) =
       *(int *)(*(long *)(this + (long)param_4 * 8 + 0x168) + lVar2) + 1;
  *(long *)(*(long *)(this + (long)param_4 * 8 + 0x198) + lVar1) =
       *(long *)(*(long *)(this + (long)param_4 * 8 + 0x198) + lVar1) + (long)param_3;
  return;
}

