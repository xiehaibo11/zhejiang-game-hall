package com.sigmob.sdk.splash;

import android.content.Context;
import android.widget.RelativeLayout;
import com.sigmob.sdk.base.common.l;
import com.sigmob.sdk.base.models.BaseAdUnit;

class d extends RelativeLayout {
    protected int a;

    public d(Context context) {
        super(context);
    }

    public static d a(Context context, BaseAdUnit baseAdUnit) {
        if (baseAdUnit.getMaterial().creative_type == null) {
            return null;
        }
        return baseAdUnit.getMaterial().creative_type.intValue() == l.g.a() ? new h(context, baseAdUnit) : new e(context);
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
        return this.a;
    }
}
