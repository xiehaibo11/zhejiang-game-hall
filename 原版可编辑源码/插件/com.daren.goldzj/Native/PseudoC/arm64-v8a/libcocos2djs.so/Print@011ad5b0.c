
/* v8::internal::ProfileNode::Print(int) */

void __thiscall v8::internal::ProfileNode::Print(ProfileNode *this,int param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar9 = *(uint *)(this + 0x40);
  if (uVar9 == 0) {
    uVar9 = *(uint *)(*(long *)(this + 8) + 0x18);
  }
  uVar2 = *(uint *)(this + 0x10);
  uVar11 = *(undefined8 *)(*(long *)(this + 8) + 8);
  uVar3 = source_type(this);
  base::OS::Print("%5u %*s %s:%d %d %d #%d",(ulong)uVar2,(ulong)(uint)param_1,&DAT_0189703a,uVar11,
                  (ulong)uVar9,uVar3 & 0xffffffff,(ulong)*(uint *)(*(long *)(this + 8) + 0x20),
                  *(undefined4 *)(this + 0x68));
  pcVar5 = *(char **)(*(long *)(this + 8) + 0x10);
  if (*pcVar5 != '\0') {
    base::OS::Print(" %s:%d",pcVar5,(ulong)*(uint *)(*(long *)(this + 8) + 0x18));
  }
  base::OS::Print("\n");
  lVar6 = *(long *)(this + 0x98);
  if (*(long *)(this + 0xa0) != lVar6) {
    uVar3 = 0;
    do {
      puVar1 = (undefined8 *)(lVar6 + uVar3 * 0x20);
      plVar8 = puVar1 + 1;
      base::OS::Print("%*s;;; deopted at script_id: %d position: %zu with reason \'%s\'.\n",
                      (ulong)(param_1 + 10U),&DAT_0189703a,(ulong)*(uint *)*plVar8,
                      *(undefined8 *)((uint *)*plVar8 + 2),*puVar1);
      lVar6 = *plVar8;
      if (1 < (ulong)(puVar1[2] - lVar6 >> 4)) {
        lVar12 = 0;
        uVar7 = 1;
        do {
          base::OS::Print("%*s;;;     Inline point: script_id %d position: %zu.\n",
                          (ulong)(param_1 + 10U),&DAT_0189703a,
                          (ulong)*(uint *)(lVar6 + lVar12 + 0x10),
                          *(undefined8 *)(lVar6 + lVar12 + 0x18));
          lVar6 = *plVar8;
          uVar7 = uVar7 + 1;
          lVar12 = lVar12 + 0x10;
        } while (uVar7 < (ulong)(puVar1[2] - lVar6 >> 4));
      }
      lVar6 = *(long *)(this + 0x98);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0xa0) - lVar6 >> 5));
  }
  puVar10 = &DAT_0189703a;
  if (*(long *)(*(long *)(this + 8) + 0x38) != 0) {
    puVar10 = *(undefined1 **)(*(long *)(*(long *)(this + 8) + 0x38) + 8);
  }
  puVar4 = (undefined1 *)GetBailoutReason(0);
  if ((puVar10 != &DAT_0189703a) && (puVar10 != puVar4)) {
    base::OS::Print("%*s bailed out due to \'%s\'\n",(ulong)(param_1 + 10),&DAT_0189703a,puVar10);
  }
  plVar8 = *(long **)(this + 0x28);
  if (plVar8 != (long *)0x0) {
    do {
      Print((ProfileNode *)plVar8[4],param_1 + 2);
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}

