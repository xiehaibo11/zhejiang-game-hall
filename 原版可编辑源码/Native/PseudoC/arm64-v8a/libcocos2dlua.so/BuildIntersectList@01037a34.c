
/* ClipperLib::Clipper::BuildIntersectList(long long, long long) */

void __thiscall
ClipperLib::Clipper::BuildIntersectList(Clipper *this,longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  clipperException *this_00;
  long lVar5;
  TEdge *pTVar6;
  TEdge *pTVar7;
  TEdge *pTVar8;
  double dVar9;
  double dVar10;
  long local_80;
  longlong lStack_78;
  IntersectNode *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pTVar6 = *(TEdge **)(this + 0x88);
  if (pTVar6 == (TEdge *)0x0) {
LAB_01037c54:
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  *(TEdge **)(this + 0x90) = pTVar6;
  pTVar7 = pTVar6;
  do {
    pTVar8 = *(TEdge **)(pTVar7 + 0x78);
    *(long *)(pTVar7 + 0x90) = *(long *)(pTVar7 + 0x80);
    *(TEdge **)(pTVar7 + 0x88) = pTVar8;
    if (*(long *)(pTVar7 + 0x28) == param_2) {
      lVar5 = *(long *)(pTVar7 + 0x20);
    }
    else {
      dVar9 = *(double *)(pTVar7 + 0x40) * (double)(param_2 - *(long *)(pTVar7 + 8));
      dVar10 = -0.5;
      if (0.0 <= dVar9) {
        dVar10 = 0.5;
      }
      lVar5 = *(long *)pTVar7 + (long)(dVar9 + dVar10);
    }
    *(long *)(pTVar7 + 0x10) = lVar5;
    pTVar7 = pTVar8;
  } while (pTVar8 != (TEdge *)0x0);
  pTVar7 = *(TEdge **)(pTVar6 + 0x88);
  if (pTVar7 == (TEdge *)0x0) goto LAB_01037c2c;
LAB_01037ae8:
  bVar3 = false;
  do {
    while( true ) {
      local_80 = 0;
      lStack_78 = 0;
      if (*(long *)(pTVar6 + 0x10) <= *(long *)(pTVar7 + 0x10)) break;
      uVar4 = IntersectPoint(pTVar6,pTVar7,(IntPoint *)&local_80,
                             (bool)this[*(long *)(*(long *)this + -0x18) + 0x18]);
      if (((uVar4 & 1) == 0) && (*(long *)(pTVar7 + 0x10) + 1 < *(long *)(pTVar6 + 0x10))) {
        this_00 = (clipperException *)__cxa_allocate_exception(0x20);
        clipperException::clipperException(this_00,"Intersection error");
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this_00,&clipperException::typeinfo,clipperException::~clipperException);
      }
      if (param_1 < lStack_78) {
        lStack_78 = param_1;
        if (ABS(*(double *)(pTVar6 + 0x40)) <= ABS(*(double *)(pTVar7 + 0x40))) {
          if (*(long *)(pTVar6 + 0x28) != param_1) {
            local_80 = *(long *)pTVar6;
            dVar9 = *(double *)(pTVar6 + 0x40) * (double)(param_1 - *(long *)(pTVar6 + 8));
            goto LAB_01037bb8;
          }
          local_80 = *(long *)(pTVar6 + 0x20);
        }
        else if (*(long *)(pTVar7 + 0x28) == param_1) {
          local_80 = *(long *)(pTVar7 + 0x20);
        }
        else {
          local_80 = *(long *)pTVar7;
          dVar9 = *(double *)(pTVar7 + 0x40) * (double)(param_1 - *(long *)(pTVar7 + 8));
LAB_01037bb8:
          dVar10 = -0.5;
          if (0.0 <= dVar9) {
            dVar10 = 0.5;
          }
          local_80 = local_80 + (long)(dVar9 + dVar10);
        }
      }
      local_70 = operator_new(0x20);
      *(TEdge **)local_70 = pTVar6;
      *(TEdge **)(local_70 + 8) = pTVar7;
      *(longlong *)(local_70 + 0x18) = lStack_78;
      *(long *)(local_70 + 0x10) = local_80;
      puVar1 = *(undefined8 **)(this + 0x58);
      if (puVar1 == *(undefined8 **)(this + 0x60)) {
        std::__ndk1::
        vector<ClipperLib::IntersectNode*,std::__ndk1::allocator<ClipperLib::IntersectNode*>>::
        __push_back_slow_path<ClipperLib::IntersectNode*const&>
                  ((vector<ClipperLib::IntersectNode*,std::__ndk1::allocator<ClipperLib::IntersectNode*>>
                    *)(this + 0x50),&local_70);
      }
      else {
        *puVar1 = local_70;
        *(undefined8 **)(this + 0x58) = puVar1 + 1;
      }
      SwapPositionsInSEL(this,pTVar6,pTVar7);
      bVar3 = true;
      pTVar7 = *(TEdge **)(pTVar6 + 0x88);
      if (*(TEdge **)(pTVar6 + 0x88) == (TEdge *)0x0) goto LAB_01037c30;
    }
    pTVar8 = pTVar7 + 0x88;
    pTVar6 = pTVar7;
    pTVar7 = *(TEdge **)pTVar8;
  } while (*(TEdge **)pTVar8 != (TEdge *)0x0);
LAB_01037c30:
  do {
    if ((*(long *)(pTVar6 + 0x90) == 0) ||
       (*(undefined8 *)(*(long *)(pTVar6 + 0x90) + 0x88) = 0, !bVar3)) {
      *(undefined8 *)(this + 0x90) = 0;
      goto LAB_01037c54;
    }
    pTVar6 = *(TEdge **)(this + 0x90);
    pTVar7 = *(TEdge **)(pTVar6 + 0x88);
    if (pTVar7 != (TEdge *)0x0) goto LAB_01037ae8;
LAB_01037c2c:
    bVar3 = false;
  } while( true );
}

