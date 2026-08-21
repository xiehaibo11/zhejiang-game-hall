package com.sigmob.sdk.splash;

import android.content.Context;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.common.utils.TouchLocation;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.SplashAdSetting;
import com.sigmob.sdk.base.mta.PointCategory;

/* JADX INFO: loaded from: classes3.dex */
public class c extends com.sigmob.sdk.base.common.h {
    private int k = 3;
    private boolean l;
    private int m;
    private int n;

    public static c f(BaseAdUnit baseAdUnit) {
        c cVar = new c();
        cVar.b(baseAdUnit);
        return cVar;
    }

    @Override // com.sigmob.sdk.base.common.h
    public void a(Context context, int i, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
        z.b("start", null, baseAdUnit);
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_START);
    }

    @Override // com.sigmob.sdk.base.common.h
    public void a(Context context, TouchLocation touchLocation, TouchLocation touchLocation2, com.sigmob.sdk.base.a aVar, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_CLICK);
    }

    @Override // com.sigmob.sdk.base.common.h
    public void b(Context context, int i, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
        z.b("close", null, baseAdUnit);
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_CLOSE);
    }

    @Override // com.sigmob.sdk.base.common.h
    public void b(BaseAdUnit baseAdUnit) {
        super.b(baseAdUnit);
        SplashAdSetting splashAdSetting = baseAdUnit.getSplashAdSetting();
        if (splashAdSetting != null) {
            this.k = splashAdSetting.show_duration.intValue();
            this.l = splashAdSetting.enable_close_on_click.booleanValue();
            this.m = splashAdSetting.auto_click_mode.intValue();
            this.n = splashAdSetting.auto_click_time_ratio.intValue();
        }
    }

    @Override // com.sigmob.sdk.base.common.h
    public void c(Context context, int i, BaseAdUnit baseAdUnit) {
        Preconditions.NoThrow.checkNotNull(context, "context cannot be null");
        z.b(PointCategory.SKIP, null, baseAdUnit);
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_SKIP);
    }

    public int l() {
        return this.k;
    }

    public boolean m() {
        return this.l;
    }

    public int n() {
        return this.m;
    }

    public int o() {
        return this.n;
    }
}
