package com.tkay.expressad.exoplayer.scheduler;

public final class b {
    private static final java.lang.String a = "RequirementsWatcher";
    private final android.content.Context b;
    private final com.tkay.expressad.exoplayer.scheduler.b.c c;
    private final com.tkay.expressad.exoplayer.scheduler.a d;
    private com.tkay.expressad.exoplayer.scheduler.b.b e;
    private boolean f;
    private com.tkay.expressad.exoplayer.scheduler.b.a g;

    static class 1 {
    }

    private final class a extends android.net.ConnectivityManager.NetworkCallback {
        final com.tkay.expressad.exoplayer.scheduler.b a;

        private a(com.tkay.expressad.exoplayer.scheduler.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.tkay.expressad.exoplayer.scheduler.b r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onAvailable(android.net.Network r2) {
                r1 = this;
                super.onAvailable(r2)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.tkay.expressad.exoplayer.scheduler.b r0 = r1.a
                r2.append(r0)
                java.lang.String r0 = " NetworkCallback.onAvailable"
                r2.append(r0)
                com.tkay.expressad.exoplayer.scheduler.b r2 = r1.a
                com.tkay.expressad.exoplayer.scheduler.b.a(r2)
                return
        }

        @Override
        public final void onLost(android.net.Network r2) {
                r1 = this;
                super.onLost(r2)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.tkay.expressad.exoplayer.scheduler.b r0 = r1.a
                r2.append(r0)
                java.lang.String r0 = " NetworkCallback.onLost"
                r2.append(r0)
                com.tkay.expressad.exoplayer.scheduler.b r2 = r1.a
                com.tkay.expressad.exoplayer.scheduler.b.a(r2)
                return
        }
    }

    private class b extends android.content.BroadcastReceiver {
        final com.tkay.expressad.exoplayer.scheduler.b a;

        private b(com.tkay.expressad.exoplayer.scheduler.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        b(com.tkay.expressad.exoplayer.scheduler.b r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                boolean r2 = r1.isInitialStickyBroadcast()
                if (r2 != 0) goto L21
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.tkay.expressad.exoplayer.scheduler.b r0 = r1.a
                r2.append(r0)
                java.lang.String r0 = " received "
                r2.append(r0)
                java.lang.String r3 = r3.getAction()
                r2.append(r3)
                com.tkay.expressad.exoplayer.scheduler.b r2 = r1.a
                com.tkay.expressad.exoplayer.scheduler.b.a(r2)
            L21:
                return
        }
    }

    public interface c {
        void a();

        void b();
    }

    private b(android.content.Context r1, com.tkay.expressad.exoplayer.scheduler.b.c r2, com.tkay.expressad.exoplayer.scheduler.a r3) {
            r0 = this;
            r0.<init>()
            r0.d = r3
            r0.c = r2
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r2 = " created"
            r1.append(r2)
            return
    }

    private void a() {
            r6 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            com.tkay.expressad.exoplayer.k.a.a(r0)
            r0 = 1
            r6.a(r0)
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            com.tkay.expressad.exoplayer.scheduler.a r1 = r6.d
            int r1 = r1.a()
            r2 = 0
            r3 = 23
            if (r1 == 0) goto L48
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            if (r1 < r3) goto L43
            android.content.Context r1 = r6.b
            java.lang.String r4 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r4)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            android.net.NetworkRequest$Builder r4 = new android.net.NetworkRequest$Builder
            r4.<init>()
            r5 = 16
            android.net.NetworkRequest$Builder r4 = r4.addCapability(r5)
            android.net.NetworkRequest r4 = r4.build()
            com.tkay.expressad.exoplayer.scheduler.b$a r5 = new com.tkay.expressad.exoplayer.scheduler.b$a
            r5.<init>(r6, r2)
            r6.g = r5
            r1.registerNetworkCallback(r4, r5)
            goto L48
        L43:
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r1)
        L48:
            com.tkay.expressad.exoplayer.scheduler.a r1 = r6.d
            boolean r1 = r1.b()
            if (r1 == 0) goto L5a
            java.lang.String r1 = "android.intent.action.ACTION_POWER_CONNECTED"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.ACTION_POWER_DISCONNECTED"
            r0.addAction(r1)
        L5a:
            com.tkay.expressad.exoplayer.scheduler.a r1 = r6.d
            boolean r1 = r1.c()
            if (r1 == 0) goto L76
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            if (r1 < r3) goto L6c
            java.lang.String r1 = "android.os.action.DEVICE_IDLE_MODE_CHANGED"
            r0.addAction(r1)
            goto L76
        L6c:
            java.lang.String r1 = "android.intent.action.SCREEN_ON"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.SCREEN_OFF"
            r0.addAction(r1)
        L76:
            com.tkay.expressad.exoplayer.scheduler.b$b r1 = new com.tkay.expressad.exoplayer.scheduler.b$b
            r1.<init>(r6, r2)
            r6.e = r1
            android.content.Context r2 = r6.b
            r3 = 0
            android.os.Handler r4 = new android.os.Handler
            r4.<init>()
            r2.registerReceiver(r1, r0, r3, r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r1 = " started"
            r0.append(r1)
            return
    }

    static void a(com.tkay.expressad.exoplayer.scheduler.b r1) {
            r0 = 0
            r1.a(r0)
            return
    }

    private void a(boolean r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.scheduler.a r0 = r2.d
            android.content.Context r1 = r2.b
            boolean r0 = r0.a(r1)
            if (r3 != 0) goto Lf
            boolean r3 = r2.f
            if (r0 != r3) goto Lf
            return
        Lf:
            r2.f = r0
            return
    }

    private void b() {
            r3 = this;
            android.content.Context r0 = r3.b
            com.tkay.expressad.exoplayer.scheduler.b$b r1 = r3.e
            r0.unregisterReceiver(r1)
            r0 = 0
            r3.e = r0
            com.tkay.expressad.exoplayer.scheduler.b$a r1 = r3.g
            if (r1 == 0) goto L25
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 21
            if (r1 < r2) goto L25
            android.content.Context r1 = r3.b
            java.lang.String r2 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r2)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            com.tkay.expressad.exoplayer.scheduler.b$a r2 = r3.g
            r1.unregisterNetworkCallback(r2)
            r3.g = r0
        L25:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r1 = " stopped"
            r0.append(r1)
            return
    }

    private com.tkay.expressad.exoplayer.scheduler.a c() {
            r1 = this;
            com.tkay.expressad.exoplayer.scheduler.a r0 = r1.d
            return r0
    }

    private void d() {
            r4 = this;
            android.content.Context r0 = r4.b
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            android.net.NetworkRequest$Builder r1 = new android.net.NetworkRequest$Builder
            r1.<init>()
            r2 = 16
            android.net.NetworkRequest$Builder r1 = r1.addCapability(r2)
            android.net.NetworkRequest r1 = r1.build()
            com.tkay.expressad.exoplayer.scheduler.b$a r2 = new com.tkay.expressad.exoplayer.scheduler.b$a
            r3 = 0
            r2.<init>(r4, r3)
            r4.g = r2
            r0.registerNetworkCallback(r1, r2)
            return
    }

    private void e() {
            r2 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 < r1) goto L18
            android.content.Context r0 = r2.b
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            com.tkay.expressad.exoplayer.scheduler.b$a r1 = r2.g
            r0.unregisterNetworkCallback(r1)
            r0 = 0
            r2.g = r0
        L18:
            return
    }

    private static void f() {
            return
    }

    private static void g() {
            return
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = super.toString()
            return r0
    }
}
