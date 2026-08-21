package com.heytap.mcssdk.utils;

import com.ss.android.socialbase.downloader.constants.MonitorConstants;

/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1923a = "file";
    private static final String b = "ro.crypto.type";

    private static String a(String str) {
        try {
            return (String) Class.forName("android.os.SystemProperties").getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(null, str);
        } catch (Exception unused) {
            return null;
        }
    }

    public static boolean a() {
        return "file".equals(a(b));
    }
}
