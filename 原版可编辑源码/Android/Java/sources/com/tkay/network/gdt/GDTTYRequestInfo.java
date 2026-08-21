package com.tkay.network.gdt;

import com.tkay.core.api.TYMediationRequestInfo;
import java.util.HashMap;
import java.util.Map;

@Deprecated
public class GDTTYRequestInfo extends TYMediationRequestInfo {
    HashMap<String, Object> a;

    public GDTTYRequestInfo(String str, String str2) {
        this.networkFirmId = 8;
        HashMap<String, Object> map = new HashMap<>();
        this.a = map;
        map.put("app_id", str);
        this.a.put("unit_id", str2);
    }

    @Override
    public void setFormat(String str) {
        if (((str.hashCode() == 52 && str.equals("4")) ? (byte) 0 : (byte) -1) != 0) {
            return;
        }
        this.className = GDTTYSplashAdapter.class.getName();
    }

    @Override
    public Map<String, Object> getRequestParamMap() {
        return this.a;
    }
}
