package com.bianfeng.seppellita.event;

import com.bianfeng.seppellita.SepperllitaSdk;
import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import com.tencent.open.SocialConstants;
import java.util.HashMap;

public class EventManager {
    public static void launch() {
        SeppellitaLogger.i("launch");
        HashMap map = new HashMap();
        map.put(SocialConstants.PARAM_ACT, "push");
        map.put("pg", "P0010");
        map.put("eid", "100");
        SepperllitaSdk.getInstance().post(SeppellitaGsonUtils.toJson(map));
    }

    public static void onPause(String str) {
        SeppellitaLogger.i("onPause--->" + str + "----" + System.currentTimeMillis());
        HashMap map = new HashMap();
        map.put(SocialConstants.PARAM_ACT, "access");
        map.put("pg", "P0100");
        map.put("dur", str);
        SepperllitaSdk.getInstance().post(SeppellitaGsonUtils.toJson(map));
    }
}
