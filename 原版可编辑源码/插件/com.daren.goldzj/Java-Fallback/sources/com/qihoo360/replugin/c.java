package com.qihoo360.replugin;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.res.Resources;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.bianqi.wpll.BuildConfig;

class c {
    static int a(String r2, String r3) {
        PackageInfo r0 = RePlugin.fetchPackageInfo(r2);
        if (r0 != null) goto L5;
        return 0;
    L5:
        Resources r22 = RePlugin.fetchResources(r2);
        if (r22 != null) goto L9;
        return 0;
    L9:
        return r22.getIdentifier(r0.packageName + ":" + r3, null, BuildConfig.APPLICATION_ID);
    }

    public static <T extends View> T a(String r3, String r4, ViewGroup r5) {
        Context r0 = RePlugin.fetchContext(r3);
        int r32 = a(r3, "layout/" + r4);
        if (r32 > 0) goto L7;
        return null;
    L7:
        return (T) LayoutInflater.from(r0).inflate(r32, r5);
    }
}
