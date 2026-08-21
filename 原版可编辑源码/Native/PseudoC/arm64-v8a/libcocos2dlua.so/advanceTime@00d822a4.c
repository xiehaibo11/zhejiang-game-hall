
/* dragonBones::DragonBones::advanceTime(float) */

void __thiscall dragonBones::DragonBones::advanceTime(DragonBones *this,float param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  BaseObject BVar3;
  undefined *__s2;
  int iVar4;
  long *plVar5;
  size_t __n;
  long lVar6;
  BaseObject *__s1;
  undefined8 *puVar7;
  BaseObject *pBVar9;
  ulong uVar10;
  undefined4 in_register_00005004;
  undefined8 *puVar8;
  
                    /* try { // try from 00d822bc to 00e822df has its CatchHandler @ 00d81a64 */
  puVar2 = *(undefined8 **)(this + 0x10);
  puVar7 = *(undefined8 **)(this + 8);
  if (*(undefined8 **)(this + 8) != puVar2) {
    do {
      puVar8 = puVar7 + 1;
      BaseObject::returnToPool((BaseObject *)*puVar7);
      puVar7 = puVar8;
    } while (puVar2 != puVar8);
                    /* try { // try from 00d822e0 to 00e822e7 has its CatchHandler @ 00d8289c */
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  }
  lVar6 = *(long *)(this + 0x20);
  if (lVar6 != *(long *)(this + 0x28)) {
    uVar10 = 0;
    do {
      pBVar9 = *(BaseObject **)(lVar6 + uVar10 * 8);
      if (*(long *)(*(long *)(pBVar9 + 0x48) + 0x20) != 0) {
        plVar5 = *(long **)(*(long *)(pBVar9 + 0x48) + 0xb0);
                    /* try { // try from 00d82364 to 00e8237f has its CatchHandler @ 00d82938 */
        (**(code **)(*plVar5 + 0x18))(plVar5,pBVar9 + 0x18,pBVar9);
        __s2 = EventObject::SOUND_EVENT;
        __n = strlen(EventObject::SOUND_EVENT);
        BVar3 = pBVar9[0x18];
        sVar1 = (ulong)((byte)BVar3 >> 1);
                    /* try { // try from 00d82384 to 00e82393 has its CatchHandler @ 00d82934 */
        if (((byte)BVar3 & 1) != 0) {
          sVar1 = *(size_t *)(pBVar9 + 0x20);
        }
        if (__n == sVar1) {
          if (__n != 0) {
            if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            __s1 = *(BaseObject **)(pBVar9 + 0x28);
            if (((byte)BVar3 & 1) == 0) {
              __s1 = pBVar9 + 0x19;
            }
            iVar4 = memcmp(__s1,__s2,__n);
            if (iVar4 != 0) goto LAB_00d8231c;
          }
          (**(code **)(**(long **)(this + 0x40) + 0x18))
                    (*(long **)(this + 0x40),pBVar9 + 0x18,pBVar9);
        }
      }
LAB_00d8231c:
      bufferObject(this,pBVar9);
      lVar6 = *(long *)(this + 0x20);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(*(long *)(this + 0x28) - lVar6 >> 3));
    *(long *)(this + 0x28) = lVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00d823e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x38) + 0x10))(CONCAT44(in_register_00005004,param_1));
  return;
}

