
/* v8::internal::Parser::ParseAndRewriteGeneratorFunctionBody(int, v8::internal::FunctionKind,
   v8::internal::ScopedList<v8::internal::Statement*, void*>*) */

void __thiscall
v8::internal::Parser::ParseAndRewriteGeneratorFunctionBody
          (Parser *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  vector<void*,std::__ndk1::allocator<void*>> *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  DeclarationScope *this_00;
  ulong *puVar9;
  long lVar10;
  Zone *this_01;
  long lVar11;
  ulong uVar12;
  undefined8 *local_68;
  
  uVar5 = BuildInitialYield();
  this_01 = *(Zone **)(this + 0x68);
  local_68 = *(undefined8 **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)local_68) < 0x10) {
    local_68 = (undefined8 *)Zone::NewExpand(this_01,0x10);
  }
  else {
    *(undefined8 **)(this_01 + 0x10) = local_68 + 2;
  }
  local_68[1] = uVar5;
  *local_68 = 0x9ffffffff;
  pvVar6 = (vector<void*,std::__ndk1::allocator<void*>> *)*param_4;
  if (*(undefined8 **)(pvVar6 + 8) < *(undefined8 **)(pvVar6 + 0x10)) {
    **(undefined8 **)(pvVar6 + 8) = local_68;
    *(long *)(pvVar6 + 8) = *(long *)(pvVar6 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (pvVar6,&local_68);
  }
  param_4[2] = param_4[2] + 1;
  lVar11 = *(long *)(this + 0xf8);
  puVar9 = *(ulong **)(lVar11 + 8);
  if ((char)puVar9[7] == 'Z') {
    do {
      uVar12 = *puVar9;
      if (*(char *)((long)puVar9 + 0x1c) == '\0') {
LAB_01153c6c:
        bVar3 = false;
        bVar2 = false;
      }
      else {
        iVar4 = *(int *)((long)puVar9 + 4) - (int)uVar12;
        if (iVar4 == 9) {
          if ((int)puVar9[3] != 7) goto LAB_01153c6c;
          iVar4 = strncmp("use asm",(char *)puVar9[1],7);
          bVar3 = iVar4 == 0;
          bVar2 = false;
        }
        else {
          if (((iVar4 != 0xc) || ((int)puVar9[3] != 10)) ||
             (iVar4 = strncmp("use strict",(char *)puVar9[1],10), iVar4 != 0)) goto LAB_01153c6c;
          bVar3 = false;
          bVar2 = true;
        }
      }
      puVar8 = (undefined8 *)
               ParserBase<v8::internal::Parser>::ParseStatementListItem
                         ((ParserBase<v8::internal::Parser> *)this);
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      pvVar6 = (vector<void*,std::__ndk1::allocator<void*>> *)*param_4;
      local_68 = puVar8;
      if (*(undefined8 **)(pvVar6 + 8) < *(undefined8 **)(pvVar6 + 0x10)) {
        **(undefined8 **)(pvVar6 + 8) = puVar8;
        *(long *)(pvVar6 + 8) = *(long *)(pvVar6 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  (pvVar6,&local_68);
      }
      param_4[2] = param_4[2] + 1;
      if ((((*(uint *)((long)puVar8 + 4) & 0x3f) != 9) || (puVar8[1] == 0)) ||
         ((*(uint *)(puVar8[1] + 4) & 0x7bf) != 0x1a9)) break;
      if (bVar2) {
        *(int *)(this + 0x334) = *(int *)(this + 0x334) + 1;
        *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 1;
        uVar7 = Scope::HasSimpleParameters(*(Scope **)this);
        if ((uVar7 & 1) == 0) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar12 & 0xffffffff,
                     uVar12 >> 0x20,0xf3,"use strict");
          lVar11 = *(long *)(this + 0x158);
          if (*(char *)(lVar11 + 0x30) != '\0') {
            return;
          }
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          this[0x1a0] = (Parser)0x6d;
          this[0x1f0] = (Parser)0x6d;
          this[0x240] = (Parser)0x6d;
          return;
        }
      }
      else if (bVar3) {
        *(int *)(this + 0x310) = *(int *)(this + 0x310) + 1;
        this_00 = (DeclarationScope *)Scope::AsDeclarationScope();
        DeclarationScope::set_is_asm_module(this_00);
        *(uint *)(*(long *)(this + 0x138) + 8) = *(uint *)(*(long *)(this + 0x138) + 8) | 0x8000;
      }
      else {
        lVar10 = *(long *)this;
        uVar1 = *(ushort *)(lVar10 + 0x81);
        lVar11 = 0x20;
        if ((uVar1 & 1) != 0) {
          lVar11 = 0x24;
        }
        *(int *)(this + lVar11 + 0x310) = *(int *)(this + lVar11 + 0x310) + 1;
        *(ushort *)(lVar10 + 0x81) = *(ushort *)(lVar10 + 0x81) & 0xfffe | uVar1 & 1;
      }
      puVar9 = *(ulong **)(*(long *)(this + 0xf8) + 8);
    } while ((char)puVar9[7] == 'Z');
    lVar11 = *(long *)(this + 0xf8);
  }
  uVar5 = *(undefined8 *)(this + 0x300);
  *(undefined8 *)(this + 0x300) = 0;
  lVar11 = *(long *)(lVar11 + 8);
  while ((*(char *)(lVar11 + 0x38) != '\r' &&
         (puVar8 = (undefined8 *)
                   ParserBase<v8::internal::Parser>::ParseStatementListItem
                             ((ParserBase<v8::internal::Parser> *)this), puVar8 != (undefined8 *)0x0
         ))) {
    if ((*(uint *)((long)puVar8 + 4) & 0x3f) != 10) {
      pvVar6 = (vector<void*,std::__ndk1::allocator<void*>> *)*param_4;
      local_68 = puVar8;
      if (*(undefined8 **)(pvVar6 + 8) < *(undefined8 **)(pvVar6 + 0x10)) {
        **(undefined8 **)(pvVar6 + 8) = puVar8;
        *(long *)(pvVar6 + 8) = *(long *)(pvVar6 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  (pvVar6,&local_68);
      }
      param_4[2] = param_4[2] + 1;
    }
    lVar11 = *(long *)(*(long *)(this + 0xf8) + 8);
  }
  *(undefined8 *)(this + 0x300) = uVar5;
  return;
}

