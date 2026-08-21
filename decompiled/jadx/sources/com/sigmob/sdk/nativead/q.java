package com.sigmob.sdk.nativead;

import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public class q implements p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private WeakReference<com.sigmob.sdk.videoplayer.g> f5115a;
    private h b;

    public q(com.sigmob.sdk.videoplayer.g gVar) {
        this.f5115a = new WeakReference<>(gVar);
    }

    private com.sigmob.sdk.videoplayer.g k() {
        return this.f5115a.get();
    }

    @Override // com.sigmob.sdk.nativead.p
    public void a() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.D();
        }
    }

    public void a(int i) {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.setHolderImageResource(i);
        }
    }

    @Override // com.sigmob.sdk.nativead.p
    public void a(h hVar) {
        this.b = hVar;
    }

    @Override // com.sigmob.sdk.nativead.p
    public void a(boolean z) {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.setSoundChange(z);
        }
    }

    @Override // com.sigmob.sdk.nativead.p
    public void b() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.C();
        }
    }

    @Override // com.sigmob.sdk.nativead.p
    public void c() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.C();
        }
    }

    @Override // com.sigmob.sdk.nativead.p
    public void d() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.E();
        }
    }

    @Override // com.sigmob.sdk.nativead.p
    public int e() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK == null || gVarK.getDuration() == 0) {
            return 0;
        }
        return (int) (gVarK.getDuration() / 1000);
    }

    @Override // com.sigmob.sdk.nativead.p
    public int f() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK == null || gVarK.getCurrentPositionWhenPlaying() == 0) {
            return 0;
        }
        return (int) ((gVarK.getCurrentPositionWhenPlaying() * 100) / gVarK.getDuration());
    }

    @Override // com.sigmob.sdk.nativead.p
    public h g() {
        return this.b;
    }

    @Override // com.sigmob.sdk.nativead.p
    public void h() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.d();
        }
    }

    @Override // com.sigmob.sdk.nativead.p
    public void i() {
        this.b = null;
    }

    @Override // com.sigmob.sdk.nativead.p
    public int j() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            return (int) (gVarK.getCurrentPositionWhenPlaying() / 1000);
        }
        return 0;
    }
}
