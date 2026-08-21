package com.igexin.b.a.c.a;

public class a implements com.igexin.b.a.c.a.b {
    private com.igexin.sdk.IUserLoggerInterface a;
    private final java.lang.StringBuffer b;

    public a() {
            r1 = this;
            r1.<init>()
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1.b = r0
            return
    }

    private void b() {
            r8 = this;
            java.lang.StringBuffer r0 = r8.b
            int r0 = r0.length()
            if (r0 <= 0) goto L61
            java.lang.StringBuffer r0 = r8.b
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "\n"
            boolean r0 = r0.contains(r1)
            r2 = 0
            java.lang.String r3 = "[GT-PUSH] "
            if (r0 == 0) goto L42
            java.lang.StringBuffer r0 = r8.b
            java.lang.String r0 = r0.toString()
            java.lang.String[] r0 = r0.split(r1)
            int r1 = r0.length
            r4 = r2
        L25:
            if (r4 >= r1) goto L5c
            r5 = r0[r4]
            com.igexin.sdk.IUserLoggerInterface r6 = r8.a
            if (r6 == 0) goto L3f
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r3)
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.log(r5)
        L3f:
            int r4 = r4 + 1
            goto L25
        L42:
            com.igexin.sdk.IUserLoggerInterface r0 = r8.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.StringBuffer r3 = r8.b
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.log(r1)
        L5c:
            java.lang.StringBuffer r0 = r8.b
            r0.setLength(r2)
        L61:
            return
    }

    @Override
    public void a() {
            r1 = this;
            com.igexin.sdk.IUserLoggerInterface r0 = r1.a
            if (r0 == 0) goto L7
            r1.b()
        L7:
            return
    }

    @Override
    public void a(com.igexin.sdk.IUserLoggerInterface r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.a = r1
        L4:
            return
    }

    @Override
    public void a(java.lang.String r4) {
            r3 = this;
            com.igexin.sdk.IUserLoggerInterface r0 = r3.a
            if (r0 == 0) goto L1e
            r3.b()
            com.igexin.sdk.IUserLoggerInterface r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[GT-PUSH] "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.log(r4)
            goto L21
        L1e:
            r3.b(r4)
        L21:
            return
    }

    public void b(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuffer r0 = r3.b
            int r0 = r0.length()
            int r1 = r4.length()
            int r0 = r0 + r1
            java.lang.String r1 = "\n"
            r2 = 5120(0x1400, float:7.175E-42)
            if (r0 >= r2) goto L1a
            java.lang.StringBuffer r0 = r3.b
            r0.append(r4)
            r0.append(r1)
            goto L36
        L1a:
            java.lang.StringBuffer r4 = r3.b
            int r4 = r4.length()
            if (r4 > r2) goto L36
            java.lang.StringBuffer r4 = r3.b
            int r4 = r4.length()
            int r4 = r4 + 135
            if (r4 <= r2) goto L36
            java.lang.StringBuffer r4 = r3.b
            java.lang.String r0 = "Warning! the log cache is too long to show the full content,we suggest you call initialize and setDebugLogger in a short time interval."
            r4.append(r0)
            r4.append(r1)
        L36:
            return
    }
}
