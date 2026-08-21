
/* v8::internal::RootsSerializer::VisitRootPointers(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::RootsSerializer::VisitRootPointers
          (RootsSerializer *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(this + 0x68) + 0x80;
  if ((undefined8 *)(lVar1 + (ulong)*(ushort *)(this + 0x1c8) * 8) != param_4) {
    Serializer::VisitRootPointers((Serializer *)this,param_2,param_3,param_4,param_5);
    return;
  }
  if (param_4 < param_5) {
    uVar4 = (ulong)((long)param_4 - lVar1) >> 3;
    do {
      Serializer::SerializeRootObject((Serializer *)this,*param_4);
      if (0xf8f < (ulong)((long)param_4 - lVar1)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar3 = (ulong)((long)param_4 - lVar1) >> 6 & 0x3fffffffffffff8;
      uVar2 = uVar4 & 0x3f;
      param_4 = param_4 + 1;
      uVar4 = uVar4 + 1;
      *(ulong *)(this + uVar3 + 0x1d0) = *(ulong *)(this + uVar3 + 0x1d0) | 1L << uVar2;
    } while (param_4 < param_5);
  }
  return;
}

