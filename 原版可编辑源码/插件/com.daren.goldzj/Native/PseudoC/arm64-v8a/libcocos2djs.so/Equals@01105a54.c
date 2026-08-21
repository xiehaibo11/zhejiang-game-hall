
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::Object::Equals(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

ushort v8::internal::Object::Equals(Isolate *param_1,ulong *param_2,ulong *param_3)

{
  uint *puVar1;
  Isolate *pIVar2;
  int iVar3;
  bool bVar4;
  ushort uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  
  pIVar2 = param_1 + 0x95a0;
  do {
    uVar6 = *param_2;
    while ((uVar6 & 1) != 0) {
      while( true ) {
        uVar8 = uVar6 & 0xffffffff00000000;
        uVar9 = uVar8 | 7;
        if (*(short *)(uVar9 + *(uint *)(uVar6 - 1)) == 0x42) goto LAB_01105aa8;
        if (*(ushort *)(uVar9 + *(uint *)(uVar6 - 1)) < 0x40) {
          uVar8 = *param_3;
          if ((uVar8 & 1) != 0) {
            uVar10 = uVar8 & 0xffffffff00000000 | 7;
            if (*(ushort *)(uVar10 + *(uint *)(uVar8 - 1)) < 0x40) {
              if (param_2 == param_3) {
                return 0x101;
              }
              if (((param_3 != (ulong *)0x0) && (param_2 != (ulong *)0x0)) && (uVar6 == uVar8)) {
                return 0x101;
              }
              if ((*(ushort *)(uVar9 + *(uint *)(uVar6 - 1)) < 0x20) &&
                 (*(ushort *)(uVar10 + *(uint *)(uVar8 - 1)) < 0x20)) {
                return 1;
              }
              uVar6 = String::SlowEquals(param_1,param_2,param_3);
              goto LAB_01105e50;
            }
            if (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) != 0x42) {
              if ((*(short *)(uVar10 + *(uint *)(uVar8 - 1)) != 0x43) ||
                 (1 < (*(uint *)(uVar8 + 0x17) >> 1 & 0xff))) {
                if (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x41) {
                  uVar6 = BigInt::EqualToString(param_1,param_3,param_2);
                  goto LAB_01105e50;
                }
                if (*(ushort *)(uVar10 + *(uint *)(uVar8 - 1)) < 0xa9) {
                  return 1;
                }
                param_3 = (ulong *)JSReceiver::ToPrimitive(param_3,0);
                puVar7 = param_3;
                goto joined_r0x01105cdc;
              }
              puVar7 = (ulong *)String::ToNumber(param_1,param_2);
              uVar6 = *puVar7;
              uVar11 = *(uint *)(*param_3 + 0xf);
              uVar8 = (ulong)uVar11;
              if ((uVar6 & 1) == 0) {
                dVar12 = (double)((int)uVar6 >> 1);
              }
              else {
                dVar12 = *(double *)(uVar6 + 3);
              }
              if ((uVar11 & 1) == 0) goto LAB_01105eb4;
              uVar9 = *param_3 & 0xffffffff00000000;
              goto LAB_01106060;
            }
          }
          puVar7 = (ulong *)String::ToNumber(param_1,param_2);
          uVar6 = *puVar7;
          uVar8 = *param_3;
          goto joined_r0x01105e8c;
        }
        if ((*(short *)(uVar9 + *(uint *)(uVar6 - 1)) != 0x43) ||
           (1 < (*(uint *)(uVar6 + 0x17) >> 1 & 0xff))) break;
        uVar9 = *param_3;
        if ((uVar9 & 1) == 0) {
          bVar4 = true;
          uVar11 = *(uint *)(uVar6 + 0xf);
          if ((uVar11 & 1) == 0) {
LAB_01105fec:
            dVar12 = (double)((int)uVar11 >> 1);
            if (bVar4) goto LAB_01105ff8;
          }
          else {
LAB_01106010:
            dVar12 = *(double *)((uVar8 | uVar11) + 3);
            if (bVar4) {
LAB_01105ff8:
              dVar13 = (double)((int)uVar9 >> 1);
              goto LAB_01106068;
            }
          }
          dVar13 = *(double *)(uVar9 + 3);
          goto LAB_01106068;
        }
        uVar10 = uVar9 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x43) goto joined_r0x01105f88;
        if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x42) {
          bVar4 = false;
          uVar11 = *(uint *)(uVar6 + 0xf);
          if ((uVar11 & 1) == 0) goto LAB_01105fec;
          goto LAB_01106010;
        }
        if (*(ushort *)(uVar10 + *(uint *)(uVar9 - 1)) < 0x40) {
          puVar7 = (ulong *)String::ToNumber(param_1,param_3);
          uVar8 = *puVar7;
          uVar11 = *(uint *)(*param_2 + 0xf);
          uVar6 = (ulong)uVar11;
          if ((uVar11 & 1) == 0) goto LAB_01105e90;
          dVar12 = *(double *)((*param_2 & 0xffffffff00000000 | uVar6) + 3);
          goto joined_r0x0110604c;
        }
        if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x41) {
          uVar8 = uVar8 | *(uint *)(uVar6 + 0xf);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            param_2 = *(ulong **)pIVar2;
            if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
              param_2 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar2 = param_2 + 1;
            *param_2 = uVar8;
          }
          else {
            param_2 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
          }
          goto LAB_01105e4c;
        }
        if (*(ushort *)(uVar10 + *(uint *)(uVar9 - 1)) < 0xa9) {
          return 1;
        }
        param_3 = (ulong *)JSReceiver::ToPrimitive(param_3,0);
        if (param_3 == (ulong *)0x0) {
          return 0;
        }
        uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          param_2 = *(ulong **)pIVar2;
          if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
            param_2 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = param_2 + 1;
          *param_2 = uVar6;
          uVar6 = *param_2;
        }
        else {
          param_2 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
          uVar6 = *param_2;
        }
joined_r0x01105c84:
        if ((uVar6 & 1) == 0) goto LAB_01105aa8;
      }
      if (*(short *)(uVar9 + *(uint *)(uVar6 - 1)) == 0x40) {
        uVar9 = *param_3;
        if ((uVar9 & 1) == 0) {
          return 1;
        }
        uVar8 = uVar9 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar8 + *(uint *)(uVar9 - 1)) == 0x40) {
joined_r0x01105f88:
          if (param_2 == param_3) {
            return 0x101;
          }
          bVar4 = (uVar6 != uVar9 || param_2 == (ulong *)0x0) || param_3 == (ulong *)0x0;
          goto LAB_01105e54;
        }
        if (*(ushort *)(uVar8 + *(uint *)(uVar9 - 1)) < 0xa9) {
          return 1;
        }
        param_3 = (ulong *)JSReceiver::ToPrimitive(param_3,0);
        puVar7 = param_3;
        goto joined_r0x01105cdc;
      }
      if (*(short *)(uVar9 + *(uint *)(uVar6 - 1)) == 0x41) {
        uVar6 = *param_3;
        if (((uVar6 & 1) == 0) ||
           (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x41)) {
          uVar5 = Equals(param_1,param_3,param_2);
          return uVar5;
        }
        uVar6 = BigInt::EqualToBigInt();
        goto LAB_01105e50;
      }
      if (*(ushort *)(uVar9 + *(uint *)(uVar6 - 1)) < 0xa9) {
        if ((*(byte *)((uVar8 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 4 & 1) == 0) {
          return 1;
        }
        uVar6 = *param_3;
        if ((uVar6 & 1) == 0) {
          return 1;
        }
        bVar4 = (*(byte *)((uVar6 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar6 - 1)) & 0x10)
                == 0;
        goto LAB_01105e54;
      }
      uVar9 = *param_3;
      if ((uVar9 & 1) == 0) {
LAB_01105d7c:
        param_2 = (ulong *)JSReceiver::ToPrimitive(param_2,0);
        puVar7 = param_2;
        goto joined_r0x01105cdc;
      }
      uVar10 = uVar9 & 0xffffffff00000000;
      if (0xa8 < *(ushort *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1))) goto joined_r0x01105f88;
      if ((*(byte *)((uVar10 | 9) + (ulong)*(uint *)(uVar9 - 1)) >> 4 & 1) != 0) {
        return (*(byte *)((uVar8 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 4 & 1) << 8 | 1;
      }
      if ((*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x43) ||
         (1 < (*(uint *)(uVar9 + 0x17) >> 1 & 0xff))) goto LAB_01105d7c;
      uVar10 = uVar10 | *(uint *)(uVar9 + 0xf);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        param_3 = *(ulong **)pIVar2;
        if (param_3 == *(ulong **)(param_1 + 0x95a8)) {
          param_3 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = param_3 + 1;
        *param_3 = uVar10;
        uVar6 = *param_2;
        goto joined_r0x01105c84;
      }
      param_3 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
      uVar6 = *param_2;
    }
LAB_01105aa8:
    uVar8 = *param_3;
    iVar3 = (int)uVar6 >> 1;
    if ((uVar8 & 1) == 0) {
      bVar4 = true;
joined_r0x01105e00:
      if ((uVar6 & 1) == 0) {
        dVar12 = (double)iVar3;
      }
      else {
        dVar12 = *(double *)(uVar6 + 3);
      }
      if (!bVar4) {
LAB_01106064:
        dVar13 = *(double *)(uVar8 + 3);
        goto LAB_01106068;
      }
LAB_01105eb4:
      dVar13 = (double)((int)uVar8 >> 1);
LAB_01106068:
      bVar4 = false;
      if ((!NAN(dVar13)) && (bVar4 = false, !NAN(dVar12) && !NAN(dVar13))) {
        bVar4 = dVar12 == dVar13;
      }
      uVar5 = 0x101;
      if (!bVar4) {
        uVar5 = 1;
      }
      if (!NAN(dVar12)) {
        return uVar5;
      }
      return 1;
    }
    uVar9 = uVar8 & 0xffffffff00000000;
    uVar10 = uVar9 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x42) {
      bVar4 = false;
      goto joined_r0x01105e00;
    }
    if ((*(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x43) &&
       ((*(uint *)(uVar8 + 0x17) >> 1 & 0xff) < 2)) {
      puVar1 = (uint *)(uVar8 + 0xf);
      uVar8 = (ulong)*puVar1;
      if ((uVar6 & 1) == 0) {
        dVar12 = (double)iVar3;
      }
      else {
        dVar12 = *(double *)(uVar6 + 3);
      }
      if ((*puVar1 & 1) != 0) {
LAB_01106060:
        uVar8 = uVar9 | uVar8;
        goto LAB_01106064;
      }
      goto LAB_01105eb4;
    }
    if (*(ushort *)(uVar10 + *(uint *)(uVar8 - 1)) < 0x40) {
      puVar7 = (ulong *)String::ToNumber(param_1,param_3);
      uVar6 = *param_2;
      uVar8 = *puVar7;
joined_r0x01105e8c:
      if ((uVar6 & 1) == 0) {
LAB_01105e90:
        dVar12 = (double)((int)uVar6 >> 1);
      }
      else {
        dVar12 = *(double *)(uVar6 + 3);
      }
joined_r0x0110604c:
      if ((uVar8 & 1) == 0) goto LAB_01105eb4;
      goto LAB_01106064;
    }
    if (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x41) {
LAB_01105e4c:
      uVar6 = BigInt::EqualToNumber(param_3,param_2);
LAB_01105e50:
      bVar4 = (uVar6 & 1) == 0;
LAB_01105e54:
      if (!bVar4) {
        return 0x101;
      }
      return 1;
    }
    if (*(ushort *)(uVar10 + *(uint *)(uVar8 - 1)) < 0xa9) {
      return 1;
    }
    param_3 = (ulong *)JSReceiver::ToPrimitive(param_3,0);
    puVar7 = param_3;
joined_r0x01105cdc:
    if (puVar7 == (ulong *)0x0) {
      return 0;
    }
  } while( true );
}

