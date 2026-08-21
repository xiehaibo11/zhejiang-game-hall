package com.bianfeng.loginlib.utils;

import com.bianfeng.splitscreenwindow.ShowType;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class YmnLoginUtils {
    private static YmnLoginUtils ymnLoginUtils;
    private ShowType direction;

    private YmnLoginUtils() {
    }

    public static YmnLoginUtils getInstance() {
        if (ymnLoginUtils == null) {
            synchronized (YmnLoginUtils.class) {
                if (ymnLoginUtils == null) {
                    ymnLoginUtils = new YmnLoginUtils();
                }
            }
        }
        return ymnLoginUtils;
    }

    public ShowType getDirection() {
        return this.direction;
    }

    public void setDirection(int i, int i2) {
        if (i2 == 0 && i == 0) {
            this.direction = ShowType.ACTIVITY_PORTRAIT;
            return;
        }
        if (i2 == 0 && i == 1) {
            this.direction = ShowType.ACTIVITY_LAND;
            return;
        }
        if (i2 == 1 && i == 0) {
            this.direction = ShowType.QUANPING_PORTRAIT;
            return;
        }
        if (i2 == 1 && i == 1) {
            this.direction = ShowType.QUANPING_LAND;
            return;
        }
        if (i2 == 2 && i == 0) {
            this.direction = ShowType.FENPING_PORTRAIT;
        } else if (i2 == 2 && i == 1) {
            this.direction = ShowType.FENPING_LAND;
        } else {
            this.direction = ShowType.ACTIVITY_PORTRAIT;
        }
    }

    public void setDirection(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            setDirection(jSONObject.optInt(HiAnalyticsConstant.HaKey.BI_KEY_DIRECTION), jSONObject.optInt("showtype"));
        } catch (Exception e) {
            UtilsSdk.getLogger().i("getDirection:" + e.getMessage());
            this.direction = ShowType.ACTIVITY_PORTRAIT;
        }
    }

    public String getExt(String str, String str2) {
        Map<String, String> map;
        if (str != null && !str.isEmpty()) {
            map = ThridSdk.getGson().fromJson(str);
        } else {
            map = new HashMap<>();
        }
        map.put("cp", str2);
        return ThridSdk.getGson().toJson(map);
    }

    public String getCpFromExt(String str) {
        Map<String, String> map;
        if (str != null && !str.isEmpty()) {
            map = ThridSdk.getGson().fromJson(str);
        } else {
            map = new HashMap<>();
        }
        return map.get("cp");
    }
}
