package com.huawei.hms.common.internal;

public class TransactionIdCreater {
    private static final int API_SIZE = 6;
    private static final int APPID_SIZE = 9;
    private static final char FILL_BYTE = '0';

    public TransactionIdCreater() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getId(java.lang.String r3, java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 48
            r2 = 9
            java.lang.String r3 = com.huawei.hms.utils.StringUtil.addByteForNum(r3, r2, r1)
            r0.append(r3)
            r3 = 6
            java.lang.String r3 = com.huawei.hms.utils.StringUtil.addByteForNum(r4, r3, r1)
            r0.append(r3)
            java.text.SimpleDateFormat r3 = new java.text.SimpleDateFormat
            java.util.Locale r4 = java.util.Locale.ENGLISH
            java.lang.String r1 = "yyyyMMddHHmmssSSS"
            r3.<init>(r1, r4)
            java.util.Date r4 = new java.util.Date
            r4.<init>()
            java.lang.String r3 = r3.format(r4)
            r0.append(r3)
            java.util.Locale r3 = java.util.Locale.ENGLISH
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            r2 = 1000000(0xf4240, float:1.401298E-39)
            int r1 = r1.nextInt(r2)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r4[r2] = r1
            java.lang.String r1 = "%06d"
            java.lang.String r3 = java.lang.String.format(r3, r1, r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }
}
