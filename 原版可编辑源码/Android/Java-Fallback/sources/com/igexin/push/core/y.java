package com.igexin.push.core;

class y implements java.lang.Runnable {
    final android.content.Context a;
    final android.content.Intent b;
    final com.igexin.push.core.x c;

    y(com.igexin.push.core.x r1, android.content.Context r2, android.content.Intent r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    private void a() {
            r4 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "ServiceManager|startPService by bind"
            com.igexin.b.a.c.b.a(r1, r0)
            android.content.Intent r0 = r4.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PB-"
            r1.append(r2)
            long r2 = java.lang.System.nanoTime()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.setType(r1)
            android.content.Intent r0 = r4.b
            android.content.Context r1 = r4.a
            com.igexin.push.core.x r2 = r4.c
            java.lang.Class r2 = r2.c(r1)
            r0.setClass(r1, r2)
            android.content.Context r0 = r4.a
            android.content.Context r0 = r0.getApplicationContext()
            android.content.Intent r1 = r4.b
            com.igexin.push.core.x r2 = r4.c
            android.content.ServiceConnection r2 = com.igexin.push.core.x.b(r2)
            r3 = 1
            r0.bindService(r1, r2, r3)
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.igexin.push.core.x r0 = r3.c
            java.lang.String r0 = com.igexin.push.core.x.a(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2a
            com.igexin.push.core.x r0 = r3.c
            java.lang.String r1 = com.igexin.push.core.d.f
            com.igexin.push.core.x.a(r0, r1)
            com.igexin.push.core.x r0 = r3.c
            java.lang.String r0 = com.igexin.push.core.x.a(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2a
            com.igexin.push.core.x r0 = r3.c
            android.content.Context r1 = r3.a
            java.lang.String r1 = com.igexin.push.util.c.b(r1)
            com.igexin.push.core.x.a(r0, r1)
        L2a:
            android.content.Intent r0 = r3.b
            com.igexin.push.core.x r1 = r3.c
            java.lang.String r1 = com.igexin.push.core.x.a(r1)
            java.lang.String r2 = "sc"
            r0.putExtra(r2, r1)
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L53
            r1 = 26
            if (r0 < r1) goto L47
            boolean r0 = com.igexin.push.util.a.h()     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L47
            r3.a()     // Catch: java.lang.Throwable -> L53
            goto L76
        L47:
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L53
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L53
            android.content.Intent r1 = r3.b     // Catch: java.lang.Throwable -> L53
            r0.startService(r1)     // Catch: java.lang.Throwable -> L53
            goto L76
        L53:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ServiceManager|startPushService err："
            r1.append(r2)
            java.lang.String r2 = r0.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r2)
            boolean r0 = r0 instanceof java.lang.IllegalStateException
            if (r0 == 0) goto L76
            r3.a()
        L76:
            return
    }
}
