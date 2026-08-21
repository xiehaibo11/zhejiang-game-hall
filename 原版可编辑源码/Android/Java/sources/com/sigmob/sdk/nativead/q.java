package com.sigmob.sdk.nativead;

import java.lang.ref.WeakReference;

public class q implements p {
    private WeakReference<com.sigmob.sdk.videoplayer.g> a;
    private h b;

    public q(com.sigmob.sdk.videoplayer.g gVar) {
        this.a = new WeakReference<>(gVar);
    }

    private com.sigmob.sdk.videoplayer.g k() {
        return this.a.get();
    }

    @Override
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

    @Override
    public void a(h hVar) {
        this.b = hVar;
    }

    @Override
    public void a(boolean z) {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.setSoundChange(z);
        }
    }

    @Override
    public void b() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.C();
        }
    }

    @Override
    public void c() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.C();
        }
    }

    @Override
    public void d() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.E();
        }
    }

    @Override
    public int e() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK == null || gVarK.getDuration() == 0) {
            return 0;
        }
        return (int) (gVarK.getDuration() / 1000);
    }

    @Override
    public int f() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK == null || gVarK.getCurrentPositionWhenPlaying() == 0) {
            return 0;
        }
        return (int) ((gVarK.getCurrentPositionWhenPlaying() * 100) / gVarK.getDuration());
    }

    @Override
    public h g() {
        return this.b;
    }

    @Override
    public void h() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            gVarK.d();
        }
    }

    @Override
    public void i() {
        this.b = null;
    }

    @Override
    public int j() {
        com.sigmob.sdk.videoplayer.g gVarK = k();
        if (gVarK != null) {
            return (int) (gVarK.getCurrentPositionWhenPlaying() / 1000);
        }
        return 0;
    }
}
