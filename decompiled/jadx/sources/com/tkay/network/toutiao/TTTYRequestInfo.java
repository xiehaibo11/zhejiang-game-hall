package com.tkay.network.toutiao;

import com.tkay.core.api.TYMediationRequestInfo;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class TTTYRequestInfo extends TYMediationRequestInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    HashMap<String, Object> f7759a;

    public TTTYRequestInfo(String str, String str2, boolean z) {
        this.networkFirmId = 15;
        HashMap<String, Object> map = new HashMap<>();
        this.f7759a = map;
        map.put("app_id", str);
        this.f7759a.put("slot_id", str2);
        this.f7759a.put("personalized_template", z ? "1" : "0");
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public void setFormat(String str) {
        if (((str.hashCode() == 52 && str.equals("4")) ? (byte) 0 : (byte) -1) != 0) {
            return;
        }
        this.className = TTTYSplashAdapter.class.getName();
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public Map<String, Object> getRequestParamMap() {
        return this.f7759a;
    }
}
