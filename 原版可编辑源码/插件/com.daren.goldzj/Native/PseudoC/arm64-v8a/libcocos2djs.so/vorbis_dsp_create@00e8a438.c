
long * vorbis_dsp_create(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  
  plVar2 = calloc(1,0x78);
  lVar6 = *(long *)(param_1 + 0x30);
  *plVar2 = param_1;
  uVar1 = *(uint *)(param_1 + 4);
  puVar3 = malloc((long)(int)uVar1 << 3);
  plVar2[7] = (long)puVar3;
  puVar4 = malloc((long)(int)uVar1 << 3);
  plVar2[8] = (long)puVar4;
  if (0 < (int)uVar1) {
    uVar7 = (ulong)uVar1;
    do {
      pvVar5 = calloc(1,(*(ulong *)(lVar6 + 8) & 0x7ffffffffffffffe) << 1);
      *puVar3 = pvVar5;
      pvVar5 = calloc(1,*(ulong *)(lVar6 + 8) & 0xfffffffffffffffc);
      uVar7 = uVar7 - 1;
      *puVar4 = pvVar5;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 != 0);
  }
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  if (((plVar2 != (long *)0x0) && (param_1 != 0)) && (lVar6 != 0)) {
    plVar2[9] = -1;
    plVar2[0xd] = -1;
    plVar2[0xe] = -1;
    plVar2[0xc] = -1;
  }
  return plVar2;
}

