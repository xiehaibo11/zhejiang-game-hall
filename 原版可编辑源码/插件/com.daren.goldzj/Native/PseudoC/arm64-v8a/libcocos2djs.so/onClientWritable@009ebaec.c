
/* WebSocketImpl::onClientWritable() */

undefined8 __thiscall WebSocketImpl::onClientWritable(WebSocketImpl *this)

{
  mutex *this_00;
  mutex *this_01;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_02;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  long *plVar11;
  void *pvVar12;
  long *plVar13;
  size_t sVar14;
  
  this_00 = (mutex *)(this + 0xc);
  std::__ndk1::mutex::lock(this_00);
  iVar2 = *(int *)(this + 8);
  std::__ndk1::mutex::unlock(this_00);
  if (iVar2 == 2) {
    uVar3 = 0xffffffff;
  }
  else {
    this_01 = (mutex *)(DAT_01d38808 + 1);
    std::__ndk1::mutex::lock(this_01);
    plVar7 = (long *)*DAT_01d38808;
    if (plVar7[2] != 0) {
      for (plVar11 = (long *)plVar7[1]; plVar7 != plVar11; plVar11 = (long *)plVar11[1]) {
        pvVar12 = (void *)plVar11[2];
        if (*(WebSocketImpl **)((long)pvVar12 + 0x10) == this) {
          plVar13 = *(long **)((long)pvVar12 + 8);
          lVar8 = plVar13[2];
          plVar7 = (long *)plVar13[4];
          sVar14 = plVar13[1] - lVar8;
          sVar10 = sVar14;
          if (0xffff < (long)sVar14) {
            sVar10 = 0x10000;
          }
          if (plVar7 == (long *)0x0) {
            plVar7 = operator_new(0x30,(nothrow_t *)&std::nothrow);
            if (plVar7 != (long *)0x0) {
                    /* try { // try from 009ebbd8 to 00aebbe3 has its CatchHandler @ 009ec648 */
              plVar7[3] = 0;
              plVar7[2] = 0;
              plVar7[5] = 0;
              plVar7[4] = 0;
              plVar7[1] = 0;
              *plVar7 = 0;
              lVar8 = *plVar13;
              lVar9 = plVar13[2];
              this_02 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(plVar7 + 3);
              if (((long)sVar14 < 1) || ((void *)(lVar8 + lVar9) != (void *)0x0)) {
                    /* try { // try from 009ebc0c to 00aebc17 has its CatchHandler @ 009ec618 */
                pvVar4 = (void *)plVar7[3];
                if (pvVar4 == (void *)plVar7[4]) {
                  if (sVar10 + 0x10 != 0) {
                    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
                    __append(this_02,sVar10 + 0x10);
                  }
                  if (0 < (long)sVar14) {
                    /* try { // try from 009ebc70 to 00aebc7f has its CatchHandler @ 009ec5dc */
                    memmove((void *)(*(long *)this_02 + 0x10),(void *)(lVar8 + lVar9),sVar10);
                  }
                  plVar7[2] = sVar10;
                  *plVar7 = plVar7[3] + 0x10;
                  plVar7[1] = sVar10;
                  lVar8 = plVar13[2];
                    /* try { // try from 009ebc88 to 00aebc8f has its CatchHandler @ 009ec5d0 */
                  plVar13[4] = (long)plVar7;
                  goto joined_r0x009ebc8c;
                }
              }
              else {
                pvVar4 = *(void **)this_02;
              }
              if (pvVar4 != (void *)0x0) {
                plVar7[4] = (long)pvVar4;
                operator_delete(pvVar4);
              }
              operator_delete(plVar7);
            }
            if ((void *)*plVar13 != (void *)0x0) {
              free((void *)*plVar13);
            }
          }
          else {
joined_r0x009ebc8c:
            if (lVar8 == 0) {
              bVar1 = *(int *)((long)pvVar12 + 4) != 0;
              bVar6 = bVar1 | 0x40;
              if (plVar13[1] < 0x10001) {
                bVar6 = bVar1;
              }
            }
            else {
                    /* try { // try from 009ebbb4 to 00aebbc7 has its CatchHandler @ 009ec5d8 */
              bVar6 = 2;
              if (0x10000 < (long)sVar14) {
                bVar6 = 0x42;
              }
            }
            iVar2 = lws_write(*(undefined8 *)(this + 0x68),*plVar7,plVar7[1],bVar6);
            if (iVar2 < 0) {
              if ((void *)*plVar13 != (void *)0x0) {
                free((void *)*plVar13);
                *plVar13 = 0;
              }
              pvVar4 = (void *)plVar13[4];
              if (pvVar4 != (void *)0x0) {
                pvVar5 = *(void **)((long)pvVar4 + 0x18);
                if (pvVar5 != (void *)0x0) {
                  *(void **)((long)pvVar4 + 0x20) = pvVar5;
                  operator_delete(pvVar5);
                }
                    /* try { // try from 009ebd08 to 00aebd1f has its CatchHandler @ 009ec5cc */
                operator_delete(pvVar4);
              }
              operator_delete(plVar13);
              lVar8 = *plVar11;
              lVar9 = *DAT_01d38808;
              *(long *)(lVar8 + 8) = plVar11[1];
              *(long *)plVar11[1] = lVar8;
                    /* try { // try from 009ebd30 to 00aebd43 has its CatchHandler @ 009ec5d4 */
              *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
              operator_delete(plVar11);
              operator_delete(pvVar12);
              if (*(int *)(this + 0x130) == 0) {
                *(undefined4 *)(this + 0x130) = 3;
                std::__ndk1::mutex::lock(this_00);
                if ((*(uint *)(this + 8) & 0xfffffffe) != 2) {
                  *(undefined4 *)(this + 8) = 2;
                }
                std::__ndk1::mutex::unlock(this_00);
              }
              break;
            }
            lVar9 = (long)iVar2;
            lVar8 = plVar7[1] - lVar9;
            if (lVar8 != 0 && lVar9 <= plVar7[1]) {
              *plVar7 = *plVar7 + lVar9;
              plVar7[1] = lVar8;
              break;
            }
            sVar10 = plVar7[2];
            if ((lVar8 == 0) && ((long)sVar10 < (long)sVar14)) {
              pvVar12 = (void *)plVar13[4];
              plVar13[2] = plVar13[2] + sVar10;
              if (pvVar12 != (void *)0x0) {
                pvVar4 = *(void **)((long)pvVar12 + 0x18);
                if (pvVar4 != (void *)0x0) {
                  *(void **)((long)pvVar12 + 0x20) = pvVar4;
                  operator_delete(pvVar4);
                }
                operator_delete(pvVar12);
              }
              plVar13[4] = 0;
              break;
            }
            if ((sVar14 != sVar10) && (*(int *)(this + 0x130) == 0)) {
                    /* try { // try from 009ebddc to 00aebdef has its CatchHandler @ 009ec5ac */
              *(undefined4 *)(this + 0x130) = 3;
              std::__ndk1::mutex::lock(this_00);
              if ((*(uint *)(this + 8) & 0xfffffffe) != 2) {
                *(undefined4 *)(this + 8) = 2;
              }
              std::__ndk1::mutex::unlock(this_00);
            }
            if ((void *)*plVar13 != (void *)0x0) {
              free((void *)*plVar13);
              *plVar13 = 0;
            }
            pvVar4 = (void *)plVar13[4];
                    /* try { // try from 009ebe1c to 00aebe33 has its CatchHandler @ 009ec59c */
            if (pvVar4 != (void *)0x0) {
              pvVar5 = *(void **)((long)pvVar4 + 0x18);
              if (pvVar5 != (void *)0x0) {
                *(void **)((long)pvVar4 + 0x20) = pvVar5;
                operator_delete(pvVar5);
              }
              operator_delete(pvVar4);
            }
          }
          operator_delete(plVar13);
                    /* try { // try from 009ebe40 to 00aebe4f has its CatchHandler @ 009ec53c */
          lVar8 = *plVar11;
          lVar9 = *DAT_01d38808;
          *(long *)(lVar8 + 8) = plVar11[1];
          *(long *)plVar11[1] = lVar8;
          *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
          operator_delete(plVar11);
          operator_delete(pvVar12);
          break;
        }
      }
    }
                    /* try { // try from 009ebe74 to 00aebe7f has its CatchHandler @ 009ec51c */
    std::__ndk1::mutex::unlock(this_01);
                    /* try { // try from 009ebe80 to 00aebfe7 has its CatchHandler @ 009eba24 */
    uVar3 = 0;
    if (*(long *)(this + 0x68) != 0) {
      lws_callback_on_writable();
      uVar3 = 0;
    }
  }
  return uVar3;
}

