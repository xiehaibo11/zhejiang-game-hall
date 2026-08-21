package com.mbridge.msdk.dycreator.f;

import com.mbridge.msdk.dycreator.wrapper.DyOption;
import com.mbridge.msdk.foundation.entity.CampaignEx;

/* JADX INFO: compiled from: MBRewardData.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a implements com.mbridge.msdk.dycreator.f.a.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private DyOption f3304a;
    private CampaignEx b;

    public a(DyOption dyOption) {
        this.f3304a = dyOption;
        this.b = dyOption.getCampaignEx();
    }

    @Override // com.mbridge.msdk.dycreator.f.a.a
    public final CampaignEx getBindData() {
        return this.b;
    }

    @Override // com.mbridge.msdk.dycreator.f.a.a
    public final DyOption getEffectData() {
        return this.f3304a;
    }
}
