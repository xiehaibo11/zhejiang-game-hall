
undefined1  [16]
FUN_017e151c(LiftoffAssembler *param_1,long param_2,ulong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
    uVar2 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,0x13f8ffff,0);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = LZCOUNT((uVar2 >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10) << 0x20);
  }
  *param_3 = 1L << (uVar2 & 0x3f) | *param_3;
  uVar3 = uVar2 & 0xff | 0x4000000000;
  if ((*(char *)(param_2 + 1) == '\0') || (*(char *)(param_2 + 0x1c) == '\0')) {
    v8::internal::wasm::LiftoffAssembler::LoadFromInstance(param_1,uVar3,0,0x4f,8);
    uVar1 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    v8::internal::wasm::LiftoffAssembler::LoadFromInstance(param_1,uVar3,0,0x57,8);
    v8::internal::wasm::LiftoffAssembler::Load
              (param_1,uVar2 & 0xff,uVar3,0,0xffffffff,2,*(int *)(param_2 + 0x18) << 3,5,*param_3,0,
               0);
    uVar1 = 0;
  }
  *param_4 = uVar1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar3;
  return auVar4;
}

