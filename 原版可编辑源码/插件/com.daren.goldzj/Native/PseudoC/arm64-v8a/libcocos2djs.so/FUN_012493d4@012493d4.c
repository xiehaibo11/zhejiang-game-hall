
undefined1  [16] FUN_012493d4(long *param_1,char *param_2,byte *param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  Value *this;
  long lVar7;
  Value *this_00;
  undefined1 auVar8 [16];
  BackingStore *local_50;
  __shared_weak_count *local_48;
  
  if ((int)param_1[2] < 1) {
    this_00 = (Value *)(*(long *)(*param_1 + 8) + 0xa0);
  }
  else {
    this_00 = (Value *)param_1[1];
  }
  uVar5 = v8::Value::IsArrayBuffer(this_00);
  if ((uVar5 & 1) == 0) {
    uVar5 = v8::Value::IsTypedArray(this_00);
    if ((uVar5 & 1) != 0) {
      this = (Value *)v8::ArrayBufferView::Buffer((ArrayBufferView *)this_00);
      v8::ArrayBuffer::GetBackingStore();
      lVar6 = v8::BackingStore::Data(local_50);
      lVar7 = v8::ArrayBufferView::ByteOffset((ArrayBufferView *)this_00);
      lVar6 = lVar6 + lVar7;
      uVar5 = v8::ArrayBufferView::ByteLength((ArrayBufferView *)this_00);
      bVar4 = v8::Value::IsSharedArrayBuffer(this);
      *param_3 = bVar4 & 1;
      if (local_48 != (__shared_weak_count *)0x0) {
        p_Var1 = local_48 + 8;
        do {
          lVar7 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_012494e8;
      }
      goto joined_r0x0124954c;
    }
    v8::internal::wasm::ErrorThrower::TypeError(param_2,"Argument 0 must be a buffer source");
    lVar6 = 0;
  }
  else {
    v8::ArrayBuffer::GetBackingStore();
    lVar6 = v8::BackingStore::Data(local_50);
    uVar5 = v8::BackingStore::ByteLength(local_50);
    bVar4 = v8::Value::IsSharedArrayBuffer(this_00);
    *param_3 = bVar4 & 1;
    if (local_48 != (__shared_weak_count *)0x0) {
      p_Var1 = local_48 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_012494e8:
      if (lVar7 == 0) {
        (**(code **)(*(long *)local_48 + 0x10))(local_48);
        std::__ndk1::__shared_weak_count::__release_weak(local_48);
      }
    }
joined_r0x0124954c:
    if (uVar5 != 0) {
      if (0x40000000 < uVar5) {
        v8::internal::wasm::ErrorThrower::RangeError
                  (param_2,"buffer source exceeds maximum size of %zu (is %zu)",0x40000000,uVar5);
      }
      goto LAB_01249564;
    }
  }
  v8::internal::wasm::ErrorThrower::CompileError(param_2,"BufferSource argument is empty");
  uVar5 = 0;
LAB_01249564:
  lVar7 = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    lVar7 = lVar6;
  }
  lVar6 = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    lVar6 = (long)(int)uVar5;
  }
  auVar8._8_8_ = lVar6;
  auVar8._0_8_ = lVar7;
  return auVar8;
}

