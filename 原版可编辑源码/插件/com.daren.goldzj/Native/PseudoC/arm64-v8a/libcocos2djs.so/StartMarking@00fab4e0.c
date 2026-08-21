
/* v8::internal::MarkCompactCollector::StartMarking() */

void __thiscall v8::internal::MarkCompactCollector::StartMarking(MarkCompactCollector *this)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(undefined4 *)(this + 0x2704);
  lVar7 = *(long *)(this + 8);
  uVar2 = *(undefined1 *)(lVar7 + 0xadc);
  lVar6 = *(long *)(*(long *)(lVar7 + 0x870) + 8);
  uVar5 = (uint)(FLAG_flush_bytecode != '\0');
  if (FLAG_stress_flush_bytecode != '\0') {
    uVar5 = 2;
  }
  puVar3 = operator_new(0x48);
  puVar3[2] = this + 0x5c8;
  puVar3[3] = this + 0x880;
  puVar3[4] = lVar7;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((long)puVar3 + 0x2c) = uVar1;
  *(uint *)(puVar3 + 6) = uVar5;
  *(bool *)((long)puVar3 + 0x34) = lVar6 != 0;
  *(undefined1 *)((long)puVar3 + 0x35) = uVar2;
  puVar3[7] = this + 0x2700;
  *(undefined1 *)(puVar3 + 8) = 0;
  *puVar3 = &PTR__ObjectVisitor_01ca8c68;
  puVar3[1] = this + 0x58;
  pvVar4 = *(void **)(this + 0x2690);
  *(undefined8 **)(this + 0x2690) = puVar3;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  if (FLAG_verify_heap != '\0') {
    VerifyMarkbitsAreClean(this);
    return;
  }
  return;
}

