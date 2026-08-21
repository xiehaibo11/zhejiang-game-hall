package com.cmic.gen.sdk.e;

public class o {
    public static java.lang.String a() {
            java.util.Date r0 = new java.util.Date
            long r1 = java.lang.System.currentTimeMillis()
            r0.<init>(r1)
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.lang.String r2 = "yyyyMMddHHmmssSSS"
            r1.<init>(r2)
            java.lang.String r0 = r1.format(r0)
            return r0
    }
}
