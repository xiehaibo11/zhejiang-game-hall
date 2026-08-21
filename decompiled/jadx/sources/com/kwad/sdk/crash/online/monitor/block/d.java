package com.kwad.sdk.crash.online.monitor.block;

import java.util.Random;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    private static com.kwad.sdk.crash.online.monitor.a.a aAO;

    public static com.kwad.sdk.crash.online.monitor.a.a EY() {
        return aAO;
    }

    public static boolean EZ() {
        com.kwad.sdk.crash.online.monitor.a.a aVar = aAO;
        return aVar != null && aVar.Fc();
    }

    public static void d(com.kwad.sdk.crash.online.monitor.a.a aVar) {
        if (aVar == null) {
            return;
        }
        try {
            if (aVar.Ff()) {
                com.kwad.sdk.core.e.c.d("perfMonitor.BlockManager", "allFuncDisable");
                return;
            }
            if (!a.EW()) {
                com.kwad.sdk.core.e.c.d("perfMonitor.BlockManager", "!hasBlockMonitor");
                return;
            }
            a.a(aVar);
            aAO = aVar;
            boolean zBq = a.bq(true);
            com.kwad.sdk.core.e.c.d("perfMonitor.BlockManager", "hasTenBlockHook:" + zBq);
            if (aVar.aqQ < new Random().nextFloat()) {
                return;
            }
            b.a(aVar);
            if (aVar.Fd() && zBq) {
                BlockInjector.b(aVar);
            }
            if (aVar.Fe()) {
                boolean zBr = a.br(false);
                com.kwad.sdk.core.e.c.d("perfMonitor.BlockManager", "hasOtherBlockMonitor:" + zBr);
                if (zBr) {
                    BlockInjector.tryProxyOtherOutput(aVar);
                }
            }
        } catch (Throwable th) {
            try {
                com.kwad.sdk.crash.b.l(th);
            } catch (Exception unused) {
            }
        }
    }
}
