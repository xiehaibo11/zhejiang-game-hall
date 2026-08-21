
/* cocos2d::ui::PageViewIndicator::rearrange() */

void __thiscall cocos2d::ui::PageViewIndicator::rearrange(PageViewIndicator *this)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  Size *pSVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(undefined8 **)(this + 0x318) != *(undefined8 **)(this + 800)) {
    iVar2 = *(int *)(this + 0x314);
    pSVar4 = (Size *)(**(code **)(*(long *)**(undefined8 **)(this + 0x318) + 0x168))();
    Size::Size((Size *)&local_70,pSVar4);
    puVar6 = *(undefined8 **)(this + 800);
    puVar7 = *(undefined8 **)(this + 0x318);
    pfVar1 = &local_70;
    if (iVar2 != 2) {
      pfVar1 = (float *)((ulong)&local_70 | 4);
    }
    if (puVar7 != puVar6) {
      fVar11 = *pfVar1;
      lVar5 = (long)puVar6 - (long)puVar7 >> 3;
      fVar12 = fVar11 * 0.5 -
               (fVar11 * (float)lVar5 + *(float *)(this + 0x340) * (float)(lVar5 + -1)) * 0.5;
      do {
        if (iVar2 == 2) {
          fVar10 = local_6c * 0.5;
          fVar9 = fVar12;
        }
        else {
          fVar10 = -fVar12;
          fVar9 = local_70 * 0.5;
        }
        _local_78 = CONCAT44(fVar10,fVar9);
        puVar8 = puVar7 + 1;
        (**(code **)(*(long *)*puVar7 + 0x98))((long *)*puVar7,&local_78);
        fVar12 = fVar12 + fVar11 + *(float *)(this + 0x340);
        puVar7 = puVar8;
      } while (puVar6 != puVar8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

