package com.mbridge.msdk.splash.f;

import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.out.Frame;
import java.util.List;

/* JADX INFO: compiled from: SplashLoadResponseHandler.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class a extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4012a;

    public abstract void a(int i, String str);

    public abstract void a(CampaignUnit campaignUnit, int i);

    @Override // com.mbridge.msdk.splash.f.c
    public final void a(List<Frame> list) {
    }

    public a(int i) {
        this.f4012a = i;
    }

    @Override // com.mbridge.msdk.splash.f.c
    public final void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit) {
        a(campaignUnit, this.f4012a);
    }

    @Override // com.mbridge.msdk.splash.f.c
    public final void b(int i, String str) {
        a(i, str);
    }
}
