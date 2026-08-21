
/* v8::internal::compiler::JSHeapBroker::InitializeRefsMap() */

void __thiscall v8::internal::compiler::JSHeapBroker::InitializeRefsMap(JSHeapBroker *this)

{
  char *pcVar1;
  Builtins *this_00;
  Zone *pZVar2;
  basic_ostream *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  RefsMap *pRVar6;
  RefsMap *this_01;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  int iVar11;
  undefined8 *puVar12;
  int local_d0 [32];
  long local_38;
  
  TraceScope::TraceScope((TraceScope *)&local_38,this,this,"JSHeapBroker::InitializeRefsMap");
  lVar9 = *(long *)this;
  lVar7 = *(long *)(lVar9 + 0xb6f0);
  if (lVar7 == 0) {
    pZVar2 = operator_new(0x40);
    Zone::Zone(pZVar2,*(AccountingAllocator **)(lVar9 + 0x95d0),"Compiler zone");
    puVar12 = *(undefined8 **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar12) < 0x10) {
      puVar12 = (undefined8 *)Zone::NewExpand(pZVar2,0x10);
    }
    else {
      *(undefined8 **)(pZVar2 + 0x10) = puVar12 + 2;
    }
    *puVar12 = pZVar2;
    puVar12[1] = 0;
    *(undefined8 **)(lVar9 + 0xb6f0) = puVar12;
    *(Zone **)(lVar9 + 0xb6f8) = pZVar2;
    lVar7 = *(long *)(*(long *)this + 0xb6f0);
  }
  *(long *)(this + 0x178) = lVar7;
  if (*(long *)(lVar7 + 8) == 0) {
    if (this[0x74] != (JSHeapBroker)0x0 && FLAG_trace_heap_broker_verbose != '\0') {
      pbVar3 = (basic_ostream *)Trace(this);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,"Building RefsMap snapshot",0x19);
      local_d0[0]._0_1_ = 10;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar3,(char *)local_d0,1);
    }
    pZVar2 = *(Zone **)(this + 0x10);
    pRVar6 = *(RefsMap **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pRVar6) < 0x18) {
      pRVar6 = (RefsMap *)Zone::NewExpand(pZVar2,0x18);
    }
    else {
      *(RefsMap **)(pZVar2 + 0x10) = pRVar6 + 0x18;
    }
    RefsMap::RefsMap(pRVar6,0x400);
    *(RefsMap **)(this + 0x30) = pRVar6;
    *(undefined8 *)(this + 0x10) = **(undefined8 **)(this + 0x178);
    local_d0[0x16] = 0x1e;
    local_d0[0x17] = 0x1d;
    local_d0[0x14] = 0x284;
    local_d0[0x15] = 0x300;
    local_d0[0x1a] = 0x2e6;
    local_d0[0x1b] = 0x65;
    local_d0[0x18] = 0x280;
    local_d0[0x19] = 0x2e5;
    this_00 = (Builtins *)(*(long *)this + 0x9e00);
    local_d0[2] = 0x51;
    local_d0[3] = 0x52;
    local_d0[0] = 0x4f;
    local_d0[1] = 0x50;
    local_d0[6] = 0xb3;
    local_d0[7] = 0xb2;
    local_d0[4] = 3;
    local_d0[5] = 0x9c;
    local_d0[10] = 0xb6;
    local_d0[0xb] = 0xb5;
    local_d0[8] = 0xb1;
    local_d0[9] = 0xb7;
    local_d0[0x1c] = 0x5a;
    local_d0[0xe] = 6;
    local_d0[0xf] = 5;
    local_d0[0xc] = 0x4a;
    local_d0[0xd] = 0x10;
    local_d0[0x12] = 0x1c;
    local_d0[0x13] = 0x1cb;
    local_d0[0x10] = 4;
    local_d0[0x11] = 0xbf;
    uVar4 = Builtins::builtin_handle(this_00,0x4f);
    GetOrCreateData(this,uVar4);
    lVar7 = 4;
    do {
      uVar4 = Builtins::builtin_handle(this_00,*(int *)((long)local_d0 + lVar7));
      GetOrCreateData(this,uVar4);
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x74);
    iVar11 = 0;
    do {
      uVar5 = Builtins::HasJSLinkage(iVar11);
      if ((uVar5 & 1) != 0) {
        uVar4 = Builtins::builtin_handle(this_00,iVar11);
        GetOrCreateData(this,uVar4);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x3d9);
    pRVar6 = *(RefsMap **)(this + 0x30);
    uVar5 = *(ulong *)pRVar6;
    while (uVar8 = uVar5, uVar8 < *(ulong *)pRVar6 + (ulong)*(uint *)(pRVar6 + 8) * 0x18) {
      uVar5 = uVar8 + 0x18;
      if (*(char *)(uVar8 + 0x14) != '\0') {
        do {
          lVar7 = *(long *)this;
          pbVar10 = (byte *)**(undefined8 **)(uVar8 + 8);
          if ((((*pbVar10 & 1) == 0) ||
              (uVar5 = Builtins::IsBuiltinHandle((Builtins *)(lVar7 + 0x9e00),pbVar10,local_d0),
              (uVar5 & 1) == 0)) &&
             ((pbVar10 < (byte *)(lVar7 + 0x80U) || ((byte *)(lVar7 + 0x1010U) <= pbVar10)))) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsShareable(p->value->object(), isolate())");
          }
          pRVar6 = *(RefsMap **)(this + 0x30);
          uVar5 = uVar8;
          do {
            uVar8 = uVar5 + 0x18;
            if (*(long *)pRVar6 + (ulong)*(uint *)(pRVar6 + 8) * 0x18 <= uVar8) goto LAB_0171655c;
            pcVar1 = (char *)(uVar5 + 0x2c);
            uVar5 = uVar8;
          } while (*pcVar1 == '\0');
        } while( true );
      }
    }
LAB_0171655c:
    puVar12 = *(undefined8 **)(this + 0x178);
    pZVar2 = (Zone *)*puVar12;
    this_01 = *(RefsMap **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)this_01) < 0x18) {
      this_01 = (RefsMap *)Zone::NewExpand(pZVar2,0x18);
    }
    else {
      *(RefsMap **)(pZVar2 + 0x10) = this_01 + 0x18;
    }
    RefsMap::RefsMap(this_01,pRVar6,(Zone *)*puVar12);
    puVar12[1] = this_01;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  }
  else {
    if (this[0x74] != (JSHeapBroker)0x0 && FLAG_trace_heap_broker_verbose != '\0') {
      pbVar3 = (basic_ostream *)Trace(this);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,"Importing existing RefsMap snapshot",0x23);
      local_d0[0]._0_1_ = 10;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar3,(char *)local_d0,1);
    }
    pZVar2 = *(Zone **)(this + 0x10);
    pRVar6 = *(RefsMap **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pRVar6) < 0x18) {
      pRVar6 = (RefsMap *)Zone::NewExpand(pZVar2,0x18);
    }
    else {
      *(RefsMap **)(pZVar2 + 0x10) = pRVar6 + 0x18;
    }
    RefsMap::RefsMap(pRVar6,*(RefsMap **)(*(long *)(this + 0x178) + 8),*(Zone **)(this + 0x10));
    *(RefsMap **)(this + 0x30) = pRVar6;
  }
  *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
  return;
}

