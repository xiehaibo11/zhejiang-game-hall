
/* v8::internal::InvalidatedSlotsFilter::IsValid(unsigned long) */

uint __thiscall
v8::internal::InvalidatedSlotsFilter::IsValid(InvalidatedSlotsFilter *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong local_28;
  
  puVar3 = *(uint **)(this + 0x18);
  if (puVar3 <= param_1) {
    if (param_1 < *(uint **)(this + 0x20)) {
      iVar1 = *(int *)(this + 0x28);
    }
    else {
      puVar5 = *(uint **)(this + 0x20);
      plVar7 = *(long **)this;
      do {
        while( true ) {
          puVar3 = puVar5;
          *(uint **)(this + 0x18) = puVar3;
          *(undefined4 *)(this + 0x28) = 0;
          if (plVar7 == *(long **)(this + 8)) break;
          puVar5 = (uint *)(plVar7[4] + -1);
          *(uint **)(this + 0x20) = puVar5;
          plVar4 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar4 = plVar7 + 2;
            plVar8 = (long *)*plVar4;
            if ((long *)*plVar8 != plVar7) {
              do {
                lVar6 = *plVar4;
                plVar4 = (long *)(lVar6 + 0x10);
                plVar8 = (long *)*plVar4;
              } while (*plVar8 != lVar6);
            }
          }
          else {
            do {
              plVar8 = plVar4;
              plVar4 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
          *(long **)this = plVar8;
          plVar7 = plVar8;
          if (param_1 < puVar5) goto LAB_00fec1d4;
        }
        puVar5 = *(uint **)(this + 0x10);
        *(uint **)(this + 0x20) = puVar5;
        plVar7 = *(long **)(this + 8);
      } while (puVar5 <= param_1);
LAB_00fec1d4:
      iVar1 = 0;
    }
    local_28 = (long)puVar3 + 1;
    if (iVar1 == 0) {
      iVar1 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_28,local_28 & 0xffffffff00000000 | (ulong)*puVar3);
      puVar3 = *(uint **)(this + 0x18);
      *(int *)(this + 0x28) = iVar1;
    }
    if ((int)param_1 - (int)puVar3 < iVar1) {
      uVar2 = HeapObject::IsValidSlot
                        ((HeapObject *)&local_28,
                         local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1));
      goto LAB_00fec290;
    }
    lVar6 = *(long *)this;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x20);
    if (lVar6 == *(long *)(this + 8)) {
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
    }
    else {
      *(long *)(this + 0x20) = *(long *)(lVar6 + 0x20) + -1;
      plVar7 = *(long **)(lVar6 + 8);
      if (*(long **)(lVar6 + 8) == (long *)0x0) {
        while( true ) {
          plVar4 = *(long **)(lVar6 + 0x10);
          if (*plVar4 == lVar6) break;
          lVar6 = *(long *)(lVar6 + 0x10);
        }
      }
      else {
        do {
          plVar4 = plVar7;
          plVar7 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      *(long **)this = plVar4;
    }
  }
  uVar2 = 1;
LAB_00fec290:
  return uVar2 & 1;
}

