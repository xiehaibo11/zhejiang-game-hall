package com.kwad.components.ad.reward.m;

import android.view.ViewGroup;
import com.kwad.sdk.utils.ai;

/* JADX INFO: loaded from: classes2.dex */
public abstract class d {
    protected void a(r rVar) {
    }

    protected void ad(boolean z) {
    }

    public final void b(r rVar) {
        a(rVar);
        gQ().getContext();
        ad(ai.IN());
    }

    public abstract ViewGroup gQ();

    public void onUnbind() {
    }
}
