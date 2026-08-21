
void FUN_00f5f34c(Isolate *param_1,ulong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  IncrementalStringBuilder aIStack_48 [8];
  int local_40;
  int local_38;
  int local_34;
  long *local_28;
  
  v8::internal::IncrementalStringBuilder::IncrementalStringBuilder(aIStack_48,param_1);
  uVar1 = v8::internal::Object::TypeOf(param_1,param_2);
  v8::internal::IncrementalStringBuilder::AppendString(aIStack_48,uVar1);
  uVar3 = *param_2;
  iVar2 = (int)uVar3;
  if ((uVar3 & 1) == 0) {
LAB_00f5f390:
    lVar4 = (long)local_34;
    local_34 = local_34 + 1;
    if (local_40 == 0) {
      *(undefined1 *)(*local_28 + lVar4 + 0xb) = 0x20;
    }
    else {
      *(undefined2 *)(*local_28 + lVar4 * 2 + 0xb) = 0x20;
    }
    if (local_34 == local_38) {
      v8::internal::IncrementalStringBuilder::Extend(aIStack_48);
    }
    param_1 = (Isolate *)v8::internal::Factory::NumberToString((Factory *)param_1,param_2,1);
  }
  else {
    uVar5 = uVar3 & 0xffffffff00000000 | 7;
    if (*(ushort *)(uVar5 + *(uint *)(uVar3 - 1)) < 0x40) {
      lVar4 = (long)local_34;
      local_34 = local_34 + 1;
      if (local_40 == 0) {
        *(undefined1 *)(*local_28 + lVar4 + 0xb) = 0x20;
        if (local_34 == local_38) {
          v8::internal::IncrementalStringBuilder::Extend(aIStack_48);
        }
        *(undefined1 *)(*local_28 + (long)local_34 + 0xb) = 0x22;
      }
      else {
        *(undefined2 *)(*local_28 + lVar4 * 2 + 0xb) = 0x20;
        if (local_34 == local_38) {
          v8::internal::IncrementalStringBuilder::Extend(aIStack_48);
        }
        *(undefined2 *)(*local_28 + (long)local_34 * 2 + 0xb) = 0x22;
      }
      local_34 = local_34 + 1;
      if (local_34 == local_38) {
        v8::internal::IncrementalStringBuilder::Extend(aIStack_48);
      }
      v8::internal::IncrementalStringBuilder::AppendString(aIStack_48,param_2);
      lVar4 = (long)local_34;
      local_34 = local_34 + 1;
      if (local_40 == 0) {
        *(undefined1 *)(*local_28 + lVar4 + 0xb) = 0x22;
      }
      else {
        *(undefined2 *)(*local_28 + lVar4 * 2 + 0xb) = 0x22;
      }
      if (local_34 == local_38) {
        v8::internal::IncrementalStringBuilder::Extend(aIStack_48);
      }
      goto LAB_00f5f4a8;
    }
    if (iVar2 == *(int *)(param_1 + 0xb0)) {
      lVar4 = (long)local_34;
      local_34 = local_34 + 1;
      if (local_40 == 0) {
        *(undefined1 *)(*local_28 + lVar4 + 0xb) = 0x20;
      }
      else {
        *(undefined2 *)(*local_28 + lVar4 * 2 + 0xb) = 0x20;
      }
      if (local_34 == local_38) {
        v8::internal::IncrementalStringBuilder::Extend(aIStack_48);
      }
      param_1 = param_1 + 0x878;
    }
    else if (iVar2 == *(int *)(param_1 + 0xb8)) {
      lVar4 = (long)local_34;
      local_34 = local_34 + 1;
      if (local_40 == 0) {
        *(undefined1 *)(*local_28 + lVar4 + 0xb) = 0x20;
      }
      else {
        *(undefined2 *)(*local_28 + lVar4 * 2 + 0xb) = 0x20;
      }
      if (local_34 == local_38) {
        v8::internal::IncrementalStringBuilder::Extend(aIStack_48);
      }
      param_1 = param_1 + 0xa70;
    }
    else {
      if (iVar2 != *(int *)(param_1 + 0xc0)) {
        if (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) != 0x42) goto LAB_00f5f4a8;
        goto LAB_00f5f390;
      }
      lVar4 = (long)local_34;
      local_34 = local_34 + 1;
      if (local_40 == 0) {
        *(undefined1 *)(*local_28 + lVar4 + 0xb) = 0x20;
      }
      else {
        *(undefined2 *)(*local_28 + lVar4 * 2 + 0xb) = 0x20;
      }
      if (local_34 == local_38) {
        v8::internal::IncrementalStringBuilder::Extend(aIStack_48);
      }
      param_1 = param_1 + 0x6a8;
    }
  }
  v8::internal::IncrementalStringBuilder::AppendString(aIStack_48,param_1);
LAB_00f5f4a8:
  lVar4 = v8::internal::IncrementalStringBuilder::Finish(aIStack_48);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  return;
}

