
void FUN_01094e40(Factory *param_1,ulong *param_2,uint param_3,ulong *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  ulong local_68;
  
  uVar7 = *param_2;
  uVar4 = *(uint *)(uVar7 + 0xb);
  uVar9 = uVar7 & 0xffffffff00000000;
  if ((uVar4 & 1) == 0) {
    if (-1 < (int)uVar4) {
      uVar4 = uVar4 >> 1;
      dVar17 = (double)(ulong)uVar4;
joined_r0x01094edc:
      if (param_3 < uVar4) {
        uVar8 = *param_4;
        if (((*(uint *)(uVar8 + 0x13) & 3) == 2) && ((int)*(uint *)(uVar8 + 0xf) >> 1 != 0)) {
          lVar12 = (long)((ulong)*(uint *)(uVar8 + 0xf) << 0x20) >> 0x21;
          lVar13 = 0x1800000000;
          lVar14 = 0x1000000000;
          do {
            uVar4 = *(uint *)(uVar8 + 7 + (lVar14 >> 0x20));
            if ((uVar4 != *(uint *)(param_1 + 0xa8)) && (uVar4 != *(uint *)(param_1 + 0xa0))) {
              if ((uVar4 & 1) == 0) {
                dVar16 = (double)((int)uVar4 >> 1);
              }
              else {
                dVar16 = *(double *)((uVar8 & 0xffffffff00000000 | (ulong)uVar4) + 3);
              }
              uVar4 = (uint)dVar16;
              if (((param_3 <= uVar4) && (uVar4 < SUB84(dVar17,0))) &&
                 ((*(uint *)(uVar8 + 7 + (lVar13 >> 0x20)) & 0x40) != 0)) {
                param_3 = uVar4 + 1;
              }
            }
            lVar13 = lVar13 + 0xc00000000;
            lVar12 = lVar12 + -1;
            lVar14 = lVar14 + 0xc00000000;
          } while (lVar12 != 0);
        }
        if (param_3 == 0) {
          bVar3 = *(byte *)((uVar9 | *(uint *)(uVar7 - 1)) + 10);
          if (((bVar3 < 0x30) || (bVar1 = bVar3 & 0xf8, bVar1 == 0x78)) ||
             ((byte)((bVar3 >> 3) - 6) < 6)) {
            puVar11 = (undefined4 *)(uVar9 + 0x168);
          }
          else if (bVar1 == 0x68) {
            puVar11 = (undefined4 *)(uVar9 + 0x3e0);
          }
          else if ((byte)((bVar3 >> 3) - 0x11) < 0xb) {
            puVar11 = (undefined4 *)(uVar9 + 0x3c0);
          }
          else {
            if (bVar1 != 0x60) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            puVar11 = (undefined4 *)(uVar9 + 1000);
          }
          param_3 = 0;
          *(undefined4 *)(uVar7 + 7) = *puVar11;
        }
        else {
          uVar4 = *(uint *)(uVar8 + 0xf);
          if ((int)uVar4 >> 1 != 0) {
            iVar15 = 0;
            lVar13 = 0;
            lVar14 = 0x1000000000;
            while( true ) {
              uVar2 = *(uint *)(uVar8 + (lVar14 >> 0x20) + 7);
              if ((uVar2 != *(uint *)(param_1 + 0xa8)) && (uVar2 != *(uint *)(param_1 + 0xa0))) {
                if ((uVar2 & 1) == 0) {
                  dVar16 = (double)((int)uVar2 >> 1);
                }
                else {
                  dVar16 = *(double *)((uVar8 & 0xffffffff00000000 | (ulong)uVar2) + 3);
                }
                if ((param_3 <= (uint)(int)dVar16) && ((uint)(int)dVar16 < SUB84(dVar17,0))) {
                  uVar6 = *(undefined8 *)((uVar8 & 0xffffffff00000000) + 0xa8);
                  local_68 = uVar8;
                  v8::internal::
                  Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                  SetEntry((Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>
                            *)&local_68,param_1,lVar13,uVar6,uVar6,0xc0);
                  iVar15 = iVar15 + 1;
                }
              }
              if (((long)((ulong)uVar4 << 0x20) >> 0x21) + -1 == lVar13) break;
              uVar8 = *param_4;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 0xc00000000;
            }
            if (0 < iVar15) {
              uVar7 = *param_4;
              puVar10 = (uint *)(uVar7 + 7);
              *puVar10 = *puVar10 + iVar15 * -2 & 0xfffffffe;
              puVar10 = (uint *)(uVar7 + 0xb);
              *puVar10 = *puVar10 + iVar15 * 2 & 0xfffffffe;
            }
          }
        }
      }
      puVar5 = (ulong *)v8::internal::Factory::NewNumberFromUint(param_1,param_3);
      uVar9 = *param_2;
      uVar7 = *puVar5;
      *(int *)(uVar9 + 0xb) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar8 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar7);
          uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar7);
        }
      }
      return;
    }
  }
  else if (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar4) - 1)) == 0x42) {
    dVar16 = *(double *)((uVar9 | uVar4) + 3);
    dVar17 = dVar16 + 4503599627370496.0;
    if (((ulong)dVar17 >> 0x20 == 0x43300000) && (dVar16 == (double)((ulong)dVar17 & 0xffffffff))) {
      uVar4 = SUB84(dVar17,0);
      goto joined_r0x01094edc;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","array->length().ToArrayLength(&old_length)");
}

