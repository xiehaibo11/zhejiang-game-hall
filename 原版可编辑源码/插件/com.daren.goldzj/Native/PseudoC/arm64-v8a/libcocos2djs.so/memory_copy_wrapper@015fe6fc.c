
/* v8::internal::wasm::memory_copy_wrapper(unsigned long, unsigned long, unsigned int) */

void v8::internal::wasm::memory_copy_wrapper(ulong param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (((param_2 < param_1) && (param_1 < param_3 + param_2)) && (param_2 < param_3 + param_1)) {
    if (param_3 != 0) {
      puVar4 = (undefined1 *)(param_2 + (param_3 - 1));
      puVar5 = (undefined1 *)(param_1 + (param_3 - 1));
      do {
        param_3 = param_3 - 1;
        *puVar5 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    uVar1 = (ulong)(param_3 - 1) + 1;
    if ((0x1f < uVar1) &&
       ((lVar2 = (ulong)(param_3 - 1) + 1, param_2 + lVar2 <= param_1 ||
        (param_1 + lVar2 <= param_2)))) {
      uVar6 = uVar1 & 0x1ffffffe0;
      puVar7 = (undefined8 *)(param_1 + 0x10);
      param_1 = param_1 + uVar6;
      param_3 = param_3 - (int)uVar6;
      puVar8 = (undefined8 *)(param_2 + 0x10);
      uVar9 = uVar6;
      do {
        puVar3 = puVar8 + -1;
        uVar10 = puVar8[-2];
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        uVar9 = uVar9 - 0x20;
        puVar8 = puVar8 + 4;
        puVar7[-1] = *puVar3;
        puVar7[-2] = uVar10;
        puVar7[1] = uVar12;
        *puVar7 = uVar11;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      param_2 = (ulong)(param_2 + uVar6);
      if (uVar1 == uVar6) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1 = (ulong)(param_1 + 1);
      param_2 = (ulong)(param_2 + 1);
    } while (param_3 != 0);
  }
  return;
}

