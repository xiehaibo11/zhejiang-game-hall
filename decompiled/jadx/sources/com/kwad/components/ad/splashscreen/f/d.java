package com.kwad.components.ad.splashscreen.f;

import android.view.View;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends com.kwad.components.core.widget.a.b {
    public d(View view, int i) {
        super(view, i);
    }

    @Override // com.kwad.components.core.widget.a.b, com.kwad.components.core.widget.a.a
    public final boolean ep() {
        com.kwad.sdk.core.c.b.AU();
        if (!com.kwad.sdk.core.c.b.isEnable()) {
            return super.ep();
        }
        com.kwad.sdk.core.c.b.AU();
        return com.kwad.sdk.core.c.b.isAppOnForeground() && super.ep();
    }
}
