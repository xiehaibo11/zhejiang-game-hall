
/* v8::internal::CodeEntry::print() const */

void __thiscall v8::internal::CodeEntry::print(CodeEntry *this)

{
  uint *puVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  base::OS::Print("CodeEntry: at %p\n",this);
  base::OS::Print(" - name: %s\n",*(undefined8 *)(this + 8));
  base::OS::Print(" - resource_name: %s\n",*(undefined8 *)(this + 0x10));
  base::OS::Print(" - line_number: %d\n",(ulong)*(uint *)(this + 0x18));
  base::OS::Print(" - column_number: %d\n",(ulong)*(uint *)(this + 0x1c));
  base::OS::Print(" - script_id: %d\n",(ulong)*(uint *)(this + 0x20));
  base::OS::Print(" - position: %d\n",(ulong)*(uint *)(this + 0x24));
  base::OS::Print(" - instruction_start: %p\n",*(undefined8 *)(this + 0x30));
  puVar5 = *(undefined8 **)(this + 0x28);
  if (puVar5 != (undefined8 *)0x0) {
    base::OS::Print(" - source position table at %p\n",puVar5);
    puVar3 = (uint *)puVar5[1];
    for (puVar1 = (uint *)*puVar5; puVar1 != puVar3; puVar1 = puVar1 + 3) {
      base::OS::Print("    %d --> line_number: %d inlining_id: %d\n",(ulong)*puVar1,(ulong)puVar1[1]
                      ,(ulong)puVar1[2]);
    }
  }
  if (*(undefined8 **)(this + 0x38) != (undefined8 *)0x0) {
    base::OS::Print(" - deopt_reason: %s\n",**(undefined8 **)(this + 0x38));
    base::OS::Print(" - bailout_reason: %s\n",*(undefined8 *)(*(long *)(this + 0x38) + 8));
    base::OS::Print(" - deopt_id: %d\n",(ulong)*(uint *)(*(long *)(this + 0x38) + 0x10));
    if (*(long *)(*(long *)(this + 0x38) + 0x30) == 0) {
      base::OS::Print(" - inline stacks: (empty)\n");
    }
    else {
      base::OS::Print(" - inline stacks:\n");
      for (plVar6 = *(long **)(*(long *)(this + 0x38) + 0x28); plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        base::OS::Print("    inlining_id: [%d]\n",(ulong)*(uint *)(plVar6 + 2));
        plVar4 = (long *)plVar6[4];
        for (plVar2 = (long *)plVar6[3]; plVar2 != plVar4; plVar2 = plVar2 + 2) {
          base::OS::Print("     %s --> %d\n",*(undefined8 *)(*plVar2 + 8),
                          (ulong)*(uint *)(plVar2 + 1));
        }
      }
    }
    if (*(long *)(*(long *)(this + 0x38) + 0x68) == *(long *)(*(long *)(this + 0x38) + 0x70)) {
      base::OS::Print(" - deopt inlined frames: (empty)\n");
    }
    else {
      base::OS::Print(" - deopt inlined frames:\n");
      puVar3 = *(uint **)(*(long *)(this + 0x38) + 0x70);
      for (puVar1 = *(uint **)(*(long *)(this + 0x38) + 0x68); puVar1 != puVar3; puVar1 = puVar1 + 4
          ) {
        base::OS::Print("script_id: %d position: %zu\n",(ulong)*puVar1,*(undefined8 *)(puVar1 + 2));
      }
    }
  }
  base::OS::Print("\n");
  return;
}

