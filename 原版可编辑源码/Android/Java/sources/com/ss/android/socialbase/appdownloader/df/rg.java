package com.ss.android.socialbase.appdownloader.df;

import android.os.Build;
import android.text.TextUtils;

public class rg {
    public static final String rg;

    static {
        StringBuilder sb = new StringBuilder();
        boolean z = !TextUtils.isEmpty(Build.VERSION.RELEASE);
        boolean z2 = !TextUtils.isEmpty(Build.ID);
        boolean z3 = "REL".equals(Build.VERSION.CODENAME) && !TextUtils.isEmpty(Build.MODEL);
        sb.append("AppDownloader");
        if (z) {
            sb.append("/");
            sb.append(Build.VERSION.RELEASE);
        }
        sb.append(" (Linux; U; Android");
        if (z) {
            sb.append(" ");
            sb.append(Build.VERSION.RELEASE);
        }
        if (z3 || z2) {
            sb.append(";");
            if (z3) {
                sb.append(" ");
                sb.append(Build.MODEL);
            }
            if (z2) {
                sb.append(" Build/");
                sb.append(Build.ID);
            }
        }
        sb.append(")");
        rg = sb.toString();
    }
}
