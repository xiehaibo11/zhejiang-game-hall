package com.mbridge.msdk.foundation.same.net;

import android.content.Context;

public final class n {
    private static n c;
    private j a;
    private com.mbridge.msdk.foundation.same.net.d.b b;

    private n() {
    }

    public static void a(Context context) {
        if (c == null) {
            n nVar = new n();
            c = nVar;
            nVar.a = new j(context.getApplicationContext());
            c.b = new com.mbridge.msdk.foundation.same.net.d.b(b(), 3);
        }
    }

    public static void a(i iVar) {
        b().a(iVar);
    }

    private static j b() {
        n nVar = c;
        if (nVar != null) {
            j jVar = nVar.a;
            if (jVar != null) {
                return jVar;
            }
            nVar.a = new j(com.mbridge.msdk.foundation.controller.a.f().j());
            return c.a;
        }
        n nVar2 = new n();
        c = nVar2;
        if (nVar2.a == null) {
            nVar2.a = new j(com.mbridge.msdk.foundation.controller.a.f().j());
        }
        return c.a;
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
