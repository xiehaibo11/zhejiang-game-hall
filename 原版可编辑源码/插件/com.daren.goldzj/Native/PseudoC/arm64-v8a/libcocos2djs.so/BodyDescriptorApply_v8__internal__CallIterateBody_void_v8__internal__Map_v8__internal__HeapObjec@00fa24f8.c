
/* void v8::internal::BodyDescriptorApply<v8::internal::CallIterateBody, void, v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::SlotCollectingVisitor*>(v8::internal::InstanceType,
   v8::internal::Map, v8::internal::HeapObject, int, v8::internal::SlotCollectingVisitor*) */

void v8::internal::
     BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::SlotCollectingVisitor*>
               (ushort param_1,undefined8 param_2,long param_3,int param_4,ObjectVisitor *param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long lVar6;
  ulong local_90 [8];
  
  uVar2 = (uint)param_1;
  if (uVar2 < 0x40) {
    switch(param_1 & 7) {
    case 0:
    case 2:
      return;
    case 1:
      local_90[0] = param_3 + 0xb;
      if (param_3 + 0x13U <= local_90[0]) {
        return;
      }
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0x13U);
      return;
    case 3:
      local_90[0] = param_3 + 0xb;
      if (param_3 + 0x13U <= local_90[0]) {
        return;
      }
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0x13U);
      return;
    case 5:
      local_90[0] = param_3 + 0xb;
      if (param_3 + 0xfU <= local_90[0]) {
        return;
      }
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0xfU);
      return;
    }
switchD_00fa2548_caseD_4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  switch(uVar2) {
  case 0x40:
    local_90[0] = param_3 + 0xb;
    if (local_90[0] < param_3 + 0xfU) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0xfU);
    }
    break;
  case 0x41:
  case 0x42:
  case 0x46:
  case 0x85:
  case 0x87:
  case 0x9e:
  case 0xa0:
  case 0xa1:
    break;
  case 0x43:
    local_90[0] = param_3 + 0xb;
    if (local_90[0] < param_3 + 0x1bU) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0x1bU);
    }
    break;
  case 0x44:
    local_90[0] = param_3 + 3;
    uVar5 = param_3 + 0x17;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    if (uVar5 < param_3 + 0x47U) {
      do {
        local_90[0] = uVar5;
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = uVar5;
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        uVar5 = local_90[0] + 4;
      } while (uVar5 < param_3 + 0x47U);
    }
    break;
  case 0x45:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 0x17U) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0x17U);
    }
    local_90[0] = param_3 + 0x1b;
    if (local_90[0] < param_3 + 0x23U) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0x23U);
    }
    break;
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
    if (param_1 == 0x70) {
      local_90[0] = param_3 + 0xb;
      uVar5 = (param_3 + param_4) - 1;
      if (local_90[0] < uVar5) {
        do {
          if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
            std::__ndk1::
            vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
            ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                      ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                        *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
          }
          else {
            **(ulong **)(param_5 + 0x10) = local_90[0];
            *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
          }
          local_90[0] = local_90[0] + 4;
        } while (local_90[0] < uVar5);
      }
    }
    else {
      if (param_1 == 100) {
        CallIterateBody::
        apply<v8::internal::PrototypeInfo::BodyDescriptor,v8::internal::SlotCollectingVisitor>
                  (param_2,param_3,param_4,param_5);
        return;
      }
      if (param_1 == 0x74) {
        local_90[0] = param_3 + 0x17;
        uVar5 = param_3 + -1 + (long)param_4;
        if (local_90[0] < uVar5) {
          do {
            if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
              std::__ndk1::
              vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
              ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                        ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                          *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
            }
            else {
              **(ulong **)(param_5 + 0x10) = local_90[0];
              *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
            }
            local_90[0] = local_90[0] + 4;
          } while (local_90[0] < uVar5);
        }
      }
      else {
        local_90[0] = param_3 + 3;
        uVar5 = param_3 + -1 + (long)param_4;
        if (local_90[0] < uVar5) {
          do {
            if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
              std::__ndk1::
              vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
              ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                        ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                          *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
            }
            else {
              **(ulong **)(param_5 + 0x10) = local_90[0];
              *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
            }
            local_90[0] = local_90[0] + 4;
          } while (local_90[0] < uVar5);
        }
      }
    }
    break;
  case 0x4c:
  case 0x4d:
    local_90[0] = param_3 + 3;
    uVar5 = param_3 + 0xb;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    uVar1 = param_3 + -1 + (long)param_4;
    if (uVar5 < uVar1) {
      do {
        local_90[0] = uVar5;
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = uVar5;
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        uVar5 = local_90[0] + 4;
      } while (uVar5 < uVar1);
    }
    break;
  case 0x55:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 0xfU) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0xfU);
    }
    if (param_4 != 0x1c) {
      return;
    }
    uVar5 = param_3 + 0x17;
    lVar6 = param_3 + 0x1b;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_5 + 0x10);
    goto LAB_00fa38e0;
  case 0x59:
    local_90[0] = param_3 + 3;
    uVar5 = (param_3 + param_4) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0x5d:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 7U) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 7U);
    }
    break;
  case 0x76:
  case 0x77:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
    local_90[0] = param_3 + 7;
    uVar5 = (param_3 + param_4) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0x78:
    CallIterateBody::
    apply<v8::internal::EphemeronHashTable::BodyDescriptor,v8::internal::SlotCollectingVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0x86:
    (**(code **)(*(long *)param_5 + 0x10))(param_5,param_3,param_3 + 7,param_3 + 0xb);
    lVar6 = param_3 + 0xf;
    (**(code **)(*(long *)param_5 + 0x10))(param_5,param_3,param_3 + 0xb,lVar6);
    lVar4 = param_3 + 0x13;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_5 + 0x10);
    goto LAB_00fa32fc;
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x90:
  case 0x91:
    local_90[0] = param_3 + 7;
    uVar5 = (param_3 + param_4) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0x8f:
    local_90[0] = param_3 + 3;
    uVar5 = param_3 + 0x417;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    lVar6 = param_3 + 0x423;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_5 + 0x10);
    goto LAB_00fa38e0;
  case 0x92:
    local_90[0] = param_3 + 7;
    uVar5 = (param_3 + ((ulong)*(byte *)(param_3 + 5) << 4 | 8)) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0x93:
    local_90[0] = param_3 + 7;
    uVar5 = local_90[0] + (ulong)*(byte *)(param_3 + 5) * 8;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0x94:
    local_90[0] = param_3 + 0xb;
    uVar5 = local_90[0] + (ulong)*(byte *)(param_3 + 9) * 0x18;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0x95:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 7U) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 7U);
    }
    local_90[0] = param_3 + 0xf;
    if (local_90[0] < param_3 + 0x13U) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0x13U);
    }
    break;
  case 0x96:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 7U) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 7U);
    }
    break;
  case 0x97:
    local_90[0] = param_3 + 3;
    uVar5 = (param_3 + param_4) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0x98:
    local_90[0] = param_3 + 3;
    uVar5 = (param_3 + param_4) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0x99:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 7U) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 7U);
    }
    break;
  case 0x9a:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 0x13U) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0x13U);
    }
    RelocIterator::RelocIterator((RelocIterator *)local_90,param_3,1999);
    ObjectVisitor::VisitRelocInfo(param_5,(RelocIterator *)local_90);
    break;
  case 0x9b:
    lVar6 = param_3 + 3;
    lVar4 = param_3 + 7;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_5 + 0x10);
LAB_00fa32fc:
                    /* WARNING: Could not recover jumptable at 0x00fa3314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_5,param_3,lVar6,lVar4);
    return;
  case 0x9c:
    local_90[0] = param_3 + 0xb;
    uVar5 = (param_3 + param_4) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0x9d:
    if (8 < param_4) {
      lVar6 = 0;
      do {
        (**(code **)(*(long *)param_5 + 0x10))
                  (param_5,param_3,param_3 + lVar6 + 7,param_3 + lVar6 + 0xb);
        lVar6 = lVar6 + 8;
      } while ((int)lVar6 + 8 < param_4);
    }
    break;
  case 0x9f:
    (**(code **)(*(long *)param_5 + 0x10))(param_5,param_3,param_3 + 3,param_3 + 7);
    (**(code **)(*(long *)param_5 + 0x18))(param_5,param_3,param_3 + 7,param_3 + 0xb);
    (**(code **)(*(long *)param_5 + 0x10))(param_5,param_3,param_3 + 0xb,param_3 + 0xf);
    local_90[0] = param_3 + 0x1f;
    uVar5 = (param_3 + param_4) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0xa2:
    local_90[0] = param_3 + 0xf;
    uVar5 = param_3 + 0x23;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    lVar6 = param_3 + 0x27;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_5 + 0x18);
LAB_00fa38e0:
    (*UNRECOVERED_JUMPTABLE)(param_5,param_3,uVar5,lVar6);
    break;
  case 0xa3:
    uVar2 = *(int *)(param_3 + 3) + 0xfU & 0xfffffffc;
    local_90[0] = param_3 + -1 + (long)(int)uVar2;
    uVar5 = param_3 + -1 + (long)(int)(uVar2 + *(int *)(param_3 + 7) * 4);
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0xa4:
    local_90[0] = param_3 + 7;
    uVar5 = (param_3 + param_4) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0xa5:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 0x13U) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0x13U);
    }
    break;
  case 0xa6:
    uVar5 = param_3 + 7;
    (**(code **)(*(long *)param_5 + 0x20))(param_5,param_3,param_3 + 3,uVar5);
    if (uVar5 < param_3 + 0x13U) {
      do {
        local_90[0] = uVar5;
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = uVar5;
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        uVar5 = local_90[0] + 4;
      } while (uVar5 < param_3 + 0x13U);
    }
    break;
  case 0xa7:
    local_90[0] = param_3 + 3;
    uVar5 = (param_3 + param_4) - 1;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    break;
  case 0xa8:
    CallIterateBody::
    apply<v8::internal::WeakCell::BodyDescriptor,v8::internal::SlotCollectingVisitor>
              (param_2,param_3,param_4,param_5);
    return;
  case 0xa9:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 0xfU) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0xfU);
    }
    break;
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0x410:
  case 0x411:
  case 0x412:
  case 0x413:
  case 0x414:
  case 0x415:
  case 0x416:
  case 0x417:
  case 0x418:
  case 0x419:
  case 0x41c:
  case 0x41d:
  case 0x41e:
  case 0x41f:
  case 0x420:
  case 0x421:
  case 0x422:
  case 0x423:
  case 0x425:
  case 0x426:
  case 0x427:
  case 0x428:
  case 0x429:
  case 0x42a:
  case 0x42b:
  case 0x42c:
  case 0x42d:
  case 0x42e:
  case 0x42f:
  case 0x430:
  case 0x432:
  case 0x433:
  case 0x435:
  case 0x436:
  case 0x437:
  case 0x438:
  case 0x439:
    BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::SlotCollectingVisitor>
              (param_2,param_3,4,param_4,param_5);
    return;
  default:
    PrintF("Unknown type: %d\n",(ulong)uVar2);
    goto switchD_00fa2548_caseD_4;
  case 0x41a:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 0xfU) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0xfU);
    }
    uVar3 = 0x28;
    goto LAB_00fa38ec;
  case 0x41b:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 0xfU) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0xfU);
    }
    (**(code **)(*(long *)param_5 + 0x10))(param_5,param_3,param_3 + 0x2f,param_3 + 0x33);
    uVar3 = 0x34;
    goto LAB_00fa38ec;
  case 0x424:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 0xbU) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0xbU);
    }
    uVar3 = 0x20;
    goto LAB_00fa38ec;
  case 0x431:
    local_90[0] = param_3 + 3;
    uVar5 = param_3 + 0xb;
    if (local_90[0] < uVar5) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < uVar5);
    }
    (**(code **)(*(long *)param_5 + 0x20))(param_5,param_3,uVar5,param_3 + 0xf);
    uVar3 = 0x10;
    goto LAB_00fa38ec;
  case 0x434:
    local_90[0] = param_3 + 3;
    if (local_90[0] < param_3 + 0xbU) {
      do {
        if (*(ulong **)(param_5 + 0x10) == *(ulong **)(param_5 + 0x18)) {
          std::__ndk1::
          vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
          ::__push_back_slow_path<v8::internal::CompressedMaybeObjectSlot_const&>
                    ((vector<v8::internal::CompressedMaybeObjectSlot,std::__ndk1::allocator<v8::internal::CompressedMaybeObjectSlot>>
                      *)(param_5 + 8),(CompressedMaybeObjectSlot *)local_90);
        }
        else {
          **(ulong **)(param_5 + 0x10) = local_90[0];
          *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 8;
        }
        local_90[0] = local_90[0] + 4;
      } while (local_90[0] < param_3 + 0xbU);
    }
    lVar6 = 0;
    do {
      lVar4 = param_3 + -1 +
              (ulong)*(ushort *)((long)&WasmInstanceObject::kTaggedFieldOffsets + lVar6);
      (**(code **)(*(long *)param_5 + 0x10))(param_5,param_3,lVar4,lVar4 + 4);
      lVar6 = lVar6 + 2;
    } while (lVar6 != 0x1e);
    uVar3 = 0xc4;
LAB_00fa38ec:
    BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::SlotCollectingVisitor>
              (param_2,param_3,uVar3,param_4,param_5);
  }
  return;
}

