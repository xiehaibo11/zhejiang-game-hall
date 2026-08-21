package com.tkay.expressad.exoplayer.b;

public final class d {
    com.tkay.expressad.exoplayer.b.c a;
    private final android.content.Context b;
    private final com.tkay.expressad.exoplayer.b.d.b c;
    private final android.content.BroadcastReceiver d;

    static class 1 {
    }

    private final class a extends android.content.BroadcastReceiver {
        final com.tkay.expressad.exoplayer.b.d a;

        private a(com.tkay.expressad.exoplayer.b.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.tkay.expressad.exoplayer.b.d r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onReceive(android.content.Context r1, android.content.Intent r2) {
                r0 = this;
                boolean r1 = r0.isInitialStickyBroadcast()
                if (r1 != 0) goto L1d
                com.tkay.expressad.exoplayer.b.c r1 = com.tkay.expressad.exoplayer.b.c.a(r2)
                com.tkay.expressad.exoplayer.b.d r2 = r0.a
                com.tkay.expressad.exoplayer.b.c r2 = r2.a
                boolean r2 = r1.equals(r2)
                if (r2 != 0) goto L1d
                com.tkay.expressad.exoplayer.b.d r2 = r0.a
                r2.a = r1
                com.tkay.expressad.exoplayer.b.d r1 = r0.a
                com.tkay.expressad.exoplayer.b.d.a(r1)
            L1d:
                return
        }
    }

    public interface b {
        void a();
    }

    private d(android.content.Context r1, com.tkay.expressad.exoplayer.b.d.b r2) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
            android.content.Context r1 = (android.content.Context) r1
            r0.b = r1
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.b.d$b r1 = (com.tkay.expressad.exoplayer.b.d.b) r1
            r0.c = r1
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 21
            if (r1 < r2) goto L20
            com.tkay.expressad.exoplayer.b.d$a r1 = new com.tkay.expressad.exoplayer.b.d$a
            r2 = 0
            r1.<init>(r0, r2)
            goto L21
        L20:
            r1 = 0
        L21:
            r0.d = r1
            return
    }

    private com.tkay.expressad.exoplayer.b.c a() {
            r4 = this;
            android.content.BroadcastReceiver r0 = r4.d
            if (r0 != 0) goto L6
            r0 = 0
            goto L13
        L6:
            android.content.Context r1 = r4.b
            android.content.IntentFilter r2 = new android.content.IntentFilter
            java.lang.String r3 = "android.media.action.HDMI_AUDIO_PLUG"
            r2.<init>(r3)
            android.content.Intent r0 = r1.registerReceiver(r0, r2)
        L13:
            com.tkay.expressad.exoplayer.b.c r0 = com.tkay.expressad.exoplayer.b.c.a(r0)
            r4.a = r0
            return r0
    }

    static com.tkay.expressad.exoplayer.b.d.b a(com.tkay.expressad.exoplayer.b.d r0) {
            com.tkay.expressad.exoplayer.b.d$b r0 = r0.c
            return r0
    }

    private void b() {
            r2 = this;
            android.content.BroadcastReceiver r0 = r2.d
            if (r0 == 0) goto L9
            android.content.Context r1 = r2.b
            r1.unregisterReceiver(r0)
        L9:
            return
    }
}
