
/* v8::internal::StubCache::Initialize() */

void __thiscall v8::internal::StubCache::Initialize(StubCache *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  StubCache *pSVar4;
  
  uVar2 = Builtins::builtin((Builtins *)(*(long *)(this + 0x7800) + 0x9e00),0x97);
  lVar3 = 0;
  uVar1 = *(undefined4 *)(*(long *)(this + 0x7800) + 200);
  do {
    pSVar4 = this + lVar3;
    lVar3 = lVar3 + 0x60;
    *(undefined4 *)pSVar4 = uVar1;
    *(undefined4 *)(pSVar4 + 4) = uVar2;
    *(undefined4 *)(pSVar4 + 8) = 0;
    *(undefined4 *)(pSVar4 + 0xc) = uVar1;
    *(undefined4 *)(pSVar4 + 0x10) = uVar2;
    *(undefined4 *)(pSVar4 + 0x14) = 0;
    *(undefined4 *)(pSVar4 + 0x18) = uVar1;
    *(undefined4 *)(pSVar4 + 0x1c) = uVar2;
    *(undefined4 *)(pSVar4 + 0x20) = 0;
    *(undefined4 *)(pSVar4 + 0x24) = uVar1;
    *(undefined4 *)(pSVar4 + 0x28) = uVar2;
    *(undefined4 *)(pSVar4 + 0x2c) = 0;
    *(undefined4 *)(pSVar4 + 0x30) = uVar1;
    *(undefined4 *)(pSVar4 + 0x34) = uVar2;
    *(undefined4 *)(pSVar4 + 0x38) = 0;
    *(undefined4 *)(pSVar4 + 0x3c) = uVar1;
    *(undefined4 *)(pSVar4 + 0x40) = uVar2;
    *(undefined4 *)(pSVar4 + 0x44) = 0;
    *(undefined4 *)(pSVar4 + 0x48) = uVar1;
    *(undefined4 *)(pSVar4 + 0x4c) = uVar2;
    *(undefined4 *)(pSVar4 + 0x50) = 0;
    *(undefined4 *)(pSVar4 + 0x54) = uVar1;
    *(undefined4 *)(pSVar4 + 0x58) = uVar2;
    *(undefined4 *)(pSVar4 + 0x5c) = 0;
  } while (lVar3 != 0x6000);
  lVar3 = 0x200;
  pSVar4 = this + 0x6030;
  do {
    lVar3 = lVar3 + -8;
    *(undefined4 *)(pSVar4 + -0x30) = uVar1;
    *(undefined4 *)(pSVar4 + -0x2c) = uVar2;
    *(undefined4 *)(pSVar4 + -0x28) = 0;
    *(undefined4 *)(pSVar4 + -0x24) = uVar1;
    *(undefined4 *)(pSVar4 + -0x20) = uVar2;
    *(undefined4 *)(pSVar4 + -0x1c) = 0;
    *(undefined4 *)(pSVar4 + -0x18) = uVar1;
    *(undefined4 *)(pSVar4 + -0x14) = uVar2;
    *(undefined4 *)(pSVar4 + -0x10) = 0;
    *(undefined4 *)(pSVar4 + -0xc) = uVar1;
    *(undefined4 *)(pSVar4 + -8) = uVar2;
    *(undefined4 *)(pSVar4 + -4) = 0;
    *(undefined4 *)pSVar4 = uVar1;
    *(undefined4 *)(pSVar4 + 4) = uVar2;
    *(undefined4 *)(pSVar4 + 8) = 0;
    *(undefined4 *)(pSVar4 + 0xc) = uVar1;
    *(undefined4 *)(pSVar4 + 0x10) = uVar2;
    *(undefined4 *)(pSVar4 + 0x14) = 0;
    *(undefined4 *)(pSVar4 + 0x18) = uVar1;
    *(undefined4 *)(pSVar4 + 0x1c) = uVar2;
    *(undefined4 *)(pSVar4 + 0x20) = 0;
    *(undefined4 *)(pSVar4 + 0x24) = uVar1;
    *(undefined4 *)(pSVar4 + 0x28) = uVar2;
    *(undefined4 *)(pSVar4 + 0x2c) = 0;
    pSVar4 = pSVar4 + 0x60;
  } while (lVar3 != 0);
  return;
}

