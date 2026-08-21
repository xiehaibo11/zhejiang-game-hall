package com.ymnsdk.replugin.util;

import android.content.Context;
import android.content.pm.ApplicationInfo;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class MainfestUtils {
    public static String getMetaData(Context context, String str) {
        try {
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            return applicationInfo.metaData.getString(str) != null ? applicationInfo.metaData.getString(str) : "";
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static Boolean getMetaDataWithBool(Context context, String str) {
        boolean z = false;
        try {
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            return applicationInfo.metaData.containsKey(str) ? Boolean.valueOf(applicationInfo.metaData.getBoolean(str)) : z;
        } catch (Exception e) {
            e.printStackTrace();
            return z;
        }
    }
}
