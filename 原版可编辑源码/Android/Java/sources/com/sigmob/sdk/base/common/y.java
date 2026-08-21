package com.sigmob.sdk.base.common;

import com.czhj.sdk.common.mta.PointEntityCommon;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.windad.WindAds;
import java.util.Iterator;

public class y extends PointEntityCommon {
    private String a;
    private String b;
    private String c;

    public String a() {
        return this.a;
    }

    public void a(String str) {
        this.a = str;
    }

    @Override
    public String appId() {
        return WindAds.sharedAds().getAppId();
    }

    public String b() {
        return this.b;
    }

    public void b(String str) {
        this.b = str;
    }

    public String c() {
        return this.c;
    }

    public void c(String str) {
        this.c = str;
    }

    @Override
    public String getSdkversion() {
        return "4.9.0";
    }

    @Override
    public boolean isAcTypeBlock() {
        if (!com.sigmob.sdk.base.c.a().i()) {
            return true;
        }
        Iterator<Integer> it = com.sigmob.sdk.base.i.a().D().iterator();
        while (it.hasNext()) {
            if (getAc_type().equals(String.valueOf(it.next()))) {
                SigmobLog.e("black ac type " + getAc_type());
                return true;
            }
        }
        return false;
    }
}
