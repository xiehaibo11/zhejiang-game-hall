package com.vivo.push;

public final class m {
    private static final android.os.Handler a = null;
    private static final android.os.HandlerThread b = null;
    private static final android.os.Handler c = null;

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.vivo.push.m.a = r0
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "push_client_thread"
            r0.<init>(r1)
            com.vivo.push.m.b = r0
            r0.start()
            com.vivo.push.n r0 = new com.vivo.push.n
            android.os.HandlerThread r1 = com.vivo.push.m.b
            android.os.Looper r1 = r1.getLooper()
            r0.<init>(r1)
            com.vivo.push.m.c = r0
            return
    }

    public static void a(com.vivo.push.l r4) {
            if (r4 != 0) goto La
            java.lang.String r4 = "PushClientThread"
            java.lang.String r0 = "client thread error, task is null!"
            com.vivo.push.util.p.a(r4, r0)
            return
        La:
            int r0 = r4.a()
            android.os.Message r1 = new android.os.Message
            r1.<init>()
            r1.what = r0
            r1.obj = r4
            android.os.Handler r4 = com.vivo.push.m.c
            r2 = 0
            r4.sendMessageDelayed(r1, r2)
            return
    }

    public static void a(java.lang.Runnable r3) {
            android.os.Handler r0 = com.vivo.push.m.c
            r0.removeCallbacks(r3)
            android.os.Handler r0 = com.vivo.push.m.c
            r1 = 15000(0x3a98, double:7.411E-320)
            r0.postDelayed(r3, r1)
            return
    }

    public static void b(java.lang.Runnable r1) {
            android.os.Handler r0 = com.vivo.push.m.a
            r0.post(r1)
            return
    }

    public static void c(java.lang.Runnable r1) {
            android.os.Handler r0 = com.vivo.push.m.c
            if (r0 == 0) goto L7
            r0.post(r1)
        L7:
            return
    }
}
