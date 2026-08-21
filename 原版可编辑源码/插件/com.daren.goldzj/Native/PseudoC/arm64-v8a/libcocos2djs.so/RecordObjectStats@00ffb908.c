
/* v8::internal::ObjectStats::RecordObjectStats(v8::internal::InstanceType, unsigned long, unsigned
   long) */

void __thiscall
v8::internal::ObjectStats::RecordObjectStats
          (ObjectStats *this,ushort param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + (ulong)param_2 * 8 + 0x4898);
  uVar2 = (ulong)param_2;
  *(long *)(this + (ulong)param_2 * 8 + 8) = *(long *)(this + (ulong)param_2 * 8 + 8) + 1;
  *(long *)(this + (ulong)param_2 * 8 + 0x4898) = lVar4 + param_3;
  if (param_3 == 0) {
    uVar3 = 0;
    lVar4 = uVar2 * 0x80;
  }
  else {
    uVar1 = 0x3b - (int)LZCOUNT(param_3);
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if (0xe < (int)uVar1) {
      uVar1 = 0xf;
    }
    uVar3 = (ulong)uVar1;
    lVar4 = uVar3 * 8 + uVar2 * 0x80;
  }
  *(long *)(this + lVar4 + 0xb570) = *(long *)(this + lVar4 + 0xb570) + 1;
  lVar4 = uVar3 * 8 + uVar2 * 0x80;
  *(long *)(this + uVar2 * 8 + 0x9128) = *(long *)(this + uVar2 * 8 + 0x9128) + param_4;
  *(long *)(this + lVar4 + 0x2f9f0) = *(long *)(this + lVar4 + 0x2f9f0) + 1;
  return;
}

