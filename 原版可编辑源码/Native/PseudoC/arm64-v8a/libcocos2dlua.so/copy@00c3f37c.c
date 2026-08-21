
/* cocostudio::FrameData::copy(cocostudio::BaseData const*) */

void __thiscall cocostudio::FrameData::copy(FrameData *this,BaseData *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  uVar14 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x24) = uVar14;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  this[0x44] = *(FrameData *)(param_1 + 0x44);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = uVar14;
  if (param_1 == (BaseData *)0x0) {
    return;
  }
  lVar3 = __dynamic_cast(param_1,&BaseData::typeinfo,&typeinfo,0);
  if (lVar3 == 0) {
    return;
  }
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(lVar3 + 0x74);
  *(undefined8 *)(this + 0x5c) = *(undefined8 *)(lVar3 + 0x5c);
  uVar1 = *(uint *)(lVar3 + 100);
  *(uint *)(this + 100) = uVar1;
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x68));
    uVar1 = *(uint *)(this + 100);
  }
  *(undefined8 *)(this + 0x68) = 0;
  if (uVar1 != 0) {
    uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if ((ulong)(long)(int)uVar1 >> 0x3e != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
    *(void **)(this + 0x68) = pvVar4;
    if (0 < (int)uVar1) {
      pvVar5 = *(void **)(lVar3 + 0x68);
      uVar7 = (ulong)uVar1;
      if ((uVar1 < 8) ||
         ((pvVar4 < (void *)((long)pvVar5 + uVar7 * 4) &&
          (pvVar5 < (void *)((long)pvVar4 + uVar7 * 4))))) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar7 & 0xfffffff8;
        puVar11 = (undefined8 *)((long)pvVar5 + 0x10);
        puVar12 = (undefined8 *)((long)pvVar4 + 0x10);
        uVar13 = uVar9;
        do {
          puVar2 = puVar11 + -1;
          uVar14 = puVar11[-2];
          uVar16 = puVar11[1];
          uVar15 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar13 = uVar13 - 8;
          puVar12[-1] = *puVar2;
          puVar12[-2] = uVar14;
          puVar12[1] = uVar16;
          *puVar12 = uVar15;
          puVar12 = puVar12 + 4;
        } while (uVar13 != 0);
        if (uVar9 == uVar7) goto LAB_00c3f49c;
      }
      lVar8 = uVar7 - uVar9;
      puVar6 = (undefined4 *)((long)pvVar5 + uVar9 * 4);
      puVar10 = (undefined4 *)((long)pvVar4 + uVar9 * 4);
      do {
        lVar8 = lVar8 + -1;
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar8 != 0);
    }
  }
LAB_00c3f49c:
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(lVar3 + 0x78);
  this[0x70] = *(FrameData *)(lVar3 + 0x70);
  return;
}

