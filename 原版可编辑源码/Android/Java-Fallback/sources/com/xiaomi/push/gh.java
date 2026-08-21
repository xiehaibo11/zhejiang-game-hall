package com.xiaomi.push;

public class gh extends java.lang.Exception {
    private com.xiaomi.push.gq a;
    private com.xiaomi.push.gr a;
    private java.lang.Throwable a;

    public gh() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r0
            r1.a = r0
            return
    }

    public gh(com.xiaomi.push.gq r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r0
            r1.a = r0
            r1.a = r2
            return
    }

    public gh(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.a = r1
            r0.a = r1
            r0.a = r1
            return
    }

    public gh(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.a = r1
            r0.a = r1
            r0.a = r1
            r0.a = r2
            return
    }

    public gh(java.lang.Throwable r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r0
            r1.a = r0
            r1.a = r2
            return
    }

    public java.lang.Throwable a() {
            r1 = this;
            java.lang.Throwable r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String getMessage() {
            r2 = this;
            java.lang.String r0 = super.getMessage()
            if (r0 != 0) goto Lf
            com.xiaomi.push.gr r1 = r2.a
            if (r1 == 0) goto Lf
            java.lang.String r0 = r1.toString()
            return r0
        Lf:
            if (r0 != 0) goto L19
            com.xiaomi.push.gq r1 = r2.a
            if (r1 == 0) goto L19
            java.lang.String r0 = r1.toString()
        L19:
            return r0
    }

    @Override
    public void printStackTrace() {
            r1 = this;
            java.io.PrintStream r0 = java.lang.System.err
            r1.printStackTrace(r0)
            return
    }

    @Override
    public void printStackTrace(java.io.PrintStream r2) {
            r1 = this;
            super.printStackTrace(r2)
            java.lang.Throwable r0 = r1.a
            if (r0 == 0) goto L11
            java.lang.String r0 = "Nested Exception: "
            r2.println(r0)
            java.lang.Throwable r0 = r1.a
            r0.printStackTrace(r2)
        L11:
            return
    }

    @Override
    public void printStackTrace(java.io.PrintWriter r2) {
            r1 = this;
            super.printStackTrace(r2)
            java.lang.Throwable r0 = r1.a
            if (r0 == 0) goto L11
            java.lang.String r0 = "Nested Exception: "
            r2.println(r0)
            java.lang.Throwable r0 = r1.a
            r0.printStackTrace(r2)
        L11:
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = super.getMessage()
            if (r1 == 0) goto L13
            r0.append(r1)
            java.lang.String r1 = ": "
            r0.append(r1)
        L13:
            com.xiaomi.push.gr r1 = r2.a
            if (r1 == 0) goto L1a
            r0.append(r1)
        L1a:
            com.xiaomi.push.gq r1 = r2.a
            if (r1 == 0) goto L21
            r0.append(r1)
        L21:
            java.lang.Throwable r1 = r2.a
            if (r1 == 0) goto L2f
            java.lang.String r1 = "\n  -- caused by: "
            r0.append(r1)
            java.lang.Throwable r1 = r2.a
            r0.append(r1)
        L2f:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
