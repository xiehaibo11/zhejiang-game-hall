
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object> >,
   std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,
   std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object> >, v8::internal::StringHandleHash, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,
   std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object> >, v8::internal::StringHandleEqual, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object> > > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
           *this,ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  Zone *this_00;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  ulong local_48;
  
  if (param_1 == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x10);
    uVar2 = param_1 * 8;
    puVar1 = *(undefined8 **)(this_00 + 0x10);
    if (uVar2 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) ||
        uVar2 - (*(long *)(this_00 + 0x18) - (long)puVar1) == 0) {
      *(undefined8 **)(this_00 + 0x10) = puVar1 + param_1;
    }
    else {
      puVar1 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar2);
    }
    uVar2 = param_1 - 1;
    *(undefined8 **)this = puVar1;
    *(ulong *)(this + 8) = param_1;
    *puVar1 = 0;
    if (uVar2 != 0) {
      uVar4 = 1;
      do {
        *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (param_1 != uVar4);
    }
    plVar6 = *(long **)(this + 0x18);
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar12 = CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_1 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_1 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_1 >> 8)),POPCOUNT((char)param_1))))))));
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar7 < 2) {
        uVar4 = uVar4 & uVar2;
      }
      else if (param_1 <= uVar4) {
        uVar9 = 0;
        if (param_1 != 0) {
          uVar9 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar9 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::String>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>,v8::internal::StringHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::String>,v8::internal::Handle<v8::internal::Object>>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x18;
      for (plVar8 = (long *)*plVar6; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        while( true ) {
          uVar9 = plVar8[1];
          if (uVar7 < 2) {
            uVar9 = uVar9 & uVar2;
          }
          else if (param_1 <= uVar9) {
            uVar3 = 0;
            if (param_1 != 0) {
              uVar3 = uVar9 / param_1;
            }
            uVar9 = uVar9 - uVar3 * param_1;
          }
          if (uVar9 == uVar4) break;
          if (*(long *)(*(long *)this + uVar9 * 8) == 0) {
            *(long **)(*(long *)this + uVar9 * 8) = plVar6;
            plVar10 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar4 = uVar9;
          }
          else {
            lVar5 = *plVar8;
            plVar10 = plVar8;
            while (lVar5 != 0) {
              local_48 = *(ulong *)plVar8[2];
              uVar3 = **(ulong **)(lVar5 + 0x10);
              if (((int)uVar3 != (int)local_48) &&
                 (((*(ushort *)
                     ((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) < 0x20
                   && (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) <
                       0x20)) ||
                  (uVar3 = v8::internal::String::SlowEquals((String *)&local_48), (uVar3 & 1) == 0))
                 )) break;
              plVar10 = (long *)*plVar10;
              lVar5 = *plVar10;
            }
            *plVar6 = *plVar10;
            *plVar10 = **(long **)(*(long *)this + uVar9 * 8);
            **(undefined8 **)(*(long *)this + uVar9 * 8) = plVar8;
            plVar10 = (long *)*plVar6;
          }
          plVar8 = plVar10;
          if (plVar8 == (long *)0x0) {
            return;
          }
        }
        plVar6 = plVar8;
      }
    }
  }
  return;
}

