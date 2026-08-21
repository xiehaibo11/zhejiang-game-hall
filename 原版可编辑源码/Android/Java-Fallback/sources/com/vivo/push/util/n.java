package com.vivo.push.util;

public final class n implements com.vivo.push.util.o {
    private static final java.lang.String a = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "("
            r0.<init>(r1)
            int r1 = android.os.Process.myPid()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.vivo.push.util.n.a = r0
            return
    }

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Context r2, java.lang.String r3, int r4) {
            r1 = this;
            com.vivo.push.b.n r0 = new com.vivo.push.b.n
            r0.<init>()
            r0.b(r3)
            r0.a(r4)
            if (r4 <= 0) goto L12
            java.lang.String r4 = "LogController"
            r1.d(r4, r3)
        L12:
            java.lang.String r3 = r2.getPackageName()
            java.lang.String r4 = "com.vivo.pushservice"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L3f
            r3 = 1
            r0.a(r3)
            com.vivo.push.e.a r3 = com.vivo.push.e.a.a()
            java.util.ArrayList r3 = r3.b()
            java.util.Iterator r3 = r3.iterator()
        L2e:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L3e
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            com.vivo.push.a.a.a(r2, r0, r4)
            goto L2e
        L3e:
            return
        L3f:
            r3 = 0
            r0.a(r3)
            java.lang.String r3 = r2.getPackageName()
            com.vivo.push.a.a.a(r2, r0, r3)
            return
    }

    private static boolean a() {
            com.vivo.push.util.p.a()
            com.vivo.push.e.a r0 = com.vivo.push.e.a.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto Lf
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public final int a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "VivoPush."
            java.lang.String r3 = r0.concat(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.vivo.push.util.n.a
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            int r3 = android.util.Log.e(r3, r4)
            return r3
    }

    @Override
    public final int a(java.lang.String r3, java.lang.String r4, java.lang.Throwable r5) {
            r2 = this;
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "VivoPush."
            java.lang.String r3 = r0.concat(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.vivo.push.util.n.a
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            int r3 = android.util.Log.e(r3, r4, r5)
            return r3
    }

    @Override
    public final int a(java.lang.String r2, java.lang.Throwable r3) {
            r1 = this;
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "VivoPush."
            java.lang.String r2 = r0.concat(r2)
            java.lang.String r3 = android.util.Log.getStackTraceString(r3)
            int r2 = android.util.Log.e(r2, r3)
            return r2
    }

    @Override
    public final java.lang.String a(java.lang.Throwable r1) {
            r0 = this;
            java.lang.String r1 = android.util.Log.getStackTraceString(r1)
            return r1
    }

    @Override
    public final void a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = a()
            if (r0 == 0) goto La
            r0 = 0
            r1.a(r2, r3, r0)
        La:
            return
    }

    @Override
    public final int b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "VivoPush."
            java.lang.String r3 = r0.concat(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.vivo.push.util.n.a
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            int r3 = android.util.Log.w(r3, r4)
            return r3
    }

    @Override
    public final int b(java.lang.String r3, java.lang.String r4, java.lang.Throwable r5) {
            r2 = this;
            boolean r0 = com.vivo.push.util.p.a()
            if (r0 == 0) goto L26
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "VivoPush."
            java.lang.String r3 = r0.concat(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.vivo.push.util.n.a
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            int r3 = android.util.Log.i(r3, r4, r5)
            return r3
        L26:
            r3 = -1
            return r3
    }

    @Override
    public final void b(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = a()
            if (r0 == 0) goto La
            r0 = 1
            r1.a(r2, r3, r0)
        La:
            return
    }

    @Override
    public final int c(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "VivoPush."
            java.lang.String r3 = r0.concat(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.vivo.push.util.n.a
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            int r3 = android.util.Log.d(r3, r4)
            return r3
    }

    @Override
    public final void c(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = a()
            if (r0 == 0) goto La
            r0 = 2
            r1.a(r2, r3, r0)
        La:
            return
    }

    @Override
    public final int d(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = com.vivo.push.util.p.a()
            if (r0 == 0) goto L26
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "VivoPush."
            java.lang.String r3 = r0.concat(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.vivo.push.util.n.a
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            int r3 = android.util.Log.i(r3, r4)
            return r3
        L26:
            r3 = -1
            return r3
    }

    @Override
    public final int e(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = com.vivo.push.util.p.a()
            if (r0 == 0) goto L26
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "VivoPush."
            java.lang.String r3 = r0.concat(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.vivo.push.util.n.a
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            int r3 = android.util.Log.v(r3, r4)
            return r3
        L26:
            r3 = -1
            return r3
    }
}
