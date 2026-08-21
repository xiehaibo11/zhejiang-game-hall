package com.tkay.network.ks;

import com.tkay.core.api.TYMediationRequestInfo;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
@Deprecated
public class KSTYRequestInfo extends TYMediationRequestInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    HashMap<String, Object> f7605a;

    public KSTYRequestInfo(String str, String str2) {
        this.networkFirmId = 28;
        HashMap<String, Object> map = new HashMap<>();
        this.f7605a = map;
        map.put("app_id", str);
        this.f7605a.put("position_id", str2);
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public void setFormat(String str) {
        if (((str.hashCode() == 52 && str.equals("4")) ? (byte) 0 : (byte) -1) != 0) {
            return;
        }
        this.className = KSTYSplashAdapter.class.getName();
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public Map<String, Object> getRequestParamMap() {
        return this.f7605a;
    }
}
