
/* v8::internal::interpreter::BytecodeGenerator::VisitVariableDeclaration(v8::internal::VariableDeclaration*)
    */

BytecodeGenerator * __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitVariableDeclaration
          (BytecodeGenerator *this,VariableDeclaration *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  byte *pbVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  BytecodeArrayBuilder *pBVar9;
  BytecodeGenerator *pBVar10;
  long *plVar11;
  BytecodeGenerator *extraout_x0;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  long unaff_x22;
  uint unaff_w23;
  ulong uStack_50;
  ulong local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  uVar15 = *(ulong *)(param_1 + 8);
  uVar4 = *(ushort *)(uVar15 + 0x28);
  pbVar12 = (byte *)(ulong)uVar4;
  if (((uVar4 >> 0xb & 1) != 0) && (bVar6 = false, ((uVar4 >> 7 ^ 0xffff) & 7) != 0)) {
    pbVar13 = (byte *)((ulong)(uVar4 >> 7) & 7);
    pbVar14 = &switchD_0150d0bc::switchdataD_01a49f10;
    switch(pbVar13) {
    case (byte *)0x0:
      uStack_40 = GetCachedLoadGlobalICSlot(this,1,uVar15);
      local_48 = *(undefined8 *)(uVar15 + 8);
      this = *(BytecodeGenerator **)(this + 0x200);
      local_38 = 0;
      uStack_3c = 0xffffffff;
      puVar1 = *(undefined8 **)(this + 8);
      if (puVar1 < *(undefined8 **)(this + 0x10)) {
        puVar1[2] = 0;
        puVar1[1] = CONCAT44(0xffffffff,uStack_40);
        *puVar1 = local_48;
        *(long *)(this + 8) = *(long *)(this + 8) + 0x18;
      }
      else {
        std::__ndk1::
        vector<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration>>
        ::
        __push_back_slow_path<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration>
                  ((vector<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration>>
                    *)this,(Declaration *)&local_48);
        this = extraout_x0;
      }
      break;
    case (byte *)0x1:
      if (((uVar4 >> 0xd & 1) != 0) ||
         ((((uVar4 & 0x380) != 0x80 && ((uVar4 & 0x380) != 0x100)) && ((uVar4 >> 0xc & 1) == 0)))) {
        uVar7 = BytecodeArrayBuilder::Parameter
                          ((BytecodeArrayBuilder *)(this + 0x18),*(int *)(uVar15 + 0x20));
LAB_0150d1bc:
        pBVar9 = (BytecodeArrayBuilder *)
                 BytecodeArrayBuilder::LoadTheHole((BytecodeArrayBuilder *)(this + 0x18));
        pBVar10 = (BytecodeGenerator *)
                  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar9,uVar7);
        return pBVar10;
      }
      break;
    case (byte *)0x2:
      if (((uVar4 >> 0xd & 1) != 0) ||
         ((((uVar4 & 0x380) != 0x80 && ((uVar4 & 0x380) != 0x100)) && ((uVar4 >> 0xc & 1) == 0)))) {
        uVar7 = BytecodeArrayBuilder::Local
                          ((BytecodeArrayBuilder *)(this + 0x18),*(int *)(uVar15 + 0x20));
        goto LAB_0150d1bc;
      }
      break;
    default:
      if (((uVar4 >> 0xd & 1) != 0) ||
         ((((uVar4 & 0x380) != 0x80 && ((uVar4 & 0x380) != 0x100)) && ((uVar4 >> 0xc & 1) == 0)))) {
        pBVar9 = (BytecodeArrayBuilder *)
                 BytecodeArrayBuilder::LoadTheHole((BytecodeArrayBuilder *)(this + 0x18));
        pBVar10 = (BytecodeGenerator *)
                  BytecodeArrayBuilder::StoreContextSlot
                            (pBVar9,*(undefined4 *)(*(long *)(this + 0x2f8) + 0x18),
                             *(undefined4 *)(uVar15 + 0x20),0);
        return pBVar10;
      }
      break;
    case (byte *)0x4:
      iVar2 = *(int *)(this + 0x118);
      iVar3 = *(int *)(this + 0x11c);
      plVar11 = *(long **)(this + 0x120);
      if (iVar3 <= iVar2 + 1) {
        iVar3 = iVar2 + 1;
      }
      *(int *)(this + 0x118) = iVar2 + 1;
      *(int *)(this + 0x11c) = iVar3;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,iVar2);
      }
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::LoadLiteral
                         ((BytecodeArrayBuilder *)(this + 0x18),*(AstRawString **)(uVar15 + 8));
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar9,iVar2);
      pBVar10 = (BytecodeGenerator *)BytecodeArrayBuilder::CallRuntime(pBVar9,0x12d,iVar2);
      return pBVar10;
    case (byte *)0x5:
      if ((0 < *(int *)(uVar15 + 0x20)) &&
         (((uVar4 >> 0xd & 1) != 0 ||
          ((((uVar4 & 0x380) != 0x80 && ((uVar4 & 0x380) != 0x100)) && ((uVar4 >> 0xc & 1) == 0)))))
         ) {
        BytecodeArrayBuilder::LoadTheHole((BytecodeArrayBuilder *)(this + 0x18));
        pBVar10 = (BytecodeGenerator *)BuildVariableAssignment(this,uVar15,0x10,1,0);
        return pBVar10;
      }
      break;
    case (byte *)0x7:
switchD_0150d0bc_caseD_7:
      if (bVar6) goto LAB_0150d338;
      pbVar5 = *(byte **)(pbVar14 + 8);
joined_r0x0150d330:
      while( true ) {
        pbVar14 = pbVar5;
        if (pbVar14 == (byte *)0x0) {
          if ((((pbVar12 == pbVar13) || ((int)unaff_w23 < *(int *)(pbVar12 + 0x20))) ||
              (((int)unaff_w23 <= *(int *)(pbVar12 + 0x20) &&
               ((0 < *(int *)(pbVar12 + 0x24) ||
                ((-1 < *(int *)(pbVar12 + 0x24) && (uVar15 < *(ulong *)(pbVar12 + 0x28))))))))) ||
             (uVar8 = *(uint *)(pbVar12 + 0x30), uVar8 == 0xffffffff)) {
            uVar7 = 6;
            if ((int)param_1 == 0) {
              uVar7 = 7;
            }
            uVar8 = FeedbackVectorSpec::AddSlot
                              ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar7);
            uStack_50 = (ulong)unaff_w23;
            local_48 = uVar15;
            uStack_40 = uVar8;
            std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
            ::
            __emplace_unique_key_args<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::pair<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>&>
                      (*(__tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
                         **)(this + 0x1f8),(tuple *)&uStack_50,(pair *)&uStack_50);
          }
          if (*(long *)(unaff_x22 + 0x28) == local_38) {
            return (BytecodeGenerator *)(ulong)uVar8;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        if ((int)unaff_w23 <= *(int *)(pbVar14 + 0x20)) break;
LAB_0150d2f4:
        pbVar5 = *(byte **)(pbVar14 + 8);
      }
      if (*(int *)(pbVar14 + 0x20) <= (int)unaff_w23) {
        if (*(int *)(pbVar14 + 0x24) < 0) goto LAB_0150d2f4;
        if (*(int *)(pbVar14 + 0x24) == 0) goto code_r0x0150d31c;
      }
LAB_0150d338:
      pbVar5 = *(byte **)pbVar14;
      pbVar12 = pbVar14;
      goto joined_r0x0150d330;
    }
  }
  return this;
code_r0x0150d31c:
  bVar6 = uVar15 <= *(ulong *)(pbVar14 + 0x28);
  goto switchD_0150d0bc_caseD_7;
}

