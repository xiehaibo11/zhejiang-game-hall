package com.tkay.network.mintegral;

import com.tkay.core.api.TYMediationRequestInfo;
import com.tkay.core.common.c.l;
import java.util.HashMap;
import java.util.Map;

@Deprecated
public class MintegralTYRequestInfo extends TYMediationRequestInfo {
    HashMap<String, Object> a;

    public MintegralTYRequestInfo(String str, String str2, String str3, String str4) {
        this.networkFirmId = 6;
        HashMap<String, Object> map = new HashMap<>();
        this.a = map;
        map.put("appid", str);
        this.a.put(l.a.c, str3);
        this.a.put("appkey", str2);
        this.a.put("unitid", str4);
    }

    @Override
    public void setFormat(String str) {
        if (((str.hashCode() == 52 && str.equals("4")) ? (byte) 0 : (byte) -1) != 0) {
            return;
        }
        this.className = MintegralTYSplashAdapter.class.getName();
    }

    @Override
    public Map<String, Object> getRequestParamMap() {
        return this.a;
    }
}
