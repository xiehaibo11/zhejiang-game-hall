package com.tkay.network.sigmob;

import com.tkay.core.api.TYMediationRequestInfo;
import com.tkay.core.common.c.l;
import java.util.HashMap;
import java.util.Map;

@Deprecated
public class SigmobiTYRequestInfo extends TYMediationRequestInfo {
    HashMap<String, Object> a;

    public SigmobiTYRequestInfo(String str, String str2, String str3) {
        this.networkFirmId = 29;
        HashMap<String, Object> map = new HashMap<>();
        this.a = map;
        map.put("app_id", str);
        this.a.put("app_key", str2);
        this.a.put(l.a.c, str3);
    }

    @Override
    public void setFormat(String str) {
        if (((str.hashCode() == 52 && str.equals("4")) ? (byte) 0 : (byte) -1) != 0) {
            return;
        }
        this.className = SigmobTYSplashAdapter.class.getName();
    }

    @Override
    public Map<String, Object> getRequestParamMap() {
        return this.a;
    }
}
