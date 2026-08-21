package com.kwad.components.core.offline.init.a;

final class d implements com.kwad.components.offline.api.core.api.IEnvironment {
    d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void addOnAudioConflictListener(android.content.Context r1, com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r2) {
            r0 = this;
            if (r1 == 0) goto Lc
            if (r2 != 0) goto L5
            goto Lc
        L5:
            com.kwad.components.core.t.a r1 = com.kwad.components.core.t.a.al(r1)
            r1.a(r2)
        Lc:
            return
    }

    @Override
    public final java.lang.String getAppId() {
            r1 = this;
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            java.lang.String r0 = r0.getAppId()
            return r0
    }

    @Override
    public final java.lang.String getAppVersion() {
            r1 = this;
            java.lang.String r0 = "3.3.42"
            return r0
    }

    @Override
    public final java.lang.String getBiz() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.i.agZ
            return r0
    }

    @Override
    public final android.content.Context getContext() {
            r1 = this;
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            return r0
    }

    @Override
    public final java.lang.String getDeviceId() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.utils.be.getDeviceId()
            return r0
    }

    @Override
    public final java.lang.String getKpf() {
            r1 = this;
            java.lang.String r0 = "ANDROID_PHONE"
            return r0
    }

    @Override
    public final java.lang.String getKpn() {
            r1 = this;
            java.lang.String r0 = "kseulivesdk"
            return r0
    }

    @Override
    public final double getLatitude(android.content.Context r3) {
            r2 = this;
            android.location.Location r3 = com.kwad.sdk.utils.au.bU(r3)
            if (r3 == 0) goto Lb
            double r0 = r3.getLatitude()
            goto Ld
        Lb:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public final double getLongitude(android.content.Context r3) {
            r2 = this;
            android.location.Location r3 = com.kwad.sdk.utils.au.bU(r3)
            if (r3 == 0) goto Lb
            double r0 = r3.getLongitude()
            goto Ld
        Lb:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public final java.lang.String getOperator(android.content.Context r1) {
            r0 = this;
            int r1 = com.kwad.sdk.utils.ag.cj(r1)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            return r1
    }

    @Override
    public final java.lang.String getOsVersion() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.utils.be.getOsVersion()
            return r0
    }

    @Override
    public final java.lang.String getProcessName(android.content.Context r1) {
            r0 = this;
            java.lang.String r1 = com.kwad.sdk.utils.SystemUtil.getProcessName(r1)
            return r1
    }

    @Override
    public final java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "3.3.42"
            return r0
    }

    @Override
    public final int getStatusBarHeight(android.content.Context r1) {
            r0 = this;
            int r1 = com.kwad.sdk.d.a.a.getStatusBarHeight(r1)
            return r1
    }

    @Override
    public final java.lang.String getUserAgent() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.core.network.q.getUserAgent()
            return r0
    }

    @Override
    public final boolean isArm64(android.content.Context r1) {
            r0 = this;
            boolean r1 = com.kwad.sdk.utils.AbiUtil.isArm64(r1)
            return r1
    }

    @Override
    public final boolean isDebug() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final boolean isDevelopEnable() {
            r1 = this;
            java.lang.Boolean r0 = com.kwad.components.core.a.ml
            boolean r0 = r0.booleanValue()
            return r0
    }

    @Override
    public final boolean isInMainProcess(android.content.Context r1) {
            r0 = this;
            boolean r1 = com.kwad.sdk.utils.SystemUtil.isInMainProcess(r1)
            return r1
    }

    @Override
    public final java.lang.String localIpAddress() {
            r1 = this;
            java.lang.Boolean r0 = com.kwad.components.core.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Ld
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
        Ld:
            java.lang.String r0 = "10.244.113.101"
            return r0
    }

    @Override
    public final void removeOnAudioConflictListener(android.content.Context r1, com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r2) {
            r0 = this;
            if (r1 == 0) goto Lc
            if (r2 != 0) goto L5
            goto Lc
        L5:
            com.kwad.components.core.t.a r1 = com.kwad.components.core.t.a.al(r1)
            r1.b(r2)
        Lc:
            return
    }

    @Override
    public final boolean requestAudioFocus(android.content.Context r1, boolean r2) {
            r0 = this;
            com.kwad.components.core.t.a r1 = com.kwad.components.core.t.a.al(r1)
            boolean r1 = r1.aJ(r2)
            return r1
    }
}
