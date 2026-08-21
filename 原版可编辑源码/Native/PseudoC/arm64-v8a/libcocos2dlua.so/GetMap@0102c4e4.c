
/* p2t::CDT::GetMap() */

void p2t::CDT::GetMap(void)

{
  undefined8 *in_x0;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *in_x8;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar1 = SweepContext::GetMap((SweepContext *)*in_x0);
  *in_x8 = in_x8;
  in_x8[1] = in_x8;
  in_x8[2] = 0;
  lVar4 = *(long *)(lVar1 + 8);
  if (lVar1 != lVar4) {
    lVar5 = 1;
    puVar6 = in_x8;
    do {
      puVar2 = operator_new(0x18);
      uVar3 = *(undefined8 *)(lVar4 + 0x10);
      *puVar2 = puVar6;
      puVar2[1] = in_x8;
      puVar2[2] = uVar3;
      puVar6[1] = puVar2;
      *in_x8 = puVar2;
      in_x8[2] = lVar5;
      lVar4 = *(long *)(lVar4 + 8);
      lVar5 = lVar5 + 1;
      puVar6 = puVar2;
    } while (lVar1 != lVar4);
  }
  return;
}

