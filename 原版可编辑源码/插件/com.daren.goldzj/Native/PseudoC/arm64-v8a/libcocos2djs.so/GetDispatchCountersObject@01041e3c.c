
/* v8::internal::interpreter::Interpreter::GetDispatchCountersObject() */

Object * __thiscall
v8::internal::interpreter::Interpreter::GetDispatchCountersObject(Interpreter *this)

{
  char cVar1;
  undefined8 uVar2;
  Object *pOVar3;
  Object *pOVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  Isolate *this_00;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_78;
  size_t sStack_70;
  void *local_68;
  
  this_00 = *(Isolate **)(this + 8);
  uVar2 = v8::Isolate::GetCurrentContext(this_00);
  pOVar3 = (Object *)v8::Object::New(this_00);
  lVar13 = 0;
  uVar10 = 0;
  pvVar11 = (void *)((ulong)&local_78 | 1);
  do {
    pOVar4 = (Object *)v8::Object::New(this_00);
    uVar15 = 0;
    do {
      uVar14 = *(ulong *)(*(long *)(this + 0x1810) + lVar13 + uVar15 * 8);
      if (uVar14 != 0) {
        pcVar5 = (char *)Bytecodes::ToString(uVar15 & 0xffffffff);
        local_78 = 0;
        sStack_70 = 0;
        local_68 = (void *)0x0;
        sVar6 = strlen(pcVar5);
        if (0xffffffffffffffef < sVar6) goto LAB_010420cc;
        if (sVar6 < 0x17) {
          local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar6 << 1));
          pvVar9 = pvVar11;
          if (sVar6 != 0) goto LAB_01041f48;
        }
        else {
          uVar12 = sVar6 + 0x10 & 0xfffffffffffffff0;
          pvVar9 = operator_new(uVar12);
          local_78 = uVar12 | 1;
          sStack_70 = sVar6;
          local_68 = pvVar9;
LAB_01041f48:
          memcpy(pvVar9,pcVar5,sVar6);
        }
        *(undefined1 *)((long)pvVar9 + sVar6) = 0;
        pvVar9 = pvVar11;
        if ((local_78 & 1) != 0) {
          pvVar9 = local_68;
        }
        lVar7 = v8::String::NewFromUtf8(this_00,pvVar9,0,0xffffffff);
        if (lVar7 == 0) {
          v8::V8::ToLocalEmpty();
        }
        uVar8 = Number::New(this_00,(double)uVar14);
        cVar1 = v8::Object::DefineOwnProperty(pOVar4,uVar2,lVar7,uVar8,0);
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "counters_row ->DefineOwnProperty(context, to_name_object, counter_object) .IsJust()"
                  );
        }
        if ((local_78 & 1) != 0) {
          operator_delete(local_68);
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0xb7);
    pcVar5 = (char *)Bytecodes::ToString(uVar10 & 0xffffffff);
    local_78 = 0;
    sStack_70 = 0;
    local_68 = (void *)0x0;
    sVar6 = strlen(pcVar5);
    if (0xffffffffffffffef < sVar6) {
LAB_010420cc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sVar6 < 0x17) {
      local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar6 << 1));
      pvVar9 = pvVar11;
      if (sVar6 != 0) goto LAB_01042030;
    }
    else {
      uVar15 = sVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = operator_new(uVar15);
      local_78 = uVar15 | 1;
      sStack_70 = sVar6;
      local_68 = pvVar9;
LAB_01042030:
      memcpy(pvVar9,pcVar5,sVar6);
    }
    *(undefined1 *)((long)pvVar9 + sVar6) = 0;
    pvVar9 = pvVar11;
    if ((local_78 & 1) != 0) {
      pvVar9 = local_68;
    }
    lVar7 = v8::String::NewFromUtf8(this_00,pvVar9,0,0xffffffff);
    if (lVar7 == 0) {
      v8::V8::ToLocalEmpty();
    }
    cVar1 = v8::Object::DefineOwnProperty(pOVar3,uVar2,lVar7,pOVar4,0);
    if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "counters_map->DefineOwnProperty(context, from_name_object, counters_row) .IsJust()")
      ;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    uVar10 = uVar10 + 1;
    lVar13 = lVar13 + 0x5b8;
    if (uVar10 == 0xb7) {
      return pOVar3;
    }
  } while( true );
}

