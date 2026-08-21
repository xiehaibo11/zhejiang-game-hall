
/* v8::internal::ErrorUtils::ToString(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

long * v8::internal::ErrorUtils::ToString(Isolate *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  char *local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  long *local_38;
  
  uVar4 = *param_2;
  if (((uVar4 & 1) == 0) ||
     (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)) {
    local_50 = __strlen_chk("Error.prototype.toString",0x19);
    local_58 = "Error.prototype.toString";
    lVar5 = Factory::NewStringFromOneByte(param_1,&local_58,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar3 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x3d,lVar5,param_2,0);
    Isolate::Throw(param_1,*puVar3,0);
  }
  else {
    plVar1 = (long *)FUN_00f5e750(param_1,param_2,param_1 + 0x820,param_1 + 0x680);
    if (plVar1 != (long *)0x0) {
      plVar2 = (long *)FUN_00f5e750(param_1,param_2,param_1 + 0x7f8,param_1 + 200);
      if (plVar2 == (long *)0x0) {
        return (long *)0x0;
      }
      if (*(int *)(*plVar1 + 7) == 0) {
        return plVar2;
      }
      if (*(int *)(*plVar2 + 7) == 0) {
        return plVar1;
      }
      IncrementalStringBuilder::IncrementalStringBuilder
                ((IncrementalStringBuilder *)&local_58,param_1);
      IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_58,plVar1);
      lVar5 = (long)local_44;
      local_44 = local_44 + 1;
      if ((int)local_50 == 0) {
        *(undefined1 *)(*local_38 + lVar5 + 0xb) = 0x3a;
        if (local_44 == local_48) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_58);
        }
        *(undefined1 *)(*local_38 + (long)local_44 + 0xb) = 0x20;
      }
      else {
        *(undefined2 *)(*local_38 + lVar5 * 2 + 0xb) = 0x3a;
        if (local_44 == local_48) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_58);
        }
        *(undefined2 *)(*local_38 + (long)local_44 * 2 + 0xb) = 0x20;
      }
      local_44 = local_44 + 1;
      if (local_44 == local_48) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_58);
      }
      IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_58,plVar2);
      plVar1 = (long *)IncrementalStringBuilder::Finish((IncrementalStringBuilder *)&local_58);
      return plVar1;
    }
  }
  return (long *)0x0;
}

