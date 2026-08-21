
/* v8::internal::ParserBase<v8::internal::Parser>::ParseObjectLiteral() */

ObjectLiteral * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseObjectLiteral
          (ParserBase<v8::internal::Parser> *this)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  Zone *pZVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ObjectLiteral *unaff_x20;
  long lVar13;
  int iVar14;
  uint uVar15;
  long *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_bf;
  FuncNameInferrer *local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  bool local_84 [4];
  ParserBase<v8::internal::Parser> *local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  local_80 = this + 200;
  uVar2 = **(undefined4 **)(*(Scanner **)(this + 0xf8) + 8);
  local_84[0] = false;
  local_78 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  local_70 = local_78;
  Scanner::Next(*(Scanner **)(this + 0xf8));
  lVar8 = *(long *)(this + 0xc0);
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if (*(byte *)(lVar8 + 0x10) < 3) {
    local_a0 = *(undefined8 *)(lVar8 + 0x30);
    uStack_90 = *(ulong *)(lVar8 + 0x40);
    local_98 = *(ulong *)(lVar8 + 0x38);
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar8 + 0x38) = 0xffffffff;
    local_a8 = lVar8;
  }
  iVar14 = 0;
  uVar15 = 0;
  bVar1 = false;
  do {
    if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '\r') {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((bVar1) && (0xfffe < (int)local_70 - (int)local_78)) {
        plVar9 = *(long **)(this + 0xc0);
        uVar10 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
        if (*(byte *)(plVar9 + 2) - 3 < 3) {
          lVar13 = *plVar9;
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(lVar13 + 0xb0),uVar2,uVar10,0x132,0);
          lVar8 = *(long *)(lVar13 + 0x158);
          if (*(char *)(lVar8 + 0x30) == '\0') {
            *(undefined4 *)(lVar13 + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar8 + 0x30) = 1;
            *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
            *(undefined1 *)(lVar13 + 0x1a0) = 0x6d;
            *(undefined1 *)(lVar13 + 0x1f0) = 0x6d;
            *(undefined1 *)(lVar13 + 0x240) = 0x6d;
          }
        }
        else if (*(uint *)((long)plVar9 + 0x44) < *(uint *)(plVar9 + 8)) {
          *(undefined4 *)((long)plVar9 + 0x34) = 0x132;
          plVar9[8] = CONCAT44(uVar10,uVar2);
        }
      }
      pZVar7 = *(Zone **)(this + 0x68);
      unaff_x20 = *(ObjectLiteral **)(pZVar7 + 0x10);
      if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)unaff_x20) < 0x28) {
        unaff_x20 = (ObjectLiteral *)Zone::NewExpand(pZVar7,0x28);
      }
      else {
        *(ObjectLiteral **)(pZVar7 + 0x10) = unaff_x20 + 0x28;
      }
      pZVar7 = *(Zone **)(this + 0x68);
      uVar10 = 0x416;
      if (!bVar1) {
        uVar10 = 0x16;
      }
      *(uint *)(unaff_x20 + 8) = *(uint *)(unaff_x20 + 8) & 0x80000000;
      *(int *)(unaff_x20 + 0xc) = iVar14;
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      *(undefined8 *)(unaff_x20 + 0x20) = 0;
      *(undefined4 *)unaff_x20 = uVar2;
      *(undefined4 *)(unaff_x20 + 4) = uVar10;
      ScopedList<v8::internal::ObjectLiteralProperty*,void*>::CopyTo
                ((ScopedList<v8::internal::ObjectLiteralProperty*,void*> *)&local_80,
                 (ZoneList *)(unaff_x20 + 0x18),pZVar7);
      ObjectLiteral::CalculateEmitStore(unaff_x20,*(Zone **)(*(long *)(this + 0x60) + 0x448));
      break;
    }
    lStack_b0 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    uStack_d0 = 0;
    local_c0 = 9;
    local_bf = 0;
    local_c8 = 0;
    local_d8 = &local_a8;
    local_b8 = (FuncNameInferrer *)(this + 0x20);
    pvVar6 = (void *)ParseObjectPropertyDefinition(this,(ParsePropertyInfo *)&local_d8,local_84);
    if (pvVar6 == (void *)0x0) {
      unaff_x20 = *(ObjectLiteral **)(this + 0x88);
      bVar4 = false;
    }
    else {
      cVar3 = *(char *)((long)pvVar6 + 0x10);
      bVar4 = local_bf._3_1_ != '\0';
      uVar15 = uVar15 | (char)local_bf != '\0';
      local_68 = pvVar6;
      if (*(long **)(local_80 + 8) < *(long **)(local_80 + 0x10)) {
        **(long **)(local_80 + 8) = (long)pvVar6;
        *(long *)(local_80 + 8) = *(long *)(local_80 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_80,&local_68);
      }
      bVar1 = (bool)(bVar1 | bVar4);
      iVar14 = iVar14 + ((uint)(cVar3 != '\x05') & (uVar15 ^ 1));
      local_70 = local_70 + 1;
      if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) != '\r') {
        uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
        if ((uVar5 & 0xff) != 0x1e) {
          ReportUnexpectedToken(this,uVar5);
        }
      }
      if (*(long *)(this + 0x40) != *(long *)(this + 0x48)) {
        FuncNameInferrer::InferFunctionsNames((FuncNameInferrer *)(this + 0x20));
      }
      bVar4 = true;
    }
    FuncNameInferrer::State::~State((State *)&local_b8);
  } while (bVar4);
  if (local_a8 != 0) {
    uVar11 = local_98 & 0xffffffff;
    bVar1 = local_98._4_4_ < (uint)local_98;
    uVar15 = local_98._4_4_;
    if (bVar1) {
      local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(local_a8 + 0x30));
      uVar11 = *(ulong *)(local_a8 + 0x38);
      uVar15 = (uint)(uVar11 >> 0x20);
      local_98 = uVar11;
    }
    *(undefined4 *)(local_a8 + 0x30) = 0;
    *(undefined8 *)(local_a8 + 0x38) = 0xffffffff;
    uVar12 = uStack_90 & 0xffffffff;
    bVar1 = uStack_90._4_4_ < (uint)uStack_90;
    uVar5 = uStack_90._4_4_;
    if (bVar1) {
      local_a0 = CONCAT44(*(undefined4 *)(local_a8 + 0x34),(undefined4)local_a0);
      uVar12 = *(ulong *)(local_a8 + 0x40);
      uVar5 = (uint)(uVar12 >> 0x20);
      uStack_90 = uVar12;
    }
    *(undefined4 *)(local_a8 + 0x34) = 0;
    *(undefined8 *)(local_a8 + 0x40) = 0xffffffff;
    if ((uint)uVar11 <= uVar15) {
      *(undefined4 *)(local_a8 + 0x30) = (undefined4)local_a0;
      *(ulong *)(local_a8 + 0x38) = local_98;
    }
    if ((uint)uVar12 <= uVar5) {
      *(undefined4 *)(local_a8 + 0x34) = local_a0._4_4_;
      *(ulong *)(local_a8 + 0x40) = uStack_90;
    }
  }
  uVar11 = *(long *)(local_80 + 8) - *(long *)local_80 >> 3;
  if (local_78 < uVar11 || local_78 - uVar11 == 0) {
    if (local_78 < uVar11) {
      *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_80,local_78 - uVar11);
  }
  return unaff_x20;
}

