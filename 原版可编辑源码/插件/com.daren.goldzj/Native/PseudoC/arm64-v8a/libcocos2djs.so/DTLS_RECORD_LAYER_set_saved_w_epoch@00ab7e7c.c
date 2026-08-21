
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab7e74 with catch @ 00ab7eb4
                        */
    if (*(ushort *)(lVar1 + 2) + 1 != (uint)param_2) goto LAB_00ab7ed4;
    *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(param_1 + 0xd78);
    lVar1 = *(long *)(param_1 + 0xd88);
    puVar2 = (undefined8 *)(lVar1 + 0x78);
  }
  *(undefined8 *)(param_1 + 0xd78) = *puVar2;
LAB_00ab7ed4:
  *(ushort *)(lVar1 + 2) = param_2;
  return;
}

