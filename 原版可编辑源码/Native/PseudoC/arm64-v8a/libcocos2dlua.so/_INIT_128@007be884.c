
void _INIT_128(void)

{
  __tree_node_base _Var1;
  __tree_node_base *p_Var2;
  bool bVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  __tree_node_base *p_Var9;
  __tree_node_base *p_Var10;
  ulong uVar11;
  
  p_Var10 = (__tree_node_base *)&DAT_0178f9bc;
  DAT_0178f9a0 = 0;
  DAT_0178f9a8 = 0;
  DAT_0178f9bc._4_4_ = 1;
  DAT_0178f9d0 = 8;
  DAT_0178f9b8 = 0x3f000000;
  DAT_0178f9bc._0_1_ = 0x1a;
  DAT_0178f9e0 = 4;
  DAT_0178f9c4 = 0x12;
  DAT_0178f9c8 = 2;
  DAT_0178f9cc = 0x10;
  DAT_0178f9f0 = 5;
  DAT_0178f9d4 = 0x11;
  DAT_0178f9d8 = 9;
  DAT_0178f9dc = 0x13;
  DAT_0178fa00 = 7;
  DAT_0178f9e4 = 0x15;
  DAT_0178f9e8 = 3;
  DAT_0178f9ec = 0x1b;
  DAT_0178fa10 = 0xb;
  DAT_0178f9f4 = 0x16;
  DAT_0178f9f8 = 6;
  DAT_0178f9fc = 0x17;
  DAT_0178fa20 = (__tree_node_base *)0x0;
  DAT_0178fa04 = 0x18;
  DAT_0178fa08 = 0xd;
  DAT_0178fa0c = 0x19;
  DAT_0178fa28 = 0;
  DAT_0178fa18 = &DAT_0178fa20;
  DAT_0178f9b0 = 0x3f0000003dcccccd;
LAB_007be9d0:
  p_Var9 = (__tree_node_base *)&DAT_0178fa20;
  p_Var5 = (__tree_node_base *)&DAT_0178fa20;
  p_Var4 = (__tree_node_base *)&DAT_0178fa20;
  if (DAT_0178fa20 != (__tree_node_base *)0x0) goto LAB_007bea08;
LAB_007bea64:
  do {
    p_Var4 = operator_new(0x28);
    uVar6 = *(undefined8 *)p_Var10;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(__tree_node_base **)(p_Var4 + 0x10) = p_Var5;
    *(undefined8 *)(p_Var4 + 0x1c) = uVar6;
    *(__tree_node_base **)p_Var9 = p_Var4;
    if ((undefined8 *)*DAT_0178fa18 != (undefined8 *)0x0) {
      p_Var4 = *(__tree_node_base **)p_Var9;
      DAT_0178fa18 = (undefined8 *)*DAT_0178fa18;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (DAT_0178fa20,p_Var4);
    DAT_0178fa28 = DAT_0178fa28 + 1;
LAB_007beaac:
    do {
      p_Var10 = p_Var10 + 8;
      if (p_Var10 == (__tree_node_base *)0x178fa14) {
        __cxa_atexit(FUN_00f7d414,&DAT_0178fa18,&PTR_LOOP_016979c0);
        puVar8 = &DAT_0178fa30;
        DAT_0178fa50 = 0x404040461626772;
        DAT_0178fa68 = 9;
        DAT_0178fa30 = 0x808080861726762;
        DAT_0178fa40 = 0x808080861626772;
        DAT_0178fa58 = 8;
        DAT_0178fa80 = 0x8080800626772;
        DAT_0178fa98 = 5;
        DAT_0178fa60 = 0x105050561626772;
        DAT_0178fa70 = 0x5060500626772;
        DAT_0178fa78 = 4;
        DAT_0178fab0 = 0x8080000616c;
        DAT_0178fa38 = 1;
        DAT_0178fad0 = 1;
        DAT_0178fab8 = 7;
        DAT_0178fad8 = 0xd;
        DAT_0178fa88 = 3;
        DAT_0178faf0 = 3;
        DAT_0178fac8 = 0xc;
        DAT_0178fa48 = 2;
        DAT_0178fae0 = 2;
        DAT_0178fae8 = 10;
        DAT_0178fa90 = 0x800000061;
        DAT_0178fb18 = (__tree_node_base *)0x0;
        DAT_0178faf8 = 0xb;
        DAT_0178faa8 = 6;
        DAT_0178fb00 = 6;
        DAT_0178fac0 = 0;
        DAT_0178fb08 = 0xe;
        DAT_0178fb20 = 0;
        DAT_0178faa0 = 0x80000006c;
        DAT_0178fb10 = &DAT_0178fb18;
        goto LAB_007bec54;
      }
      if ((__tree_node_base **)DAT_0178fa18 == &DAT_0178fa20) goto LAB_007be9d0;
      p_Var9 = DAT_0178fa20;
      p_Var5 = (__tree_node_base *)&DAT_0178fa20;
      if (DAT_0178fa20 == (__tree_node_base *)0x0) {
        do {
          p_Var4 = *(__tree_node_base **)(p_Var5 + 0x10);
          bVar3 = *(__tree_node_base **)p_Var4 == p_Var5;
          p_Var5 = p_Var4;
        } while (bVar3);
      }
      else {
        do {
          p_Var4 = p_Var9;
          p_Var9 = *(__tree_node_base **)(p_Var4 + 8);
        } while (*(__tree_node_base **)(p_Var4 + 8) != (__tree_node_base *)0x0);
      }
      _Var1 = *p_Var10;
      p_Var9 = (__tree_node_base *)&DAT_0178fa20;
      p_Var2 = DAT_0178fa20;
      if ((byte)_Var1 <= (byte)p_Var4[0x1c]) {
        while (p_Var5 = p_Var9, p_Var2 != (__tree_node_base *)0x0) {
          while (p_Var5 = p_Var2, (byte)p_Var5[0x1c] <= (byte)_Var1) {
            if ((byte)_Var1 <= (byte)p_Var5[0x1c]) goto LAB_007beaac;
            p_Var2 = *(__tree_node_base **)(p_Var5 + 8);
            if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) {
              p_Var9 = p_Var5 + 8;
              goto LAB_007bea64;
            }
          }
          p_Var9 = p_Var5;
          p_Var2 = *(__tree_node_base **)p_Var5;
        }
        break;
      }
      p_Var5 = (__tree_node_base *)&DAT_0178fa20;
      if (DAT_0178fa20 == (__tree_node_base *)0x0) break;
LAB_007bea08:
      p_Var5 = p_Var4;
      p_Var9 = p_Var5 + 8;
    } while (*(long *)p_Var9 != 0);
  } while( true );
LAB_007bec54:
  p_Var10 = (__tree_node_base *)&DAT_0178fb18;
  p_Var9 = (__tree_node_base *)&DAT_0178fb18;
  p_Var5 = (__tree_node_base *)&DAT_0178fb18;
  if (DAT_0178fb18 != (__tree_node_base *)0x0) goto LAB_007bec8c;
LAB_007bece8:
  do {
    p_Var5 = operator_new(0x30);
    uVar11 = puVar8[1];
    uVar7 = *puVar8;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(__tree_node_base **)(p_Var5 + 0x10) = p_Var9;
    *(ulong *)(p_Var5 + 0x28) = uVar11;
    *(ulong *)(p_Var5 + 0x20) = uVar7;
    *(__tree_node_base **)p_Var10 = p_Var5;
    if ((undefined8 *)*DAT_0178fb10 != (undefined8 *)0x0) {
      p_Var5 = *(__tree_node_base **)p_Var10;
      DAT_0178fb10 = (undefined8 *)*DAT_0178fb10;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (DAT_0178fb18,p_Var5);
    DAT_0178fb20 = DAT_0178fb20 + 1;
LAB_007bed30:
    do {
      puVar8 = puVar8 + 2;
      if ((undefined8 **)puVar8 == &DAT_0178fb10) {
        __cxa_atexit(FUN_00f7d41c,&DAT_0178fb10,&PTR_LOOP_016979c0);
        return;
      }
      if ((__tree_node_base **)DAT_0178fb10 == &DAT_0178fb18) goto LAB_007bec54;
      p_Var10 = DAT_0178fb18;
      p_Var9 = (__tree_node_base *)&DAT_0178fb18;
      if (DAT_0178fb18 == (__tree_node_base *)0x0) {
        do {
          p_Var5 = *(__tree_node_base **)(p_Var9 + 0x10);
          bVar3 = *(__tree_node_base **)p_Var5 == p_Var9;
          p_Var9 = p_Var5;
        } while (bVar3);
      }
      else {
        do {
          p_Var5 = p_Var10;
          p_Var10 = *(__tree_node_base **)(p_Var5 + 8);
        } while (*(__tree_node_base **)(p_Var5 + 8) != (__tree_node_base *)0x0);
      }
      uVar7 = *puVar8;
      p_Var10 = (__tree_node_base *)&DAT_0178fb18;
      p_Var4 = DAT_0178fb18;
      if (uVar7 <= *(ulong *)(p_Var5 + 0x20)) {
        while (p_Var9 = p_Var10, p_Var4 != (__tree_node_base *)0x0) {
          while (p_Var9 = p_Var4, *(ulong *)(p_Var9 + 0x20) <= uVar7) {
            if (uVar7 <= *(ulong *)(p_Var9 + 0x20)) goto LAB_007bed30;
            p_Var4 = *(__tree_node_base **)(p_Var9 + 8);
            if (*(__tree_node_base **)(p_Var9 + 8) == (__tree_node_base *)0x0) {
              p_Var10 = p_Var9 + 8;
              goto LAB_007bece8;
            }
          }
          p_Var10 = p_Var9;
          p_Var4 = *(__tree_node_base **)p_Var9;
        }
        break;
      }
      p_Var9 = (__tree_node_base *)&DAT_0178fb18;
      if (DAT_0178fb18 == (__tree_node_base *)0x0) break;
LAB_007bec8c:
      p_Var9 = p_Var5;
      p_Var10 = p_Var9 + 8;
    } while (*(long *)p_Var10 != 0);
  } while( true );
}

