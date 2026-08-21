package com.mbridge.msdk.foundation.same.c;

public final class d extends com.mbridge.msdk.foundation.same.e.a {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private boolean d;
    private com.mbridge.msdk.foundation.same.c.d.a e;
    private boolean f;


    public interface a {
        void a(java.lang.String r1, java.lang.String r2);

        void b(java.lang.String r1, java.lang.String r2);
    }

    public d(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.f = r0
            r1.a = r2
            r1.b = r3
            r1.c = r4
            return
    }

    public d(java.lang.String r1, java.lang.String r2, java.lang.String r3, com.mbridge.msdk.foundation.same.c.g r4) {
            r0 = this;
            r0.<init>()
            r4 = 0
            r0.d = r4
            r0.f = r4
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r1 = 1
            r0.f = r1
            return
    }

    static java.lang.String a(com.mbridge.msdk.foundation.same.c.d r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    static void a(com.mbridge.msdk.foundation.same.c.d r0, java.lang.String r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.foundation.same.c.d$a r0 = r1.e
            if (r0 == 0) goto L7
            r0.b(r2, r3)
        L7:
            return
    }

    private void b() {
            r3 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            java.lang.String r1 = r3.c     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            r0.<init>(r1)     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            boolean r1 = r0.exists()     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            if (r1 != 0) goto L10
            r0.mkdirs()     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
        L10:
            boolean r1 = r0.exists()     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            if (r1 == 0) goto L19
            r0.delete()     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
        L19:
            java.lang.String r1 = r3.b     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            com.mbridge.msdk.foundation.same.c.d$1 r2 = new com.mbridge.msdk.foundation.same.c.d$1     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            r2.<init>(r3)     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            com.mbridge.msdk.foundation.same.net.g.b.downloadFile(r0, r1, r2)     // Catch: java.lang.OutOfMemoryError -> L24 java.lang.Exception -> L2f
            goto L40
        L24:
            r0 = move-exception
            java.lang.String r1 = r3.b
            java.lang.String r0 = r0.getMessage()
            r3.a(r1, r0)
            goto L40
        L2f:
            r0 = move-exception
            java.lang.String r1 = r3.b
            java.lang.String r2 = r0.getMessage()
            r3.a(r1, r2)
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L40
            r0.printStackTrace()
        L40:
            return
    }

    static boolean b(com.mbridge.msdk.foundation.same.c.d r0) {
            boolean r0 = r0.f
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.foundation.same.c.d r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    protected final void a() {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r3.c
            r0.<init>(r1)
            boolean r0 = r0.exists()
            if (r0 == 0) goto L19
            java.lang.String r0 = r3.b
            java.lang.String r1 = r3.c
            com.mbridge.msdk.foundation.same.c.d$a r2 = r3.e
            if (r2 == 0) goto L36
            r2.a(r0, r1)
            goto L36
        L19:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "load image faild.because file["
            r0.append(r1)
            java.lang.String r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = "] is not exist!"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = r3.b
            r3.a(r1, r0)
        L36:
            return
    }

    public final void a(com.mbridge.msdk.foundation.same.c.d.a r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    public final void cancelTask() {
            r0 = this;
            return
    }

    @Override
    public final void pauseTask(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public final void runTask() {
            r4 = this;
            boolean r0 = r4.d
            if (r0 != 0) goto L34
            java.lang.String r0 = r4.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L14
            java.lang.String r0 = r4.b
            java.lang.String r1 = "save path is null."
            r4.a(r0, r1)
            return
        L14:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r4.c
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L30
            long r0 = r0.length()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L2c
            goto L30
        L2c:
            r4.a()
            goto L37
        L30:
            r4.b()
            goto L37
        L34:
            r4.b()
        L37:
            return
    }
}
