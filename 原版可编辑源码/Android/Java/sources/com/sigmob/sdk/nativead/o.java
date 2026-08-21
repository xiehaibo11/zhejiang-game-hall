package com.sigmob.sdk.nativead;

import android.content.Context;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.windad.natives.WindNativeAdData;

public class o extends i {
    x g;

    public o(Context context) {
        super(context);
    }

    public void a(x xVar) {
        this.g = xVar;
    }

    @Override
    public void c() {
        super.c();
        this.g = null;
    }

    public void e() {
    }

    public b getAdConfig() {
        x xVar = this.g;
        if (xVar != null) {
            return xVar.x();
        }
        return null;
    }

    public BaseAdUnit getAdUnit() {
        x xVar = this.g;
        if (xVar != null) {
            return xVar.k();
        }
        return null;
    }

    public j getAppInfoView() {
        x xVar = this.g;
        if (xVar != null) {
            return xVar.m();
        }
        return null;
    }

    public WindNativeAdData getNativeAdUnit() {
        x xVar = this.g;
        if (xVar != null) {
            return xVar.l();
        }
        return null;
    }

    public double getVideoDuration() {
        return 0.0d;
    }

    public double getVideoProgress() {
        return 0.0d;
    }

    public void i() {
    }

    public void j() {
    }

    public void setUIStyle(f fVar) {
        this.d = fVar;
    }
}
