
/* v8::internal::WasmDebugInfo::GetInterpretedStack(unsigned long) */

void v8::internal::WasmDebugInfo::GetInterpretedStack(ulong param_1)

{
  ulong uVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  InterpretedFrame *pIVar5;
  uint uVar6;
  uint uVar7;
  Thread *this;
  void *pvVar8;
  ulong in_x1;
  vector<std::__ndk1::pair<unsigned_int,int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,int>>>
  *in_x8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint local_44;
  InterpretedFrame *local_28;
  
  lVar10 = **(long **)(*(long *)((*(ulong *)param_1 & 0xffffffff00000000 |
                                 (ulong)*(uint *)(*(ulong *)param_1 + 7)) + 3) + 0x18);
  this = (Thread *)wasm::WasmInterpreter::GetThread((WasmInterpreter *)(lVar10 + 0x10),0);
  uVar11 = *(ulong *)(lVar10 + 0x68);
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = in_x1 / uVar11;
  }
  uVar1 = in_x1;
  if (uVar11 <= in_x1) {
    uVar1 = in_x1 - uVar4 * uVar11;
  }
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar1 = uVar11 - 1 & in_x1;
  }
  plVar9 = *(long **)(*(long *)(lVar10 + 0x60) + uVar1 * 8);
  do {
    do {
      plVar9 = (long *)*plVar9;
    } while (plVar9[1] != in_x1);
  } while (plVar9[2] != in_x1);
  iVar3 = *(int *)(lVar10 + 0x78);
  uVar7 = *(uint *)(plVar9 + 3);
  uVar6 = wasm::WasmInterpreter::Thread::ActivationFrameBase(this,uVar7);
  if (uVar7 == iVar3 - 1U) {
    uVar7 = wasm::WasmInterpreter::Thread::GetFrameCount(this);
  }
  else {
    uVar7 = wasm::WasmInterpreter::Thread::ActivationFrameBase(this,uVar7 + 1);
  }
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (uVar7 - uVar6 != 0) {
    uVar11 = (ulong)(uVar7 - uVar6) * 8;
    pvVar8 = operator_new(uVar11);
    *(void **)in_x8 = pvVar8;
    *(void **)(in_x8 + 8) = pvVar8;
    *(void **)(in_x8 + 0x10) = (void *)((long)pvVar8 + uVar11);
  }
  if (uVar6 < uVar7) {
    do {
      wasm::WasmInterpreter::Thread::GetFrame((int)this);
      lVar10 = wasm::InterpretedFrame::function(local_28);
      local_44 = wasm::InterpretedFrame::pc(local_28);
      puVar2 = *(uint **)(in_x8 + 8);
      if (puVar2 < *(uint **)(in_x8 + 0x10)) {
        *puVar2 = *(uint *)(lVar10 + 8);
        puVar2[1] = local_44;
        *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 8;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<unsigned_int,int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,int>>>
        ::__emplace_back_slow_path<unsigned_int_const&,int>
                  (in_x8,(uint *)(lVar10 + 8),(int *)&local_44);
      }
      pIVar5 = local_28;
      local_28 = (InterpretedFrame *)0x0;
      if (pIVar5 != (InterpretedFrame *)0x0) {
        wasm::InterpretedFrameDeleter::operator()((InterpretedFrameDeleter *)&local_28,pIVar5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  return;
}

