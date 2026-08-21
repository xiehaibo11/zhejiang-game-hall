package com.kwad.components.ad.i;

import com.kwad.sdk.core.network.f;
import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.network.i;
import com.kwad.sdk.internal.api.SceneImpl;

/* JADX INFO: loaded from: classes2.dex */
public class b implements i.a {
    private static volatile b GK;

    private b() {
    }

    public static b lP() {
        if (GK == null) {
            synchronized (b.class) {
                if (GK == null) {
                    GK = new b();
                }
            }
        }
        return GK;
    }

    @Override // com.kwad.sdk.core.network.i.a
    public final void a(g gVar, int i) {
        if ((gVar instanceof com.kwad.components.core.p.a) && i != f.aoU.errorCode) {
            int i2 = 21004;
            SceneImpl scene = gVar.getScene();
            if (scene != null) {
                long posId = scene.getPosId();
                if (i == f.aoP.errorCode) {
                    i2 = 21001;
                } else if (i == f.aoT.errorCode) {
                    i2 = 21003;
                } else if (i > 0 && i < 1000) {
                    i2 = 21002;
                }
                com.kwad.components.core.o.a.pA().a(posId, i2);
            }
        }
    }

    public final void init() {
        i.Bh().a(this);
    }
}
