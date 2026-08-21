
void DTLS_RECORD_LAYER_set_saved_w_epoch(long param_1,ushort param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0xd88);
  if (*(ushort *)(lVar1 + 2) - 1 == (uint)param_2) {
    *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_1 + 0xd78);
    lVar1 = *(long *)(param_1 + 0xd88);
    puVar2 = (undefined8 *)(lVar1 + 0x70);
  }
  else {
    if (*(ushort *)(lVar1 + 2) + 1 != (uint)param_2) goto LAB_00ac76a8;
    *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(param_1 + 0xd78);
    lVar1 = *(long *)(param_1 + 0xd88);
    puVar2 = (undefined8 *)(lVar1 + 0x78);
  }
  *(undefined8 *)(param_1 + 0xd78) = *puVar2;
LAB_00ac76a8:
                    /* try { // try from 00ac76a8 to 00bc76b7 has its CatchHandler @ 00ac7780 */
  *(ushort *)(lVar1 + 2) = param_2;
  return;
}

