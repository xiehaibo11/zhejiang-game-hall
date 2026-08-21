package com.tramini.plugin.a.a;

public class b {
    private static volatile com.tramini.plugin.a.a.b b;
    android.content.Context a;

    private b(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.tramini.plugin.a.a.b a(android.content.Context r2) {
            com.tramini.plugin.a.a.b r0 = com.tramini.plugin.a.a.b.b
            if (r0 != 0) goto L1b
            java.lang.Class<com.tramini.plugin.a.a.b> r0 = com.tramini.plugin.a.a.b.class
            monitor-enter(r0)
            com.tramini.plugin.a.a.b r1 = com.tramini.plugin.a.a.b.b     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.tramini.plugin.a.a.b r1 = new com.tramini.plugin.a.a.b     // Catch: java.lang.Throwable -> L18
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.tramini.plugin.a.a.b.b = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L1b:
            com.tramini.plugin.a.a.b r2 = com.tramini.plugin.a.a.b.b
            return r2
    }

    private void a(android.content.Intent r2) {
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
}
