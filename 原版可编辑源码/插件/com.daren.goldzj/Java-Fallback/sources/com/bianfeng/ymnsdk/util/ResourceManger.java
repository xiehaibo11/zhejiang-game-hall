package com.bianfeng.ymnsdk.util;

import android.content.Context;
import android.content.res.Resources;
import com.bianqi.wpll.BuildConfig;

public class ResourceManger {
    public ResourceManger() {
    }

    public static int getId(Context r2, String r3) {
        String[] r32 = r3.split("\\.");
        return getId(r2, r32[2], r32[1]);
    }

    public static int getId(Context r1, String r2, String r3) {
        Resources r0 = r1.getResources();     // Catch: Exception -> L4
        r1.getPackageName();     // Catch: Exception -> L4
        return r0.getIdentifier(r2, r3, BuildConfig.APPLICATION_ID);
    L4:
        e = move-exception;
        e.printStackTrace();
        return 0;
    }
}
