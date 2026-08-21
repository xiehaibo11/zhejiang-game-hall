package com.bianfeng.ymnsdk.util;

public class ResourceManger {
    public ResourceManger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getId(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "\\."
            java.lang.String[] r3 = r3.split(r0)
            r0 = 2
            r0 = r3[r0]
            r1 = 1
            r3 = r3[r1]
            int r2 = getId(r2, r0, r3)
            return r2
    }

    public static int getId(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.res.Resources r0 = r1.getResources()     // Catch: java.lang.Exception -> Le
            r1.getPackageName()     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = "com.daren.goldzj"
            int r1 = r0.getIdentifier(r2, r3, r1)     // Catch: java.lang.Exception -> Le
            return r1
        Le:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }
}
