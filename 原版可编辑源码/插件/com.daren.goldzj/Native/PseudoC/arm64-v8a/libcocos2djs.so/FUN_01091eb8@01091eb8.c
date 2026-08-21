
void FUN_01091eb8(long param_1,ulong *param_2,uint param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  
  uVar8 = *param_2;
  uVar10 = *(uint *)(uVar8 + 0xb);
  uVar7 = uVar8 & 0xffffffff00000000;
  if ((uVar10 & 1) == 0) {
    if (-1 < (int)uVar10) {
      uVar10 = uVar10 >> 1;
      dVar12 = (double)(ulong)uVar10;
joined_r0x01091f54:
      if (uVar10 < param_3) {
        bVar3 = *(byte *)((uVar7 | 10) + (ulong)*(uint *)(uVar8 - 1));
        if ((0x2f < bVar3) || ((bVar3 >> 3 & 1) == 0)) {
          uVar7 = (ulong)(bVar3 >> 3);
          if ((bVar3 >> 3 < 7) && ((0x55U >> uVar7 & 1) != 0)) {
            uVar7 = 0x7010501030101 >> ((ulong)bVar3 & 0x38);
          }
          v8::internal::JSObject::TransitionElementsKind(param_2,uVar7);
        }
      }
      lVar5 = *param_4;
      uVar10 = *(int *)(lVar5 + 3) >> 1;
      uVar2 = SUB84(dVar12,0);
      if (uVar10 <= SUB84(dVar12,0)) {
        uVar2 = uVar10;
      }
      if (param_3 == 0) {
        uVar7 = *param_2;
        uVar8 = uVar7 & 0xffffffff00000000;
        bVar3 = *(byte *)((uVar8 | *(uint *)(uVar7 - 1)) + 10);
        if (((bVar3 < 0x30) || (bVar1 = bVar3 & 0xf8, bVar1 == 0x78)) ||
           ((byte)((bVar3 >> 3) - 6) < 6)) {
          puVar9 = (undefined4 *)(uVar8 + 0x168);
        }
        else if (bVar1 == 0x68) {
          puVar9 = (undefined4 *)(uVar8 + 0x3e0);
        }
        else if ((byte)((bVar3 >> 3) - 0x11) < 0xb) {
          puVar9 = (undefined4 *)(uVar8 + 0x3c0);
        }
        else {
          if (bVar1 != 0x60) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          puVar9 = (undefined4 *)(uVar8 + 1000);
        }
        *(undefined4 *)(uVar7 + 7) = *puVar9;
      }
      else if (uVar10 < param_3) {
        uVar10 = uVar10 + (uVar10 >> 1) + 0x10;
        if (uVar10 <= param_3) {
          uVar10 = param_3;
        }
        FUN_01092140(param_2,uVar10);
      }
      else if (uVar10 < param_3 * 2 + 0x10) {
        iVar6 = uVar2 - param_3;
        if (iVar6 != 0 && (int)param_3 <= (int)uVar2) {
          uVar10 = param_3 << 3 | 7;
          do {
            *(undefined8 *)(lVar5 + (int)uVar10) = 0xfff7fffffff7ffff;
            iVar6 = iVar6 + -1;
            uVar10 = uVar10 + 8;
          } while (iVar6 != 0);
        }
      }
      else {
        uVar4 = uVar10 - param_3 >> (param_3 + 1 == uVar2);
        v8::internal::Heap::RightTrimFixedArray((Heap *)(param_1 + 0x8850),lVar5,uVar4);
        uVar10 = uVar10 - uVar4;
        if (uVar2 <= uVar10) {
          uVar10 = uVar2;
        }
        iVar6 = uVar10 - param_3;
        if (iVar6 != 0 && (int)param_3 <= (int)uVar10) {
          lVar5 = *param_4;
          uVar10 = param_3 << 3 | 7;
          do {
            *(undefined8 *)(lVar5 + (int)uVar10) = 0xfff7fffffff7ffff;
            iVar6 = iVar6 + -1;
            uVar10 = uVar10 + 8;
          } while (iVar6 != 0);
        }
      }
      *(uint *)(*param_2 + 0xb) = param_3 * 2;
      v8::internal::JSObject::ValidateElements(*param_2);
      return;
    }
  }
  else if (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar10) - 1)) == 0x42) {
    dVar11 = *(double *)((uVar7 | uVar10) + 3);
    dVar12 = dVar11 + 4503599627370496.0;
    if ((((ulong)dVar12 >> 0x20 == 0x43300000) && (uVar10 = SUB84(dVar12,0), uVar10 != 0xffffffff))
       && (dVar11 == (double)((ulong)dVar12 & 0xffffffff))) goto joined_r0x01091f54;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","array->length().ToArrayIndex(&old_length)");
}

