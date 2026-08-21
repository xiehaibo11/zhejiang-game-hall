package com.tkay.basead.d;

import android.content.Context;
import com.tkay.basead.d.b;

public final class e extends b {
    public e(Context context, b.a aVar, com.tkay.core.common.f.i iVar) {
        super(context, aVar, iVar);
    }

    public final void a(final com.tkay.basead.e.d dVar) {
        super.a(new com.tkay.basead.e.c() {
            @Override
            public final void onAdDataLoaded() {
            }

            @Override
            public final void onAdCacheLoaded() {
                h hVar = new h(e.this.b, e.this.e, e.this.c, e.this.f);
                com.tkay.basead.e.d dVar2 = dVar;
                if (dVar2 != null) {
                    dVar2.onNativeAdLoaded(hVar);
                }
            }

            @Override
            public final void onAdLoadFailed(com.tkay.basead.c.e eVar) {
                com.tkay.basead.e.d dVar2 = dVar;
                if (dVar2 != null) {
                    dVar2.onNativeAdLoadError(eVar);
                }
            }
        });
    }
}
