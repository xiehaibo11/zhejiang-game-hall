
void ssl_set_default_md(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
                    /* try { // try from 00aedb84 to 00bedb9f has its CatchHandler @ 00aedc5c */
  lVar2 = *(long *)(param_1 + 0x90);
  uVar1 = ssl_md(1);
                    /* try { // try from 00aedba0 to 00bedbcb has its CatchHandler @ 00aeda88 */
  *(undefined8 *)(lVar2 + 0x2e8) = uVar1;
  uVar1 = ssl_md((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) & 2) << 2 ^ 9);
  *(undefined8 *)(lVar2 + 0x2e0) = uVar1;
  *(undefined8 *)(lVar2 + 0x2d8) = uVar1;
                    /* try { // try from 00aedbcc to 00bedbdb has its CatchHandler @ 00aedc64 */
  uVar1 = ssl_md(1);
  *(undefined8 *)(lVar2 + 0x2f0) = uVar1;
                    /* try { // try from 00aedbdc to 00bedc7f has its CatchHandler @ 00aeda88 */
  uVar1 = ssl_md(2);
  *(undefined8 *)(lVar2 + 0x2f8) = uVar1;
  uVar1 = ssl_md(6);
  *(undefined8 *)(lVar2 + 0x300) = uVar1;
  uVar1 = ssl_md(8);
  *(undefined8 *)(lVar2 + 0x308) = uVar1;
  return;
}

