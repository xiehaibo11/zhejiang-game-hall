
/* cocostudio::Armature::drawContour() */

void __thiscall cocostudio::Armature::drawContour(Armature *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ColliderDetector *this_00;
  long *plVar4;
  Vec2 *__s;
  Vec2 *pVVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  plVar8 = *(long **)(this + 0x330);
  while( true ) {
    if (plVar8 == (long *)0x0) {
      return;
    }
    this_00 = (ColliderDetector *)(**(code **)(*(long *)plVar8[5] + 0x550))();
    if (this_00 != (ColliderDetector *)0x0) break;
LAB_00c383f8:
    plVar8 = (long *)*plVar8;
  }
  plVar4 = (long *)ColliderDetector::getColliderBodyList(this_00);
  puVar9 = (undefined8 *)*plVar4;
  puVar2 = (undefined8 *)plVar4[1];
joined_r0x00c38420:
  if (puVar9 != puVar2) {
    do {
      plVar4 = (long *)(**(code **)(*(long *)*puVar9 + 0x10))();
      uVar10 = plVar4[1] - *plVar4;
      uVar6 = uVar10;
      if ((ulong)((long)uVar10 >> 3) >> 0x3d != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      __s = operator_new__(uVar6,(nothrow_t *)&std::nothrow);
      if (__s == (Vec2 *)0x0) {
        if (uVar10 == 0) goto LAB_00c384e0;
        pVVar5 = (Vec2 *)0x0;
LAB_00c384ac:
        lVar1 = *plVar4;
        lVar3 = plVar4[1];
        uVar6 = 0;
        do {
          if ((ulong)(lVar3 - lVar1 >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          lVar7 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          *(undefined8 *)(pVVar5 + lVar7) = *(undefined8 *)(lVar1 + lVar7);
        } while (uVar6 < (ulong)((long)uVar10 >> 3));
      }
      else {
        pVVar5 = __s;
        if (uVar10 != 0) {
          memset(__s,0,uVar10 & 0xfffffffffffffff8);
          goto LAB_00c384ac;
        }
      }
      cocos2d::DrawPrimitives::drawPoly(pVVar5,(uint)(uVar10 >> 3),true);
      operator_delete__(__s);
      puVar9 = puVar9 + 1;
      if (puVar9 == puVar2) break;
    } while( true );
  }
  goto LAB_00c383f8;
LAB_00c384e0:
  cocos2d::DrawPrimitives::drawPoly((Vec2 *)0x0,0,true);
  puVar9 = puVar9 + 1;
  goto joined_r0x00c38420;
}

