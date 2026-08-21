package com.bianfeng.roomlib.utils;

public class YmnH5GameRoomUtils {
    public YmnH5GameRoomUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getData(java.lang.String r4, java.lang.String r5) {
            com.bianfeng.utilslib.SystemUtil r0 = com.bianfeng.utilslib.UtilsSdk.getSystemUtil()
            java.lang.String r0 = r0.getSystemCurrentTime()
            com.bianfeng.utilslib.AppConfigUtils r1 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r1 = r1.getWebPayAppId()
            java.util.TreeMap r2 = new java.util.TreeMap
            r2.<init>()
            java.lang.String r3 = "time"
            r2.put(r3, r0)
            java.lang.String r0 = "cp"
            r2.put(r0, r4)
            java.lang.String r4 = "gcp_id"
            r2.put(r4, r1)
            com.bianfeng.utilslib.SignMd5Utils r4 = com.bianfeng.utilslib.UtilsSdk.getSignMd5()
            java.lang.String r4 = r4.getMd5(r2)
            java.lang.String r0 = "sign"
            r2.put(r0, r4)
            java.lang.String r4 = "ext"
            r2.put(r4, r5)
            com.bianfeng.utilslib.AppConfigUtils r4 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r4 = r4.getSdkVersion()
            java.lang.String r5 = "sdk_version"
            r2.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.util.Set r5 = r2.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L50:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L79
            java.lang.Object r0 = r5.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.String r1 = "&"
            r4.append(r1)
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r4.append(r1)
            java.lang.String r1 = "="
            r4.append(r1)
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r4.append(r0)
            goto L50
        L79:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = com.bianfeng.roomlib.utils.UrlManagerUtils.getRoomWebUrl()
            r5.append(r0)
            r0 = 1
            java.lang.String r4 = r4.substring(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.bianfeng.utilslib.Logger r5 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "GameRoomWebRequest start"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r5.i(r0)
            return r4
    }

    public static java.lang.String getRoomExt(java.lang.String r1, java.lang.String r2) {
            if (r1 == 0) goto L11
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L11
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.util.Map r1 = r0.fromJson(r1)
            goto L16
        L11:
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
        L16:
            java.lang.String r0 = "cp"
            r1.put(r0, r2)
            com.bianfeng.thridlibrary.GsonUtils r2 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.lang.String r1 = r2.toJson(r1)
            return r1
    }
}
