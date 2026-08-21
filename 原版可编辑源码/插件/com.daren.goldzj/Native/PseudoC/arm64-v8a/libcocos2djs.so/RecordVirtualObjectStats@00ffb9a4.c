
/* v8::internal::ObjectStats::RecordVirtualObjectStats(v8::internal::ObjectStats::VirtualInstanceType,
   unsigned long, unsigned long) */

void __thiscall
v8::internal::ObjectStats::RecordVirtualObjectStats
          (ObjectStats *this,int param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  lVar2 = (long)param_2 + 0x43a;
  *(long *)(this + lVar2 * 8 + 8) = *(long *)(this + lVar2 * 8 + 8) + 1;
  *(long *)(this + lVar2 * 8 + 0x4898) = *(long *)(this + lVar2 * 8 + 0x4898) + param_3;
  if (param_3 == 0) {
    uVar4 = 0;
    lVar1 = lVar2 * 0x80;
  }
  else {
    uVar3 = 0x3b - (int)LZCOUNT(param_3);
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if (0xe < (int)uVar3) {
      uVar3 = 0xf;
    }
    uVar4 = (ulong)uVar3;
    lVar1 = uVar4 * 8 + lVar2 * 0x80;
  }
  *(long *)(this + lVar1 + 0xb570) = *(long *)(this + lVar1 + 0xb570) + 1;
  lVar1 = uVar4 * 8 + lVar2 * 0x80;
  *(long *)(this + lVar2 * 8 + 0x9128) = *(long *)(this + lVar2 * 8 + 0x9128) + param_4;
  *(long *)(this + lVar1 + 0x2f9f0) = *(long *)(this + lVar1 + 0x2f9f0) + 1;
  return;
}

