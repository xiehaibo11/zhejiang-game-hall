package com.loc;

public final class ai {
    public static final java.lang.String a = null;
    private static com.loc.ai f;
    private java.util.List<java.lang.String> b;
    private java.lang.String c;
    private final android.content.Context d;
    private final android.os.Handler e;


    private static final class a extends android.os.Handler {
        private final java.lang.ref.WeakReference<com.loc.ai> a;

        a(android.os.Looper r1, com.loc.ai r2) {
                r0 = this;
                r0.<init>(r1)
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r2)
                r0.a = r1
                return
        }

        a(com.loc.ai r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public final void handleMessage(android.os.Message r3) {
                r2 = this;
                java.lang.ref.WeakReference<com.loc.ai> r0 = r2.a
                java.lang.Object r0 = r0.get()
                com.loc.ai r0 = (com.loc.ai) r0
                if (r0 != 0) goto Lb
                return
            Lb:
                if (r3 == 0) goto L1b
                java.lang.Object r1 = r3.obj
                if (r1 != 0) goto L12
                goto L1b
            L12:
                java.lang.Object r1 = r3.obj
                java.lang.String r1 = (java.lang.String) r1
                int r3 = r3.what
                com.loc.ai.a(r0, r1, r3)
            L1b:
                return
        }
    }

    static {
            java.lang.String r0 = "SU2hhcmVkUHJlZmVyZW5jZUFkaXU"
            java.lang.String r0 = com.loc.x.c(r0)
            com.loc.ai.a = r0
            return
    }

    private ai(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            android.content.Context r2 = r2.getApplicationContext()
            r1.d = r2
            android.os.Looper r2 = android.os.Looper.myLooper()
            if (r2 != 0) goto L1b
            com.loc.ai$a r2 = new com.loc.ai$a
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0, r1)
        L18:
            r1.e = r2
            return
        L1b:
            com.loc.ai$a r2 = new com.loc.ai$a
            r2.<init>(r1)
            goto L18
    }

    static android.content.Context a(com.loc.ai r0) {
            android.content.Context r0 = r0.d
            return r0
    }

    public static com.loc.ai a(android.content.Context r2) {
            com.loc.ai r0 = com.loc.ai.f
            if (r0 != 0) goto L17
            java.lang.Class<com.loc.ai> r0 = com.loc.ai.class
            monitor-enter(r0)
            com.loc.ai r1 = com.loc.ai.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.loc.ai r1 = new com.loc.ai     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.loc.ai.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.loc.ai r2 = com.loc.ai.f
            return r2
    }

    static void a(com.loc.ai r0, java.lang.String r1, int r2) {
            r0.a(r1, r2)
            return
    }

    private synchronized void a(java.lang.String r3, int r4) {
            r2 = this;
            monitor-enter(r2)
            android.os.Looper r0 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L70
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L70
            if (r0 != r1) goto L15
            com.loc.ai$1 r0 = new com.loc.ai$1     // Catch: java.lang.Throwable -> L70
            r0.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L70
            r0.start()     // Catch: java.lang.Throwable -> L70
            monitor-exit(r2)
            return
        L15:
            java.lang.String r3 = com.loc.ao.b(r3)     // Catch: java.lang.Throwable -> L70
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L70
            if (r0 != 0) goto L6e
            r0 = r4 & 1
            if (r0 <= 0) goto L3f
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L70
            r1 = 23
            if (r0 < r1) goto L35
            android.content.Context r0 = r2.d     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L70
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L70
            java.lang.String r1 = r2.c     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L70
        L31:
            android.provider.Settings.System.putString(r0, r1, r3)     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L70
            goto L3f
        L35:
            android.content.Context r0 = r2.d     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L70
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L70
            java.lang.String r1 = r2.c     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L70
            goto L31
        L3e:
        L3f:
            r0 = r4 & 16
            if (r0 <= 0) goto L4a
            android.content.Context r0 = r2.d     // Catch: java.lang.Throwable -> L70
            java.lang.String r1 = r2.c     // Catch: java.lang.Throwable -> L70
            com.loc.ak.a(r0, r1, r3)     // Catch: java.lang.Throwable -> L70
        L4a:
            r4 = r4 & 256(0x100, float:3.59E-43)
            if (r4 <= 0) goto L6e
            android.content.Context r4 = r2.d     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = com.loc.ai.a     // Catch: java.lang.Throwable -> L70
            r1 = 0
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> L70
            android.content.SharedPreferences$Editor r4 = r4.edit()     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = r2.c     // Catch: java.lang.Throwable -> L70
            r4.putString(r0, r3)     // Catch: java.lang.Throwable -> L70
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L70
            r0 = 9
            if (r3 < r0) goto L6b
            r4.apply()     // Catch: java.lang.Throwable -> L70
            monitor-exit(r2)
            return
        L6b:
            r4.commit()     // Catch: java.lang.Throwable -> L70
        L6e:
            monitor-exit(r2)
            return
        L70:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    static java.lang.String b(com.loc.ai r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void b(java.lang.String r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.b
            if (r0 == 0) goto Lc
            r0.clear()
            java.util.List<java.lang.String> r0 = r1.b
            r0.add(r2)
        Lc:
            r0 = 273(0x111, float:3.83E-43)
            r1.a(r2, r0)
            return
    }
}
