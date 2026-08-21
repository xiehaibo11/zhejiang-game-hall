
/* v8::internal::ParserBase<v8::internal::Parser>::ParseArrayLiteral() */

undefined8 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseArrayLiteral
          (ParserBase<v8::internal::Parser> *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ParserBase<v8::internal::Parser> PVar6;
  uint uVar7;
  Scanner *this_00;
  undefined8 *puVar8;
  Zone *pZVar9;
  char cVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ParserBase<v8::internal::Parser> *local_88;
  ulong local_80;
  ulong local_78;
  undefined8 *local_68;
  
  local_88 = this + 200;
  uVar3 = **(undefined4 **)(*(Scanner **)(this + 0xf8) + 8);
  local_80 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  local_78 = local_80;
  Scanner::Next(*(Scanner **)(this + 0xf8));
  lVar11 = *(long *)(this + 0xc0);
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if (*(byte *)(lVar11 + 0x10) < 3) {
    local_a0 = *(undefined8 *)(lVar11 + 0x30);
    uStack_90 = *(ulong *)(lVar11 + 0x40);
    local_98 = *(ulong *)(lVar11 + 0x38);
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x38) = 0xffffffff;
    local_a8 = lVar11;
  }
  iVar17 = -1;
  do {
    this_00 = *(Scanner **)(this + 0xf8);
    cVar10 = *(char *)(*(long *)(this_00 + 8) + 0x38);
    do {
      if (cVar10 == '\n') {
        Scanner::Next(this_00);
        PVar6 = this[0x130];
        uVar4 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
        uVar5 = *(undefined4 *)(*(undefined8 **)(this + 0xf8))[1];
        this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
        lVar11 = ParsePossibleDestructuringSubPattern(this,(AccumulationScope *)&local_a8);
        pZVar9 = *(Zone **)(this + 0x68);
        puVar8 = *(undefined8 **)(pZVar9 + 0x10);
        if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar8) < 0x18) {
          puVar8 = (undefined8 *)Zone::NewExpand(pZVar9,0x18);
        }
        else {
          *(undefined8 **)(pZVar9 + 0x10) = puVar8 + 3;
        }
        *(undefined4 *)puVar8 = uVar4;
        *(undefined4 *)((long)puVar8 + 4) = 0x2d;
        *(undefined4 *)(puVar8 + 1) = uVar5;
        puVar8[2] = lVar11;
        iVar2 = (int)local_78 - (int)local_80;
        if (-1 < iVar17) {
          iVar2 = iVar17;
        }
        if ((*(uint *)(lVar11 + 4) & 0x3f) == 0x18) {
          plVar12 = *(long **)(this + 0xc0);
          uVar5 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
          if (*(byte *)(plVar12 + 2) - 3 < 3) {
            lVar16 = *plVar12;
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(lVar16 + 0xb0),uVar4,uVar5,0xfd,0);
            lVar11 = *(long *)(lVar16 + 0x158);
            if (*(char *)(lVar11 + 0x30) == '\0') {
              *(undefined4 *)(lVar16 + 0x160) = 0xffffffff;
              *(undefined1 *)(lVar11 + 0x30) = 1;
              *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
              *(undefined1 *)(lVar16 + 0x1a0) = 0x6d;
              *(undefined1 *)(lVar16 + 0x1f0) = 0x6d;
              *(undefined1 *)(lVar16 + 0x240) = 0x6d;
            }
          }
          else if (*(uint *)((long)plVar12 + 0x44) < *(uint *)(plVar12 + 8)) {
            *(undefined4 *)((long)plVar12 + 0x34) = 0xfd;
            plVar12[8] = CONCAT44(uVar5,uVar4);
          }
        }
        if (*(char *)((*(long **)(this + 0xf8))[1] + 0x38) == '\x1e') {
          plVar12 = *(long **)(this + 0xc0);
          uVar5 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
          if (*(byte *)(plVar12 + 2) - 3 < 3) {
            lVar16 = *plVar12;
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(lVar16 + 0xb0),uVar4,uVar5,0x11b,0);
            lVar11 = *(long *)(lVar16 + 0x158);
            if (*(char *)(lVar11 + 0x30) == '\0') {
              *(undefined4 *)(lVar16 + 0x160) = 0xffffffff;
              *(undefined1 *)(lVar11 + 0x30) = 1;
              *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
              *(undefined1 *)(lVar16 + 0x1a0) = 0x6d;
              *(undefined1 *)(lVar16 + 0x1f0) = 0x6d;
              *(undefined1 *)(lVar16 + 0x240) = 0x6d;
            }
          }
          else if (*(uint *)((long)plVar12 + 0x44) < *(uint *)(plVar12 + 8)) {
            *(undefined4 *)((long)plVar12 + 0x34) = 0x11b;
            plVar12[8] = CONCAT44(uVar5,uVar4);
          }
        }
        this[0x130] = PVar6;
        iVar17 = iVar2;
      }
      else if (cVar10 == '\x1e') {
        pZVar9 = *(Zone **)(this + 0x68);
        puVar8 = *(undefined8 **)(pZVar9 + 0x10);
        if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar8) < 0x10) {
          puVar8 = (undefined8 *)Zone::NewExpand(pZVar9,0x10);
          *puVar8 = 0x429ffffffff;
        }
        else {
          *(undefined8 **)(pZVar9 + 0x10) = puVar8 + 2;
          *puVar8 = 0x429ffffffff;
        }
      }
      else {
        if (cVar10 == '\a') {
          Scanner::Next(this_00);
          pZVar9 = *(Zone **)(this + 0x68);
          puVar8 = *(undefined8 **)(pZVar9 + 0x10);
          if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar8) < 0x28) {
            puVar8 = (undefined8 *)Zone::NewExpand(pZVar9,0x28);
          }
          else {
            *(undefined8 **)(pZVar9 + 0x10) = puVar8 + 5;
          }
          pZVar9 = *(Zone **)(this + 0x68);
          *(undefined4 *)puVar8 = uVar3;
          *(undefined4 *)((long)puVar8 + 4) = 0x17;
          *(uint *)(puVar8 + 1) = *(uint *)(puVar8 + 1) & 0x80000000;
          *(int *)((long)puVar8 + 0xc) = iVar17;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[4] = 0;
          ScopedList<v8::internal::Expression*,void*>::CopyTo
                    ((ScopedList<v8::internal::Expression*,void*> *)&local_88,
                     (ZoneList *)(puVar8 + 3),pZVar9);
          goto LAB_0115e8c4;
        }
        PVar6 = this[0x130];
        this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
        puVar8 = (undefined8 *)
                 ParsePossibleDestructuringSubPattern(this,(AccumulationScope *)&local_a8);
        this[0x130] = PVar6;
      }
      local_68 = puVar8;
      if (*(undefined8 **)(local_88 + 8) < *(undefined8 **)(local_88 + 0x10)) {
        **(undefined8 **)(local_88 + 8) = puVar8;
        *(long *)(local_88 + 8) = *(long *)(local_88 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_88,&local_68);
      }
      local_78 = local_78 + 1;
      this_00 = *(Scanner **)(this + 0xf8);
      cVar10 = '\a';
    } while (*(char *)(*(long *)(this_00 + 8) + 0x38) == '\a');
    uVar7 = Scanner::Next(this_00);
    if ((uVar7 & 0xff) != 0x1e) {
      ReportUnexpectedToken(this,uVar7);
    }
  } while ((*(uint *)((long)puVar8 + 4) & 0x3f) != 0x38);
LAB_0115e8c4:
  if (local_a8 != 0) {
    uVar13 = local_98 & 0xffffffff;
    bVar1 = local_98._4_4_ < (uint)local_98;
    uVar7 = local_98._4_4_;
    if (bVar1) {
      local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(local_a8 + 0x30));
      uVar13 = *(ulong *)(local_a8 + 0x38);
      uVar7 = (uint)(uVar13 >> 0x20);
      local_98 = uVar13;
    }
    *(undefined4 *)(local_a8 + 0x30) = 0;
    *(undefined8 *)(local_a8 + 0x38) = 0xffffffff;
    uVar14 = uStack_90 & 0xffffffff;
    bVar1 = uStack_90._4_4_ < (uint)uStack_90;
    uVar15 = uStack_90._4_4_;
    if (bVar1) {
      local_a0 = CONCAT44(*(undefined4 *)(local_a8 + 0x34),(undefined4)local_a0);
      uVar14 = *(ulong *)(local_a8 + 0x40);
      uVar15 = (uint)(uVar14 >> 0x20);
      uStack_90 = uVar14;
    }
    *(undefined4 *)(local_a8 + 0x34) = 0;
    *(undefined8 *)(local_a8 + 0x40) = 0xffffffff;
    if ((uint)uVar13 <= uVar7) {
      *(undefined4 *)(local_a8 + 0x30) = (undefined4)local_a0;
      *(ulong *)(local_a8 + 0x38) = local_98;
    }
    if ((uint)uVar14 <= uVar15) {
      *(undefined4 *)(local_a8 + 0x34) = local_a0._4_4_;
      *(ulong *)(local_a8 + 0x40) = uStack_90;
    }
  }
  uVar13 = *(long *)(local_88 + 8) - *(long *)local_88 >> 3;
  if (local_80 < uVar13 || local_80 - uVar13 == 0) {
    if (local_80 < uVar13) {
      *(ulong *)(local_88 + 8) = *(long *)local_88 + local_80 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_88,local_80 - uVar13);
  }
  return puVar8;
}

