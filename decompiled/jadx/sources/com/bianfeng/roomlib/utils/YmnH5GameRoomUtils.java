package com.bianfeng.roomlib.utils;

import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes.dex */
public class YmnH5GameRoomUtils {
    public static String getRoomExt(String str, String str2) {
        Map<String, String> map;
        if (str != null && !str.isEmpty()) {
            map = ThridSdk.getGson().fromJson(str);
        } else {
            map = new HashMap<>();
        }
        map.put("cp", str2);
        return ThridSdk.getGson().toJson(map);
    }

    public static String getData(String str, String str2) {
        String systemCurrentTime = UtilsSdk.getSystemUtil().getSystemCurrentTime();
        String webPayAppId = UtilsSdk.getAppConfig().getWebPayAppId();
        TreeMap<String, String> treeMap = new TreeMap<>();
        treeMap.put("time", systemCurrentTime);
        treeMap.put("cp", str);
        treeMap.put("gcp_id", webPayAppId);
        treeMap.put("sign", UtilsSdk.getSignMd5().getMd5(treeMap));
        treeMap.put("ext", str2);
        treeMap.put("sdk_version", UtilsSdk.getAppConfig().getSdkVersion());
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : treeMap.entrySet()) {
            sb.append("&");
            sb.append(entry.getKey());
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(entry.getValue());
        }
        String str3 = UrlManagerUtils.getRoomWebUrl() + sb.substring(1);
        UtilsSdk.getLogger().i("GameRoomWebRequest start" + str3);
        return str3;
    }
}
