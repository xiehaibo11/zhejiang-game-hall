
void _spEventQueue_drain(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((int)param_1[3] == 0) {
    *(undefined4 *)(param_1 + 3) = 1;
    if (0 < (int)param_1[2]) {
      uVar6 = 0;
      do {
        lVar3 = param_1[1];
        uVar2 = *(uint *)(lVar3 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3));
        if (uVar2 < 6) {
          uVar1 = (long)(int)uVar6 + 1;
          __ptr = *(void **)(lVar3 + uVar1 * 8);
          switch(uVar2) {
          default:
            if (*(code **)((long)__ptr + 0x18) != (code *)0x0) {
              (**(code **)((long)__ptr + 0x18))(*param_1,uVar2,__ptr,0);
            }
            pcVar4 = *(code **)(*param_1 + 0x18);
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(*param_1,uVar2,__ptr,0);
            }
            break;
          case 2:
            if (*(code **)((long)__ptr + 0x18) != (code *)0x0) {
              (**(code **)((long)__ptr + 0x18))(*param_1,2,__ptr,0);
            }
            pcVar4 = *(code **)(*param_1 + 0x18);
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(*param_1,2,__ptr,0);
            }
          case 4:
            if (*(code **)((long)__ptr + 0x18) != (code *)0x0) {
              (**(code **)((long)__ptr + 0x18))(*param_1,4,__ptr,0);
            }
            pcVar4 = *(code **)(*param_1 + 0x18);
            if (pcVar4 != (code *)0x0) {
                    /* catch() { ... } // from try @ 00d5ab8c with catch @ 00d5ab60 */
              (*pcVar4)(*param_1,4,__ptr,0);
            }
            spIntArray_dispose(*(undefined8 *)((long)__ptr + 0x70));
            __ptr_00 = *(void **)((long)__ptr + 0x78);
            _spFree(*(void **)((long)__ptr_00 + 8));
            _spFree(__ptr_00);
            _spFree(*(void **)((long)__ptr + 0x80));
            _spFree(__ptr);
            break;
          case 5:
            uVar5 = *(undefined8 *)(lVar3 + (long)(int)uVar6 * 8 + 0x10);
            if (*(code **)((long)__ptr + 0x18) != (code *)0x0) {
                    /* try { // try from 00d5ab84 to 00e5ab8b has its CatchHandler @ 00d5abd0 */
                    /* try { // try from 00d5ab8c to 00e5abeb has its CatchHandler @ 00d5ab60 */
              (**(code **)((long)__ptr + 0x18))(*param_1,5,__ptr,uVar5);
            }
            pcVar4 = *(code **)(*param_1 + 0x18);
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(*param_1,5,__ptr,uVar5);
            }
            uVar6 = uVar1 & 0xffffffff;
          }
        }
        uVar2 = (int)uVar6 + 2;
        uVar6 = (ulong)uVar2;
      } while ((int)uVar2 < (int)param_1[2]);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}

