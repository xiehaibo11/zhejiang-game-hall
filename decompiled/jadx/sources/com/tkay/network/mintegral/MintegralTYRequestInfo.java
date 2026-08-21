package com.tkay.network.mintegral;

import com.tkay.core.api.TYMediationRequestInfo;
import com.tkay.core.common.c.l;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
@Deprecated
public class MintegralTYRequestInfo extends TYMediationRequestInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    HashMap<String, Object> f7638a;

    public MintegralTYRequestInfo(String str, String str2, String str3, String str4) {
        this.networkFirmId = 6;
        HashMap<String, Object> map = new HashMap<>();
        this.f7638a = map;
        map.put("appid", str);
        this.f7638a.put(l.a.c, str3);
        this.f7638a.put("appkey", str2);
        this.f7638a.put("unitid", str4);
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public void setFormat(String str) {
        if (((str.hashCode() == 52 && str.equals("4")) ? (byte) 0 : (byte) -1) != 0) {
            return;
        }
        this.className = MintegralTYSplashAdapter.class.getName();
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public Map<String, Object> getRequestParamMap() {
        return this.f7638a;
    }
}
