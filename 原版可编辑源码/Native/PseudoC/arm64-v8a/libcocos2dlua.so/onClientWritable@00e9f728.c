
/* cocos2d::network::WebSocket::onClientWritable() */

undefined8 __thiscall cocos2d::network::WebSocket::onClientWritable(WebSocket *this)

{
  mutex *this_00;
  mutex *this_01;
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  WebSocketFrame *this_02;
  long lVar13;
  
  this_00 = (mutex *)(this + 8);
  std::__ndk1::mutex::lock(this_00);
  iVar3 = *(int *)(this + 0x30);
  std::__ndk1::mutex::unlock(this_00);
  if (iVar3 == 2) {
    uVar4 = 0xffffffff;
  }
  else {
    this_01 = (mutex *)(DAT_0178f4f8 + 1);
    std::__ndk1::mutex::lock(this_01);
    plVar9 = (long *)*DAT_0178f4f8;
    if (plVar9[2] != 0) {
      for (plVar11 = (long *)plVar9[1]; plVar9 != plVar11; plVar11 = (long *)plVar11[1]) {
        pvVar12 = (void *)plVar11[2];
        if (*(WebSocket **)((long)pvVar12 + 0x10) == this) {
          plVar9 = *(long **)((long)pvVar12 + 8);
          lVar10 = plVar9[2];
          this_02 = (WebSocketFrame *)plVar9[4];
          lVar13 = plVar9[1] - lVar10;
          lVar1 = lVar13;
          if (0xffff < lVar13) {
            lVar1 = 0x10000;
          }
          if (this_02 == (WebSocketFrame *)0x0) {
            this_02 = operator_new(0x30,(nothrow_t *)&std::nothrow);
            if (this_02 != (WebSocketFrame *)0x0) {
              *(undefined8 *)(this_02 + 0x18) = 0;
              *(undefined8 *)(this_02 + 0x10) = 0;
              *(undefined8 *)(this_02 + 0x28) = 0;
              *(undefined8 *)(this_02 + 0x20) = 0;
              *(undefined8 *)(this_02 + 8) = 0;
              *(undefined8 *)this_02 = 0;
              uVar5 = WebSocketFrame::init(this_02,(uchar *)(*plVar9 + plVar9[2]),lVar1);
              if ((uVar5 & 1) != 0) {
                lVar10 = plVar9[2];
                plVar9[4] = (long)this_02;
                goto joined_r0x00e9f86c;
              }
              pvVar6 = *(void **)(this_02 + 0x18);
              if (pvVar6 != (void *)0x0) {
                *(void **)(this_02 + 0x20) = pvVar6;
                operator_delete(pvVar6);
              }
              operator_delete(this_02);
            }
            if ((void *)*plVar9 != (void *)0x0) {
              free((void *)*plVar9);
            }
          }
          else {
joined_r0x00e9f86c:
            if (lVar10 == 0) {
              bVar2 = *(int *)((long)pvVar12 + 4) != 0;
              bVar8 = bVar2 | 0x40;
              if (plVar9[1] < 0x10001) {
                bVar8 = bVar2;
              }
            }
            else {
              bVar8 = 2;
              if (0x10000 < lVar13) {
                bVar8 = 0x42;
              }
            }
            iVar3 = lws_write(*(undefined8 *)(this + 0x68),*(long *)this_02,*(long *)(this_02 + 8),
                              bVar8);
            if (iVar3 < 0) {
              if ((void *)*plVar9 != (void *)0x0) {
                free((void *)*plVar9);
                *plVar9 = 0;
              }
              pvVar6 = (void *)plVar9[4];
              if (pvVar6 != (void *)0x0) {
                pvVar7 = *(void **)((long)pvVar6 + 0x18);
                if (pvVar7 != (void *)0x0) {
                  *(void **)((long)pvVar6 + 0x20) = pvVar7;
                  operator_delete(pvVar7);
                }
                operator_delete(pvVar6);
              }
              operator_delete(plVar9);
              lVar1 = *plVar11;
              lVar10 = *DAT_0178f4f8;
              *(long *)(lVar1 + 8) = plVar11[1];
              *(long *)plVar11[1] = lVar1;
              *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + -1;
              operator_delete(plVar11);
              operator_delete(pvVar12);
              if (*(int *)(this + 0x130) == 0) {
                *(undefined4 *)(this + 0x130) = 3;
                std::__ndk1::mutex::lock(this_00);
                if ((*(uint *)(this + 0x30) & 0xfffffffe) != 2) {
                  *(undefined4 *)(this + 0x30) = 2;
                }
                std::__ndk1::mutex::unlock(this_00);
              }
              break;
            }
            lVar10 = (long)iVar3;
            lVar1 = *(long *)(this_02 + 8) - lVar10;
            if (lVar1 != 0 && lVar10 <= *(long *)(this_02 + 8)) {
              *(long *)this_02 = *(long *)this_02 + lVar10;
              *(long *)(this_02 + 8) = lVar1;
              break;
            }
            lVar10 = *(long *)(this_02 + 0x10);
            if ((lVar1 == 0) && (lVar10 < lVar13)) {
              pvVar12 = (void *)plVar9[4];
              plVar9[2] = plVar9[2] + lVar10;
              if (pvVar12 != (void *)0x0) {
                pvVar6 = *(void **)((long)pvVar12 + 0x18);
                if (pvVar6 != (void *)0x0) {
                  *(void **)((long)pvVar12 + 0x20) = pvVar6;
                  operator_delete(pvVar6);
                }
                operator_delete(pvVar12);
              }
              plVar9[4] = 0;
              break;
            }
            if ((lVar13 != lVar10) && (*(int *)(this + 0x130) == 0)) {
              *(undefined4 *)(this + 0x130) = 3;
              std::__ndk1::mutex::lock(this_00);
              if ((*(uint *)(this + 0x30) & 0xfffffffe) != 2) {
                *(undefined4 *)(this + 0x30) = 2;
              }
              std::__ndk1::mutex::unlock(this_00);
            }
            if ((void *)*plVar9 != (void *)0x0) {
              free((void *)*plVar9);
              *plVar9 = 0;
            }
            pvVar6 = (void *)plVar9[4];
            if (pvVar6 != (void *)0x0) {
              pvVar7 = *(void **)((long)pvVar6 + 0x18);
              if (pvVar7 != (void *)0x0) {
                *(void **)((long)pvVar6 + 0x20) = pvVar7;
                operator_delete(pvVar7);
              }
              operator_delete(pvVar6);
            }
          }
          operator_delete(plVar9);
          lVar1 = *plVar11;
          lVar10 = *DAT_0178f4f8;
          *(long *)(lVar1 + 8) = plVar11[1];
          *(long *)plVar11[1] = lVar1;
          *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + -1;
          operator_delete(plVar11);
          operator_delete(pvVar12);
          break;
        }
      }
    }
    std::__ndk1::mutex::unlock(this_01);
    uVar4 = 0;
    if (*(long *)(this + 0x68) != 0) {
      lws_callback_on_writable();
      uVar4 = 0;
    }
  }
  return uVar4;
}

