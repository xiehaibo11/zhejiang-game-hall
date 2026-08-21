
undefined8 FUN_014d3d4c(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *__dest;
  undefined8 *puVar6;
  Isolate *pIVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  ushort *puVar12;
  size_t __n;
  ushort *puVar13;
  ushort local_84 [2];
  ushort *local_80;
  ushort *puStack_78;
  ushort *local_70;
  
  iVar11 = *(int *)(param_3 + 0x95b0);
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  iVar3 = (int)param_1 + -5;
  *(int *)(param_3 + 0x95b0) = iVar11 + 1;
  if (iVar3 == 0) {
    uVar9 = *(undefined8 *)(param_3 + 200);
    *(int *)(param_3 + 0x95b0) = iVar11;
  }
  else {
    puVar5 = operator_new((long)iVar3);
    puVar12 = puVar5;
    if (iVar3 < 1) {
      iVar4 = 0;
      iVar11 = 0;
LAB_014d3ee8:
      iVar3 = iVar3 - iVar11;
      puStack_78 = (ushort *)0x0;
      local_70 = (ushort *)0x0;
      local_80 = (ushort *)0x0;
      if (iVar3 != 0) {
        if (iVar3 < 0) {
LAB_014d40e0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puStack_78 = operator_new((long)iVar3 * 2);
        local_70 = puStack_78 + iVar3;
      }
      iVar3 = (int)param_1 + -6;
      local_80 = puStack_78;
      if (0xffff < iVar4) goto LAB_014d3f88;
LAB_014d3f70:
      local_84[0] = (ushort)iVar4;
      if (local_70 <= puStack_78) goto LAB_014d3f34;
      *puStack_78 = local_84[0];
      while (puStack_78 = puStack_78 + 1, iVar3 != iVar11) {
        while( true ) {
          iVar11 = iVar11 + 1;
          iVar4 = FUN_014d6070(param_3,param_1,param_2,iVar11);
          if (iVar4 < 0) goto LAB_014d4060;
          if (iVar4 < 0x10000) goto LAB_014d3f70;
LAB_014d3f88:
          local_84[0] = (ushort)(iVar4 + 0xf0000U >> 10) & 0x3ff | 0xd800;
          if (puStack_78 < local_70) {
            *puStack_78 = local_84[0];
            puStack_78 = puStack_78 + 1;
          }
          else {
            std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
            __push_back_slow_path<unsigned_short>
                      ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)&local_80,
                       local_84);
          }
          local_84[0] = (ushort)iVar4 & 0x3ff | 0xdc00;
          if (puStack_78 < local_70) break;
LAB_014d3f34:
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
          __push_back_slow_path<unsigned_short>
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)&local_80,
                     local_84);
          if (iVar3 == iVar11) goto LAB_014d3ff8;
        }
        *puStack_78 = local_84[0];
      }
LAB_014d3ff8:
      uVar10 = (long)puVar5 - (long)puVar12;
      pIVar7 = (Isolate *)
               v8::internal::Factory::NewRawTwoByteString
                         ((Factory *)param_3,
                          (int)((ulong)((long)puStack_78 - (long)local_80) >> 1) + (int)uVar10,0);
      if (pIVar7 == (Isolate *)0x0) {
LAB_014d4060:
        pIVar7 = param_3 + 0x180;
      }
      else {
        v8::internal::CopyChars<unsigned_char,unsigned_short>
                  ((ushort *)(*(long *)pIVar7 + 0xb),(uchar *)puVar12,uVar10);
        v8::internal::CopyChars<unsigned_short,unsigned_short>
                  ((ushort *)(*(long *)pIVar7 + uVar10 * 2 + 0xb),local_80,
                   (long)puStack_78 - (long)local_80 >> 1);
      }
      uVar9 = *(undefined8 *)pIVar7;
      if (local_80 != (ushort *)0x0) {
        puStack_78 = local_80;
        operator_delete(local_80);
      }
    }
    else {
      iVar11 = 0;
      puVar13 = (ushort *)((long)puVar5 + (long)iVar3);
      do {
        iVar4 = FUN_014d6070(param_3,param_1,param_2,iVar11);
        if (iVar4 < 0) goto LAB_014d4054;
        if (0xff < iVar4) {
          if (iVar3 != iVar11) goto LAB_014d3ee8;
          break;
        }
        if (puVar5 < puVar13) {
          *(char *)puVar5 = (char)iVar4;
          __dest = puVar12;
        }
        else {
          __n = (long)puVar5 - (long)puVar12;
          uVar10 = __n + 1;
          if ((long)uVar10 < 0) goto LAB_014d40e0;
          uVar8 = ((long)puVar13 - (long)puVar12) * 2;
          if (uVar10 <= uVar8) {
            uVar10 = uVar8;
          }
          if (0x3ffffffffffffffe < (ulong)((long)puVar13 - (long)puVar12)) {
            uVar10 = 0x7fffffffffffffff;
          }
          if (uVar10 == 0) {
            __dest = (ushort *)0x0;
          }
          else {
            __dest = operator_new(uVar10);
          }
          puVar5 = (ushort *)((long)__dest + __n);
          *(char *)puVar5 = (char)iVar4;
          puVar13 = (ushort *)((long)__dest + uVar10);
          if (0 < (long)__n) {
            memcpy(__dest,puVar12,__n);
          }
          if (puVar12 != (ushort *)0x0) {
            operator_delete(puVar12);
          }
        }
        puVar5 = (ushort *)((long)puVar5 + 1);
        iVar11 = iVar11 + 1;
        puVar12 = __dest;
      } while (iVar3 != iVar11);
      puStack_78 = (ushort *)(long)((int)puVar5 - (int)puVar12);
      local_80 = puVar12;
      puVar6 = (undefined8 *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_80,0);
      if (puVar6 == (undefined8 *)0x0) {
LAB_014d4054:
        uVar9 = *(undefined8 *)(param_3 + 0x180);
      }
      else {
        uVar9 = *puVar6;
      }
    }
    if (puVar12 != (ushort *)0x0) {
      operator_delete(puVar12);
    }
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar1;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
    }
  }
  return uVar9;
}

