package com.bianfeng.datafunsdk;

public class z {
    public static java.lang.String a() {
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.lang.String r2 = "yyyy-MM-dd"
            r1.<init>(r2)
            java.lang.String r0 = r1.format(r0)
            return r0
    }

    public static java.lang.String b() {
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            r1 = 2
            r2 = -1
            r0.add(r1, r2)
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.lang.String r2 = "yyyy-MM-dd"
            r1.<init>(r2)
            java.util.Date r0 = r0.getTime()
            java.lang.String r0 = r1.format(r0)
            return r0
    }
}
