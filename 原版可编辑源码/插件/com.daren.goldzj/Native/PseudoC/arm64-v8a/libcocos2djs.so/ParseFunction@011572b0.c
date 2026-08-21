
/* v8::internal::Parser::ParseFunction(v8::internal::ScopedList<v8::internal::Statement*, void*>*,
   v8::internal::AstRawString const*, int, v8::internal::FunctionKind,
   v8::internal::FunctionSyntaxKind, v8::internal::DeclarationScope*, int*, int*, bool*, int*, int*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

void __thiscall
v8::internal::Parser::ParseFunction
          (Parser *this,undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_5,
          uint param_6,DeclarationScope *param_7,int *param_8,int *param_9,undefined8 param_10,
          undefined4 *param_11,undefined4 *param_12,long *param_13)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  Parser PVar5;
  ushort uVar6;
  long lVar7;
  bool bVar8;
  DeclarationScope *pDVar9;
  uint uVar10;
  undefined8 uVar11;
  Zone *this_00;
  undefined8 *puVar12;
  PendingCompilationErrorHandler *pPVar13;
  undefined4 uVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  AstRawString *pAVar23;
  Parser *local_110;
  long lStack_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined8 local_fc;
  DeclarationScope *local_f0;
  undefined2 local_e8;
  int local_e4;
  int local_e0;
  long local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  Parser *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  Parser *local_90;
  long local_88;
  DeclarationScope *pDStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_90 = this + 0x10;
  uVar1 = *(undefined4 *)(this + 0x2f0);
  *(uint *)(this + 0x2f0) = (byte)this[0x484] ^ 1;
  uStack_a8 = *(undefined8 *)this;
  *(DeclarationScope **)this = param_7;
  local_9c = 0;
  local_a0 = 0;
  local_88 = *(long *)(this + 0x10);
  local_78 = 0;
  *(Parser ***)(this + 0x10) = &local_b0;
  if (local_88 != 0) {
    uVar4 = *(undefined1 *)(local_88 + 0x39);
    *(undefined1 *)(local_88 + 0x39) = 0;
    *(undefined1 *)(local_88 + 0x3a) = uVar4;
  }
  iVar2 = *(int *)(this + 0x4a8);
  if (iVar2 != -1) {
    *(undefined4 *)(this + 0x4a8) = 0xffffffff;
  }
  plVar20 = &local_d8;
  local_e4 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_e8 = 0x100;
  uStack_c0 = 0xffffffff;
  local_c8 = 0xffffffff;
  local_d8 = 0;
  lStack_108 = *(long *)(this + 0xc0);
  local_100 = 0x103;
  local_fe = 0;
  if (lStack_108 != 0) {
    local_fe = *(undefined1 *)(lStack_108 + 0x12);
  }
  *(Parser ***)(this + 0xc0) = &local_110;
  local_fc = 0xffffffff;
  local_110 = this;
  local_f0 = param_7;
  local_d0 = plVar20;
  local_b0 = this;
  pDStack_80 = param_7;
  if ((param_6 & 0xff) == 4) {
    if (*(int *)((long)param_13 + 0xc) != 0) {
      puVar21 = (undefined8 *)*param_13;
      lVar22 = (long)*(int *)((long)param_13 + 0xc) << 3;
      do {
        pAVar23 = (AstRawString *)*puVar21;
        FuncNameInferrer::PushVariableName((FuncNameInferrer *)(this + 0x20),pAVar23);
        uVar11 = ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>>::NewVariable
                           (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>> **)
                             (this + 0xc0),pAVar23,-1);
        if (local_e4 == local_e0) {
          local_e0 = local_e4 + 1;
          local_e4 = local_e0;
        }
        else {
          local_e0 = local_e0 + 1;
        }
        this_00 = *(Zone **)local_f0;
        puVar12 = *(undefined8 **)(this_00 + 0x10);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar12) < 0x20) {
          puVar12 = (undefined8 *)Zone::NewExpand(this_00,0x20);
        }
        else {
          *(undefined8 **)(this_00 + 0x10) = puVar12 + 4;
        }
        pDVar9 = local_f0;
        lVar22 = lVar22 + -8;
        puVar21 = puVar21 + 1;
        uVar14 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
        *puVar12 = 0;
        puVar12[1] = uVar11;
        *(undefined4 *)(puVar12 + 2) = uVar14;
        *(undefined4 *)((long)puVar12 + 0x14) = 0xffffffff;
        puVar12[3] = 0;
        *local_d0 = (long)puVar12;
        local_d0 = puVar12 + 3;
      } while (lVar22 != 0);
      if (local_e8._1_1_ == '\0') {
        plVar16 = *(long **)(local_f0 + 0x20);
        uVar18 = (ulong)*(uint *)(local_f0 + 0x28);
        *(ushort *)(local_f0 + 0x83) = *(ushort *)(local_f0 + 0x83) & 0xfffe;
        plVar17 = plVar16;
        while (plVar19 = plVar17, bVar8 = false, plVar19 < plVar16 + uVar18 * 3) {
          plVar17 = plVar19 + 3;
          if (*plVar19 != 0) {
            do {
              uVar6 = *(ushort *)(plVar19[1] + 0x28);
              if ((uVar6 & 0x70) == 0x10) {
                *(ushort *)(plVar19[1] + 0x28) = uVar6 & 0xeff0;
                plVar16 = *(long **)(local_f0 + 0x20);
                uVar18 = (ulong)*(uint *)(local_f0 + 0x28);
              }
              do {
                plVar19 = plVar19 + 3;
                if (plVar16 + uVar18 * 3 <= plVar19) goto LAB_01157628;
              } while (*plVar19 == 0);
            } while( true );
          }
        }
      }
      else {
        bVar8 = true;
      }
LAB_01157628:
      if (plVar20 != puVar12 + 3) {
        uVar14 = 2;
        if (!bVar8) {
          uVar14 = 3;
        }
        do {
          puVar15 = (ulong *)*plVar20;
          if (bVar8) {
            uVar18 = puVar15[1];
            if ((*(uint *)(uVar18 + 4) & 0x3f) != 0x35) {
              uVar18 = 0;
            }
            plVar17 = (long *)(uVar18 + 8);
            if ((*(byte *)(uVar18 + 5) & 1) != 0) {
              plVar17 = (long *)(*plVar17 + 8);
            }
          }
          else {
            plVar17 = (long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
          }
          DeclarationScope::DeclareParameter
                    (pDVar9,*plVar17,uVar14,3 < *puVar15,(*puVar15 & 3) != 0,
                     *(undefined8 *)(this + 0x60),(int)puVar15[2]);
          puVar21 = (undefined8 *)*plVar20;
          plVar20 = puVar21 + 3;
        } while (puVar21 != puVar12);
      }
    }
  }
  else {
    ParserBase<v8::internal::Parser>::ParseFormalParameterList
              ((ParserBase<v8::internal::Parser> *)this,(ParserFormalParameters *)&local_f0);
    if (iVar2 != -1) {
      iVar3 = **(int **)(*(Scanner **)(this + 0xf8) + 8);
      if (iVar3 < iVar2) {
        pPVar13 = *(PendingCompilationErrorHandler **)(this + 0xb0);
        iVar2 = iVar3 + 1;
        uVar11 = 0x11f;
      }
      else {
        if (iVar3 <= iVar2) goto LAB_01157540;
        pPVar13 = *(PendingCompilationErrorHandler **)(this + 0xb0);
        iVar3 = iVar2 + -2;
        uVar11 = 0x120;
      }
      PendingCompilationErrorHandler::ReportMessageAt(pPVar13,iVar3,iVar2,uVar11,0);
      lVar22 = *(long *)(this + 0x158);
      if (*(char *)(lVar22 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar22 + 0x30) = 1;
        *(undefined8 *)(lVar22 + 0x10) = *(undefined8 *)(lVar22 + 0x18);
        this[0x1a0] = (Parser)0x6d;
        this[0x1f0] = (Parser)0x6d;
        this[0x240] = (Parser)0x6d;
      }
      *(long *)(local_110 + 0xc0) = lStack_108;
      goto LAB_01157744;
    }
LAB_01157540:
    uVar10 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((uVar10 & 0xff) != 6) {
      ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                ((ParserBase<v8::internal::Parser> *)this,uVar10);
    }
    ParserBase<v8::internal::Parser>::CheckArityRestrictions
              ((ParserBase<v8::internal::Parser> *)this,local_e0,param_5,(byte)local_e8,
               *(undefined4 *)(param_7 + 0x70),*(undefined4 *)(**(long **)(this + 0xf8) + 4));
    uVar10 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((uVar10 & 0xff) != 8) {
      ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                ((ParserBase<v8::internal::Parser> *)this,uVar10);
    }
  }
  local_c8 = local_fc;
  *(long *)(local_110 + 0xc0) = lStack_108;
  *param_8 = local_e0 - (uint)(byte)local_e8;
  *param_9 = local_e4;
  PVar5 = this[0x130];
  this[0x130] = (Parser)0x1;
  ParserBase<v8::internal::Parser>::ParseFunctionBody
            ((ParserBase<v8::internal::Parser> *)this,param_1,param_2,param_3,&local_f0,param_5,
             param_6,1);
  *(bool *)param_10 = (uint)local_c8 <= local_c8._4_4_;
  *param_11 = local_a0;
  *param_12 = (undefined4)local_9c;
  this[0x130] = PVar5;
LAB_01157744:
  *(long *)local_90 = local_88;
  *(undefined8 *)local_b0 = uStack_a8;
  *(undefined4 *)(this + 0x2f0) = uVar1;
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

