package com.kwad.components.ad.reward.m;

import android.content.Context;

/* JADX INFO: loaded from: classes2.dex */
public class a implements b {
    private Context mContext;
    private com.kwad.components.ad.reward.j qx;

    public a(Context context, com.kwad.components.ad.reward.j jVar) {
        this.qx = jVar;
        this.mContext = context;
    }

    @Override // com.kwad.components.ad.reward.m.b
    public final void gU() {
        this.qx.a(1, this.mContext, 1, 1);
    }

    @Override // com.kwad.components.ad.reward.m.b
    public void ip() {
        this.qx.a(1, this.mContext, 13, 2);
    }

    @Override // com.kwad.components.ad.reward.m.b
    public void iq() {
        this.qx.a(1, this.mContext, 117, 2);
    }
}
