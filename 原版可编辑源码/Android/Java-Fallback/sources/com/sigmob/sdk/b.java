package com.sigmob.sdk;

public class b {
    private static java.lang.ref.WeakReference<android.app.Activity> a;
    private static android.content.Context b;
    private static com.sigmob.sdk.b.a c;


    private static class a implements com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener {
        private java.lang.String a;
        private long b;
        private java.util.Map<java.lang.String, java.lang.String> c;
        private java.lang.String d;
        private int e;
        private boolean f;
        private boolean g;
        private boolean h;

        a() {
                r4 = this;
                r4.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r4.c = r0
                r0 = 1
                r4.f = r0
                r0 = 0
                r4.g = r0
                r4.h = r0
                com.czhj.sdk.common.utils.AdLifecycleManager r0 = com.czhj.sdk.common.utils.AdLifecycleManager.getInstance()
                android.app.Application r1 = com.sigmob.sdk.b.d()
                r0.initialize(r1)
                long r0 = java.lang.System.currentTimeMillis()
                r4.b = r0
                java.util.UUID r0 = java.util.UUID.randomUUID()
                java.lang.String r0 = r0.toString()
                r4.a = r0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "session_start: "
                r0.append(r1)
                long r1 = r4.b
                r0.append(r1)
                java.lang.String r1 = ":"
                r0.append(r1)
                java.lang.String r1 = r4.a
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.czhj.sdk.logger.SigmobLog.i(r0)
                java.lang.String r0 = r4.a
                long r1 = r4.b
                java.lang.String r1 = java.lang.String.valueOf(r1)
                java.lang.String r2 = "session_start"
                java.lang.String r3 = "0"
                com.sigmob.sdk.base.mta.PointEntityActive.ActiveTracking(r2, r0, r3, r1)
                com.czhj.sdk.common.utils.AdLifecycleManager r0 = com.czhj.sdk.common.utils.AdLifecycleManager.getInstance()
                r0.addLifecycleListener(r4)
                return
        }

        public int a() {
                r1 = this;
                int r0 = r1.e
                return r0
        }

        public void a(android.app.Activity r1) {
                r0 = this;
                return
        }

        public void a(android.app.Activity r1, int r2, int r3, android.content.Intent r4) {
                r0 = this;
                return
        }

        public void b(android.app.Activity r1) {
                r0 = this;
                return
        }

        @Override
        public void onCreate(android.app.Activity r2) {
                r1 = this;
                java.lang.Class r2 = r2.getClass()
                java.lang.String r2 = r2.getSimpleName()
                r1.d = r2
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.c
                r0.put(r2, r2)
                r2 = 1
                r1.f = r2
                r2 = 0
                r1.g = r2
                return
        }

        @Override
        public void onDestroy(android.app.Activity r7) {
                r6 = this;
                java.util.Map<java.lang.String, java.lang.String> r0 = r6.c
                java.lang.Class r7 = r7.getClass()
                java.lang.String r7 = r7.getSimpleName()
                r0.remove(r7)
                java.util.Map<java.lang.String, java.lang.String> r7 = r6.c
                int r7 = r7.size()
                if (r7 != 0) goto L60
                boolean r7 = r6.f
                if (r7 == 0) goto L60
                long r0 = java.lang.System.currentTimeMillis()
                long r2 = r6.b
                long r2 = r0 - r2
                r4 = 1000(0x3e8, double:4.94E-321)
                long r2 = r2 / r4
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                java.lang.String r4 = "onActivityDestroyed session_end: "
                r7.append(r4)
                r7.append(r0)
                java.lang.String r4 = ":"
                r7.append(r4)
                java.lang.String r5 = r6.a
                r7.append(r5)
                r7.append(r4)
                r7.append(r2)
                java.lang.String r7 = r7.toString()
                com.czhj.sdk.logger.SigmobLog.i(r7)
                java.lang.String r7 = r6.a
                java.lang.String r2 = java.lang.String.valueOf(r2)
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "session_end"
                com.sigmob.sdk.base.mta.PointEntityActive.ActiveTracking(r1, r7, r2, r0)
                long r0 = java.lang.System.currentTimeMillis()
                r6.b = r0
                r7 = 0
                r6.f = r7
            L60:
                java.util.Map<java.lang.String, java.lang.String> r7 = r6.c
                int r7 = r7.size()
                if (r7 != 0) goto L6b
                r7 = 1
                r6.h = r7
            L6b:
                return
        }

        @Override
        public void onPause(android.app.Activity r1) {
                r0 = this;
                return
        }

        @Override
        public void onResume(android.app.Activity r5) {
                r4 = this;
                java.lang.Class r0 = r5.getClass()
                java.lang.String r0 = r0.getSimpleName()
                java.lang.String r1 = r4.d
                boolean r0 = r0.equals(r1)
                r1 = 1
                r0 = r0 ^ r1
                r4.g = r0
                java.lang.Class r0 = r5.getClass()
                java.lang.String r0 = r0.getSimpleName()
                r4.d = r0
                boolean r0 = r4.g
                if (r0 == 0) goto L28
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r5)
                com.sigmob.sdk.b.a(r0)
            L28:
                boolean r5 = r4.f
                if (r5 == 0) goto L30
                boolean r5 = r4.h
                if (r5 == 0) goto L74
            L30:
                r5 = 0
                r4.h = r5
                java.util.UUID r5 = java.util.UUID.randomUUID()
                java.lang.String r5 = r5.toString()
                r4.a = r5
                long r2 = java.lang.System.currentTimeMillis()
                r4.b = r2
                r4.f = r1
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r0 = "onActivityResumed session_start: "
                r5.append(r0)
                long r0 = r4.b
                r5.append(r0)
                java.lang.String r0 = ":"
                r5.append(r0)
                java.lang.String r0 = r4.a
                r5.append(r0)
                java.lang.String r5 = r5.toString()
                com.czhj.sdk.logger.SigmobLog.i(r5)
                java.lang.String r5 = r4.a
                long r0 = r4.b
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "session_start"
                java.lang.String r2 = "0"
                com.sigmob.sdk.base.mta.PointEntityActive.ActiveTracking(r1, r5, r2, r0)
            L74:
                return
        }

        @Override
        public void onStart(android.app.Activity r1) {
                r0 = this;
                int r1 = r0.e
                int r1 = r1 + 1
                r0.e = r1
                return
        }

        @Override
        public void onStop(android.app.Activity r7) {
                r6 = this;
                int r0 = r6.e
                r1 = 1
                int r0 = r0 - r1
                r6.e = r0
                java.lang.Class r7 = r7.getClass()
                java.lang.String r7 = r7.getSimpleName()
                java.lang.String r0 = r6.d
                boolean r7 = r7.equals(r0)
                if (r7 == 0) goto L69
                boolean r7 = r6.g
                if (r7 == 0) goto L22
                java.util.Map<java.lang.String, java.lang.String> r7 = r6.c
                int r7 = r7.size()
                if (r7 != r1) goto L69
            L22:
                long r0 = java.lang.System.currentTimeMillis()
                long r2 = r6.b
                long r2 = r0 - r2
                r4 = 1000(0x3e8, double:4.94E-321)
                long r2 = r2 / r4
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                java.lang.String r4 = "onActivityStopped session_end: "
                r7.append(r4)
                r7.append(r0)
                java.lang.String r4 = ":"
                r7.append(r4)
                java.lang.String r5 = r6.a
                r7.append(r5)
                r7.append(r4)
                r7.append(r2)
                java.lang.String r7 = r7.toString()
                com.czhj.sdk.logger.SigmobLog.i(r7)
                java.lang.String r7 = r6.a
                java.lang.String r2 = java.lang.String.valueOf(r2)
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "session_end"
                com.sigmob.sdk.base.mta.PointEntityActive.ActiveTracking(r1, r7, r2, r0)
                long r0 = java.lang.System.currentTimeMillis()
                r6.b = r0
                r7 = 0
                r6.f = r7
            L69:
                return
        }
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.ref.WeakReference a(java.lang.ref.WeakReference r0) {
            com.sigmob.sdk.b.a = r0
            return r0
    }

    public static void a() {
            com.sigmob.sdk.b$a r0 = com.sigmob.sdk.b.c
            if (r0 != 0) goto Lb
            com.sigmob.sdk.b$a r0 = new com.sigmob.sdk.b$a
            r0.<init>()
            com.sigmob.sdk.b.c = r0
        Lb:
            return
    }

    public static void a(android.content.Context r3) {
            android.content.Context r0 = com.sigmob.sdk.b.b
            if (r0 != 0) goto L4a
            android.content.Context r0 = r3.getApplicationContext()
            com.sigmob.sdk.b.b = r0
            java.lang.String r1 = "wind"
            com.sigmob.sdk.base.utils.b.a(r0, r1)
            android.content.Context r0 = com.sigmob.sdk.b.b
            b(r0)
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            r0.e()
            android.content.Context r0 = com.sigmob.sdk.b.b
            com.sigmob.sdk.base.db.a.a(r0)
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.sharedAds()
            com.sigmob.windad.WindAdOptions r0 = r0.getOptions()
            if (r0 == 0) goto L43
            com.sigmob.windad.WindCustomController r1 = r0.getCustomController()
            if (r1 == 0) goto L43
            com.sigmob.windad.WindCustomController r3 = r0.getCustomController()
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.content.Context r1 = com.sigmob.sdk.b.b
            com.sigmob.sdk.b$1 r2 = new com.sigmob.sdk.b$1
            r2.<init>(r3)
            r0.initializeWithController(r1, r2)
            goto L4a
        L43:
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            r0.initialize(r3)
        L4a:
            return
    }

    public static android.content.Context b() {
            android.content.Context r0 = com.sigmob.sdk.b.b
            return r0
    }

    private static void b(android.content.Context r1) {
            java.lang.String r0 = com.sigmob.sdk.base.i.c()
            com.czhj.sdk.common.network.Networking.AddSigmobServerURL(r0)
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            java.lang.String r0 = r0.l()
            com.czhj.sdk.common.network.Networking.AddSigmobServerURL(r0)
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            java.lang.String r0 = r0.m()
            com.czhj.sdk.common.network.Networking.AddSigmobServerURL(r0)
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            java.lang.String r0 = r0.k()
            com.czhj.sdk.common.network.Networking.AddSigmobServerURL(r0)
            com.czhj.sdk.common.network.Networking.initialize(r1)
            return
    }

    public static boolean c() {
            android.content.Context r0 = com.sigmob.sdk.b.b
            r1 = 0
            if (r0 == 0) goto L1b
            android.content.Context r0 = b()
            java.lang.String r2 = "audio"
            java.lang.Object r0 = r0.getSystemService(r2)
            android.media.AudioManager r0 = (android.media.AudioManager) r0
            if (r0 == 0) goto L1b
            r2 = 3
            int r0 = r0.getStreamVolume(r2)
            if (r0 != 0) goto L1b
            r1 = 1
        L1b:
            return r1
    }

    public static android.app.Application d() {
            android.content.Context r0 = com.sigmob.sdk.b.b
            boolean r1 = r0 instanceof android.app.Application
            if (r1 == 0) goto L9
            android.app.Application r0 = (android.app.Application) r0
            return r0
        L9:
            r0 = 0
            return r0
    }

    public static android.app.Activity e() {
            java.lang.ref.WeakReference<android.app.Activity> r0 = com.sigmob.sdk.b.a
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }
}
