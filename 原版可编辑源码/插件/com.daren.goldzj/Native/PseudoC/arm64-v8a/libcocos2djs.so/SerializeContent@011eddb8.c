
/* v8::internal::Serializer::ObjectSerializer::SerializeContent(v8::internal::Map, int) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::SerializeContent
          (ObjectSerializer *this,undefined8 param_2,int param_3)

{
  int iVar1;
  HeapObject *pHVar2;
  ulong local_40;
  ulong local_38;
  
  pHVar2 = (HeapObject *)(this + 0x10);
  UnlinkWeakNextScope::UnlinkWeakNextScope
            ((UnlinkWeakNextScope *)&local_40,*(long *)(*(long *)(this + 8) + 0x68) + 0x8850,
             *(undefined8 *)pHVar2);
  if (*(short *)((*(ulong *)pHVar2 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)(*(ulong *)pHVar2 - 1)) == 0x9a) {
    OutputCode(this,param_3);
    HeapObject::IterateBody(pHVar2,param_2,param_3,this);
    iVar1 = (int)local_40;
  }
  else {
    HeapObject::IterateBody(pHVar2,param_2,param_3,this);
    OutputRawData(this,(*(long *)(this + 0x10) + (long)param_3) - 1);
    iVar1 = (int)local_40;
  }
  if ((((iVar1 != 0) && (*(int *)(local_40 + 0x17) = (int)local_38, (local_38 & 1) != 0)) &&
      ((*(byte *)((local_38 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
     ((*(byte *)((local_40 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    Heap_GenerationalBarrierSlow(local_40,local_40 + 0x17);
  }
  return;
}

