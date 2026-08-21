
/* flatbuffers::FlatBufferBuilder::CreateString(char const*, unsigned long) */

int __thiscall
flatbuffers::FlatBufferBuilder::CreateString(FlatBufferBuilder *this,char *param_1,ulong param_2)

{
  uint uVar1;
  char *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar4 = *(ulong *)(this + 0x10);
  lVar5 = *(long *)(this + 0x18);
  uVar7 = *(ulong *)(this + 8);
  uVar1 = ~((uint)param_2 + ((int)uVar7 - (int)lVar5) + (int)uVar4);
  uVar11 = (ulong)uVar1 & 3;
  if (lVar5 - uVar11 < uVar4) {
    uVar9 = uVar7 >> 1 & 0x7ffffffffffffff8;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    *(ulong *)(this + 8) = uVar9 + uVar7;
    uVar7 = (ulong)(uint)(((int)uVar4 - (int)lVar5) + (int)uVar7);
    uVar4 = (**(code **)(**(long **)(this + 0x20) + 0x10))();
    pvVar12 = (void *)((uVar4 + *(long *)(this + 8)) - uVar7);
    memcpy(pvVar12,*(void **)(this + 0x18),uVar7);
    *(void **)(this + 0x18) = pvVar12;
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
    lVar5 = *(long *)(this + 0x18);
    *(ulong *)(this + 0x10) = uVar4;
  }
  pvVar12 = (void *)(lVar5 - uVar11);
  *(void **)(this + 0x18) = pvVar12;
  if ((uVar1 & 3) != 0) {
    memset(pvVar12,0,uVar11);
    uVar4 = *(ulong *)(this + 0x10);
    pvVar12 = *(void **)(this + 0x18);
  }
  if ((long)pvVar12 - 1U < uVar4) {
    uVar11 = *(ulong *)(this + 8);
    uVar7 = uVar11 >> 1 & 0x7ffffffffffffff8;
    if ((uVar11 >> 1 & 0x7ffffffffffffff8) == 0) {
      uVar7 = 1;
    }
    *(ulong *)(this + 8) = uVar7 + uVar11;
    uVar4 = (ulong)(uint)(((int)uVar4 - (int)pvVar12) + (int)uVar11);
    lVar5 = (**(code **)(**(long **)(this + 0x20) + 0x10))(*(long **)(this + 0x20));
    pvVar12 = (void *)((lVar5 + *(long *)(this + 8)) - uVar4);
    memcpy(pvVar12,*(void **)(this + 0x18),uVar4);
    *(void **)(this + 0x18) = pvVar12;
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
    pvVar12 = *(void **)(this + 0x18);
    *(long *)(this + 0x10) = lVar5;
  }
  *(long *)(this + 0x18) = (long)pvVar12 + -1;
  *(undefined1 *)((long)pvVar12 + -1) = 0;
  pcVar6 = *(char **)(this + 0x18);
  if ((long)pcVar6 - param_2 < *(ulong *)(this + 0x10)) {
    uVar7 = *(ulong *)(this + 8);
    uVar4 = uVar7 >> 1 & 0x7ffffffffffffff8;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    *(ulong *)(this + 8) = uVar4 + uVar7;
    uVar4 = (ulong)(uint)(((int)*(ulong *)(this + 0x10) - (int)pcVar6) + (int)uVar7);
    lVar5 = (**(code **)(**(long **)(this + 0x20) + 0x10))();
    pvVar12 = (void *)((lVar5 + *(long *)(this + 8)) - uVar4);
    memcpy(pvVar12,*(void **)(this + 0x18),uVar4);
    *(void **)(this + 0x18) = pvVar12;
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
    pcVar6 = *(char **)(this + 0x18);
    *(long *)(this + 0x10) = lVar5;
  }
  *(char **)(this + 0x18) = pcVar6 + -param_2;
  if (param_2 != 0) {
    if ((param_2 < 0x20) || ((pcVar6 + -param_2 < param_1 + param_2 && (param_1 < pcVar6)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_2 & 0xffffffffffffffe0;
      pcVar8 = param_1 + 0x10;
      pcVar10 = pcVar6 + (0x10 - param_2);
      uVar7 = uVar4;
      do {
        pcVar2 = pcVar8 + -8;
        uVar13 = *(undefined8 *)(pcVar8 + -0x10);
        uVar15 = *(undefined8 *)(pcVar8 + 8);
        uVar14 = *(undefined8 *)pcVar8;
        pcVar8 = pcVar8 + 0x20;
        uVar7 = uVar7 - 0x20;
        *(undefined8 *)(pcVar10 + -8) = *(undefined8 *)pcVar2;
        *(undefined8 *)(pcVar10 + -0x10) = uVar13;
        *(undefined8 *)(pcVar10 + 8) = uVar15;
        *(undefined8 *)pcVar10 = uVar14;
        pcVar10 = pcVar10 + 0x20;
      } while (uVar7 != 0);
      if (uVar4 == param_2) goto LAB_00c7552c;
    }
    lVar5 = uVar4 - param_2;
    pcVar8 = param_1 + uVar4;
    do {
      pcVar6[lVar5] = *pcVar8;
      bVar3 = lVar5 != -1;
      lVar5 = lVar5 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar3);
  }
LAB_00c7552c:
  PushElement<unsigned_int>(this,(uint)param_2);
  return (*(int *)(this + 8) - *(int *)(this + 0x18)) + *(int *)(this + 0x10);
}

