
/* v8::internal::DiyFp::Multiply(v8::internal::DiyFp const&) */

void __thiscall v8::internal::DiyFp::Multiply(DiyFp *this,DiyFp *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *(ulong *)this >> 0x20;
  uVar1 = *(ulong *)this & 0xffffffff;
  uVar5 = *(ulong *)param_1 >> 0x20;
  uVar2 = *(ulong *)param_1 & 0xffffffff;
  uVar6 = uVar5 * uVar1;
  uVar4 = uVar2 * uVar3;
  *(int *)(this + 8) = *(int *)(param_1 + 8) + *(int *)(this + 8) + 0x40;
  *(ulong *)this =
       uVar5 * uVar3 + (uVar4 >> 0x20) + (uVar6 >> 0x20) +
       ((uVar2 * uVar1 >> 0x20) + (uVar4 & 0xffffffff) + (uVar6 & 0xffffffff) + 0x80000000 >> 0x20);
  return;
}

