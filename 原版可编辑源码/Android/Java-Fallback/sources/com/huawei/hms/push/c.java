package com.huawei.hms.push;

public class c {
    public static byte[] a(android.os.Bundle r2, java.lang.String r3) {
            r0 = 0
            byte[] r2 = r2.getByteArray(r3)     // Catch: java.lang.Exception -> La
            if (r2 != 0) goto L9
            byte[] r2 = new byte[r0]
        L9:
            return r2
        La:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "getByteArray exception"
            r3.append(r1)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "BundleUtil"
            com.huawei.hms.support.log.HMSLog.i(r3, r2)
            byte[] r2 = new byte[r0]
            return r2
    }

    public static java.lang.String b(android.os.Bundle r1, java.lang.String r2) {
            java.lang.String r1 = r1.getString(r2)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "getString exception"
            r2.append(r0)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "BundleUtil"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            r1 = 0
            return r1
    }

    public static java.lang.String c(android.os.Bundle r2, java.lang.String r3) {
            java.lang.String r0 = ""
            java.lang.String r2 = r2.getString(r3)     // Catch: java.lang.Exception -> La
            if (r2 != 0) goto L9
            return r0
        L9:
            return r2
        La:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "getString exception"
            r3.append(r1)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "BundleUtil"
            com.huawei.hms.support.log.HMSLog.i(r3, r2)
            return r0
    }
}
