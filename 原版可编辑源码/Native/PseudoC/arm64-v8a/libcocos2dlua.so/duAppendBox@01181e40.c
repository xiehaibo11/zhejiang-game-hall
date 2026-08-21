
/* duAppendBox(duDebugDraw*, float, float, float, float, float, float, unsigned int const*) */

void duAppendBox(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
                float param_6,float param_7,uint *param_8)

{
  long lVar1;
  long lVar2;
  float local_b8 [4];
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 != (duDebugDraw *)0x0) {
    lVar2 = 0;
    local_b8[0] = param_2;
    local_b8[1] = param_3;
    local_b8[2] = param_4;
    local_b8[3] = param_5;
    local_a8 = param_3;
    fStack_a4 = param_4;
    local_a0 = param_5;
    fStack_9c = param_3;
    local_98 = param_7;
    fStack_94 = param_2;
    local_90 = param_3;
    fStack_8c = param_7;
    local_88 = param_2;
    fStack_84 = param_6;
    local_80 = param_4;
    fStack_7c = param_5;
    local_78 = param_6;
    fStack_74 = param_4;
    local_70 = param_5;
    fStack_6c = param_6;
    local_68 = param_7;
    fStack_64 = param_2;
    local_60 = param_6;
    fStack_5c = param_7;
    do {
      (**(code **)(*(long *)param_1 + 0x28))
                (param_1,local_b8 + (ulong)(byte)(&DAT_0149fcf0)[lVar2] * 3,
                 *(undefined4 *)((long)param_8 + lVar2));
      (**(code **)(*(long *)param_1 + 0x28))
                (param_1,local_b8 + (ulong)(byte)(&DAT_0149fcf1)[lVar2] * 3,
                 *(undefined4 *)((long)param_8 + lVar2));
      (**(code **)(*(long *)param_1 + 0x28))
                (param_1,local_b8 + (ulong)(byte)(&DAT_0149fcf2)[lVar2] * 3,
                 *(undefined4 *)((long)param_8 + lVar2));
      (**(code **)(*(long *)param_1 + 0x28))
                (param_1,local_b8 + (ulong)(byte)(&DAT_0149fcf3)[lVar2] * 3,
                 *(undefined4 *)((long)param_8 + lVar2));
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x18);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

