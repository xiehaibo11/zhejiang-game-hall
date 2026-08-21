package com.kwad.components.ad.reward.j;

import com.kwad.components.core.webview.b.a.v;

/* JADX INFO: loaded from: classes2.dex */
public final class m extends v {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public String name = "backPressed";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "registerBackPressedListener";
    }

    public final void jm() {
        b(new a());
    }
}
