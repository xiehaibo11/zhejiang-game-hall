package com.tkay.core.common.b;

public class j {
    private static volatile com.tkay.core.common.b.j b;
    android.content.Context a;

    private j(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.tkay.core.common.b.j a(android.content.Context r2) {
            com.tkay.core.common.b.j r0 = com.tkay.core.common.b.j.b
            if (r0 != 0) goto L1b
            java.lang.Class<com.tkay.core.common.b.j> r0 = com.tkay.core.common.b.j.class
            monitor-enter(r0)
            com.tkay.core.common.b.j r1 = com.tkay.core.common.b.j.b     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.tkay.core.common.b.j r1 = new com.tkay.core.common.b.j     // Catch: java.lang.Throwable -> L18
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.tkay.core.common.b.j.b = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L1b:
            com.tkay.core.common.b.j r2 = com.tkay.core.common.b.j.b
            return r2
    }

    public final void a(android.content.BroadcastReceiver r2) {
            r1 = this;
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L9
            androidx.localbroadcastmanager.content.LocalBroadcastManager r0 = androidx.localbroadcastmanager.content.LocalBroadcastManager.getInstance(r0)     // Catch: java.lang.Throwable -> L9
            r0.unregisterReceiver(r2)     // Catch: java.lang.Throwable -> L9
        L9:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L12
            android.support.v4.content.LocalBroadcastManager r0 = android.support.v4.content.LocalBroadcastManager.getInstance(r0)     // Catch: java.lang.Throwable -> L12
            r0.unregisterReceiver(r2)     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public final void a(android.content.BroadcastReceiver r2, android.content.IntentFilter r3) {
            r1 = this;
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L9
            androidx.localbroadcastmanager.content.LocalBroadcastManager r0 = androidx.localbroadcastmanager.content.LocalBroadcastManager.getInstance(r0)     // Catch: java.lang.Throwable -> L9
            r0.registerReceiver(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L12
            android.support.v4.content.LocalBroadcastManager r0 = android.support.v4.content.LocalBroadcastManager.getInstance(r0)     // Catch: java.lang.Throwable -> L12
            r0.registerReceiver(r2, r3)     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public final void a(android.content.Intent r2) {
            r1 = this;
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L9
            androidx.localbroadcastmanager.content.LocalBroadcastManager r0 = androidx.localbroadcastmanager.content.LocalBroadcastManager.getInstance(r0)     // Catch: java.lang.Throwable -> L9
            r0.sendBroadcast(r2)     // Catch: java.lang.Throwable -> L9
        L9:
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L12
            android.support.v4.content.LocalBroadcastManager r0 = android.support.v4.content.LocalBroadcastManager.getInstance(r0)     // Catch: java.lang.Throwable -> L12
            r0.sendBroadcast(r2)     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }
}
