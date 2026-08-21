package com.mbridge.msdk.mbjscommon.mraid;

public final class d {
    public static double a = -1.0d;
    private android.content.Context b;
    private android.media.AudioManager c;
    private boolean d;
    private com.mbridge.msdk.mbjscommon.mraid.d.b e;
    private com.mbridge.msdk.mbjscommon.mraid.d.a f;

    private static class a extends android.content.BroadcastReceiver {
        private java.lang.ref.WeakReference<com.mbridge.msdk.mbjscommon.mraid.d> a;

        public a(com.mbridge.msdk.mbjscommon.mraid.d r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public final void onReceive(android.content.Context r5, android.content.Intent r6) {
                r4 = this;
                java.lang.String r5 = r6.getAction()
                java.lang.String r0 = "android.media.VOLUME_CHANGED_ACTION"
                boolean r5 = r0.equals(r5)
                if (r5 == 0) goto L33
                r5 = -1
                java.lang.String r0 = "android.media.EXTRA_VOLUME_STREAM_TYPE"
                int r5 = r6.getIntExtra(r0, r5)
                r6 = 3
                if (r5 != r6) goto L33
                java.lang.ref.WeakReference<com.mbridge.msdk.mbjscommon.mraid.d> r5 = r4.a
                java.lang.Object r5 = r5.get()
                com.mbridge.msdk.mbjscommon.mraid.d r5 = (com.mbridge.msdk.mbjscommon.mraid.d) r5
                if (r5 == 0) goto L33
                com.mbridge.msdk.mbjscommon.mraid.d$b r6 = r5.b()
                if (r6 == 0) goto L33
                double r0 = r5.a()
                r2 = 0
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 < 0) goto L33
                r6.a(r0)
            L33:
                return
        }
    }

    public interface b {
        void a(double r1);
    }

    static {
            return
    }

    public d(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.b = r2
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r0 = "audio"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.media.AudioManager r2 = (android.media.AudioManager) r2
            r1.c = r2
            return
    }

    public final double a() {
            r5 = this;
            android.media.AudioManager r0 = r5.c
            r1 = 3
            r2 = -1
            if (r0 == 0) goto Lb
            int r0 = r0.getStreamMaxVolume(r1)
            goto Lc
        Lb:
            r0 = r2
        Lc:
            android.media.AudioManager r3 = r5.c
            if (r3 == 0) goto L14
            int r2 = r3.getStreamVolume(r1)
        L14:
            double r1 = (double) r2
            r3 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r1 = r1 * r3
            double r3 = (double) r0
            double r1 = r1 / r3
            com.mbridge.msdk.mbjscommon.mraid.d.a = r1
            return r1
    }

    public final void a(com.mbridge.msdk.mbjscommon.mraid.d.b r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final com.mbridge.msdk.mbjscommon.mraid.d.b b() {
            r1 = this;
            com.mbridge.msdk.mbjscommon.mraid.d$b r0 = r1.e
            return r0
    }

    public final void c() {
            r3 = this;
            android.content.Context r0 = r3.b
            if (r0 == 0) goto L1f
            com.mbridge.msdk.mbjscommon.mraid.d$a r0 = new com.mbridge.msdk.mbjscommon.mraid.d$a
            r0.<init>(r3)
            r3.f = r0
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "android.media.VOLUME_CHANGED_ACTION"
            r0.addAction(r1)
            android.content.Context r1 = r3.b
            com.mbridge.msdk.mbjscommon.mraid.d$a r2 = r3.f
            r1.registerReceiver(r2, r0)
            r0 = 1
            r3.d = r0
        L1f:
            return
    }

    public final void d() {
            r2 = this;
            boolean r0 = r2.d
            if (r0 == 0) goto L18
            android.content.Context r0 = r2.b
            if (r0 == 0) goto L18
            com.mbridge.msdk.mbjscommon.mraid.d$a r1 = r2.f     // Catch: java.lang.Exception -> L14
            r0.unregisterReceiver(r1)     // Catch: java.lang.Exception -> L14
            r0 = 0
            r2.e = r0     // Catch: java.lang.Exception -> L14
            r0 = 0
            r2.d = r0     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            return
    }
}
