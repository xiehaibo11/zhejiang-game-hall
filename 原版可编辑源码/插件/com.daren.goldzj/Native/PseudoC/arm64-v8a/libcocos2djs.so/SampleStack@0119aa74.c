
/* v8::internal::CpuSampler::SampleStack(v8::RegisterState const&) */

void __thiscall v8::internal::CpuSampler::SampleStack(CpuSampler *this,RegisterState *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  TickSample *pTVar5;
  undefined4 *puVar6;
  
  DataMemoryBarrier(2,3);
  plVar1 = (long *)(*(long *)(this + 0x30) + 0x80100);
  if ((*(int *)(*plVar1 + 0x1030) == 0) &&
     (puVar6 = (undefined4 *)*plVar1, puVar6 != (undefined4 *)0x0)) {
    *puVar6 = *(undefined4 *)(*(long *)(this + 0x30) + 0x168);
    pTVar5 = (TickSample *)(puVar6 + 2);
    *(undefined4 *)pTVar5 = 5;
    *(undefined8 *)(puVar6 + 0x404) = 0;
    *(undefined8 *)(puVar6 + 6) = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 0x40a) = 0;
    *(undefined8 *)(puVar6 + 0x408) = 0;
    *(ushort *)(puVar6 + 0x406) = *(ushort *)(puVar6 + 0x406) & 0xfc00 | 0x200;
    TickSample::Init(pTVar5,*(undefined8 *)(this + 0x18),param_1,0,1,1,
                     *(undefined8 *)(*(long *)(this + 0x30) + 0x80188));
    if ((this[8] != (CpuSampler)0x0) && (*(long *)(puVar6 + 0x408) != 0)) {
      iVar3 = *(int *)pTVar5;
      if (iVar3 == 0) {
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
        iVar3 = *(int *)pTVar5;
      }
      if (iVar3 == 6) {
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      }
    }
    lVar4 = *(long *)(this + 0x30);
    plVar1 = (long *)(lVar4 + 0x80100);
    *(undefined4 *)(*plVar1 + 0x1030) = 1;
    plVar2 = (long *)(lVar4 + 0x180);
    if ((long *)(*plVar1 + 0x1040) != plVar1) {
      plVar2 = (long *)(*plVar1 + 0x1040);
    }
    *plVar1 = (long)plVar2;
  }
  return;
}

