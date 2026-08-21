package com.kwad.sdk;

import com.kwad.sdk.components.DevelopMangerComponents;
import com.kwad.sdk.export.proxy.AdHttpProxy;
import java.util.Random;

/* JADX INFO: loaded from: classes2.dex */
public final class g {
    private static AdHttpProxy agW;

    public static AdHttpProxy wX() {
        AdHttpProxy adHttpProxy = agW;
        if (adHttpProxy != null) {
            return adHttpProxy;
        }
        if (com.kwad.framework.a.a.ml.booleanValue()) {
            return wY();
        }
        try {
            agW = com.kwad.sdk.core.network.a.c.Bm() != null ? new com.kwad.sdk.core.network.c.b() : new com.kwad.sdk.core.network.c.a();
        } catch (Throwable unused) {
            agW = new com.kwad.sdk.core.network.c.a();
        }
        return agW;
    }

    private static AdHttpProxy wY() {
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        return new Random().nextInt(5) != 0 ? new com.kwad.sdk.core.network.c.b() : new com.kwad.sdk.core.network.c.a();
    }
}
