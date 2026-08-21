package com.bianfeng.ymnsdk.ymndatalib.utils;

public class LoginSignUtils {
    public static java.lang.String intData = "app_id,event,identify_id,platform_id,rst_code,rst_cost,app_memory,app_use_memory,cli_available_ram_memory,sub_rst_code,cli_available_rom_memory,cli_total_rom_memory,cli_total_ram_memory";
    public static java.lang.String longData = "event_sequence";
    public static java.lang.String privateKey = "0a1b70067129eb9835b27b79d026b95c";

    static {
            return
    }

    public LoginSignUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String sign(java.lang.Object r8) {
            java.util.TreeMap r8 = toTreeMap(r8)
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        L11:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L83
            java.lang.Object r1 = r8.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            java.lang.String r2 = r2.toString()
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L32
            goto L11
        L32:
            java.lang.String r4 = com.bianfeng.ymnsdk.ymndatalib.utils.LoginSignUtils.intData
            boolean r4 = r4.contains(r3)
            java.lang.String r5 = ""
            if (r4 == 0) goto L50
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            double r6 = java.lang.Double.parseDouble(r2)
            int r2 = (int) r6
            r4.append(r2)
            r4.append(r5)
            java.lang.String r2 = r4.toString()
        L50:
            java.lang.String r4 = com.bianfeng.ymnsdk.ymndatalib.utils.LoginSignUtils.longData
            boolean r3 = r4.contains(r3)
            if (r3 == 0) goto L6c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            double r6 = java.lang.Double.parseDouble(r2)
            long r6 = (long) r6
            r3.append(r6)
            r3.append(r5)
            java.lang.String r2 = r3.toString()
        L6c:
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            java.lang.String r1 = "="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = "&"
            r0.append(r1)
            goto L11
        L83:
            java.lang.String r8 = com.bianfeng.ymnsdk.ymndatalib.utils.LoginSignUtils.privateKey
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            java.lang.String r8 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r8)
            return r8
    }

    public static java.lang.String sign(java.lang.String r0) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r0)
            return r0
    }

    public static java.util.TreeMap<java.lang.String, java.lang.Object> toTreeMap(java.lang.Object r2) {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L15
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L15
            java.lang.String r2 = r1.toJson(r2)     // Catch: java.lang.Exception -> L15
            java.lang.Class<java.util.TreeMap> r1 = java.util.TreeMap.class
            java.lang.Object r2 = r0.fromJson(r2, r1)     // Catch: java.lang.Exception -> L15
            java.util.TreeMap r2 = (java.util.TreeMap) r2     // Catch: java.lang.Exception -> L15
            return r2
        L15:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "toTreeMap:"
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r2)
            java.util.TreeMap r2 = new java.util.TreeMap
            r2.<init>()
            return r2
    }
}
