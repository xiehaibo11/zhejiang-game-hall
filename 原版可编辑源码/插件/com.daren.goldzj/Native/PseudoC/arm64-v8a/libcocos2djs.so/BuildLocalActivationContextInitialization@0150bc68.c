
/* v8::internal::interpreter::BytecodeGenerator::BuildLocalActivationContextInitialization() */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildLocalActivationContextInitialization
          (BytecodeGenerator *this)

{
  uint uVar1;
  undefined4 uVar2;
  BytecodeArrayBuilder *pBVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 0x1e0);
  if (((*(byte *)(lVar6 + 0x84) >> 4 & 1) != 0) &&
     (lVar5 = *(long *)(lVar6 + 0xb0), (*(ushort *)(lVar5 + 0x28) & 0x380) == 0x180)) {
    uVar2 = BytecodeArrayBuilder::Receiver((BytecodeArrayBuilder *)(this + 0x18));
    pBVar3 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::LoadAccumulatorWithRegister
                       ((BytecodeArrayBuilder *)(this + 0x18),uVar2);
    BytecodeArrayBuilder::StoreContextSlot
              (pBVar3,*(undefined4 *)(*(long *)(this + 0x2f8) + 0x18),*(undefined4 *)(lVar5 + 0x20),
               0);
  }
  uVar1 = *(uint *)(lVar6 + 0x88);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(lVar6 + 0x90) + uVar4 * 8);
      if ((*(ushort *)(lVar5 + 0x28) & 0x380) == 0x180) {
        uVar2 = BytecodeArrayBuilder::Parameter((BytecodeArrayBuilder *)(this + 0x18),(int)uVar4);
        pBVar3 = (BytecodeArrayBuilder *)
                 BytecodeArrayBuilder::LoadAccumulatorWithRegister
                           ((BytecodeArrayBuilder *)(this + 0x18),uVar2);
        BytecodeArrayBuilder::StoreContextSlot
                  (pBVar3,*(undefined4 *)(*(long *)(this + 0x2f8) + 0x18),
                   *(undefined4 *)(lVar5 + 0x20),0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}

