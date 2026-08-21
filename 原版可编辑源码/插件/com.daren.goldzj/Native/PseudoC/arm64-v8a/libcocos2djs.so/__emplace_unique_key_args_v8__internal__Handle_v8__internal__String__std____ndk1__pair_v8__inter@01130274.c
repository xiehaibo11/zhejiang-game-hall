
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object> >,
   std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,
   std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object> >, v8::internal::StringHandleHash, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,
   std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object> >, v8::internal::StringHandleEqual, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object> > >
   >::__emplace_unique_key_args<v8::internal::Handle<v8::internal::String>,
   std::__ndk1::pair<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Cell> > >(v8::internal::Handle<v8::internal::String> const&,
   std::__ndk1::pair<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Cell> >&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
::
__emplace_unique_key_args<v8::internal::Handle<v8::internal::String>,std::__ndk1::pair<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Cell>>>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
           *this,Handle *param_1,pair *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  Zone *this_00;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
  *p_Var8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  undefined2 uVar11;
  undefined8 uVar12;
  ulong local_48;
  
  uVar1 = *(uint *)(**(ulong **)param_1 + 3);
  if ((uVar1 & 1) == 0) {
    uVar3 = (ulong)(uVar1 >> 3);
  }
  else {
    local_48 = **(ulong **)param_1;
    uVar3 = v8::internal::String::ComputeAndSetHash((String *)&local_48);
  }
  uVar10 = *(ulong *)(this + 8);
  uVar3 = uVar3 & 0xffffffff;
  if (uVar10 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar9 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x25 = (int)uVar10 - 1 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar10 <= uVar3) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar3 / uVar10;
        }
        unaff_x25 = uVar3 - uVar5 * uVar10;
      }
    }
    plVar4 = *(long **)(*(long *)this + unaff_x25 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar5 = plVar4[1];
        if (uVar5 != uVar3) {
          if (uVar9 < 2) {
            uVar5 = uVar5 & uVar10 - 1;
          }
          else if (uVar10 <= uVar5) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar5 / uVar10;
            }
            if (uVar5 - uVar2 * uVar10 == unaff_x25) goto LAB_01130374;
            break;
          }
          if (uVar5 != unaff_x25) break;
        }
LAB_01130374:
        local_48 = *(ulong *)plVar4[2];
        uVar5 = **(ulong **)param_1;
        if ((int)uVar5 == (int)local_48) {
          return plVar4;
        }
        if (((0x1f < *(ushort *)
                      ((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1))) ||
            (0x1f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) &&
           (uVar5 = v8::internal::String::SlowEquals((String *)&local_48), (uVar5 & 1) != 0)) {
          return plVar4;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  this_00 = *(Zone **)(this + 0x20);
  plVar4 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar4) < 0x20) {
    plVar4 = (long *)v8::internal::Zone::NewExpand(this_00,0x20);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar4 + 4;
  }
  plVar4[2] = *(long *)param_2;
  lVar6 = *(long *)(param_2 + 8);
  *plVar4 = 0;
  plVar4[1] = uVar3;
  plVar4[3] = lVar6;
  if ((uVar10 == 0) ||
     (*(float *)(this + 0x30) * (float)uVar10 < (float)(*(long *)(this + 0x28) + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar9 = (ulong)((float)(*(long *)(this + 0x28) + 1) / *(float *)(this + 0x30));
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    rehash(this,uVar9);
    uVar10 = *(ulong *)(this + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = (int)uVar10 - 1 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar10 <= uVar3) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar3 / uVar10;
        }
        unaff_x25 = uVar3 - uVar9 * uVar10;
      }
    }
  }
  plVar7 = *(long **)(*(long *)this + unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    p_Var8 = this + 0x18;
    *plVar4 = *(long *)p_Var8;
    *(long **)p_Var8 = plVar4;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
      **)(*(long *)this + unaff_x25 * 8) = p_Var8;
    if (*plVar4 != 0) {
      uVar3 = *(ulong *)(*plVar4 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar3 = uVar3 & uVar10 - 1;
      }
      else if (uVar10 <= uVar3) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar3 / uVar10;
        }
        uVar3 = uVar3 - uVar9 * uVar10;
      }
      *(long **)(*(long *)this + uVar3 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar7;
    *plVar7 = (long)plVar4;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return plVar4;
}

