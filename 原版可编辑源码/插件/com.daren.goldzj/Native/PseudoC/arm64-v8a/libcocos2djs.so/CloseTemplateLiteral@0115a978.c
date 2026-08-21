
/* v8::internal::Parser::CloseTemplateLiteral(v8::internal::Parser::TemplateLiteral**, int,
   v8::internal::Expression*) */

undefined4 * __thiscall
v8::internal::Parser::CloseTemplateLiteral
          (Parser *this,TemplateLiteral **param_1,int param_2,Expression *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  vector<void*,std::__ndk1::allocator<void*>> *pvVar3;
  void *__dest;
  undefined4 *puVar4;
  int iVar5;
  Zone *pZVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *__src;
  long lVar9;
  size_t __n;
  TemplateLiteral *pTVar10;
  vector<void*,std::__ndk1::allocator<void*>> *local_80;
  ulong uStack_78;
  ulong local_70;
  undefined4 *local_68;
  
  pTVar10 = *param_1;
  uVar2 = *(undefined4 *)(pTVar10 + 0x30);
  if (param_3 == (Expression *)0x0) {
    if (*(int *)(pTVar10 + 0xc) == 1) {
      pZVar6 = *(Zone **)(this + 0x68);
      puVar4 = *(undefined4 **)(pZVar6 + 0x10);
      uVar8 = **(undefined8 **)pTVar10;
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar4) < 0x10) {
        puVar4 = (undefined4 *)Zone::NewExpand(pZVar6,0x10);
      }
      else {
        *(undefined4 **)(pZVar6 + 0x10) = puVar4 + 4;
      }
      *(undefined8 *)(puVar4 + 2) = uVar8;
      *puVar4 = uVar2;
      puVar4[1] = 0x1a9;
    }
    else {
      pZVar6 = *(Zone **)(this + 0x68);
      puVar4 = *(undefined4 **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar4) < 0x18) {
        puVar4 = (undefined4 *)Zone::NewExpand(pZVar6,0x18);
      }
      else {
        *(undefined4 **)(pZVar6 + 0x10) = puVar4 + 6;
      }
      *puVar4 = uVar2;
      puVar4[1] = 0x31;
      *(TemplateLiteral **)(puVar4 + 2) = pTVar10;
      *(TemplateLiteral **)(puVar4 + 4) = pTVar10 + 0x20;
    }
  }
  else {
    pZVar6 = *(Zone **)(this + 0x68);
    local_68 = *(undefined4 **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)local_68) < 0x18) {
      local_68 = (undefined4 *)Zone::NewExpand(pZVar6,0x18);
    }
    else {
      *(undefined4 **)(pZVar6 + 0x10) = local_68 + 6;
    }
    *(TemplateLiteral **)(local_68 + 2) = pTVar10;
    *(TemplateLiteral **)(local_68 + 4) = pTVar10 + 0x10;
    *local_68 = uVar2;
    local_68[1] = 0x27;
    puVar1 = *(undefined8 **)(this + 0xd0);
    local_80 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
    uStack_78 = (long)puVar1 - *(long *)(this + 200) >> 3;
    local_70 = uStack_78;
    if (puVar1 < *(undefined8 **)(this + 0xd8)) {
      *puVar1 = local_68;
      *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                (local_80,&local_68);
    }
    pvVar3 = local_80;
    local_70 = local_70 + 1;
    __src = *(void **)local_80;
    __n = *(long *)(local_80 + 8) - (long)__src;
    uVar7 = ((long)__n >> 3) + (long)*(int *)(pTVar10 + 0x2c);
    if ((ulong)(*(long *)(local_80 + 0x10) - (long)__src >> 3) < uVar7) {
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar7 * 8);
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
        __src = *(void **)pvVar3;
      }
      *(void **)pvVar3 = __dest;
      *(void **)(pvVar3 + 8) = (void *)((long)__dest + ((long)__n >> 3) * 8);
      *(void **)(pvVar3 + 0x10) = (void *)((long)__dest + uVar7 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    iVar5 = *(int *)(pTVar10 + 0x2c);
    if (0 < iVar5) {
      lVar9 = 0;
      do {
        local_68 = *(undefined4 **)(*(long *)(pTVar10 + 0x20) + lVar9 * 8);
        if (*(undefined8 **)(local_80 + 8) < *(undefined8 **)(local_80 + 0x10)) {
          **(undefined8 **)(local_80 + 8) = local_68;
          *(long *)(local_80 + 8) = *(long *)(local_80 + 8) + 8;
        }
        else {
          std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                    (local_80,&local_68);
        }
        iVar5 = *(int *)(pTVar10 + 0x2c);
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar5);
    }
    local_70 = local_70 + (long)iVar5;
    pZVar6 = *(Zone **)(this + 0x68);
    puVar4 = *(undefined4 **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar4) < 0x20) {
      puVar4 = (undefined4 *)Zone::NewExpand(pZVar6,0x20);
    }
    else {
      *(undefined4 **)(pZVar6 + 0x10) = puVar4 + 8;
    }
    pZVar6 = *(Zone **)(this + 0x68);
    *(Expression **)(puVar4 + 2) = param_3;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *puVar4 = uVar2;
    puVar4[1] = 0x11c;
    ScopedList<v8::internal::Expression*,void*>::CopyTo
              ((ScopedList<v8::internal::Expression*,void*> *)&local_80,(ZoneList *)(puVar4 + 4),
               pZVar6);
    uVar7 = *(long *)(local_80 + 8) - *(long *)local_80 >> 3;
    if (uStack_78 < uVar7 || uStack_78 - uVar7 == 0) {
      if (uStack_78 < uVar7) {
        *(ulong *)(local_80 + 8) = *(long *)local_80 + uStack_78 * 8;
      }
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append(local_80,uStack_78 - uVar7)
      ;
    }
  }
  return puVar4;
}

