package com.sigmob.sdk.base.mta;

import com.czhj.sdk.common.mta.PointEntityGDPR;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.c;
import com.sigmob.sdk.base.i;
import com.sigmob.windad.WindAds;
import java.util.Iterator;

/* JADX INFO: loaded from: classes3.dex */
public class PointEntitySigmobPrivacy extends PointEntityGDPR {
    @Override // com.czhj.sdk.common.mta.PointEntitySuper
    public String appId() {
        return WindAds.sharedAds().getAppId();
    }

    @Override // com.czhj.sdk.common.mta.PointEntitySuper
    public String getSdkversion() {
        return "4.9.0";
    }

    @Override // com.czhj.sdk.common.mta.PointEntitySuper
    public boolean isAcTypeBlock() {
        if (!c.a().i()) {
            return true;
        }
        Iterator<Integer> it = i.a().D().iterator();
        while (it.hasNext()) {
            if (getAc_type().equals(String.valueOf(it.next()))) {
                SigmobLog.e("black ac type " + getAc_type());
                return true;
            }
        }
        return false;
    }
}
