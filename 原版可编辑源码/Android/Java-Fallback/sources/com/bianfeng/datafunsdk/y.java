package com.bianfeng.datafunsdk;

public class y {
    public static java.lang.String a = "datafun_delbd";

    static {
            return
    }

    public static int a() {
            java.lang.String r0 = com.bianfeng.datafunsdk.y.a
            int r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getInt(r0)
            return r0
    }

    public static void a(int r1) {
            java.lang.String r0 = com.bianfeng.datafunsdk.y.a     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L6
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L6
            goto L7
        L6:
            r1 = move-exception
        L7:
            return
    }
}
