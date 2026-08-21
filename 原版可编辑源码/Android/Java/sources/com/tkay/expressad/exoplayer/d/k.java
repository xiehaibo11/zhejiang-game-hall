package com.tkay.expressad.exoplayer.d;

import android.media.MediaCrypto;

public final class k implements i {
    private final MediaCrypto a;
    private final boolean b;

    private k(MediaCrypto mediaCrypto) {
        this(mediaCrypto, false);
    }

    public k(MediaCrypto mediaCrypto, boolean z) {
        this.a = (MediaCrypto) com.tkay.expressad.exoplayer.k.a.a(mediaCrypto);
        this.b = z;
    }

    public final MediaCrypto a() {
        return this.a;
    }

    @Override
    public final boolean a(String str) {
        return !this.b && this.a.requiresSecureDecoderComponent(str);
    }
}
