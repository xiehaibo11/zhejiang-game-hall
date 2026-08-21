
/* v8::internal::compiler::EffectGraphReducer::~EffectGraphReducer() */

void __thiscall
v8::internal::compiler::EffectGraphReducer::~EffectGraphReducer(EffectGraphReducer *this)

{
  undefined8 *puVar1;
  long lVar2;
  EffectGraphReducer *pEVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  pEVar3 = *(EffectGraphReducer **)(this + 0xe0);
  if (this + 0xc0 == pEVar3) {
    pcVar4 = *(code **)(*(long *)pEVar3 + 0x20);
  }
  else {
    if (pEVar3 == (EffectGraphReducer *)0x0) goto LAB_012adba8;
    pcVar4 = *(code **)(*(long *)pEVar3 + 0x28);
  }
  (*pcVar4)();
LAB_012adba8:
  std::__ndk1::
  __deque_base<v8::internal::compiler::EffectGraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState>>
  ::clear((__deque_base<v8::internal::compiler::EffectGraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState>>
           *)(this + 0x68));
  puVar5 = *(undefined8 **)(this + 0x70);
  puVar1 = *(undefined8 **)(this + 0x78);
  if (puVar5 != puVar1) {
    puVar7 = *(undefined8 **)(this + 0xb0);
    puVar8 = (undefined8 *)*puVar5;
    if (puVar7 != (undefined8 *)0x0) goto LAB_012adbf8;
    do {
      puVar7 = puVar8;
      puVar7[1] = 0x100;
      *puVar7 = *(undefined8 *)(this + 0xb0);
      *(undefined8 **)(this + 0xb0) = puVar7;
      do {
        puVar5 = puVar5 + 1;
        if (puVar1 == puVar5) {
          lVar2 = *(long *)(this + 0x78) - *(long *)(this + 0x70);
          if (lVar2 != 0) {
            *(ulong *)(this + 0x78) =
                 *(long *)(this + 0x78) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
          }
          goto LAB_012adc28;
        }
        puVar8 = (undefined8 *)*puVar5;
        if (puVar7 == (undefined8 *)0x0) break;
LAB_012adbf8:
      } while (0x100 < (ulong)puVar7[1]);
    } while( true );
  }
LAB_012adc28:
  puVar5 = *(undefined8 **)(this + 0x68);
  if ((puVar5 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0x80) - (long)puVar5))) {
    uVar6 = *(long *)(this + 0x80) - (long)puVar5 >> 3;
    if ((*(long *)(this + 0x90) == 0) || (*(ulong *)(*(long *)(this + 0x90) + 8) <= uVar6)) {
      puVar5[1] = uVar6;
      *puVar5 = *(undefined8 *)(this + 0x90);
      *(undefined8 **)(this + 0x90) = puVar5;
    }
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)(this + 0x18));
  puVar5 = *(undefined8 **)(this + 0x20);
  puVar1 = *(undefined8 **)(this + 0x28);
  if (puVar5 == puVar1) {
LAB_012adce8:
    puVar5 = *(undefined8 **)(this + 0x18);
    if ((puVar5 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0x30) - (long)puVar5))) {
      uVar6 = *(long *)(this + 0x30) - (long)puVar5 >> 3;
      if ((*(long *)(this + 0x40) == 0) || (*(ulong *)(*(long *)(this + 0x40) + 8) <= uVar6)) {
        puVar5[1] = uVar6;
        *puVar5 = *(undefined8 *)(this + 0x40);
        *(undefined8 **)(this + 0x40) = puVar5;
      }
    }
    return;
  }
  puVar7 = *(undefined8 **)(this + 0x60);
  puVar8 = (undefined8 *)*puVar5;
  if (puVar7 != (undefined8 *)0x0) goto LAB_012adcb8;
  do {
    puVar7 = puVar8;
    puVar7[1] = 0x200;
    *puVar7 = *(undefined8 *)(this + 0x60);
    *(undefined8 **)(this + 0x60) = puVar7;
    do {
      puVar5 = puVar5 + 1;
      if (puVar1 == puVar5) {
        lVar2 = *(long *)(this + 0x28) - *(long *)(this + 0x20);
        if (lVar2 != 0) {
          *(ulong *)(this + 0x28) =
               *(long *)(this + 0x28) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
        }
        goto LAB_012adce8;
      }
      puVar8 = (undefined8 *)*puVar5;
      if (puVar7 == (undefined8 *)0x0) break;
LAB_012adcb8:
    } while (0x200 < (ulong)puVar7[1]);
  } while( true );
}

