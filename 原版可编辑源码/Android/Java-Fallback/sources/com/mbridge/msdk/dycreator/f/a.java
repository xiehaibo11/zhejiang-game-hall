package com.mbridge.msdk.dycreator.f;

public final class a implements com.mbridge.msdk.dycreator.f.a.a {
    private com.mbridge.msdk.dycreator.wrapper.DyOption a;
    private com.mbridge.msdk.foundation.entity.CampaignEx b;

    public a(com.mbridge.msdk.dycreator.wrapper.DyOption r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r1.getCampaignEx()
            r0.b = r1
            return
    }

    @Override
    public final com.mbridge.msdk.foundation.entity.CampaignEx getBindData() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b
            return r0
    }

    @Override
    public final com.mbridge.msdk.dycreator.wrapper.DyOption getEffectData() {
            r1 = this;
            com.mbridge.msdk.dycreator.wrapper.DyOption r0 = r1.a
            return r0
    }
}
