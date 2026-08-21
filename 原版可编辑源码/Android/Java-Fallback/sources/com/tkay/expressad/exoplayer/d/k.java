package com.tkay.expressad.exoplayer.d;

public final class k implements com.tkay.expressad.exoplayer.d.i {
    private final android.media.MediaCrypto a;
    private final boolean b;

    private k(android.media.MediaCrypto r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public k(android.media.MediaCrypto r1, boolean r2) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
            android.media.MediaCrypto r1 = (android.media.MediaCrypto) r1
            r0.a = r1
            r0.b = r2
            return
    }

    public final android.media.MediaCrypto a() {
            r1 = this;
            android.media.MediaCrypto r0 = r1.a
            return r0
    }

    @Override
    public final boolean a(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.b
            if (r0 != 0) goto Le
            android.media.MediaCrypto r0 = r1.a
            boolean r2 = r0.requiresSecureDecoderComponent(r2)
            if (r2 == 0) goto Le
            r2 = 1
            return r2
        Le:
            r2 = 0
            return r2
    }
}
