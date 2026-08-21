package com.kwad.sdk.utils;

import com.kwad.sdk.service.ServiceProvider;
import com.tencent.mm.opensdk.constants.ConstantsAPI;

public final class o {
    private static boolean aIk;
    private static boolean aIl;

    public static boolean HX() {
        return (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(2L)) & aIk;
    }

    public static boolean HY() {
        return (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(4L)) & aIk;
    }

    public static boolean HZ() {
        return ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xv() && aIk;
    }

    public static boolean Ia() {
        return (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(16L)) & aIk;
    }

    public static boolean Ib() {
        return (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_PDF)) & aIk;
    }

    public static boolean Ic() {
        return (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(1L)) & aIk;
    }

    public static boolean Id() {
        return (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(128L)) & aIk;
    }

    public static boolean Ie() {
        return (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(128L)) & aIk;
    }

    public static synchronized void bE(boolean z) {
        if (aIl) {
            return;
        }
        aIl = true;
        aIk = true;
        ((com.kwad.sdk.service.a.b) ServiceProvider.get(com.kwad.sdk.service.a.b.class)).xq();
    }
}
