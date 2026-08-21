
/* v8::internal::JSFunction::JSFunctionPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::JSFunction::JSFunctionPrint(JSFunction *this,basic_ostream *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  basic_ostream *pbVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_50;
  ulong local_48;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"Function");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - function prototype: ",0x18);
  uVar9 = *(ulong *)this;
  uVar7 = uVar9 & 0xffffffff00000000;
  uVar10 = uVar7 | 9;
  if (*(char *)(uVar10 + *(uint *)(uVar9 - 1)) < '\0') {
    if ((((*(byte *)(uVar10 + *(uint *)(uVar9 - 1)) & 1) != 0) ||
        (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar7 + *(uint *)(uVar9 + 0x1b) + -1)) == 0xa2))
       || (*(uint *)(uVar9 + 0x1b) != *(uint *)(uVar7 + 0xa8))) {
      if ((*(byte *)(uVar10 + *(uint *)(uVar9 - 1)) & 1) == 0) {
        local_48 = uVar7 | *(uint *)(uVar9 + 0x1b);
        if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(local_48 - 1)) == 0xa2) {
          local_48 = uVar7 | *(uint *)(local_48 + 0xf);
        }
      }
      else {
        uVar8 = *(uint *)((uVar7 | 0x13) + (ulong)*(uint *)(uVar9 - 1));
        local_48 = uVar7 | uVar8;
        if ((uVar8 & 1) != 0) {
          do {
            if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(local_48 - 1)) != 0xa2) break;
            puVar1 = (uint *)(local_48 + 0x13);
            local_48 = uVar7 | *puVar1;
          } while ((*puVar1 & 1) != 0);
        }
      }
      internal::operator<<(param_1,(Brief *)&local_48);
      if ((*(byte *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1)) +
                    9) & 1) != 0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1," (non-instance prototype)",0x19);
      }
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - initial_map: ",0x11);
    uVar9 = *(ulong *)this & 0xffffffff00000000;
    uVar7 = uVar9 | *(uint *)(*(ulong *)this + 0x1b);
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xa2) {
      local_48 = uVar7;
      internal::operator<<(param_1,(Brief *)&local_48);
    }
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<no-prototype-slot>",0x13);
  }
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - shared_info: ",0x11);
  local_48 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar4,(Brief *)&local_48);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - name: ",10);
  uVar7 = *(ulong *)this & 0xffffffff00000000;
  uVar9 = uVar7 | *(uint *)(*(ulong *)this + 0xb);
  uVar8 = *(uint *)(uVar9 + 7);
  local_48 = uVar7 | uVar8;
  if (((uVar8 & 1) == 0) || (*(short *)((uVar7 | 7) + (ulong)*(uint *)(local_48 - 1)) != 0x83)) {
    uVar9 = local_48;
    if (uVar8 != 0) goto joined_r0x00f3967c;
LAB_00f396b8:
    uVar9 = *(ulong *)(uVar7 + 200);
  }
  else {
    uVar10 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_48);
    if ((uVar10 & 1) == 0) goto LAB_00f396b8;
    uVar8 = *(uint *)(uVar9 + 7);
    uVar9 = uVar7 | uVar8;
joined_r0x00f3967c:
    if (((uVar8 & 1) != 0) && (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x83)) {
      local_48 = uVar9;
      uVar10 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_48);
      if ((uVar10 & 1) == 0) goto LAB_00f396b8;
      local_48 = uVar9;
      uVar9 = ScopeInfo::FunctionName((ScopeInfo *)&local_48);
    }
  }
  local_48 = uVar9;
  internal::operator<<(pbVar4,(Brief *)&local_48);
  uVar9 = *(ulong *)this;
  uVar7 = uVar9 & 0xffffffff00000000;
  uVar8 = *(uint *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0x27);
  if (uVar8 < 0x5bc) {
    if (*(int *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0x27) != 0x42) {
      uVar2 = *(uint *)((uVar7 | *(uint *)(uVar9 + 0xb)) + 3);
      if ((uVar2 != 0x84) &&
         (((uVar2 & 1) == 0 ||
          (1 < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar2) - 1)) - 0x95)))) {
        uVar9 = *(ulong *)this;
        uVar7 = uVar9 & 0xffffffff00000000;
        uVar2 = *(int *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0x27) - 0x38;
        if (((uVar2 < 9) && ((1 << (ulong)(uVar2 & 0x1f) & 0x181U) != 0)) ||
           (((*(byte *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0x17) & 0x3e) == 0 &&
            ((*(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0xf)) + 7) & 1) != 0)
            ))) goto LAB_00f3974c;
      }
    }
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - builtin: ",0xd);
    pcVar5 = (char *)Builtins::name(uVar8);
    sVar6 = strlen(pcVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar5,sVar6);
  }
LAB_00f3974c:
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - formal_parameter_count: ",0x1c);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
             *(ushort *)
              ((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb)) + 0x15
              ));
  if ((*(uint *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb)) +
                0x1b) >> 0x1e & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - safe_to_skip_arguments_adaptor",0x22);
  }
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - kind: ",10);
  uVar8 = *(uint *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb)) +
                   0x1b) ^ 0x10;
  if ((0xffff0007U >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
    pcVar5 = (&PTR_s_ConciseGeneratorMethod_019afcde_5_01ca4c58)[(ulong)uVar8 & 0x1f];
    sVar6 = strlen(pcVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar5,sVar6);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - context: ",0xd);
    local_48 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
    internal::operator<<(pbVar4,(Brief *)&local_48);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - code: ",10);
    local_48 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
    internal::operator<<(pbVar4,(Brief *)&local_48);
    uVar9 = *(ulong *)this;
    uVar7 = uVar9 & 0xffffffff00000000;
    if (*(int *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0x27) != 0x42) {
      uVar8 = *(uint *)((uVar7 | *(uint *)(uVar9 + 0xb)) + 3);
      if ((uVar8 != 0x84) &&
         (((uVar8 & 1) == 0 ||
          (1 < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar8) - 1)) - 0x95)))) {
        uVar9 = *(ulong *)this;
        uVar7 = uVar9 & 0xffffffff00000000;
        uVar8 = *(int *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0x27) - 0x38;
        if (((uVar8 < 9) && ((1 << (ulong)(uVar8 & 0x1f) & 0x181U) != 0)) ||
           (((*(byte *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0x17) & 0x3e) == 0 &&
            ((*(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(uVar9 + 0x17)) + 0xf)) + 7) & 1) != 0)
            ))) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,"\n - interpreted",0xf);
          uVar7 = *(ulong *)this & 0xffffffff00000000;
          puVar1 = (uint *)((uVar7 | *(uint *)(*(ulong *)this + 0xb)) + 3);
          uVar8 = *puVar1;
          if ((((uVar8 & 1) != 0) &&
              (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar8) - 1)) == 0x86)) ||
             ((uVar8 = *puVar1, (uVar8 & 1) != 0 &&
              (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar8) - 1)) == 0x61)))) {
            pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_1,"\n - bytecode: ",0xe);
            local_48 = *(ulong *)this & 0xffffffff00000000;
            uVar7 = local_48 | *(uint *)(*(ulong *)this + 0xb);
            uVar10 = local_48 | *(uint *)(uVar7 + 0xf);
            uVar9 = local_48 | 7;
            if ((*(short *)(uVar9 + *(uint *)(uVar10 - 1)) == 0x5b) &&
               (*(short *)(uVar9 + *(uint *)((local_48 | *(uint *)(uVar10 + 0x13)) - 1)) == 0x86)) {
              uVar8 = *(uint *)(uVar10 + 0xf);
            }
            else {
              uVar8 = *(uint *)(uVar7 + 3);
              if (((uVar8 & 1) == 0) ||
                 (*(short *)(uVar9 + *(uint *)((local_48 | uVar8) - 1)) != 0x86)) {
                uVar8 = *(uint *)((local_48 | *(uint *)(uVar7 + 3)) + 3);
              }
              else {
                uVar8 = *(uint *)(uVar7 + 3);
              }
            }
            local_48 = local_48 | uVar8;
            internal::operator<<(pbVar4,(Object *)&local_48);
          }
        }
      }
    }
    uVar7 = WasmExportedFunction::IsWasmExportedFunction(*(undefined8 *)this);
    if ((uVar7 & 1) != 0) {
      local_48 = *(ulong *)this;
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - WASM instance: ",0x13);
      local_50 = WasmExportedFunction::instance((WasmExportedFunction *)&local_48);
      internal::operator<<(pbVar4,(Brief *)&local_50);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - WASM function index: ",0x19);
      iVar3 = WasmExportedFunction::function_index((WasmExportedFunction *)&local_48);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,iVar3);
    }
    uVar7 = WasmJSFunction::IsWasmJSFunction(*(undefined8 *)this);
    if ((uVar7 & 1) != 0) {
      local_48 = *(ulong *)this;
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - WASM wrapper around: ",0x19);
      local_50 = WasmJSFunction::GetCallable((WasmJSFunction *)&local_48);
      internal::operator<<(pbVar4,(Brief *)&local_50);
    }
    local_48 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
    SharedFunctionInfo::PrintSourceCode((SharedFunctionInfo *)&local_48,param_1);
    FUN_00f3d880(param_1,*(undefined8 *)this,1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," - feedback vector: ",0x14);
    uVar9 = *(ulong *)this;
    uVar7 = uVar9 & 0xffffffff00000000;
    if (*(short *)((uVar7 | 7) +
                  (ulong)*(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(uVar9 + 0xb)) + 0xb)) - 1))
        == 0x9e) {
      uVar8 = *(uint *)((uVar7 | *(uint *)(uVar9 + 0xb)) + 3);
      if ((uVar8 != 0x84) &&
         (((uVar8 & 1) == 0 ||
          (1 < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar8) - 1)) - 0x95)))) {
        uVar9 = *(ulong *)this & 0xffffffff00000000;
        uVar7 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)this + 0x13)) + 3);
        if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x9f) {
          local_48 = uVar7;
          FeedbackVector::FeedbackVectorPrint((FeedbackVector *)&local_48,param_1);
          return;
        }
      }
      pcVar5 = "not available\n";
      uVar7 = 0xe;
    }
    else {
      pcVar5 = "feedback metadata is not available in SFI\n";
      uVar7 = 0x2a;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar5,uVar7)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

