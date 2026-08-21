package com.ss.android.socialbase.appdownloader;

import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.graphics.drawable.Drawable;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;

/* JADX INFO: loaded from: classes3.dex */
public final class fw {
    public static int rg(String str) {
        if (q(str)) {
            return -1;
        }
        try {
            PackageInfo packageInfo = DownloadComponentManager.getAppContext().getPackageManager().getPackageInfo(str, 0);
            if (packageInfo == null) {
                return -1;
            }
            return packageInfo.versionCode;
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return -1;
        }
    }

    public static rg df(String str) {
        try {
            PackageManager packageManager = DownloadComponentManager.getAppContext().getPackageManager();
            if (packageManager == null) {
                return null;
            }
            return rg(packageManager, packageManager.getPackageInfo(str, 0));
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    private static rg rg(PackageManager packageManager, PackageInfo packageInfo) {
        Drawable drawableLoadIcon = null;
        if (packageInfo == null) {
            return null;
        }
        ApplicationInfo applicationInfo = packageInfo.applicationInfo;
        String str = packageInfo.packageName;
        String string = (applicationInfo == null || applicationInfo.loadLabel(packageManager) == null) ? "" : applicationInfo.loadLabel(packageManager).toString();
        try {
            drawableLoadIcon = applicationInfo.loadIcon(packageManager);
        } catch (Exception unused) {
        }
        return new rg(str, string, drawableLoadIcon, applicationInfo.sourceDir, packageInfo.versionName, packageInfo.versionCode, (applicationInfo.flags & 1) != 0);
    }

    public static class rg {
        private int c;
        private String df;
        private boolean fw;
        private String pp;
        private String pt;
        private Drawable q;
        private String rg;

        public Drawable rg() {
            return this.q;
        }

        public void rg(Drawable drawable) {
            this.q = drawable;
        }

        public boolean df() {
            return this.fw;
        }

        public void rg(boolean z) {
            this.fw = z;
        }

        public String q() {
            return this.rg;
        }

        public void rg(String str) {
            this.rg = str;
        }

        public String pt() {
            return this.df;
        }

        public void df(String str) {
            this.df = str;
        }

        public String pp() {
            return this.pt;
        }

        public void q(String str) {
            this.pt = str;
        }

        public int c() {
            return this.c;
        }

        public void rg(int i) {
            this.c = i;
        }

        public String fw() {
            return this.pp;
        }

        public void pt(String str) {
            this.pp = str;
        }

        public rg(String str, String str2, Drawable drawable, String str3, String str4, int i, boolean z) {
            df(str2);
            rg(drawable);
            rg(str);
            q(str3);
            pt(str4);
            rg(i);
            rg(z);
        }

        public String toString() {
            return "{\n  pkg name: " + q() + "\n  app icon: " + rg() + "\n  app name: " + pt() + "\n  app path: " + pp() + "\n  app v name: " + fw() + "\n  app v code: " + c() + "\n  is system: " + df() + "}";
        }
    }

    private static boolean q(String str) {
        if (str == null) {
            return true;
        }
        int length = str.length();
        for (int i = 0; i < length; i++) {
            if (!Character.isWhitespace(str.charAt(i))) {
                return false;
            }
        }
        return true;
    }
}
