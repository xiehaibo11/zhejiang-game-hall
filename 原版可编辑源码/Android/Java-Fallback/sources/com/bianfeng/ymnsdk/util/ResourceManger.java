package com.bianfeng.ymnsdk.util;

public class ResourceManger {
    public ResourceManger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getId(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "\\."
            java.lang.String[] r0 = r4.split(r0)
            r1 = 2
            r1 = r0[r1]
            r2 = 1
            r2 = r0[r2]
            int r1 = getId(r3, r1, r2)
            return r1
    }

    public static int getId(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            android.content.res.Resources r0 = r2.getResources()     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = r2.getPackageName()     // Catch: java.lang.Exception -> Ld
            int r0 = r0.getIdentifier(r3, r4, r1)     // Catch: java.lang.Exception -> Ld
            return r0
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }
}
