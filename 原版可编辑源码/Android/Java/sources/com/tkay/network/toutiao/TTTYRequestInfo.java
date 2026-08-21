package com.tkay.network.toutiao;

import com.tkay.core.api.TYMediationRequestInfo;
import java.util.HashMap;
import java.util.Map;

public class TTTYRequestInfo extends TYMediationRequestInfo {
    HashMap<String, Object> a;

    public TTTYRequestInfo(String str, String str2, boolean z) {
        this.networkFirmId = 15;
        HashMap<String, Object> map = new HashMap<>();
        this.a = map;
        map.put("app_id", str);
        this.a.put("slot_id", str2);
        this.a.put("personalized_template", z ? "1" : "0");
    }

    @Override
    public void setFormat(String str) {
        if (((str.hashCode() == 52 && str.equals("4")) ? (byte) 0 : (byte) -1) != 0) {
            return;
        }
        this.className = TTTYSplashAdapter.class.getName();
    }

    @Override
    public Map<String, Object> getRequestParamMap() {
        return this.a;
    }
}
