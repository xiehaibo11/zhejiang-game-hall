package com.alipay.sdk.m.l0;

import com.ss.android.socialbase.downloader.constants.MonitorConstants;

/* JADX INFO: loaded from: classes.dex */
public class g {
    public static String a(String str, String str2) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(cls, str, str2);
        } catch (Exception unused) {
            return str2;
        }
    }
}
