
/* v8::internal::compiler::InstructionSelector::EmitPrepareResults(v8::internal::ZoneVector<v8::internal::compiler::PushParameter>*,
   v8::internal::compiler::CallDescriptor const*, v8::internal::compiler::Node*) */

void v8::internal::compiler::InstructionSelector::EmitPrepareResults
               (ZoneVector *param_1,CallDescriptor *param_2,Node *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  InstructionSequence *this;
  Node *pNVar6;
  undefined8 *puVar7;
  Constant aCStack_60 [16];
  
  puVar7 = *(undefined8 **)param_2;
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar7 != puVar1) {
    iVar5 = 0;
    do {
      if ((~*(uint *)(puVar7 + 1) & 0x80000001) == 0) {
        uVar2 = *(ushort *)((long)puVar7 + 0xc);
        if (0xc < (uVar2 - 1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pNVar6 = (Node *)*puVar7;
        iVar5 = iVar5 + ((1 << (ulong)(*(uint *)(&DAT_01a56aa0 + (long)(char)(uVar2 - 1) * 4) & 0x1f
                                      )) + 7U >> 3);
        if (pNVar6 != (Node *)0x0) {
          if ((uVar2 & 0xff) == 0xb) {
            if (uVar2 >> 8 == 6) {
              uVar4 = 0xb;
LAB_016219a8:
              MarkAsRepresentation((InstructionSelector *)param_1,uVar4,pNVar6);
            }
          }
          else if (((uVar2 & 0xff) == 0xc) && (uVar2 >> 8 == 6)) {
            uVar4 = 0xc;
            goto LAB_016219a8;
          }
          uVar3 = GetVirtualRegister((InstructionSelector *)param_1,pNVar6);
          MarkAsDefined((InstructionSelector *)param_1,pNVar6);
          this = *(InstructionSequence **)(param_1 + 0x10);
          Constant::Constant(aCStack_60,iVar5);
          uVar4 = InstructionSequence::AddImmediate(this,aCStack_60);
          Emit((InstructionSelector *)param_1,0xab,(uVar3 & 0xffffffff) << 3 | 0xd800000001,uVar4,0,
               0);
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar1);
  }
  return;
}

