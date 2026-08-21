package com.xiaomi.push;

public class o {
    private static volatile android.os.Handler a;
    private static final java.lang.Object a = null;
    private static volatile android.os.Handler b;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.xiaomi.push.o.a = r0
            return
    }

    public o() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Intent a(android.content.Context r1, android.content.BroadcastReceiver r2, android.content.IntentFilter r3) {
            r0 = 0
            android.content.Intent r1 = a(r1, r2, r3, r0)
            return r1
    }

    public static android.content.Intent a(android.content.Context r1, android.content.BroadcastReceiver r2, android.content.IntentFilter r3, java.lang.String r4) {
            if (r1 == 0) goto L10
            if (r2 == 0) goto L10
            if (r3 != 0) goto L7
            goto L10
        L7:
            android.os.Handler r0 = b()
            android.content.Intent r1 = r1.registerReceiver(r2, r3, r4, r0)
            return r1
        L10:
            r1 = 0
            return r1
    }

    public static android.os.Handler a() {
            android.os.Handler r0 = com.xiaomi.push.o.b
            if (r0 != 0) goto L25
            java.lang.Object r0 = com.xiaomi.push.o.a
            monitor-enter(r0)
            android.os.Handler r1 = com.xiaomi.push.o.b     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L20
            android.os.HandlerThread r1 = new android.os.HandlerThread     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "receiver_task"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L22
            r1.start()     // Catch: java.lang.Throwable -> L22
            android.os.Handler r2 = new android.os.Handler     // Catch: java.lang.Throwable -> L22
            android.os.Looper r1 = r1.getLooper()     // Catch: java.lang.Throwable -> L22
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L22
            com.xiaomi.push.o.b = r2     // Catch: java.lang.Throwable -> L22
        L20:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            goto L25
        L22:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            throw r1
        L25:
            android.os.Handler r0 = com.xiaomi.push.o.b
            return r0
    }

    private static void a(android.content.Context r2, android.content.ComponentName r3) {
            android.os.Handler r0 = b()
            com.xiaomi.push.p r1 = new com.xiaomi.push.p
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    public static void a(android.content.Context r1, java.lang.Class<?> r2) {
            if (r1 == 0) goto Ld
            if (r2 != 0) goto L5
            goto Ld
        L5:
            android.content.ComponentName r0 = new android.content.ComponentName
            r0.<init>(r1, r2)
            a(r1, r0)
        Ld:
            return
    }

    private static android.os.Handler b() {
            android.os.Handler r0 = com.xiaomi.push.o.a
            if (r0 != 0) goto L25
            java.lang.Class<com.xiaomi.push.o> r0 = com.xiaomi.push.o.class
            monitor-enter(r0)
            android.os.Handler r1 = com.xiaomi.push.o.a     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L20
            android.os.HandlerThread r1 = new android.os.HandlerThread     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "handle_receiver"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L22
            r1.start()     // Catch: java.lang.Throwable -> L22
            android.os.Handler r2 = new android.os.Handler     // Catch: java.lang.Throwable -> L22
            android.os.Looper r1 = r1.getLooper()     // Catch: java.lang.Throwable -> L22
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L22
            com.xiaomi.push.o.a = r2     // Catch: java.lang.Throwable -> L22
        L20:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            goto L25
        L22:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            throw r1
        L25:
            android.os.Handler r0 = com.xiaomi.push.o.a
            return r0
    }
}
