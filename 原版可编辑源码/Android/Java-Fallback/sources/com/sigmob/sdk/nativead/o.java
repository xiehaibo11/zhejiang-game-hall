package com.sigmob.sdk.nativead;

public class o extends com.sigmob.sdk.nativead.i {
    com.sigmob.sdk.nativead.x g;

    public o(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public void a(com.sigmob.sdk.nativead.x r1) {
            r0 = this;
            r0.g = r1
            return
    }

    @Override
    public void c() {
            r1 = this;
            super.c()
            r0 = 0
            r1.g = r0
            return
    }

    public void e() {
            r0 = this;
            return
    }

    public com.sigmob.sdk.nativead.b getAdConfig() {
            r1 = this;
            com.sigmob.sdk.nativead.x r0 = r1.g
            if (r0 == 0) goto L9
            com.sigmob.sdk.nativead.b r0 = r0.x()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public com.sigmob.sdk.base.models.BaseAdUnit getAdUnit() {
            r1 = this;
            com.sigmob.sdk.nativead.x r0 = r1.g
            if (r0 == 0) goto L9
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.k()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public com.sigmob.sdk.nativead.j getAppInfoView() {
            r1 = this;
            com.sigmob.sdk.nativead.x r0 = r1.g
            if (r0 == 0) goto L9
            com.sigmob.sdk.nativead.j r0 = r0.m()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public com.sigmob.windad.natives.WindNativeAdData getNativeAdUnit() {
            r1 = this;
            com.sigmob.sdk.nativead.x r0 = r1.g
            if (r0 == 0) goto L9
            com.sigmob.windad.natives.WindNativeAdData r0 = r0.l()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public double getVideoDuration() {
            r2 = this;
            r0 = 0
            return r0
    }

    public double getVideoProgress() {
            r2 = this;
            r0 = 0
            return r0
    }

    public void i() {
            r0 = this;
            return
    }

    public void j() {
            r0 = this;
            return
    }

    public void setUIStyle(com.sigmob.sdk.nativead.f r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
