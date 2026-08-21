package com.meizu.cloud.pushsdk.b;

import com.ss.android.socialbase.downloader.constants.MonitorConstants;

public class i {
    /* JADX WARN: Multi-variable type inference failed */
    public static String a(String str) {
        com.meizu.cloud.pushsdk.b.b.d dVarA = com.meizu.cloud.pushsdk.b.b.a.a("android.os.SystemProperties").a(MonitorConstants.CONNECT_TYPE_GET, String.class).a(str);
        if (dVarA.a) {
            return (String) dVarA.b;
        }
        return null;
    }
}
