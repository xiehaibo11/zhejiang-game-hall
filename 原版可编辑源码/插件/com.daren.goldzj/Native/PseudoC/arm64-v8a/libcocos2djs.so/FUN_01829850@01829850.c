
/* WARNING: Type propagation algorithm not settling */

void FUN_01829850(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x82) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7f);
  }
  else {
    operator_delete((void *)param_1[0x84]);
    bVar1 = *(byte *)(param_1 + 0x7f);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7c);
  }
  else {
    operator_delete((void *)param_1[0x81]);
    bVar1 = *(byte *)(param_1 + 0x7c);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x79);
  }
  else {
    operator_delete((void *)param_1[0x7e]);
    bVar1 = *(byte *)(param_1 + 0x79);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x76);
  }
  else {
    operator_delete((void *)param_1[0x7b]);
    bVar1 = *(byte *)(param_1 + 0x76);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x73);
  }
  else {
    operator_delete((void *)param_1[0x78]);
    bVar1 = *(byte *)(param_1 + 0x73);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[0x75]);
  }
  lVar2 = 0x240;
  do {
    if ((*(byte *)((long)param_1 + lVar2 + 0x140) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0x150));
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  else {
    operator_delete((void *)param_1[0x2a]);
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x22);
  }
  else {
    operator_delete((void *)param_1[0x27]);
    bVar1 = *(byte *)(param_1 + 0x22);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1f);
  }
  else {
    operator_delete((void *)param_1[0x24]);
    bVar1 = *(byte *)(param_1 + 0x1f);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  else {
    operator_delete((void *)param_1[0x21]);
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  else {
    operator_delete((void *)param_1[0x1e]);
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  else {
    operator_delete((void *)param_1[0x1b]);
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  else {
    operator_delete((void *)param_1[0x18]);
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  else {
    operator_delete((void *)param_1[0x15]);
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  else {
    operator_delete((void *)param_1[0x12]);
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    operator_delete((void *)param_1[0xf]);
    bVar1 = *(byte *)(param_1 + 10);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 7);
  }
  else {
    operator_delete((void *)param_1[0xc]);
    bVar1 = *(byte *)(param_1 + 7);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 4);
  }
  else {
    operator_delete((void *)param_1[9]);
    bVar1 = *(byte *)(param_1 + 4);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    operator_delete((void *)param_1[6]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  freelocale((__locale_t)*param_1);
  return;
}

