package com.igexin.b.a.c.a;

public class f extends android.os.Handler {
    private final java.lang.String a;
    private final android.os.Messenger b;
    private final java.lang.StringBuffer c;
    private android.os.Messenger d;

    private f() {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "LOG-"
            r0.append(r1)
            java.lang.Class<com.igexin.b.a.c.a.f> r1 = com.igexin.b.a.c.a.f.class
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.a = r0
            android.os.Messenger r0 = new android.os.Messenger
            r0.<init>(r2)
            r2.b = r0
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r2.c = r0
            return
    }

    f(com.igexin.b.a.c.a.g r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.b.a.c.a.f a() {
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.h.a()
            return r0
    }

    private void a(android.os.Message r2) {
            r1 = this;
            android.os.Messenger r2 = r2.replyTo
            r1.d = r2
            boolean r2 = r1.c()
            if (r2 == 0) goto L19
            java.lang.StringBuffer r2 = r1.c
            java.lang.String r2 = r2.toString()
            r1.b(r2)
            java.lang.StringBuffer r2 = r1.c
            r0 = 0
            r2.setLength(r0)
        L19:
            return
    }

    private void b(java.lang.String r4) {
            r3 = this;
            android.os.Message r0 = new android.os.Message     // Catch: java.lang.Exception -> L1b
            r0.<init>()     // Catch: java.lang.Exception -> L1b
            r1 = 2
            r0.what = r1     // Catch: java.lang.Exception -> L1b
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Exception -> L1b
            r1.<init>()     // Catch: java.lang.Exception -> L1b
            java.lang.String r2 = "log_data"
            r1.putString(r2, r4)     // Catch: java.lang.Exception -> L1b
            r0.setData(r1)     // Catch: java.lang.Exception -> L1b
            android.os.Messenger r4 = r3.d     // Catch: java.lang.Exception -> L1b
            r4.send(r0)     // Catch: java.lang.Exception -> L1b
            goto L32
        L1b:
            r4 = move-exception
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "send message error = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.util.Log.e(r0, r4)
        L32:
            return
    }

    private boolean c() {
            r1 = this;
            java.lang.StringBuffer r0 = r1.c
            int r0 = r0.length()
            if (r0 <= 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public void a(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = com.igexin.push.core.x.a
            boolean r0 = com.igexin.push.util.a.d(r0)
            if (r0 != 0) goto L9
            return
        L9:
            r0 = 5120(0x1400, float:7.175E-42)
            android.os.Messenger r1 = r3.d
            if (r1 == 0) goto L13
            r3.b(r4)
            goto L47
        L13:
            java.lang.StringBuffer r1 = r3.c
            int r1 = r1.length()
            int r2 = r4.length()
            int r1 = r1 + r2
            java.lang.String r2 = "\n"
            if (r1 >= r0) goto L2b
            java.lang.StringBuffer r0 = r3.c
            r0.append(r4)
            r0.append(r2)
            goto L47
        L2b:
            java.lang.StringBuffer r4 = r3.c
            int r4 = r4.length()
            if (r4 > r0) goto L47
            java.lang.StringBuffer r4 = r3.c
            int r4 = r4.length()
            int r4 = r4 + 135
            if (r4 <= r0) goto L47
            java.lang.StringBuffer r4 = r3.c
            java.lang.String r0 = "Warning! the log cache is too long to show the full content,we suggest you call initialize and setDebugLogger in a short time interval."
            r4.append(r0)
            r4.append(r2)
        L47:
            return
    }

    public android.os.IBinder b() {
            r1 = this;
            android.os.Messenger r0 = r1.b
            android.os.IBinder r0 = r0.getBinder()
            return r0
    }

    @Override
    public void handleMessage(android.os.Message r3) {
            r2 = this;
            int r0 = r3.what
            r1 = 1
            if (r0 == r1) goto L9
            super.handleMessage(r3)
            goto Lc
        L9:
            r2.a(r3)
        Lc:
            return
    }
}
