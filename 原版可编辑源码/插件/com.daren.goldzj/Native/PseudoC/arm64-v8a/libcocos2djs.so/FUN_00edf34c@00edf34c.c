
void FUN_00edf34c(Logger *param_1,int param_2,ulong *param_3,ulong *param_4,undefined8 *param_5,
                 uint param_6,long param_7)

{
  Mutex *this;
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  Logger *this_00;
  void *pvVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong local_98;
  ulong local_90;
  ulong local_88 [2];
  void *local_78;
  ulong local_68;
  
  plVar8 = *(long **)(param_7 + 0x9558);
  uVar6 = (**(code **)(*plVar8 + 0x88))(plVar8);
  if (((uVar6 & 1) == 0) &&
     (v8::internal::FLAG_log_function_events == '\0' && *(char *)(param_7 + 0xb7fc) == '\0')) {
    plVar8 = *(long **)(*(long *)(param_7 + 0xb6d8) + 0x10);
    while( true ) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      uVar6 = (**(code **)(*(long *)plVar8[2] + 0x88))();
      if ((uVar6 & 1) != 0) break;
      plVar8 = (long *)*plVar8;
    }
  }
  local_88[0] = *param_3;
  uVar2 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)local_88);
  iVar3 = v8::internal::Script::GetLineNumber(param_4,uVar2);
  local_88[0] = *param_3;
  uVar2 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)local_88);
  iVar4 = v8::internal::Script::GetColumnNumber(param_4,uVar2);
  uVar6 = *param_4;
  if (((*(uint *)(uVar6 + 7) & 1) == 0) ||
     (uVar12 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 7),
     0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))) {
    uVar12 = *(ulong *)(param_7 + 200);
  }
  iVar11 = param_2;
  if (*(uint *)(uVar6 + 0x17) < 2) {
    if (param_2 == 0xb) {
      iVar11 = 0x13;
    }
    else if (param_2 == 0x11) {
      iVar11 = 0x15;
    }
    else if (param_2 == 0xf) {
      iVar11 = 0x14;
    }
  }
  lVar9 = *(long *)(param_7 + 0xb6d8);
  uVar13 = *param_5;
  uVar6 = *param_3;
  this = (Mutex *)(lVar9 + 0x28);
  v8::base::Mutex::Lock(this);
  plVar8 = *(long **)(lVar9 + 0x10);
  if (plVar8 != (long *)0x0) {
    do {
      (**(code **)(*(long *)plVar8[2] + 0x28))
                ((long *)plVar8[2],iVar11,uVar13,uVar6,uVar12,iVar3 + 1,iVar4 + 1);
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  v8::base::Mutex::Unlock(this);
  if (v8::internal::FLAG_log_function_events == '\0') {
    return;
  }
  bVar1 = (param_6 & 1) != 0;
  lVar9 = 7;
  if (bVar1) {
    lVar9 = 8;
  }
  pvVar10 = (void *)((ulong)local_88 | 1);
  pcVar7 = "optimize";
  if (!bVar1) {
    pcVar7 = "compile";
  }
  local_88[1] = 0;
  local_78 = (void *)0x0;
  local_88[0] = (ulong)(byte)((int)lVar9 << 1);
  __memcpy_chk(pvVar10,pcVar7,lVar9,0x17);
  *(undefined1 *)((long)pvVar10 + lVar9) = 0;
  switch(param_2) {
  case 10:
    pcVar7 = "-eval";
    break;
  case 0xb:
  case 0x11:
    goto switchD_00edf59c_caseD_b;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xf:
    pcVar7 = "-lazy";
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_88,
         pcVar7);
switchD_00edf59c_caseD_b:
  this_00 = *(Logger **)(param_7 + 0x9558);
  uVar6 = v8::internal::Logger::is_logging(this_00);
  if ((uVar6 & 1) != 0) {
    iVar3 = *(int *)(*param_4 + 0x1f);
    local_68 = *param_3;
    if ((local_88[0] & 1) != 0) {
      pvVar10 = local_78;
    }
    uVar2 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_68);
    local_90 = *param_3;
    uVar5 = v8::internal::SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_90);
    local_98 = *param_3;
    uVar13 = v8::internal::SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_98);
    v8::internal::Logger::FunctionEvent(param_1,this_00,pvVar10,iVar3 >> 1,uVar2,uVar5,uVar13);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  return;
}

