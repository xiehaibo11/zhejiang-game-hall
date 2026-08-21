
/* v8::internal::SamplingEventsProcessor::ProcessOneSample() */

undefined4 __thiscall
v8::internal::SamplingEventsProcessor::ProcessOneSample(SamplingEventsProcessor *this)

{
  Mutex *this_00;
  SamplingEventsProcessor *pSVar1;
  SamplingEventsProcessor *pSVar2;
  int iVar3;
  void *extraout_x1;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  Malloced *this_01;
  void *__src;
  undefined1 auStack_1070 [8];
  undefined4 local_1068 [2];
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 local_60;
  ushort local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  this_00 = (Mutex *)(this + 0x108);
  base::Mutex::Lock(this_00);
  if (*(int **)(*(long *)(this + 0x158) + 0x1030) == (int *)0x0) {
    base::Mutex::Unlock(this_00);
  }
  else {
    iVar3 = **(int **)(*(long *)(this + 0x158) + 0x1030);
    base::Mutex::Unlock(this_00);
    if (iVar3 == *(int *)(this + 0x16c)) {
      local_1068[0] = 5;
      local_58 = local_58 & 0xfc00 | 0x200;
      local_60 = 0;
      uStack_1058 = 0;
      local_1060 = 0;
      uStack_48 = 0;
      local_50 = 0;
      base::Mutex::Lock(this_00);
      this_01 = *(Malloced **)(this + 0x158);
      __src = *(void **)(this_01 + 0x1030);
      if (__src == (void *)0x0) {
        base::Mutex::Unlock(this_00);
      }
      else {
        memcpy(auStack_1070,__src,0x1030);
        *(void **)(this + 0x158) = __src;
        base::Mutex::Unlock(this_00);
        if (this_01 != (Malloced *)0x0) {
          Malloced::operator_delete(this_01,extraout_x1);
        }
      }
      ProfileGenerator::RecordTickSample
                (*(ProfileGenerator **)(this + 0x38),(TickSample *)local_1068);
      return 0;
    }
  }
  DataMemoryBarrier(2,3);
  pSVar1 = this + 0x80140;
  if ((*(int *)(*(long *)pSVar1 + 0x1030) == 1) && (piVar5 = *(int **)pSVar1, piVar5 != (int *)0x0))
  {
    if (*piVar5 == *(int *)(this + 0x16c)) {
      ProfileGenerator::RecordTickSample
                (*(ProfileGenerator **)(this + 0x38),(TickSample *)(piVar5 + 2));
      *(undefined4 *)(*(long *)pSVar1 + 0x1030) = 0;
      uVar4 = 0;
      pSVar2 = this + 0x180;
      if ((SamplingEventsProcessor *)(*(long *)pSVar1 + 0x1040) != this + 0x80100) {
        pSVar2 = (SamplingEventsProcessor *)(*(long *)pSVar1 + 0x1040);
      }
      *(SamplingEventsProcessor **)pSVar1 = pSVar2;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    base::Mutex::Lock(this_00);
    lVar6 = *(long *)(*(long *)(this + 0x158) + 0x1030);
    base::Mutex::Unlock(this_00);
    uVar4 = 1;
    if (lVar6 == 0) {
      uVar4 = 2;
    }
  }
  return uVar4;
}

