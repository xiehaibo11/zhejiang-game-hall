package com.tkay.expressad.exoplayer.d;

import android.media.MediaCrypto;

/* JADX INFO: loaded from: classes3.dex */
public final class k implements i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final MediaCrypto f6541a;
    private final boolean b;

    private k(MediaCrypto mediaCrypto) {
        this(mediaCrypto, false);
    }

    public k(MediaCrypto mediaCrypto, boolean z) {
        this.f6541a = (MediaCrypto) com.tkay.expressad.exoplayer.k.a.a(mediaCrypto);
        this.b = z;
    }

    public final MediaCrypto a() {
        return this.f6541a;
    }

    @Override // com.tkay.expressad.exoplayer.d.i
    public final boolean a(String str) {
        return !this.b && this.f6541a.requiresSecureDecoderComponent(str);
    }
}
