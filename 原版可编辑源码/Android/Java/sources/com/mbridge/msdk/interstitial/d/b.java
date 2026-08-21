package com.mbridge.msdk.interstitial.d;

import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.out.Frame;
import java.util.List;

public abstract class b extends c {
    public abstract void a(int i, String str);

    public abstract void a(CampaignUnit campaignUnit);

    @Override
    public final void a(List<Frame> list) {
    }

    @Override
    public final void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit) {
        a(campaignUnit);
    }

    @Override
    public final void b(int i, String str) {
        a(i, str);
    }
}
