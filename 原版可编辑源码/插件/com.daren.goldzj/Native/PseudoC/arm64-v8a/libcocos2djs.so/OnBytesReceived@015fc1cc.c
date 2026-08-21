
/* v8::internal::wasm::StreamingDecoder::OnBytesReceived(v8::internal::Vector<unsigned char const>)
    */

void v8::internal::wasm::StreamingDecoder::OnBytesReceived(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x1;
  ulong uVar5;
  long *local_48;
  
  if (param_1[0x12] != 0) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    insert<unsigned_char_const*>
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(param_1 + 0xe),
               param_1[0xf],param_2,param_2 + param_3);
    return;
  }
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
LAB_015fc2ec:
    param_1[6] = param_1[6] + param_3;
  }
  else {
    if (param_3 != 0) {
      uVar5 = 0;
      do {
        lVar3 = (**(code **)(*(long *)param_1[1] + 0x10))
                          ((long *)param_1[1],param_1,param_2 + uVar5,param_3 - uVar5);
        plVar2 = (long *)param_1[1];
        *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + (int)lVar3;
        lVar1 = plVar2[1];
        (**(code **)(*plVar2 + 0x20))(plVar2);
        if (lVar1 == extraout_x1) {
          (**(code **)(*(long *)param_1[1] + 0x18))(&local_48,(long *)param_1[1],param_1);
          plVar2 = local_48;
          local_48 = (long *)0x0;
          plVar4 = (long *)param_1[1];
          param_1[1] = (long)plVar2;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
            plVar2 = local_48;
            local_48 = (long *)0x0;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
            goto LAB_015fc2c8;
          }
          local_48 = (long *)0x0;
          plVar2 = (long *)*param_1;
        }
        else {
LAB_015fc2c8:
          plVar2 = (long *)*param_1;
        }
        if (plVar2 == (long *)0x0) goto LAB_015fc2ec;
        uVar5 = lVar3 + uVar5;
      } while (uVar5 < param_3);
    }
    param_1[6] = param_1[6] + param_3;
    (**(code **)(*plVar2 + 0x30))();
  }
  return;
}

