package com.sigmob.sdk.base.common;

import com.czhj.sdk.common.mta.PointEntityCommon;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.windad.WindAds;
import java.util.Iterator;

/* JADX INFO: loaded from: classes3.dex */
public class y extends PointEntityCommon {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4872a;
    private String b;
    private String c;

    public String a() {
        return this.f4872a;
    }

    public void a(String str) {
        this.f4872a = str;
    }

    @Override // com.czhj.sdk.common.mta.PointEntitySuper
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

    @Override // com.czhj.sdk.common.mta.PointEntitySuper
    public String getSdkversion() {
        return "4.9.0";
    }

    @Override // com.czhj.sdk.common.mta.PointEntitySuper
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
