package com.kwad.components.core.t;

import android.content.Context;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class h {
    public static boolean d(AdTemplate adTemplate, boolean z) {
        if (!z && com.kwad.sdk.core.response.b.b.cP(com.kwad.sdk.core.response.b.d.cg(adTemplate))) {
            return com.kwad.sdk.core.config.d.zY();
        }
        return false;
    }

    public static void f(Context context, AdTemplate adTemplate) {
        AdWebViewActivityProxy.launch(context, new AdWebViewActivityProxy.a.C0160a().ar(com.kwad.sdk.core.response.b.b.bm(adTemplate)).S(adTemplate).az(true).oA());
    }
}
