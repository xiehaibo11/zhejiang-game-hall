package com.tkay.expressad.video.bt.module.b;

import android.content.Context;
import android.text.TextUtils;

public final class e extends c {
    private static final String a = "ProxyShowRewardListener";
    private h b;
    private com.tkay.expressad.videocommon.e.d c;
    private String d;
    private String e;
    private boolean f;
    private Context g;
    private boolean h = false;
    private boolean i = false;
    private boolean j = false;

    /* JADX WARN: Removed duplicated region for block: B:10:0x0040  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public e(Context context, boolean z, com.tkay.expressad.videocommon.e.d dVar, com.tkay.expressad.foundation.d.c cVar, h hVar, String str, String str2) {
        long jL;
        this.b = hVar;
        this.c = dVar;
        this.d = str2;
        this.e = str;
        this.f = z;
        this.g = context;
        try {
            if (!TextUtils.isEmpty(com.tkay.expressad.foundation.b.b.b().e())) {
                com.tkay.expressad.d.b.a();
                com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
                if (aVarB == null) {
                    com.tkay.expressad.d.b.a();
                    aVarB = com.tkay.expressad.d.b.c();
                }
                jL = aVarB != null ? aVarB.l() * 1000 : 0L;
            }
            com.tkay.expressad.videocommon.e.a aVarB2 = com.tkay.expressad.videocommon.e.c.a().b();
            long jC = aVarB2 != null ? aVarB2.c() : 0L;
            if (cVar != null) {
                if (cVar.a(jC, jL)) {
                    cVar.e(1);
                    if (dVar.M() == 1) {
                        cVar.m(1);
                        return;
                    } else {
                        cVar.m(0);
                        return;
                    }
                }
                cVar.e(0);
                cVar.m(0);
            }
        } catch (Exception unused) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:9:0x002a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void a(com.tkay.expressad.videocommon.e.d dVar, com.tkay.expressad.foundation.d.c cVar) {
        long jL;
        try {
            if (!TextUtils.isEmpty(com.tkay.expressad.foundation.b.b.b().e())) {
                com.tkay.expressad.d.b.a();
                com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
                if (aVarB == null) {
                    com.tkay.expressad.d.b.a();
                    aVarB = com.tkay.expressad.d.b.c();
                }
                jL = aVarB != null ? aVarB.l() * 1000 : 0L;
            }
            com.tkay.expressad.videocommon.e.a aVarB2 = com.tkay.expressad.videocommon.e.c.a().b();
            long jC = aVarB2 != null ? aVarB2.c() : 0L;
            if (cVar != null) {
                if (cVar.a(jC, jL)) {
                    cVar.e(1);
                    if (dVar.M() == 1) {
                        cVar.m(1);
                        return;
                    } else {
                        cVar.m(0);
                        return;
                    }
                }
                cVar.e(0);
                cVar.m(0);
            }
        } catch (Exception unused) {
        }
    }

    @Override
    public final void a() {
        super.a();
        h hVar = this.b;
        if (hVar == null || this.h) {
            return;
        }
        this.h = true;
        hVar.a();
    }

    @Override
    public final void a(boolean z, com.tkay.expressad.videocommon.c.c cVar) {
        super.a(z, cVar);
        h hVar = this.b;
        if (hVar == null || this.j) {
            return;
        }
        this.j = true;
        hVar.a(z, cVar);
    }

    @Override
    public final void a(boolean z, int i) {
        super.a(z, i);
        h hVar = this.b;
        if (hVar == null || this.j) {
            return;
        }
        hVar.a(z, i);
    }

    @Override
    public final void a(String str) {
        super.a(str);
        h hVar = this.b;
        if (hVar == null || this.i) {
            return;
        }
        this.i = true;
        hVar.a(str);
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        super.a(cVar);
        h hVar = this.b;
        if (hVar != null) {
            hVar.a(cVar);
        }
    }

    @Override
    public final void c() {
        super.c();
        h hVar = this.b;
        if (hVar != null) {
            hVar.c();
        }
    }

    @Override
    public final void b() {
        super.b();
        h hVar = this.b;
        if (hVar != null) {
            hVar.b();
        }
    }
}
