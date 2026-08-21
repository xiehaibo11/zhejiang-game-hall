package com.ymnsdk.replugin.entity;

import java.util.HashMap;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginFailInfo {
    static Map<String, String> failInfo;

    public static PluginFailInfo getInstance() {
        return new PluginFailInfo();
    }

    public String getPluginFailInfo(String str) {
        Map<String, String> map = failInfo;
        if (map != null) {
            return map.containsKey(str) ? failInfo.get(str) : "";
        }
        failInfo = new HashMap();
        return "";
    }

    public void savePluginFailInfo(String str, String str2) {
        if (failInfo == null) {
            failInfo = new HashMap();
        }
        failInfo.put(str, str2);
    }
}
