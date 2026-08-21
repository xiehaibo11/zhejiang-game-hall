
/* v8::internal::AlternativeGenerationList::AlternativeGenerationList(int, v8::internal::Zone*) */

void __thiscall
v8::internal::AlternativeGenerationList::AlternativeGenerationList
          (AlternativeGenerationList *this,int param_1,Zone *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  AlternativeGenerationList *pAVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_1 < 1) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = CONCAT44(0,param_1);
    auVar15 = auVar4 << 0x40;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x10);
    uVar7 = CONCAT44(0,param_1) * 8;
    auVar15._8_8_ = uVar7;
    auVar15._0_8_ = lVar3;
    if (uVar7 < (ulong)(*(long *)(param_2 + 0x18) - lVar3) ||
        uVar7 - (*(long *)(param_2 + 0x18) - lVar3) == 0) {
      *(ulong *)(param_2 + 0x10) = lVar3 + uVar7;
    }
    else {
      auVar15 = Zone::NewExpand(param_2,uVar7);
    }
  }
  uVar7 = auVar15._8_8_;
  *(long *)this = auVar15._0_8_;
  *(int *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2e) = 0;
  this[0x32] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x38] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x3a) = 0;
  this[0x3e] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x48] = (AlternativeGenerationList)0x0;
  this[0x18] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  this[0x2c] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x6a) = 0;
  this[0x6e] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  this[0x74] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x76) = 0;
  this[0x7a] = (AlternativeGenerationList)0x0;
  this[0x84] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  this[0x54] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x68] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0xa6) = 0;
  this[0xaa] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0xac) = 0;
  this[0xb0] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0xb2) = 0;
  this[0xb6] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  this[0xc0] = (AlternativeGenerationList)0x0;
  this[0x90] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0x9c) = 0;
  this[0xa4] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0xe2) = 0;
  this[0xe6] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0xe8) = 0;
  this[0xec] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0xee) = 0;
  this[0xf2] = (AlternativeGenerationList)0x0;
  this[0xfc] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0xf4) = 0;
  this[0xcc] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0xc4) = 0;
  this[0xe0] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0x11e) = 0;
  this[0x122] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x124) = 0;
  this[0x128] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x12a) = 0;
  this[0x12e] = (AlternativeGenerationList)0x0;
  this[0x138] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x130) = 0;
  this[0x108] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x114) = 0;
  this[0x11c] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x15a) = 0;
  this[0x15e] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x160) = 0;
  this[0x164] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x166) = 0;
  this[0x16a] = (AlternativeGenerationList)0x0;
  this[0x174] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x16c) = 0;
  this[0x144] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x13c) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  this[0x158] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x196) = 0;
  this[0x19a] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x19c) = 0;
  this[0x1a0] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x1a2) = 0;
  this[0x1a6] = (AlternativeGenerationList)0x0;
  this[0x1b0] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  this[0x180] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x18c) = 0;
  *(undefined8 *)(this + 0x184) = 0;
  this[0x194] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x1d2) = 0;
  this[0x1d6] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x1d8) = 0;
  this[0x1dc] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x1de) = 0;
  this[0x1e2] = (AlternativeGenerationList)0x0;
  this[0x1ec] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x1e4) = 0;
  this[0x1bc] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x1b4) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  this[0x1d0] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x20e) = 0;
  this[0x212] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x214) = 0;
  this[0x218] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x21a) = 0;
  this[0x21e] = (AlternativeGenerationList)0x0;
  this[0x228] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x220) = 0;
  this[0x1f8] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x204) = 0;
  *(undefined8 *)(this + 0x1fc) = 0;
  this[0x20c] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x24a) = 0;
  this[0x24e] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x250) = 0;
  this[0x254] = (AlternativeGenerationList)0x0;
  *(undefined4 *)(this + 0x256) = 0;
  this[0x25a] = (AlternativeGenerationList)0x0;
  this[0x264] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x25c) = 0;
  this[0x234] = (AlternativeGenerationList)0x0;
  *(undefined8 *)(this + 0x22c) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  this[0x248] = (AlternativeGenerationList)0x0;
  if (0 < param_1) {
    pAVar11 = this + 0x10;
    uVar12 = 1;
    do {
      uVar2 = *(uint *)(this + 8);
      uVar8 = *(uint *)(this + 0xc);
      if ((int)uVar8 < (int)uVar2) {
        pvVar9 = *(void **)this;
      }
      else {
        lVar3 = *(long *)(param_2 + 0x10);
        uVar1 = uVar2 << 1 | 1;
        uVar7 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        auVar13._8_8_ = uVar7;
        auVar13._0_8_ = lVar3;
        if ((ulong)(*(long *)(param_2 + 0x18) - lVar3) < uVar7) {
          auVar13 = Zone::NewExpand(param_2,uVar7);
        }
        else {
          *(ulong *)(param_2 + 0x10) = lVar3 + uVar7;
        }
        uVar7 = auVar13._8_8_;
        pvVar9 = auVar13._0_8_;
        uVar8 = *(uint *)(this + 0xc);
        if (0 < (int)uVar8) {
          MemCopy(pvVar9,*(void **)this,(ulong)uVar8 << 3);
          uVar8 = *(uint *)(this + 0xc);
          uVar7 = extraout_x1;
        }
        *(void **)this = pvVar9;
        *(uint *)(this + 8) = uVar1;
      }
      *(uint *)(this + 0xc) = uVar8 + 1;
      *(AlternativeGenerationList **)((long)pvVar9 + (long)(int)uVar8 * 8) = pAVar11;
      if ((uint)param_1 <= uVar12) break;
      bVar5 = uVar12 < 10;
      uVar12 = uVar12 + 1;
      pAVar11 = pAVar11 + 0x3c;
    } while (bVar5);
    if (10 < param_1) {
      iVar10 = param_1 + -10;
      do {
        puVar6 = Malloced::operator_new((Malloced *)0x3c,uVar7);
        *(undefined4 *)((long)puVar6 + 0x1e) = 0;
        *(undefined1 *)((long)puVar6 + 0x22) = 0;
        *(undefined4 *)((long)puVar6 + 0x24) = 0;
        *(undefined1 *)(puVar6 + 5) = 0;
        *(undefined4 *)((long)puVar6 + 0x2a) = 0;
        *(undefined1 *)((long)puVar6 + 0x2e) = 0;
        puVar6[6] = 0;
        *(undefined1 *)(puVar6 + 7) = 0;
        *(undefined1 *)(puVar6 + 1) = 0;
        *puVar6 = 0;
        *(undefined8 *)((long)puVar6 + 0x14) = 0;
        *(undefined8 *)((long)puVar6 + 0xc) = 0;
        *(undefined1 *)((long)puVar6 + 0x1c) = 0;
        uVar2 = *(uint *)(this + 8);
        uVar8 = *(uint *)(this + 0xc);
        if ((int)uVar8 < (int)uVar2) {
          pvVar9 = *(void **)this;
          uVar7 = extraout_x1_00;
        }
        else {
          lVar3 = *(long *)(param_2 + 0x10);
          uVar1 = uVar2 << 1 | 1;
          uVar7 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          auVar14._8_8_ = uVar7;
          auVar14._0_8_ = lVar3;
          if ((ulong)(*(long *)(param_2 + 0x18) - lVar3) < uVar7) {
            auVar14 = Zone::NewExpand(param_2,uVar7);
          }
          else {
            *(ulong *)(param_2 + 0x10) = lVar3 + uVar7;
          }
          uVar7 = auVar14._8_8_;
          pvVar9 = auVar14._0_8_;
          uVar8 = *(uint *)(this + 0xc);
          if (0 < (int)uVar8) {
            MemCopy(pvVar9,*(void **)this,(ulong)uVar8 << 3);
            uVar8 = *(uint *)(this + 0xc);
            uVar7 = extraout_x1_01;
          }
          *(void **)this = pvVar9;
          *(uint *)(this + 8) = uVar1;
        }
        iVar10 = iVar10 + -1;
        *(uint *)(this + 0xc) = uVar8 + 1;
        *(undefined8 **)((long)pvVar9 + (long)(int)uVar8 * 8) = puVar6;
      } while (iVar10 != 0);
    }
  }
  return;
}

