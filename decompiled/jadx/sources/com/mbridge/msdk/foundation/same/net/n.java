package com.mbridge.msdk.foundation.same.net;

import android.content.Context;

/* JADX INFO: compiled from: VolleyManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class n {
    private static n c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private j f3467a;
    private com.mbridge.msdk.foundation.same.net.d.b b;

    private n() {
    }

    public static void a(Context context) {
        if (c == null) {
            n nVar = new n();
            c = nVar;
            nVar.f3467a = new j(context.getApplicationContext());
            c.b = new com.mbridge.msdk.foundation.same.net.d.b(b(), 3);
        }
    }

    public static void a(i iVar) {
        b().a(iVar);
    }

    private static j b() {
        n nVar = c;
        if (nVar != null) {
            j jVar = nVar.f3467a;
            if (jVar != null) {
                return jVar;
            }
            nVar.f3467a = new j(com.mbridge.msdk.foundation.controller.a.f().j());
            return c.f3467a;
        }
        n nVar2 = new n();
        c = nVar2;
        if (nVar2.f3467a == null) {
            nVar2.f3467a = new j(com.mbridge.msdk.foundation.controller.a.f().j());
        }
        return c.f3467a;
    }

    public static com.mbridge.msdk.foundation.same.net.d.b a() {
        n nVar = c;
        if (nVar != null) {
            com.mbridge.msdk.foundation.same.net.d.b bVar = nVar.b;
            if (bVar != null) {
                return bVar;
            }
            nVar.b = new com.mbridge.msdk.foundation.same.net.d.b(b(), 3);
            return c.b;
        }
        n nVar2 = new n();
        c = nVar2;
        if (nVar2.b == null) {
            nVar2.b = new com.mbridge.msdk.foundation.same.net.d.b(b(), 3);
        }
        return c.b;
    }
}
