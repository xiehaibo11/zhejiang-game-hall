
/* v8::internal::OldLargeObjectSpace::MergeOffThreadSpace(v8::internal::OffThreadLargeObjectSpace*)
    */

void __thiscall
v8::internal::OldLargeObjectSpace::MergeOffThreadSpace
          (OldLargeObjectSpace *this,OffThreadLargeObjectSpace *param_1)

{
  int iVar1;
  long lVar2;
  ulong local_38;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) goto LAB_0101e8b4;
  do {
    do {
      local_38 = (long)*(uint **)(lVar2 + 0x20) + 1;
      iVar1 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_38,
                         local_38 & 0xffffffff00000000 | (ulong)**(uint **)(lVar2 + 0x20));
      (**(code **)(*(long *)param_1 + 0x90))(param_1,lVar2,(long)iVar1);
      (**(code **)(*(long *)this + 0x88))(this,lVar2,(long)iVar1);
      lVar2 = *(long *)(param_1 + 0x20);
    } while (lVar2 != 0);
LAB_0101e8b4:
  } while (*(long *)(param_1 + 0x28) != 0);
  return;
}

