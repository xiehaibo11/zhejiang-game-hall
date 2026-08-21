package com.ss.android.socialbase.appdownloader.c.rg;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.io.File;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class pp {
    private static String rg(int i) {
        return (i >>> 24) == 1 ? "android:" : "";
    }

    /*  JADX ERROR: JadxRuntimeException in pass: BlockProcessor
        jadx.core.utils.exceptions.JadxRuntimeException: Unreachable block: B:136:0x013e
        	at jadx.core.dex.visitors.blocks.BlockProcessor.checkForUnreachableBlocks(BlockProcessor.java:132)
        	at jadx.core.dex.visitors.blocks.BlockProcessor.processBlocksTree(BlockProcessor.java:58)
        	at jadx.core.dex.visitors.blocks.BlockProcessor.visit(BlockProcessor.java:50)
        */
    public static android.content.pm.PackageInfo rg(java.io.File r13) {
        /*
            Method dump skipped, instruction units count: 374
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.socialbase.appdownloader.c.rg.pp.rg(java.io.File):android.content.pm.PackageInfo");
    }

    public static PackageInfo rg(Context context, File file, int i) {
        if (DownloadExpSwitchCode.isSwitchEnable(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP) && Build.VERSION.SDK_INT >= 21 && Build.VERSION.SDK_INT < 26) {
            try {
                return rg(file);
            } catch (Throwable th) {
                rg("getPackageInfo::unzip_getpackagearchiveinfo", th.getMessage());
                return df(context, file, i);
            }
        }
        return df(context, file, i);
    }

    private static PackageInfo df(Context context, File file, int i) {
        PackageManager packageManager = context.getPackageManager();
        if (packageManager == null) {
            rg("unzip_getpackagearchiveinfo", "packageManager == null");
            return null;
        }
        try {
            return packageManager.getPackageArchiveInfo(file.getPath(), i);
        } catch (Throwable th) {
            rg("unzip_getpackagearchiveinfo", "pm.getPackageArchiveInfo failed: " + th.getMessage());
            return null;
        }
    }

    private static void rg(String str, String str2) {
        IDownloadMonitorListener downloadMonitorListener = DownloadComponentManager.getDownloadMonitorListener();
        if (downloadMonitorListener == null) {
            return;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("message", str2);
        } catch (JSONException unused) {
        }
        downloadMonitorListener.monitorEvent(str, jSONObject, null, null);
    }

    private static String rg(rg rgVar, int i) {
        int iDf = rgVar.df(i);
        int iQ = rgVar.q(i);
        if (iDf == 3) {
            return rgVar.pt(i);
        }
        return iDf == 2 ? String.format("?%s%08X", rg(iQ), Integer.valueOf(iQ)) : (iDf < 16 || iDf > 31) ? String.format("<0x%X, type 0x%02X>", Integer.valueOf(iQ), Integer.valueOf(iDf)) : String.valueOf(iQ);
    }

    public static String rg(Context context, PackageInfo packageInfo, String str) {
        if (packageInfo == null || packageInfo.applicationInfo == null) {
            return null;
        }
        ApplicationInfo applicationInfo = packageInfo.applicationInfo;
        applicationInfo.sourceDir = str;
        applicationInfo.publicSourceDir = str;
        try {
            return applicationInfo.loadLabel(context.getPackageManager()).toString();
        } catch (OutOfMemoryError e) {
            rg("getPackageInfo::fail_load_label", e.getMessage());
            return null;
        }
    }
}
