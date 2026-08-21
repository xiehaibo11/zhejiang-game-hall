package com.kwad.components.core.c;

import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.utils.v;

public final class b {
    private static void af(String str) {
        if (!mi() || KsAdSDKImpl.get() == null || KsAdSDKImpl.get().getContext() == null) {
            return;
        }
        v.L(KsAdSDKImpl.get().getContext(), str);
    }

    public static void b(e eVar) {
        af("使用缓存策略: " + eVar.mq());
    }

    public static boolean mi() {
        return false;
    }
}
