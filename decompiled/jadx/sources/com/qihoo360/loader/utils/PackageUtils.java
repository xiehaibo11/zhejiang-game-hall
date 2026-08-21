package com.qihoo360.loader.utils;

import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import com.qihoo360.replugin.helper.LogDebug;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PackageUtils {
    public static PackageInfo getPackageArchiveInfo(PackageManager packageManager, String str, int i) {
        try {
            return packageManager.getPackageArchiveInfo(str, i);
        } catch (Throwable th) {
            if (LogDebug.LOG) {
                th.printStackTrace();
            }
            return null;
        }
    }
}
