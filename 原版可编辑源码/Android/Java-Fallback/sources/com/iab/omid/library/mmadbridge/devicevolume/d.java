package com.iab.omid.library.mmadbridge.devicevolume;

public final class d extends android.database.ContentObserver {
    private final android.content.Context a;
    private final android.media.AudioManager b;
    private final com.iab.omid.library.mmadbridge.devicevolume.a c;
    private final com.iab.omid.library.mmadbridge.devicevolume.c d;
    private float e;

    public d(android.os.Handler r1, android.content.Context r2, com.iab.omid.library.mmadbridge.devicevolume.a r3, com.iab.omid.library.mmadbridge.devicevolume.c r4) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            java.lang.String r1 = "audio"
            java.lang.Object r1 = r2.getSystemService(r1)
            android.media.AudioManager r1 = (android.media.AudioManager) r1
            r0.b = r1
            r0.c = r3
            r0.d = r4
            return
    }

    private float a() {
            r3 = this;
            android.media.AudioManager r0 = r3.b
            r1 = 3
            int r0 = r0.getStreamVolume(r1)
            android.media.AudioManager r2 = r3.b
            int r1 = r2.getStreamMaxVolume(r1)
            com.iab.omid.library.mmadbridge.devicevolume.a r2 = r3.c
            float r0 = r2.a(r0, r1)
            return r0
    }

    private boolean a(float r2) {
            r1 = this;
            float r0 = r1.e
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 == 0) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            return r2
    }

    private void b() {
            r2 = this;
            com.iab.omid.library.mmadbridge.devicevolume.c r0 = r2.d
            float r1 = r2.e
            r0.a(r1)
            return
    }

    public void c() {
            r3 = this;
            float r0 = r3.a()
            r3.e = r0
            r3.b()
            android.content.Context r0 = r3.a
            android.content.ContentResolver r0 = r0.getContentResolver()
            android.net.Uri r1 = android.provider.Settings.System.CONTENT_URI
            r2 = 1
            r0.registerContentObserver(r1, r2, r3)
            return
    }

    public void d() {
            r1 = this;
            android.content.Context r0 = r1.a
            android.content.ContentResolver r0 = r0.getContentResolver()
            r0.unregisterContentObserver(r1)
            return
    }

    @Override
    public void onChange(boolean r2) {
            r1 = this;
            super.onChange(r2)
            float r2 = r1.a()
            boolean r0 = r1.a(r2)
            if (r0 == 0) goto L12
            r1.e = r2
            r1.b()
        L12:
            return
    }
}
