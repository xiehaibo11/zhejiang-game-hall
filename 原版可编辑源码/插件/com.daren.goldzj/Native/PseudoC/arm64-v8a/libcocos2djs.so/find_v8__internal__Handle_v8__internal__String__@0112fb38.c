
/* std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::Handle<v8::internal::String>,
   void*>*> std::__ndk1::__hash_table<v8::internal::Handle<v8::internal::String>,
   v8::internal::StringHandleHash, v8::internal::StringHandleEqual,
   v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String> >
   >::find<v8::internal::Handle<v8::internal::String> >(v8::internal::Handle<v8::internal::String>
   const&) const */

long * __thiscall
std::__ndk1::
__hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
::find<v8::internal::Handle<v8::internal::String>>
          (__hash_table<v8::internal::Handle<v8::internal::String>,v8::internal::StringHandleHash,v8::internal::StringHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::String>>>
           *this,Handle *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong local_38;
  
  local_38 = **(long **)param_1;
  if ((*(uint *)(local_38 + 3) & 1) == 0) {
    uVar2 = (ulong)(*(uint *)(local_38 + 3) >> 3);
    uVar5 = *(ulong *)(this + 8);
  }
  else {
    uVar2 = v8::internal::String::ComputeAndSetHash((String *)&local_38);
    uVar5 = *(ulong *)(this + 8);
  }
  if (uVar5 != 0) {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar5 >> 
                                                  8)),POPCOUNT((char)uVar5))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    uVar2 = uVar2 & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (int)uVar5 - 1 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*(long *)this + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          local_38 = *(ulong *)plVar3[2];
          uVar4 = **(ulong **)param_1;
          if ((int)uVar4 == (int)local_38) {
            return plVar3;
          }
          if (((0x1f < *(ushort *)
                        ((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1))) ||
              (0x1f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1))))
             && (uVar4 = v8::internal::String::SlowEquals((String *)&local_38), (uVar4 & 1) != 0)) {
            return plVar3;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar4 = uVar4 & uVar5 - 1;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}

