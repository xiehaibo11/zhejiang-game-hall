
/* flatbuffers::FlatBufferBuilder::PushBytes(unsigned char const*, unsigned long) */

void __thiscall
flatbuffers::FlatBufferBuilder::PushBytes(FlatBufferBuilder *this,uchar *param_1,ulong param_2)

{
  uchar *puVar1;
  bool bVar2;
  long lVar3;
  uchar *puVar4;
  uchar *puVar5;
  ulong uVar6;
  ulong uVar7;
  uchar *puVar8;
  void *__dest;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar4 = *(uchar **)(this + 0x18);
  if ((long)puVar4 - param_2 < *(ulong *)(this + 0x10)) {
    uVar6 = *(ulong *)(this + 8);
    uVar7 = uVar6 >> 1 & 0x7ffffffffffffff8;
    if (uVar7 <= param_2) {
      uVar7 = param_2;
    }
    *(ulong *)(this + 8) = uVar7 + uVar6;
    uVar7 = (ulong)(uint)(((int)*(ulong *)(this + 0x10) - (int)puVar4) + (int)uVar6);
    lVar3 = (**(code **)(**(long **)(this + 0x20) + 0x10))();
    __dest = (void *)((lVar3 + *(long *)(this + 8)) - uVar7);
    memcpy(__dest,*(void **)(this + 0x18),uVar7);
    *(void **)(this + 0x18) = __dest;
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
    puVar4 = *(uchar **)(this + 0x18);
    *(long *)(this + 0x10) = lVar3;
  }
  *(uchar **)(this + 0x18) = puVar4 + -param_2;
  if (param_2 != 0) {
    if ((param_2 < 0x20) || ((puVar4 + -param_2 < param_1 + param_2 && (param_1 < puVar4)))) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_2 & 0xffffffffffffffe0;
      puVar5 = param_1 + 0x10;
      puVar8 = puVar4 + (0x10 - param_2);
      uVar6 = uVar7;
      do {
        puVar1 = puVar5 + -8;
        uVar9 = *(undefined8 *)(puVar5 + -0x10);
        uVar11 = *(undefined8 *)(puVar5 + 8);
        uVar10 = *(undefined8 *)puVar5;
        puVar5 = puVar5 + 0x20;
        uVar6 = uVar6 - 0x20;
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)puVar1;
        *(undefined8 *)(puVar8 + -0x10) = uVar9;
        *(undefined8 *)(puVar8 + 8) = uVar11;
        *(undefined8 *)puVar8 = uVar10;
        puVar8 = puVar8 + 0x20;
      } while (uVar6 != 0);
      if (uVar7 == param_2) {
        return;
      }
    }
    lVar3 = uVar7 - param_2;
    puVar5 = param_1 + uVar7;
    do {
      puVar4[lVar3] = *puVar5;
      bVar2 = lVar3 != -1;
      lVar3 = lVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (bVar2);
  }
  return;
}

