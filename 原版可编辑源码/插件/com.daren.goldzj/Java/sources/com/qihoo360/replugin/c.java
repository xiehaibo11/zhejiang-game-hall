package com.qihoo360.replugin;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.res.Resources;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.bianqi.wpll.BuildConfig;

class c {
    static int a(String str, String str2) {
        Resources resourcesFetchResources;
        PackageInfo packageInfoFetchPackageInfo = RePlugin.fetchPackageInfo(str);
        if (packageInfoFetchPackageInfo == null || (resourcesFetchResources = RePlugin.fetchResources(str)) == null) {
            return 0;
        }
        return resourcesFetchResources.getIdentifier(packageInfoFetchPackageInfo.packageName + ":" + str2, null, BuildConfig.APPLICATION_ID);
    }

    public static <T extends View> T a(String str, String str2, ViewGroup viewGroup) {
        Context contextFetchContext = RePlugin.fetchContext(str);
        int iA = a(str, "layout/" + str2);
        if (iA <= 0) {
            return null;
        }
        return (T) LayoutInflater.from(contextFetchContext).inflate(iA, viewGroup);
    }
}
