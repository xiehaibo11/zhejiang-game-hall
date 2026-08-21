
/* v8::internal::Factory::NewTransitionArray(int, int) */

long * __thiscall v8::internal::Factory::NewTransitionArray(Factory *this,int param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  plVar1 = (long *)NewWeakFixedArrayWithMap<v8::internal::TransitionArray>
                             (this,0x19,(param_2 + param_1) * 2 + 2,1);
  if (*(char *)(*(long *)(this + 0x9078) + 0x5f) != '\0') {
    lVar5 = *(long *)(this + 0x9050);
    lVar4 = *plVar1;
    puVar6 = *(undefined8 **)(lVar5 + 0x880);
    lVar3 = puVar6[1];
    if (lVar3 == 0x40) {
      base::Mutex::Lock((Mutex *)(lVar5 + 0xb00));
      *puVar6 = *(undefined8 *)(lVar5 + 0xb28);
      *(undefined8 **)(lVar5 + 0xb28) = puVar6;
      base::Mutex::Unlock((Mutex *)(lVar5 + 0xb00));
      puVar2 = operator_new(0x210);
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[0x22] = 0;
      puVar2[0x21] = 0;
      puVar2[0x24] = 0;
      puVar2[0x23] = 0;
      puVar2[0x26] = 0;
      puVar2[0x25] = 0;
      puVar2[0x28] = 0;
      puVar2[0x27] = 0;
      puVar2[0x2a] = 0;
      puVar2[0x29] = 0;
      puVar2[0x2c] = 0;
      puVar2[0x2b] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x2d] = 0;
      puVar2[0x30] = 0;
      puVar2[0x2f] = 0;
      puVar2[0x32] = 0;
      puVar2[0x31] = 0;
      puVar2[0x34] = 0;
      puVar2[0x33] = 0;
      puVar2[0x36] = 0;
      puVar2[0x35] = 0;
      puVar2[0x38] = 0;
      puVar2[0x37] = 0;
      puVar2[0x3a] = 0;
      puVar2[0x39] = 0;
      puVar2[0x3c] = 0;
      puVar2[0x3b] = 0;
      puVar2[0x3e] = 0;
      puVar2[0x3d] = 0;
      puVar2[0x40] = 0;
      puVar2[0x3f] = 0;
      puVar2[0x41] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[0xc] = 0;
      puVar2[0xb] = 0;
      puVar2[0xe] = 0;
      puVar2[0xd] = 0;
      puVar2[0x10] = 0;
      puVar2[0xf] = 0;
      puVar2[0x12] = 0;
      puVar2[0x11] = 0;
      puVar2[0x14] = 0;
      puVar2[0x13] = 0;
      puVar2[0x16] = 0;
      puVar2[0x15] = 0;
      puVar2[0x18] = 0;
      puVar2[0x17] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1e] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x20] = 0;
      puVar2[0x1f] = 0;
      *(undefined8 **)(lVar5 + 0x880) = puVar2;
      puVar2[1] = 1;
    }
    else {
      puVar2 = puVar6 + lVar3;
      puVar6[1] = lVar3 + 1;
    }
    puVar2[2] = lVar4;
  }
  *(undefined4 *)(*plVar1 + 7) = 0;
  *(int *)(*plVar1 + 0xb) = param_1 << 1;
  return plVar1;
}

