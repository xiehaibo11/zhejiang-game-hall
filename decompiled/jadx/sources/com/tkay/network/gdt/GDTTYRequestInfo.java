package com.tkay.network.gdt;

import com.tkay.core.api.TYMediationRequestInfo;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
@Deprecated
public class GDTTYRequestInfo extends TYMediationRequestInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    HashMap<String, Object> f7566a;

    public GDTTYRequestInfo(String str, String str2) {
        this.networkFirmId = 8;
        HashMap<String, Object> map = new HashMap<>();
        this.f7566a = map;
        map.put("app_id", str);
        this.f7566a.put("unit_id", str2);
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public void setFormat(String str) {
        if (((str.hashCode() == 52 && str.equals("4")) ? (byte) 0 : (byte) -1) != 0) {
            return;
        }
        this.className = GDTTYSplashAdapter.class.getName();
    }

    @Override // com.tkay.core.api.TYMediationRequestInfo
    public Map<String, Object> getRequestParamMap() {
        return this.f7566a;
    }
}
