package com.sigmob.sdk.splash;

import android.content.Context;
import android.widget.RelativeLayout;
import com.sigmob.sdk.base.common.l;
import com.sigmob.sdk.base.models.BaseAdUnit;

/* JADX INFO: loaded from: classes3.dex */
class d extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected int f5158a;

    public d(Context context) {
        super(context);
    }

    public static d a(Context context, BaseAdUnit baseAdUnit) {
        if (baseAdUnit.getMaterial().creative_type == null) {
            return null;
        }
        return baseAdUnit.getMaterial().creative_type.intValue() == l.CreativeTypeSplashVideo.a() ? new h(context, baseAdUnit) : new e(context);
    }

    public void a() {
        setVisibility(0);
    }

    public boolean a(BaseAdUnit baseAdUnit) {
        return false;
    }

    public void b() {
    }

    public void c() {
    }

    public int getDuration() {
        return this.f5158a;
    }
}
