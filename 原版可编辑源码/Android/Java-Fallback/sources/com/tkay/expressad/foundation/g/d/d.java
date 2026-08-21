package com.tkay.expressad.foundation.g.d;

public final class d extends com.tkay.expressad.foundation.g.g.a {
    private static final java.lang.String a = "ImageWorker";
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private boolean h;
    private com.tkay.expressad.foundation.g.d.d.a i;


    public interface a {
        void a(java.lang.String r1, java.lang.String r2);

        void b(java.lang.String r1, java.lang.String r2);
    }

    public d(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.h = r0
            r1.e = r2
            r1.f = r3
            r1.g = r4
            return
    }

    static java.lang.String a(com.tkay.expressad.foundation.g.d.d r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    static void a(com.tkay.expressad.foundation.g.d.d r0, java.lang.String r1, java.lang.String r2) {
            r0.b(r1, r2)
            return
    }

    private void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.foundation.g.d.d$a r0 = r1.i
            if (r0 == 0) goto L7
            r0.a(r2, r3)
        L7:
            return
    }

    static java.lang.String b(com.tkay.expressad.foundation.g.d.d r0) {
            java.lang.String r0 = r0.f
            return r0
    }

    private void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.foundation.g.d.d$a r0 = r1.i
            if (r0 == 0) goto L7
            r0.b(r2, r3)
        L7:
            return
    }

    private java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    private java.lang.String i() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    private java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    private boolean k() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }

    private com.tkay.expressad.foundation.g.d.d.a l() {
            r1 = this;
            com.tkay.expressad.foundation.g.d.d$a r0 = r1.i
            return r0
    }

    private static void m() {
            return
    }

    private void n() {
            r3 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            java.lang.String r1 = r3.g     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            r0.<init>(r1)     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            boolean r1 = r0.exists()     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            if (r1 != 0) goto L10
            r0.mkdirs()     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
        L10:
            boolean r1 = r0.exists()     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            if (r1 == 0) goto L19
            r0.delete()     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
        L19:
            java.lang.String r1 = r3.f     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            com.tkay.expressad.foundation.g.d.d$1 r2 = new com.tkay.expressad.foundation.g.d.d$1     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            r2.<init>(r3)     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            com.tkay.expressad.foundation.g.f.h.a.a(r0, r1, r2)     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            return
        L24:
            r0 = move-exception
            java.lang.String r1 = r3.f
            java.lang.String r0 = r0.getMessage()
            r3.b(r1, r0)
            return
        L2f:
            r0 = move-exception
            java.lang.String r1 = r3.f
            java.lang.String r2 = r0.getMessage()
            r3.b(r1, r2)
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L40
            r0.printStackTrace()
        L40:
            return
    }

    @Override
    public final void a() {
            r4 = this;
            boolean r0 = r4.h
            if (r0 != 0) goto L34
            java.lang.String r0 = r4.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L14
            java.lang.String r0 = r4.f
            java.lang.String r1 = "save path is null."
            r4.b(r0, r1)
            return
        L14:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r4.g
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L30
            long r0 = r0.length()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L2c
            goto L30
        L2c:
            r4.d()
            return
        L30:
            r4.n()
            return
        L34:
            r4.n()
            return
    }

    public final void a(com.tkay.expressad.foundation.g.d.d.a r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    @Override
    public final void b() {
            r0 = this;
            return
    }

    @Override
    public final void c() {
            r0 = this;
            return
    }

    protected final void d() {
            r4 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r4.g
            r0.<init>(r1)
            long r0 = r0.length()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1d
            java.lang.String r0 = r4.f
            java.lang.String r1 = r4.g
            com.tkay.expressad.foundation.g.d.d$a r2 = r4.i
            if (r2 == 0) goto L1c
            r2.a(r0, r1)
        L1c:
            return
        L1d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "load image faild.because file["
            r0.<init>(r1)
            java.lang.String r1 = r4.g
            r0.append(r1)
            java.lang.String r1 = "] is not exist!"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = r4.f
            r4.b(r1, r0)
            return
    }
}
