
void FUN_00fe8934(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar8 = 0;
    puVar9 = (ulong *)(param_1 + 0x18);
    do {
      uVar5 = puVar9[-1] & 0xfffffffffffc0000;
      uVar4 = puVar9[-1] - uVar5;
      if ((*(uint *)(*(long *)(uVar5 + 0x10) + (uVar4 >> 7 & 0x1ffffff) * 4) >>
           (ulong)((uint)(uVar4 >> 2) & 0x1f) & 1) != 0) {
        uVar5 = *puVar9;
        lVar6 = *(long *)((uVar5 & 0xfffffffffffc0000) + 0x10);
        uVar4 = uVar5 - (uVar5 & 0xfffffffffffc0000);
        lVar7 = (uVar4 >> 7 & 0x1ffffff) * 4;
        uVar1 = *(uint *)(lVar6 + lVar7);
        uVar2 = 1 << (ulong)((uint)(uVar4 >> 2) & 0x1f);
        *(uint *)(lVar6 + lVar7) = uVar1 | uVar2;
        if ((uVar1 & uVar2) == 0) {
          puVar10 = *(undefined8 **)(param_2 + 0x58);
          lVar6 = puVar10[1];
          if (lVar6 == 0x40) {
            v8::base::Mutex::Lock((Mutex *)(param_2 + 0x2d8));
            *puVar10 = *(undefined8 *)(param_2 + 0x300);
            *(undefined8 **)(param_2 + 0x300) = puVar10;
            v8::base::Mutex::Unlock((Mutex *)(param_2 + 0x2d8));
            pvVar3 = operator_new(0x210);
            *(undefined8 *)((long)pvVar3 + 0x20) = 0;
            *(undefined8 *)((long)pvVar3 + 0x18) = 0;
            *(undefined8 *)((long)pvVar3 + 0x30) = 0;
            *(undefined8 *)((long)pvVar3 + 0x28) = 0;
            *(undefined8 *)((long)pvVar3 + 0x40) = 0;
            *(undefined8 *)((long)pvVar3 + 0x38) = 0;
            *(undefined8 *)((long)pvVar3 + 0x50) = 0;
            *(undefined8 *)((long)pvVar3 + 0x48) = 0;
            *(undefined8 *)((long)pvVar3 + 0x60) = 0;
            *(undefined8 *)((long)pvVar3 + 0x58) = 0;
            *(undefined8 *)((long)pvVar3 + 0x70) = 0;
            *(undefined8 *)((long)pvVar3 + 0x68) = 0;
            *(undefined8 *)((long)pvVar3 + 0x80) = 0;
            *(undefined8 *)((long)pvVar3 + 0x78) = 0;
            *(undefined8 *)((long)pvVar3 + 0x90) = 0;
            *(undefined8 *)((long)pvVar3 + 0x88) = 0;
            *(undefined8 *)((long)pvVar3 + 0xa0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x98) = 0;
            *(undefined8 *)((long)pvVar3 + 0xb0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xa8) = 0;
            *(undefined8 *)((long)pvVar3 + 0xc0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xb8) = 0;
            *(undefined8 *)((long)pvVar3 + 0xd0) = 0;
            *(undefined8 *)((long)pvVar3 + 200) = 0;
            *(undefined8 *)((long)pvVar3 + 0xe0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xd8) = 0;
            *(undefined8 *)((long)pvVar3 + 0xf0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xe8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x100) = 0;
            *(undefined8 *)((long)pvVar3 + 0xf8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x110) = 0;
            *(undefined8 *)((long)pvVar3 + 0x108) = 0;
            *(undefined8 *)((long)pvVar3 + 0x120) = 0;
            *(undefined8 *)((long)pvVar3 + 0x118) = 0;
            *(undefined8 *)((long)pvVar3 + 0x130) = 0;
            *(undefined8 *)((long)pvVar3 + 0x128) = 0;
            *(undefined8 *)((long)pvVar3 + 0x140) = 0;
            *(undefined8 *)((long)pvVar3 + 0x138) = 0;
            *(undefined8 *)((long)pvVar3 + 0x150) = 0;
            *(undefined8 *)((long)pvVar3 + 0x148) = 0;
            *(undefined8 *)((long)pvVar3 + 0x160) = 0;
            *(undefined8 *)((long)pvVar3 + 0x158) = 0;
            *(undefined8 *)((long)pvVar3 + 0x170) = 0;
            *(undefined8 *)((long)pvVar3 + 0x168) = 0;
            *(undefined8 *)((long)pvVar3 + 0x180) = 0;
            *(undefined8 *)((long)pvVar3 + 0x178) = 0;
            *(undefined8 *)((long)pvVar3 + 400) = 0;
            *(undefined8 *)((long)pvVar3 + 0x188) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1a0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x198) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1b0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1a8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1c0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1b8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1d0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1c8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1e0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1d8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1f0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1e8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x200) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1f8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x208) = 0;
            *(void **)(param_2 + 0x58) = pvVar3;
            *(undefined8 *)((long)pvVar3 + 8) = 1;
            *(ulong *)((long)pvVar3 + 0x10) = uVar5;
          }
          else {
            puVar10[1] = lVar6 + 1;
            puVar10[lVar6 + 2] = uVar5;
          }
        }
      }
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 2;
    } while (uVar8 < *(ulong *)(param_1 + 8));
  }
  return;
}

