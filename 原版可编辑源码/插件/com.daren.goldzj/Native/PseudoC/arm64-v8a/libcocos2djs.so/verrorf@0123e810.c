
/* v8::internal::wasm::Decoder::verrorf(unsigned int, char const*, std::__va_list) */

void __thiscall
v8::internal::wasm::Decoder::verrorf
          (Decoder *this,undefined4 param_1,undefined8 param_2,undefined8 *param_4)

{
  long lVar1;
  Decoder DVar2;
  void *pvVar3;
  undefined1 *__src;
  uint uVar4;
  ulong __n;
  void *__dest;
  ulong uVar5;
  Decoder local_1b8;
  undefined7 uStack_1b7;
  undefined1 local_1b0;
  uint7 uStack_1af;
  void *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined7 uStack_178;
  undefined1 local_171;
  uint7 uStack_170;
  undefined1 *local_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x30] & 1) == 0) {
    if ((byte)this[0x30] >> 1 != 0) goto LAB_0123e974;
  }
  else if (*(long *)(this + 0x38) != 0) goto LAB_0123e974;
  local_168 = auStack_158;
  uStack_160 = 0x100;
  uStack_198 = param_4[1];
  local_1a0 = *param_4;
  uStack_188 = param_4[3];
  uStack_190 = param_4[2];
  uVar4 = VSNPrintF(local_168,0x100,param_2,&local_1a0);
  __src = local_168;
  if ((int)uVar4 < 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",&DAT_019ef596);
  }
  __n = (ulong)uVar4;
  local_1b8 = (Decoder)0x0;
  uStack_1b7 = 0;
  local_1b0 = 0;
  uStack_1af = 0;
  local_1a8 = (void *)0x0;
  if (uVar4 < 0x17) {
    __dest = (void *)((ulong)&local_1b8 | 1);
    local_1b8 = SUB41(uVar4 << 1,0);
  }
  else {
    uVar5 = __n + 0x10 & 0x1fffffff0;
    __dest = operator_new(uVar5);
    local_1b8 = (Decoder)((byte)uVar5 | 1);
    uStack_1b7 = (undefined7)(uVar5 >> 8);
    local_1b0 = (undefined1)uVar4;
    uStack_1af = (uint7)(uint3)(uVar4 >> 8);
    local_1a8 = __dest;
  }
  memcpy(__dest,__src,__n);
  pvVar3 = local_1a8;
  uStack_170 = uStack_1af;
  local_171 = local_1b0;
  uStack_178 = uStack_1b7;
  DVar2 = local_1b8;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_1b8 = (Decoder)0x0;
  uStack_1b7 = 0;
  local_1b0 = 0;
  uStack_1af = 0;
  local_1a8 = (void *)0x0;
  *(undefined4 *)(this + 0x28) = param_1;
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
  this[0x30] = DVar2;
  *(ulong *)(this + 0x38) = CONCAT71(uStack_170,local_171);
  *(void **)(this + 0x40) = pvVar3;
  *(ulong *)(this + 0x31) = CONCAT17(local_171,uStack_178);
  uStack_170 = 0;
  uStack_178 = 0;
  local_171 = 0;
  if (((byte)local_1b8 & 1) != 0) {
    operator_delete(local_1a8);
  }
  (**(code **)(*(long *)this + 0x10))(this);
LAB_0123e974:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

