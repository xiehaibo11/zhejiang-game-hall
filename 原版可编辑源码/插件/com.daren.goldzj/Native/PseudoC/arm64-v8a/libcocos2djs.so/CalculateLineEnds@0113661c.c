
/* v8::internal::String::CalculateLineEnds(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, bool) */

long * v8::internal::String::CalculateLineEnds(Factory *param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong local_60 [2];
  int *local_50;
  int *piStack_48;
  int *local_40;
  int local_34;
  
  puVar5 = (ulong *)Flatten(param_1,param_2,0);
  uVar2 = *(uint *)(*puVar5 + 7);
  piStack_48 = (int *)0x0;
  local_40 = (int *)0x0;
  local_50 = (int *)0x0;
  if ((int)uVar2 >> 4 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar10 = (long)((ulong)uVar2 << 0x20) >> 0x24;
    piStack_48 = operator_new(lVar10 * 4);
    local_40 = piStack_48 + lVar10;
  }
  local_60[0] = *puVar5;
  local_50 = piStack_48;
  auVar12 = GetFlatContent((PerThreadAssertScopeDebugOnly *)local_60);
  uVar7 = auVar12._8_8_;
  lVar10 = auVar12._0_8_;
  iVar9 = auVar12._8_4_;
  if (uVar7 >> 0x20 == 1) {
    iVar8 = iVar9 + -1;
    local_60[0] = CONCAT44(local_60[0]._4_4_,iVar9);
    local_34 = 0;
    if (0 < iVar8) {
      do {
        cVar3 = *(char *)(lVar10 + local_34);
        if (((cVar3 == '\r') || (cVar3 == '\n')) &&
           ((cVar3 != '\r' || (*(char *)(local_34 + lVar10 + 1) != '\n')))) {
          if (piStack_48 == local_40) {
            std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                      ((vector<int,std::__ndk1::allocator<int>> *)&local_50,&local_34);
          }
          else {
            *piStack_48 = local_34;
            piStack_48 = piStack_48 + 1;
          }
        }
        uVar7 = local_60[0] & 0xffffffff;
        local_34 = local_34 + 1;
        iVar8 = (int)local_60[0] + -1;
      } while (local_34 < iVar8);
    }
    if (((int)uVar7 < 1) ||
       ((*(char *)(lVar10 + iVar8) != '\r' && (*(char *)(lVar10 + iVar8) != '\n'))))
    goto joined_r0x01136880;
    if (local_40 <= piStack_48) {
      local_34 = iVar8;
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                ((vector<int,std::__ndk1::allocator<int>> *)&local_50,&local_34);
      goto joined_r0x01136880;
    }
    *piStack_48 = iVar8;
  }
  else {
    iVar8 = iVar9 + -1;
    local_60[0] = CONCAT44(local_60[0]._4_4_,iVar9);
    local_34 = 0;
    if (0 < iVar8) {
      do {
        uVar4 = *(ushort *)(lVar10 + (long)local_34 * 2);
        if ((((uVar4 - 0x2028 < 2) || (uVar4 == 0xd)) || (uVar4 == 10)) &&
           ((uVar4 != 0xd || (*(short *)(lVar10 + (long)local_34 * 2 + 2) != 10)))) {
          if (piStack_48 == local_40) {
            std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                      ((vector<int,std::__ndk1::allocator<int>> *)&local_50,&local_34);
          }
          else {
            *piStack_48 = local_34;
            piStack_48 = piStack_48 + 1;
          }
        }
        uVar7 = local_60[0] & 0xffffffff;
        local_34 = local_34 + 1;
        iVar8 = (int)local_60[0] + -1;
      } while (local_34 < iVar8);
    }
    if ((int)uVar7 < 1) goto joined_r0x01136880;
    uVar4 = *(ushort *)(lVar10 + (long)iVar8 * 2);
    if (((1 < uVar4 - 0x2028) && (uVar4 != 0xd)) && (uVar4 != 10)) goto joined_r0x01136880;
    if (local_40 <= piStack_48) {
      local_34 = iVar8;
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                ((vector<int,std::__ndk1::allocator<int>> *)&local_50,&local_34);
      goto joined_r0x01136880;
    }
    *piStack_48 = iVar8;
  }
  piStack_48 = piStack_48 + 1;
  local_34 = iVar8;
joined_r0x01136880:
  if ((param_3 & 1) != 0) {
    if (piStack_48 == local_40) {
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                ((vector<int,std::__ndk1::allocator<int>> *)&local_50,(int *)local_60);
    }
    else {
      *piStack_48 = (int)local_60[0];
      piStack_48 = piStack_48 + 1;
    }
  }
  uVar11 = (long)piStack_48 - (long)local_50;
  uVar7 = uVar11 >> 2;
  plVar6 = (long *)Factory::NewFixedArray(param_1,uVar7 & 0xffffffff,0);
  if (0 < (int)uVar7) {
    lVar10 = 0;
    do {
      piVar1 = (int *)((long)local_50 + lVar10);
      iVar9 = (int)lVar10;
      lVar10 = lVar10 + 4;
      *(int *)(*plVar6 + (long)iVar9 + 7) = *piVar1 << 1;
    } while ((uVar11 >> 2 & 0xffffffff) * 4 - lVar10 != 0);
  }
  if (local_50 != (int *)0x0) {
    piStack_48 = local_50;
    operator_delete(local_50);
  }
  return plVar6;
}

