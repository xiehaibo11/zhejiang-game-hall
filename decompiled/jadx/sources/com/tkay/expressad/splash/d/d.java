package com.tkay.expressad.splash.d;

import com.tkay.expressad.out.q;

/* JADX INFO: loaded from: classes3.dex */
public class d implements com.tkay.expressad.splash.b.d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7123a = "SplashShowListenerImpl";
    private q b;
    private com.tkay.expressad.foundation.d.c c;
    private boolean d;
    private c e;

    private static void d() {
    }

    private static void e() {
    }

    @Override // com.tkay.expressad.splash.b.d
    public final void c() {
    }

    public d(c cVar, q qVar, double d, com.tkay.expressad.foundation.d.c cVar2) {
        this.e = cVar;
        this.b = qVar;
        this.c = cVar2;
        this.d = a(d, cVar2);
    }

    @Override // com.tkay.expressad.splash.b.d
    public final void a() {
        c cVar = this.e;
        if (cVar != null) {
            cVar.f7119a = true;
        }
        StringBuffer stringBuffer = new StringBuffer("load_to=");
        stringBuffer.append(this.e.c());
        stringBuffer.append("&allow_skip=");
        stringBuffer.append(this.e.d() ? 1 : 0);
        stringBuffer.append("&countdown=");
        stringBuffer.append(this.e.e());
        stringBuffer.append("&");
        q qVar = this.b;
        if (qVar == null || this.d) {
            return;
        }
        qVar.a();
    }

    @Override // com.tkay.expressad.splash.b.d
    public final void a(String str) {
        c cVar = this.e;
        if (cVar != null) {
            cVar.f7119a = false;
        }
        q qVar = this.b;
        if (qVar != null) {
            qVar.a(str);
        }
    }

    @Override // com.tkay.expressad.splash.b.d
    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        q qVar = this.b;
        if (qVar == null || this.d) {
            return;
        }
        qVar.a(cVar);
    }

    @Override // com.tkay.expressad.splash.b.d
    public final void b() {
        q qVar = this.b;
        if (qVar != null) {
            qVar.b();
        }
        c cVar = this.e;
        if (cVar != null) {
            cVar.f7119a = false;
        }
    }

    private void f() {
        if (this.b != null) {
            this.b = null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:8:0x002a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean a(double r10, com.tkay.expressad.foundation.d.c r12) {
        /*
            r0 = 0
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L89
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> L89
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L89
            r2 = 0
            if (r1 != 0) goto L2a
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L89
            com.tkay.expressad.d.a r1 = com.tkay.expressad.d.b.b()     // Catch: java.lang.Exception -> L89
            if (r1 == 0) goto L2a
            long r2 = r1.l()     // Catch: java.lang.Exception -> L89
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            long r6 = r1.x()     // Catch: java.lang.Exception -> L89
            long r4 = r4 * r6
            r8 = r2
            r2 = r4
            r4 = r8
            goto L2b
        L2a:
            r4 = r2
        L2b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            java.lang.String r6 = "cbp : "
            r1.<init>(r6)     // Catch: java.lang.Exception -> L89
            r1.append(r10)     // Catch: java.lang.Exception -> L89
            java.lang.String r6 = " plct : "
            r1.append(r6)     // Catch: java.lang.Exception -> L89
            r1.append(r2)     // Catch: java.lang.Exception -> L89
            java.lang.String r6 = " plctb : "
            r1.append(r6)     // Catch: java.lang.Exception -> L89
            r1.append(r4)     // Catch: java.lang.Exception -> L89
            r1 = 1
            if (r12 == 0) goto L55
            boolean r2 = r12.a(r2, r4)     // Catch: java.lang.Exception -> L89
            if (r2 == 0) goto L52
            r12.e(r1)     // Catch: java.lang.Exception -> L89
            return r1
        L52:
            r12.e(r0)     // Catch: java.lang.Exception -> L89
        L55:
            if (r12 == 0) goto L89
            boolean r12 = r12.A()     // Catch: java.lang.Exception -> L89
            if (r12 != 0) goto L89
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r12 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r12 != 0) goto L64
            return r0
        L64:
            java.util.Random r12 = new java.util.Random     // Catch: java.lang.Exception -> L89
            r12.<init>()     // Catch: java.lang.Exception -> L89
            double r2 = r12.nextDouble()     // Catch: java.lang.Exception -> L89
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = "hit : "
            r12.<init>(r4)     // Catch: java.lang.Exception -> L89
            r12.append(r2)     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = " "
            r12.append(r4)     // Catch: java.lang.Exception -> L89
            int r10 = (r2 > r10 ? 1 : (r2 == r10 ? 0 : -1))
            if (r10 <= 0) goto L82
            r11 = r1
            goto L83
        L82:
            r11 = r0
        L83:
            r12.append(r11)     // Catch: java.lang.Exception -> L89
            if (r10 <= 0) goto L89
            return r1
        L89:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.splash.d.d.a(double, com.tkay.expressad.foundation.d.c):boolean");
    }
}
