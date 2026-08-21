
/* v8::internal::Runtime_ObjectHasOwnProperty(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ObjectHasOwnProperty(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  double dVar16;
  undefined8 local_a8;
  undefined8 local_9c;
  Isolate *local_90;
  ulong *local_88;
  undefined8 local_80;
  ulong *local_78;
  undefined8 local_70;
  ulong *local_68;
  ulong local_60;
  undefined8 local_58;
  ulong local_38;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_011c8774(param_1,param_2,param_3);
    return uVar9;
  }
  uVar9 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar15 = param_2 + -1;
  uVar10 = *puVar15;
  if ((uVar10 & 1) != 0) {
    uVar12 = uVar10 & 0xffffffff00000000 | 7;
    if ((((*(short *)(uVar12 + *(uint *)(uVar10 - 1)) == 0x42) &&
         (dVar16 = *(double *)(uVar10 + 3), 0.0 <= dVar16)) && (dVar16 <= 9007199254740991.0)) &&
       (dVar16 == (double)(ulong)(long)dVar16)) {
      puVar15 = (ulong *)0x0;
      local_38 = (long)dVar16;
      goto LAB_011c81b8;
    }
    if (0x40 < *(ushort *)(uVar12 + *(uint *)(uVar10 - 1))) goto LAB_011c821c;
LAB_011c822c:
    if (puVar15 != (ulong *)0x0) {
      uVar10 = *puVar15;
      if (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0x40) {
        uVar5 = *(uint *)(uVar10 + 3);
        local_a8 = uVar10;
        if ((uVar5 & 0xc0000003) == 0) {
          local_38 = (ulong)(uVar5 >> 3) & 0xffffff;
          goto LAB_011c81b8;
        }
        if ((uVar5 & 5) == 4) goto LAB_011c826c;
        uVar5 = String::SlowAsIntegerIndex((String *)&local_a8,&local_38);
        uVar10 = *param_2;
      }
      else {
LAB_011c826c:
        uVar5 = 0;
        uVar10 = *param_2;
      }
      goto joined_r0x011c8274;
    }
LAB_011c8394:
    uVar14 = *(undefined8 *)(param_3 + 0x180);
    goto LAB_011c83c0;
  }
  if ((int)uVar10 < 0) {
LAB_011c821c:
    puVar15 = (ulong *)Object::ConvertToName(param_3,puVar15);
    goto LAB_011c822c;
  }
  puVar15 = (ulong *)0x0;
  local_38 = uVar10 >> 1 & 0x7fffffff;
LAB_011c81b8:
  uVar5 = 1;
  uVar10 = *param_2;
joined_r0x011c8274:
  if ((uVar10 & 1) != 0) {
    pIVar6 = (Isolate *)(uVar10 & 0xffffffff00000000);
    uVar12 = (ulong)pIVar6 | 7;
    if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0xac) {
      if (0xa9 < *(ushort *)(uVar12 + *(uint *)(uVar10 - 1))) {
        local_a8._4_4_ = (uint)(local_a8 >> 0x20);
        local_90 = param_3;
        local_78 = param_2;
        local_68 = param_2;
        if ((uVar5 & 1) == 0) {
          local_a8 = (ulong)local_a8._4_4_ << 0x20;
          local_9c = 0xc000000000;
          local_88 = puVar15;
          local_90 = pIVar6;
          if ((*(ushort *)((*puVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar15 - 1)) &
              0xffe0) == 0x20) {
            local_88 = (ulong *)StringTable::LookupString(pIVar6,puVar15);
          }
          local_80 = 0;
          local_70 = 0;
          local_58 = 0xffffffffffffffff;
          local_60 = 0xffffffffffffffff;
          LookupIterator::Start<false>((LookupIterator *)&local_a8);
        }
        else {
          local_a8 = (ulong)local_a8._4_4_ << 0x20;
          local_88 = (ulong *)0x0;
          local_80 = 0;
          local_70 = 0;
          local_9c = 0xc000000000;
          local_58 = 0xffffffffffffffff;
          puVar7 = local_88;
          local_60 = local_38;
          if (((0xfffffffe < local_38) && (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0x41b)) &&
             (puVar7 = (ulong *)Factory::SizeToString((Factory *)param_3,local_38,true),
             (*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
             0xffe0) == 0x20)) {
            puVar7 = (ulong *)StringTable::LookupString(param_3);
          }
          local_88 = puVar7;
          LookupIterator::Start<true>((LookupIterator *)&local_a8);
        }
        uVar4 = JSReceiver::HasProperty((LookupIterator *)&local_a8);
        if ((uVar4 & 0xff) == 0) {
          uVar14 = *(undefined8 *)(param_3 + 0x180);
          goto LAB_011c83c0;
        }
        if (0xff < uVar4) {
          uVar14 = *(undefined8 *)(param_3 + 0xb8);
          goto LAB_011c83c0;
        }
        uVar10 = *param_2;
        pIVar6 = (Isolate *)(uVar10 & 0xffffffff00000000);
        uVar12 = (ulong)pIVar6 | (ulong)*(uint *)(uVar10 - 1);
        if (*(short *)(uVar12 + 7) != 0xab) {
          bVar3 = *(byte *)(uVar12 + 9);
          if (local_38 < 0xffffffff && ((uVar5 ^ 0xffffffff) & 1) == 0) {
            bVar3 = bVar3 >> 3;
          }
          else {
            bVar3 = bVar3 >> 2;
          }
          if ((bVar3 & 1) == 0) goto LAB_011c83bc;
        }
        if ((uVar5 & 1) == 0) {
          if (*(short *)(((ulong)pIVar6 | 7) + (ulong)*(uint *)(*puVar15 - 1)) == 0x40) {
            uVar5 = ~*(uint *)(*puVar15 + 7) & 1;
          }
          else {
            uVar5 = 1;
          }
          local_a8 = CONCAT44(local_a8._4_4_,uVar5);
          local_9c = 0xc000000000;
          local_90 = pIVar6;
          if ((*(ushort *)((*puVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar15 - 1)) &
              0xffe0) == 0x20) {
            puVar15 = (ulong *)StringTable::LookupString(pIVar6,puVar15);
          }
          local_80 = 0;
          local_70 = 0;
          local_58 = 0xffffffffffffffff;
          local_60 = 0xffffffffffffffff;
          local_88 = puVar15;
          local_78 = param_2;
          local_68 = param_2;
          LookupIterator::Start<false>((LookupIterator *)&local_a8);
        }
        else {
          local_a8 = CONCAT44(local_a8._4_4_,1);
          local_88 = (ulong *)0x0;
          local_80 = 0;
          local_70 = 0;
          local_9c = 0xc000000000;
          local_60 = local_38;
          local_58 = 0xffffffffffffffff;
          local_90 = param_3;
          puVar15 = local_88;
          local_78 = param_2;
          local_68 = param_2;
          if (((0xfffffffe < local_38) &&
              (*(short *)(((ulong)pIVar6 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x41b)) &&
             (puVar15 = (ulong *)Factory::SizeToString((Factory *)param_3,local_38,true),
             (*(ushort *)((*puVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar15 - 1)) &
             0xffe0) == 0x20)) {
            puVar15 = (ulong *)StringTable::LookupString(param_3);
          }
          local_88 = puVar15;
          LookupIterator::Start<true>((LookupIterator *)&local_a8);
        }
        uVar4 = JSReceiver::HasProperty((LookupIterator *)&local_a8);
        pIVar6 = param_3 + 0xb8;
        if (uVar4 < 0x100) {
          pIVar6 = param_3 + 0xc0;
        }
        pIVar1 = param_3 + 0x180;
        if ((uVar4 & 0xff) != 0) {
          pIVar1 = pIVar6;
        }
        uVar14 = *(undefined8 *)pIVar1;
        goto LAB_011c83c0;
      }
      if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) == 0xa9) {
        if (puVar15 == (ulong *)0x0) {
          puVar15 = (ulong *)Factory::SizeToString((Factory *)param_3,local_38,true);
        }
        goto LAB_011c8364;
      }
      if (0x3f < *(ushort *)(uVar12 + *(uint *)(uVar10 - 1))) {
        if (((int)uVar10 == *(int *)(param_3 + 0xb0)) || ((int)uVar10 == *(int *)(param_3 + 0xa0)))
        {
          puVar8 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,0xae,0,0,0);
          uVar14 = Isolate::Throw(param_3,*puVar8,0);
          goto LAB_011c83c0;
        }
        goto LAB_011c83bc;
      }
      if ((uVar5 & 1) == 0) {
        uVar12 = *puVar15;
        uVar10 = *(ulong *)(param_3 + 0x7b8);
        if (((int)uVar10 == (int)uVar12) ||
           ((((uVar13 = uVar12 & 0xffffffff00000000 | 7,
              0x1f < *(ushort *)(uVar13 + *(uint *)(uVar12 - 1)) ||
              (0x1f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))
              ) && (*(short *)(uVar13 + *(uint *)(uVar12 - 1)) != 0x40)) &&
            ((*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x40
             && (local_a8 = uVar12, uVar10 = String::SlowEquals((String *)&local_a8),
                (uVar10 & 1) != 0)))))) goto LAB_011c8578;
LAB_011c86b0:
        lVar11 = -0x8790;
      }
      else {
        if ((ulong)(long)*(int *)(uVar10 + 7) <= local_38) goto LAB_011c86b0;
LAB_011c8578:
        lVar11 = -0x8798;
      }
      uVar14 = *(undefined8 *)(param_3 + lVar11 + 0x8850);
      goto LAB_011c83c0;
    }
    if (puVar15 != (ulong *)0x0) {
LAB_011c8364:
      uVar4 = JSReceiver::HasOwnProperty(param_2,puVar15);
      if ((uVar4 & 0xff) != 0) {
        lVar11 = 0xb8;
        if (uVar4 < 0x100) {
          lVar11 = 0xc0;
        }
        uVar14 = *(undefined8 *)(param_3 + lVar11);
        goto LAB_011c83c0;
      }
      goto LAB_011c8394;
    }
  }
LAB_011c83bc:
  uVar14 = *(undefined8 *)(param_3 + 0xc0);
LAB_011c83c0:
  *(undefined8 *)(param_3 + 0x95a0) = uVar9;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar14;
}

