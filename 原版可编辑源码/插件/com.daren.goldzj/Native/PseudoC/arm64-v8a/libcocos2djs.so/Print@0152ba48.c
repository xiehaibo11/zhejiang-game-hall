
/* v8::internal::AllocationTraceNode::Print(int, v8::internal::AllocationTracker*) */

void __thiscall
v8::internal::AllocationTraceNode::Print
          (AllocationTraceNode *this,int param_1,AllocationTracker *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  base::OS::Print("%10u %10u %*c",(ulong)*(uint *)(this + 0xc),(ulong)*(uint *)(this + 0x10),
                  (ulong)(uint)param_1,0x20);
  if (param_2 == (AllocationTracker *)0x0) {
    base::OS::Print("%u #%u",(ulong)*(uint *)(this + 8),(ulong)*(uint *)(this + 0x14));
  }
  else {
    base::OS::Print("%s #%u",**(undefined8 **)
                               (*(long *)(param_2 + 0x148) + (ulong)*(uint *)(this + 8) * 8),
                    (ulong)*(uint *)(this + 0x14));
  }
  base::OS::Print("\n");
  puVar1 = *(undefined8 **)(this + 0x20);
  if (*(undefined8 **)(this + 0x18) != puVar1) {
    puVar2 = *(undefined8 **)(this + 0x18);
    do {
      puVar3 = puVar2 + 1;
      Print((AllocationTraceNode *)*puVar2,param_1 + 2,param_2);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
  }
  return;
}

