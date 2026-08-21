
/* v8::internal::wasm::ModuleDecoderImpl::DecodeCodeSection(bool) */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::DecodeCodeSection(ModuleDecoderImpl *this,bool param_1)

{
  WasmFunction *pWVar1;
  int iVar2;
  int iVar3;
  ModuleDecoderImpl MVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  WasmModule *pWVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  uint uVar14;
  undefined7 uStack_78;
  undefined1 local_71;
  int7 iStack_70;
  char cStack_69;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar11 = *(undefined8 *)(this + 0x10);
  uVar12 = *(undefined8 *)(this + 8);
  iVar2 = *(int *)(this + 0x20);
  uVar6 = Decoder::consume_u32v((Decoder *)this,"functions count");
  if (*(uint *)(*(long *)(this + 0x50) + 0x44) != uVar6) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(int *)(this + 0x20) = iVar2 + ((int)uVar11 - (int)uVar12);
    iStack_70 = 0;
    uStack_78 = 0;
    local_71 = 0;
    *(undefined4 *)(this + 0x28) = 0;
    if (((byte)this[0x30] & 1) == 0) {
      *(undefined2 *)(this + 0x30) = 0;
    }
    else {
      **(undefined1 **)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      if (((byte)this[0x30] & 1) != 0) {
        operator_delete(*(void **)(this + 0x40));
        *(undefined8 *)(this + 0x30) = 0;
      }
    }
    this[0x30] = (ModuleDecoderImpl)0x0;
    *(ulong *)(this + 0x38) = CONCAT71(iStack_70,local_71);
    *(undefined8 *)(this + 0x40) = 0;
    *(ulong *)(this + 0x31) = CONCAT17(local_71,uStack_78);
    Decoder::errorf((uchar *)this,(char *)0x0,"function body count %u mismatch (%u expected)",
                    (ulong)uVar6,(ulong)*(uint *)(*(long *)(this + 0x50) + 0x44));
  }
  uVar14 = 0;
  MVar4 = this[0x30];
  if (((byte)MVar4 & 1) == 0) goto LAB_015f16d4;
  while (uVar9 = *(ulong *)(this + 0x38), uVar14 < uVar6) {
    while( true ) {
      if (uVar9 != 0) goto LAB_015f17f4;
      pcVar13 = *(char **)(this + 0x10);
      uVar7 = Decoder::consume_u32v((Decoder *)this,"body size");
      if (0x74cbb1 < uVar7) {
        Decoder::errorf((uchar *)this,pcVar13,"size %u > maximum function size %zu",(ulong)uVar7,
                        0x74cbb1);
        goto LAB_015f17f4;
      }
      pcVar13 = *(char **)(this + 0x10);
      iVar2 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0x20);
      if ((uint)(*(int *)(this + 0x18) - (int)pcVar13) < uVar7) {
        Decoder::errorf((uchar *)this,pcVar13,"expected %u bytes, fell off end",(ulong)uVar7);
        pcVar10 = *(char **)(this + 0x18);
      }
      else {
        pcVar10 = pcVar13 + uVar7;
      }
      *(char **)(this + 0x10) = pcVar10;
      if (((byte)this[0x30] & 1) == 0) {
        if ((byte)this[0x30] >> 1 != 0) goto LAB_015f17f4;
      }
      else if (*(long *)(this + 0x38) != 0) goto LAB_015f17f4;
      pWVar1 = (WasmFunction *)
               (*(long *)(*(long *)(this + 0x50) + 0x88) +
               (ulong)(uVar14 + *(int *)(*(long *)(this + 0x50) + 0x3c)) * 0x20);
      *(ulong *)(pWVar1 + 0x10) = CONCAT44(uVar7,iVar3 + ((int)pcVar13 - iVar2));
      if (param_1) {
        uVar11 = *(undefined8 *)(this + 8);
        iVar2 = *(int *)(this + 0x18) - (int)uVar11;
        uStack_78 = (undefined7)uVar11;
        local_71 = (undefined1)((ulong)uVar11 >> 0x38);
        iStack_70 = (int7)iVar2;
        cStack_69 = (char)(iVar2 >> 0x1f);
        pWVar8 = *(WasmModule **)(this + 0x50);
        VerifyFunctionBody(this,*(AccountingAllocator **)(*(long *)pWVar8 + 0x20),
                           uVar14 + *(int *)(pWVar8 + 0x3c),(ModuleWireBytes *)&uStack_78,pWVar8,
                           pWVar1);
      }
      uVar14 = uVar14 + 1;
      MVar4 = this[0x30];
      if (((byte)MVar4 & 1) != 0) break;
LAB_015f16d4:
      uVar9 = (ulong)((byte)MVar4 >> 1);
      if (uVar6 <= uVar14) goto LAB_015f17f4;
    }
  }
LAB_015f17f4:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

