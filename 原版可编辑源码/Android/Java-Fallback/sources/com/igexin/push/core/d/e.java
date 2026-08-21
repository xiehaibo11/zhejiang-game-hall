package com.igexin.push.core.d;

class e implements com.igexin.push.core.d.c {
    private final com.igexin.push.core.d.c a;

    protected e() {
            r2 = this;
            r2.<init>()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 30
            if (r0 < r1) goto Lf
            com.igexin.push.core.d.a r0 = new com.igexin.push.core.d.a
            r0.<init>()
            goto L14
        Lf:
            com.igexin.push.core.d.b r0 = new com.igexin.push.core.d.b
            r0.<init>()
        L14:
            r2.a = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SDCardWrapper|SDCardWrapper.mBase = "
            r0.append(r1)
            com.igexin.push.core.d.c r1 = r2.a
            java.lang.Class r1 = r1.getClass()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            return
    }

    @Override
    public java.lang.String a(android.content.Context r3) {
            r2 = this;
            com.igexin.push.core.d.c r0 = r2.a     // Catch: java.lang.Throwable -> L7
            java.lang.String r3 = r0.a(r3)     // Catch: java.lang.Throwable -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SDCardWrapper|getDeviceId()|"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
            r3 = 0
            return r3
    }

    @Override
    public void a(android.content.Context r2, long r3) {
            r1 = this;
            com.igexin.push.core.d.c r0 = r1.a     // Catch: java.lang.Throwable -> L6
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L6
            goto L22
        L6:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "SDCardWrapper|saveSession()|"
            r3.append(r4)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r3)
        L22:
            return
    }

    @Override
    public void a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            com.igexin.push.core.d.c r0 = r1.a     // Catch: java.lang.Throwable -> L6
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L6
            goto L22
        L6:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "SDCardWrapper|saveDeviceId()|"
            r3.append(r0)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r3)
        L22:
            return
    }

    @Override
    public java.lang.String b(android.content.Context r3) {
            r2 = this;
            com.igexin.push.core.d.c r0 = r2.a     // Catch: java.lang.Throwable -> L7
            java.lang.String r3 = r0.b(r3)     // Catch: java.lang.Throwable -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SDCardWrapper|getCid()|"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
            r3 = 0
            return r3
    }

    @Override
    public void b(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            com.igexin.push.core.d.c r0 = r1.a     // Catch: java.lang.Throwable -> L6
            r0.b(r2, r3)     // Catch: java.lang.Throwable -> L6
            goto L22
        L6:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "SDCardWrapper|saveCid()|"
            r3.append(r0)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r3)
        L22:
            return
    }

    @Override
    public long c(android.content.Context r3) {
            r2 = this;
            com.igexin.push.core.d.c r0 = r2.a     // Catch: java.lang.Throwable -> L7
            long r0 = r0.c(r3)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SDCardWrapper|getSession()|"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
            r0 = 0
            return r0
    }
}
