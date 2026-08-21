
void FUN_014abc20(Isolate *param_1,ulong *param_2,uint param_3,
                 vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *param_4)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  double dVar16;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong *local_80;
  undefined4 local_78;
  char local_74;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar12 = *param_2;
  uVar14 = uVar12 & 0xffffffff00000000;
  bVar6 = *(byte *)((uVar14 | 10) + (ulong)*(uint *)(uVar12 - 1)) >> 3;
  if (bVar6 < 0x1c) {
    pIVar1 = param_1 + 0x95a0;
    switch(bVar6) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      uVar14 = uVar14 | *(uint *)(uVar12 + 7);
      local_90 = (Isolate *)((ulong)local_90._4_4_ << 0x20);
      uVar11 = *(int *)(uVar14 + 3) >> 1;
      uVar9 = param_3;
      if (uVar11 <= param_3) {
        uVar9 = uVar11;
      }
      if (uVar9 != 0) {
        uVar11 = 0;
        do {
          uVar10 = *(uint *)(uVar14 + 7 + (long)(int)(uVar11 << 2));
          if (((uVar10 & 1) == 0) || (uVar10 != *(uint *)(param_1 + 0xa8))) {
            if (*(uint **)(param_4 + 8) == *(uint **)(param_4 + 0x10)) {
              std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
              __push_back_slow_path<unsigned_int_const&>(param_4,(uint *)&local_90);
            }
            else {
              **(uint **)(param_4 + 8) = uVar11;
              *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
            }
          }
          uVar11 = (uint)local_90 + 1;
          local_90 = (Isolate *)CONCAT44(local_90._4_4_,uVar11);
        } while (uVar11 < uVar9);
      }
      break;
    case 4:
    case 5:
      uVar12 = uVar14 | *(uint *)(uVar12 + 7);
      if (0xe < *(ushort *)((uVar14 | 7) + (ulong)*(uint *)(uVar12 - 1)) - 0x76) {
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)pIVar1;
          if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
            puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar8 + 1;
          *puVar8 = uVar12;
        }
        else {
          puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
          uVar12 = *puVar8;
        }
        local_90 = (Isolate *)((ulong)local_90._4_4_ << 0x20);
        uVar11 = *(int *)(uVar12 + 3) >> 1;
        uVar9 = param_3;
        if (uVar11 <= param_3) {
          uVar9 = uVar11;
        }
        if (uVar9 != 0) {
          uVar11 = 0;
          while( true ) {
            if (*(long *)(uVar12 + ((long)(int)(uVar11 << 3) | 7U)) != -0x8000000080001) {
              if (*(uint **)(param_4 + 8) == *(uint **)(param_4 + 0x10)) {
                std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
                __push_back_slow_path<unsigned_int_const&>(param_4,(uint *)&local_90);
              }
              else {
                **(uint **)(param_4 + 8) = uVar11;
                *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
              }
            }
            uVar11 = (uint)local_90 + 1;
            local_90 = (Isolate *)CONCAT44(local_90._4_4_,uVar11);
            if (uVar9 <= uVar11) break;
            uVar12 = *puVar8;
          }
        }
      }
      break;
    case 0xc:
      uVar12 = uVar14 | *(uint *)(uVar12 + 7);
      uVar11 = *(int *)(uVar12 + 0xf) >> 1;
      if (uVar11 != 0) {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar4 = *(int *)(param_1 + 0x95b0);
          lVar2 = *(long *)pIVar1;
          lVar3 = *(long *)(param_1 + 0x95a8);
          uVar9 = uVar9 + 0x400;
          *(int *)(param_1 + 0x95b0) = iVar4 + 1;
          if (((uint)uVar7 < uVar11) && ((uint)uVar7 < uVar9)) {
            uVar7 = uVar7 & 0xffffffff;
            lVar15 = uVar7 * 0xc00000000 + 0x1000000000;
            do {
              uVar10 = *(uint *)(uVar12 + 7 + (lVar15 >> 0x20));
              if ((uVar10 != *(uint *)(param_1 + 0xa8)) && (uVar10 != *(uint *)(param_1 + 0xa0))) {
                if ((uVar10 & 1) == 0) {
                  dVar16 = (double)((int)uVar10 >> 1);
                }
                else {
                  dVar16 = *(double *)((uVar14 | uVar10) + 3);
                }
                uVar10 = (uint)dVar16;
                local_90 = (Isolate *)CONCAT44(local_90._4_4_,uVar10);
                if (uVar10 < param_3) {
                  if (*(uint **)(param_4 + 8) == *(uint **)(param_4 + 0x10)) {
                    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
                    __push_back_slow_path<unsigned_int_const&>(param_4,(uint *)&local_90);
                  }
                  else {
                    **(uint **)(param_4 + 8) = uVar10;
                    *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
                  }
                }
              }
              uVar7 = uVar7 + 1;
            } while ((uVar7 < uVar11) && (lVar15 = lVar15 + 0xc00000000, uVar7 < uVar9));
            *(long *)pIVar1 = lVar2;
            *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
            if (*(long *)(param_1 + 0x95a8) != lVar3) {
              *(long *)(param_1 + 0x95a8) = lVar3;
              v8::internal::HandleScope::DeleteExtensions(param_1);
            }
          }
          else {
            *(int *)(param_1 + 0x95b0) = iVar4;
          }
        } while ((uint)uVar7 < uVar11);
      }
      break;
    case 0xd:
    case 0xe:
      uVar11 = *(uint *)(uVar12 + 7);
      plVar13 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                          ((ulong)*(byte *)((uVar14 | 10) + (ulong)*(uint *)(uVar12 - 1)) & 0xf8));
      local_90 = (Isolate *)((ulong)local_90._4_4_ << 0x20);
      if (param_3 != 0) {
        uVar9 = 0;
        do {
          uVar7 = (**(code **)(*plVar13 + 0x18))(plVar13,uVar12,uVar9,uVar14 | uVar11,0);
          if ((uVar7 & 1) != 0) {
            if (*(uint **)(param_4 + 8) == *(uint **)(param_4 + 0x10)) {
              std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
              __push_back_slow_path<unsigned_int_const&>(param_4,(uint *)&local_90);
            }
            else {
              **(uint **)(param_4 + 8) = (uint)local_90;
              *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
            }
          }
          uVar9 = (uint)local_90 + 1;
          local_90 = (Isolate *)CONCAT44(local_90._4_4_,uVar9);
        } while (uVar9 < param_3);
      }
      break;
    case 0xf:
    case 0x10:
      uVar14 = uVar14 | *(uint *)(uVar12 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar14;
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
        uVar14 = *puVar8;
      }
      uVar11 = 0;
      local_90 = (Isolate *)((ulong)local_90._4_4_ << 0x20);
      uVar9 = *(uint *)(uVar14 + 7);
      if (param_3 <= *(uint *)(uVar14 + 7)) {
        uVar9 = param_3;
      }
      if (uVar9 != 0) {
        do {
          if (*(uint **)(param_4 + 8) == *(uint **)(param_4 + 0x10)) {
            std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
            __push_back_slow_path<unsigned_int_const&>(param_4,(uint *)&local_90);
          }
          else {
            **(uint **)(param_4 + 8) = uVar11;
            *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
          }
          uVar11 = (uint)local_90 + 1;
          local_90 = (Isolate *)CONCAT44(local_90._4_4_,uVar11);
        } while (uVar11 < uVar9);
      }
      uVar14 = *param_2;
      if (uVar11 < param_3) {
        plVar13 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                            ((ulong)*(byte *)((uVar14 & 0xffffffff00000000 | 10) +
                                             (ulong)*(uint *)(uVar14 - 1)) & 0xf8));
        while( true ) {
          uVar14 = (**(code **)(*plVar13 + 0x18))
                             (plVar13,uVar14,uVar11,
                              uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 7),0);
          if ((uVar14 & 1) != 0) {
            if (*(uint **)(param_4 + 8) == *(uint **)(param_4 + 0x10)) {
              std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
              __push_back_slow_path<unsigned_int_const&>(param_4,(uint *)&local_90);
            }
            else {
              **(uint **)(param_4 + 8) = (uint)local_90;
              *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
            }
          }
          uVar11 = (uint)local_90 + 1;
          local_90 = (Isolate *)CONCAT44(local_90._4_4_,uVar11);
          if (param_3 <= uVar11) break;
          uVar14 = *param_2;
        }
      }
      break;
    default:
      uVar11 = *(uint *)(uVar12 + 0x1f);
      if (param_3 <= *(uint *)(uVar12 + 0x1f)) {
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)param_4;
        uVar11 = param_3;
      }
      local_90 = (Isolate *)((ulong)local_90._4_4_ << 0x20);
      if (uVar11 != 0) {
        uVar9 = 0;
        do {
          if (*(uint **)(param_4 + 8) == *(uint **)(param_4 + 0x10)) {
            std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
            __push_back_slow_path<unsigned_int_const&>(param_4,(uint *)&local_90);
          }
          else {
            **(uint **)(param_4 + 8) = uVar9;
            *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
          }
          uVar9 = (uint)local_90 + 1;
          local_90 = (Isolate *)CONCAT44(local_90._4_4_,uVar9);
        } while (uVar9 < uVar11);
      }
      if (uVar11 == param_3) goto LAB_014ac1f8;
    }
  }
  uStack_88 = 0;
  local_78 = 0;
  local_74 = '\0';
  local_70 = 0;
  local_90 = param_1;
  local_80 = param_2;
  if (param_2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!handle_.is_null()");
  }
  v8::internal::PrototypeIterator::Advance((PrototypeIterator *)&local_90);
  if (local_74 == '\0') {
    FUN_014abc20(param_1,local_80,param_3,param_4);
  }
LAB_014ac1f8:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

