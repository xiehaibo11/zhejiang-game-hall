
/* v8::internal::wasm::ModuleDecoder::CheckFunctionsCount(unsigned int, unsigned int) */

void __thiscall
v8::internal::wasm::ModuleDecoder::CheckFunctionsCount
          (ModuleDecoder *this,uint param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uchar *puVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar4 = *(uchar **)(this + 8);
  if (*(uint *)(*(long *)(puVar4 + 0x50) + 0x44) == param_1) {
    uVar2 = 1;
  }
  else {
    puVar4[8] = '\0';
    puVar4[9] = '\0';
    puVar4[10] = '\0';
    puVar4[0xb] = '\0';
    puVar4[0xc] = '\0';
    puVar4[0xd] = '\0';
    puVar4[0xe] = '\0';
    puVar4[0xf] = '\0';
    puVar4[0x10] = '\0';
    puVar4[0x11] = '\0';
    puVar4[0x12] = '\0';
    puVar4[0x13] = '\0';
    puVar4[0x14] = '\0';
    puVar4[0x15] = '\0';
    puVar4[0x16] = '\0';
    puVar4[0x17] = '\0';
    puVar4[0x18] = '\0';
    puVar4[0x19] = '\0';
    puVar4[0x1a] = '\0';
    puVar4[0x1b] = '\0';
    puVar4[0x1c] = '\0';
    puVar4[0x1d] = '\0';
    puVar4[0x1e] = '\0';
    puVar4[0x1f] = '\0';
    *(uint *)(puVar4 + 0x20) = param_2;
    puVar4[0x28] = '\0';
    puVar4[0x29] = '\0';
    puVar4[0x2a] = '\0';
    puVar4[0x2b] = '\0';
    if ((puVar4[0x30] & 1) == 0) {
      puVar4[0x30] = '\0';
      puVar4[0x31] = '\0';
    }
    else {
      **(undefined1 **)(puVar4 + 0x40) = 0;
      puVar4[0x38] = '\0';
      puVar4[0x39] = '\0';
      puVar4[0x3a] = '\0';
      puVar4[0x3b] = '\0';
      puVar4[0x3c] = '\0';
      puVar4[0x3d] = '\0';
      puVar4[0x3e] = '\0';
      puVar4[0x3f] = '\0';
      if ((puVar4[0x30] & 1) != 0) {
        operator_delete(*(void **)(puVar4 + 0x40));
        puVar4[0x30] = '\0';
        puVar4[0x31] = '\0';
        puVar4[0x32] = '\0';
        puVar4[0x33] = '\0';
        puVar4[0x34] = '\0';
        puVar4[0x35] = '\0';
        puVar4[0x36] = '\0';
        puVar4[0x37] = '\0';
      }
    }
    puVar4[0x30] = '\0';
    puVar4[0x38] = '\0';
    puVar4[0x39] = '\0';
    puVar4[0x3a] = '\0';
    puVar4[0x3b] = '\0';
    puVar4[0x3c] = '\0';
    puVar4[0x3d] = '\0';
    puVar4[0x3e] = '\0';
    puVar4[0x3f] = '\0';
    puVar4[0x40] = '\0';
    puVar4[0x41] = '\0';
    puVar4[0x42] = '\0';
    puVar4[0x43] = '\0';
    puVar4[0x44] = '\0';
    puVar4[0x45] = '\0';
    puVar4[0x46] = '\0';
    puVar4[0x47] = '\0';
    puVar4[0x31] = '\0';
    puVar4[0x32] = '\0';
    puVar4[0x33] = '\0';
    puVar4[0x34] = '\0';
    puVar4[0x35] = '\0';
    puVar4[0x36] = '\0';
    puVar4[0x37] = '\0';
    puVar4[0x38] = '\0';
    Decoder::errorf(puVar4,(char *)0x0,"function body count %u mismatch (%u expected)",
                    (ulong)param_1,(ulong)*(uint *)(*(long *)(puVar4 + 0x50) + 0x44));
    uVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

