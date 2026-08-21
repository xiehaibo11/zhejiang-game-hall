
/* v8::internal::ICStats::ICStats() */

void __thiscall v8::internal::ICStats::ICStats(ICStats *this)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined4 *)this = 0x1000;
  puVar2 = operator_new(0x80000);
  lVar3 = -0x1000;
  *(undefined8 **)(this + 8) = puVar2;
  *(undefined8 **)(this + 0x10) = puVar2;
  *(undefined8 **)(this + 0x18) = puVar2 + 0x10000;
  do {
    puVar2[5] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[6] = 0xffffffffffffffff;
    *(undefined2 *)(puVar2 + 7) = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    *(undefined1 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)((long)puVar2 + 100) = 0;
    *(undefined8 *)((long)puVar2 + 0x74) = 0;
    *(undefined8 *)((long)puVar2 + 0x6c) = 0;
    *(undefined4 *)((long)puVar2 + 0x7c) = 0;
    bVar1 = lVar3 != -1;
    lVar3 = lVar3 + 1;
    puVar2 = (undefined8 *)(*(long *)(this + 0x10) + 0x80);
    *(undefined8 **)(this + 0x10) = puVar2;
  } while (bVar1);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  *(undefined4 *)(this + 4) = 0;
  return;
}

