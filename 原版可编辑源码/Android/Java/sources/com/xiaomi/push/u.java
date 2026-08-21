package com.xiaomi.push;

import com.ss.android.socialbase.downloader.constants.MonitorConstants;

public class u {
    public static String a(String str, String str2) {
        try {
            return (String) v.a(null, "android.os.SystemProperties").getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(null, str, str2);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("SystemProperties.get: " + e);
            return str2;
        }
    }
}
