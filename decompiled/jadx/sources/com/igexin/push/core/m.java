package com.igexin.push.core;

import android.support.v4.view.MotionEventCompat;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static m f2578a;

    public static m a() {
        if (f2578a == null) {
            f2578a = new m();
        }
        return f2578a;
    }

    private void a(List<com.igexin.push.d.c.j> list) {
        if (x.a().b == null) {
            return;
        }
        int iIntValue = ((Integer) x.a().b.first).intValue();
        String str = iIntValue + "";
        if (iIntValue == 1) {
            str = str + "#" + ((String) x.a().b.second);
        }
        com.igexin.push.d.c.j jVar = new com.igexin.push.d.c.j();
        jVar.f2603a = (byte) 5;
        jVar.b = str;
        list.add(jVar);
    }

    public int b() {
        if (!d.k || com.igexin.push.util.a.a(System.currentTimeMillis()) || !com.igexin.push.util.a.a()) {
            com.igexin.b.a.c.b.a("LoginInteractor|keyNegotiate stop ++++++++++", new Object[0]);
            return -1;
        }
        com.igexin.push.d.c.g gVar = new com.igexin.push.d.c.g();
        gVar.f2600a = d.f2565a;
        return c.a().i().a("K-", gVar, true) < 0 ? 0 : 1;
    }

    public void c() {
        com.igexin.b.a.c.a.f.a().a("Start login appid = " + d.f2565a + " appkey = " + d.b);
        if (d.m) {
            d.m = false;
        }
        com.igexin.push.c.i.a().d().g();
        if (d.t == 0) {
            com.igexin.b.a.c.b.a("registerReq #####", new Object[0]);
            com.igexin.push.d.c.d dVar = new com.igexin.push.d.c.d(d.w, d.x, d.D, d.f2565a);
            com.igexin.push.e.a aVarI = c.a().i();
            StringBuilder sb = new StringBuilder();
            sb.append("R-");
            sb.append(d.D);
            com.igexin.b.a.c.b.a("registerReq|" + (aVarI.a(sb.toString(), dVar, true) >= 0) + "|" + d.D, new Object[0]);
            return;
        }
        com.igexin.push.d.c.i iVarD = d();
        com.igexin.b.a.c.b.a("loginReqBefore|" + iVarD.f2602a, new Object[0]);
        com.igexin.push.e.a aVarI2 = c.a().i();
        StringBuilder sb2 = new StringBuilder();
        sb2.append("S-");
        sb2.append(String.valueOf(d.t));
        if (aVarI2.a(sb2.toString(), iVarD, true) >= 0) {
            com.igexin.b.a.c.b.a("LoginInteractor|loginReq|" + d.u, new Object[0]);
        }
    }

    public com.igexin.push.d.c.i d() {
        com.igexin.push.d.c.i iVar = new com.igexin.push.d.c.i();
        iVar.f2602a = d.t;
        iVar.b = (byte) 0;
        iVar.c = MotionEventCompat.ACTION_POINTER_INDEX_MASK;
        iVar.d = d.f2565a;
        try {
            ArrayList arrayList = new ArrayList();
            a(arrayList);
            if (!arrayList.isEmpty()) {
                iVar.e = arrayList;
            }
        } catch (Throwable unused) {
        }
        return iVar;
    }
}
