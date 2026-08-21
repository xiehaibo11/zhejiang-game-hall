package com.tkay.network.sigmob;

import com.tkay.core.api.TYMediationRequestInfo;
import com.tkay.core.common.c.l;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
@Deprecated
public class SigmobiTYRequestInfo extends TYMediationRequestInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    HashMap<String, Object> f7706a;

    public SigmobiTYRequestInfo(String str, String str2, String str3) {
        this.networkFirmId = 29;
        HashMap<String, Object> map = new HashMap<>();
        this.f7706a = map;
        map.put("app_id", str);
        this.f7706a.put("app_key", str2);
        this.f7706a.put(l.a.c, str3);
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public void setFormat(String str) {
        if (((str.hashCode() == 52 && str.equals("4")) ? (byte) 0 : (byte) -1) != 0) {
            return;
        }
        this.className = SigmobTYSplashAdapter.class.getName();
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public Map<String, Object> getRequestParamMap() {
        return this.f7706a;
    }
}
