
/* flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::TabItemOption> > >
   flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::TabItemOption>
   >(flatbuffers::Offset<flatbuffers::TabItemOption> const*, unsigned long) */

uint __thiscall
flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::TabItemOption>>
          (FlatBufferBuilder *this,Offset *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  
  uVar3 = *(ulong *)(this + 0x10);
  lVar4 = *(long *)(this + 0x18);
  uVar5 = *(ulong *)(this + 8);
  uVar2 = -(((int)uVar5 - (int)lVar4) + (int)uVar3);
  uVar7 = (ulong)uVar2 & 3;
  if (lVar4 - uVar7 < uVar3) {
    uVar6 = uVar5 >> 1 & 0x7ffffffffffffff8;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    *(ulong *)(this + 8) = uVar6 + uVar5;
    uVar5 = (ulong)(uint)(((int)uVar3 - (int)lVar4) + (int)uVar5);
    uVar3 = (**(code **)(**(long **)(this + 0x20) + 0x10))();
    pvVar8 = (void *)((uVar3 + *(long *)(this + 8)) - uVar5);
    memcpy(pvVar8,*(void **)(this + 0x18),uVar5);
    *(void **)(this + 0x18) = pvVar8;
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
    lVar4 = *(long *)(this + 0x18);
    *(ulong *)(this + 0x10) = uVar3;
  }
  pvVar8 = (void *)(lVar4 - uVar7);
  *(void **)(this + 0x18) = pvVar8;
  if ((uVar2 & 3) != 0) {
    memset(pvVar8,0,uVar7);
    uVar3 = *(ulong *)(this + 0x10);
    pvVar8 = *(void **)(this + 0x18);
  }
  uVar5 = *(ulong *)(this + 8);
  uVar2 = -(((int)uVar5 - (int)pvVar8) + (int)uVar3);
  uVar7 = (ulong)uVar2 & 3;
  if ((long)pvVar8 - uVar7 < uVar3) {
    uVar6 = uVar5 >> 1 & 0x7ffffffffffffff8;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    *(ulong *)(this + 8) = uVar6 + uVar5;
    uVar3 = (ulong)(uint)(((int)uVar3 - (int)pvVar8) + (int)uVar5);
    lVar4 = (**(code **)(**(long **)(this + 0x20) + 0x10))(*(long **)(this + 0x20));
    pvVar8 = (void *)((lVar4 + *(long *)(this + 8)) - uVar3);
    memcpy(pvVar8,*(void **)(this + 0x18),uVar3);
    *(void **)(this + 0x18) = pvVar8;
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
    pvVar8 = *(void **)(this + 0x18);
    *(long *)(this + 0x10) = lVar4;
  }
  *(void **)(this + 0x18) = (void *)((long)pvVar8 - uVar7);
  uVar3 = param_2;
  if ((uVar2 & 3) != 0) {
    memset((void *)((long)pvVar8 - uVar7),0,uVar7);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    iVar1 = *(int *)(param_1 + uVar3 * 4 + -4);
    Align(this,4);
    PushElement<unsigned_int>
              (this,(((*(int *)(this + 8) - *(int *)(this + 0x18)) + *(int *)(this + 0x10)) - iVar1)
                    + 4);
  }
  uVar2 = PushElement<unsigned_int>(this,(uint)param_2);
  return uVar2;
}

