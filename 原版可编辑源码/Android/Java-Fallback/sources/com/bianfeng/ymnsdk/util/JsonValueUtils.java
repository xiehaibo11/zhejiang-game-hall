package com.bianfeng.ymnsdk.util;

public class JsonValueUtils {
    public JsonValueUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String doubleToString(java.lang.Object r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1f
            r0.<init>()     // Catch: java.lang.Exception -> L1f
            java.lang.Double r1 = new java.lang.Double     // Catch: java.lang.Exception -> L1f
            java.lang.String r2 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L1f
            r1.<init>(r2)     // Catch: java.lang.Exception -> L1f
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L1f
            r0.append(r1)     // Catch: java.lang.Exception -> L1f
            java.lang.String r1 = ""
            r0.append(r1)     // Catch: java.lang.Exception -> L1f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L1f
            return r0
        L1f:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = "YMN"
            return r1
    }

    public static java.lang.String perProduct(java.lang.String r7, java.lang.String r8) {
            double r0 = java.lang.Double.parseDouble(r7)
            double r2 = java.lang.Double.parseDouble(r8)
            r4 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r2 = r2 / r4
            double r4 = r2 / r0
            float r4 = (float) r4
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r4)
            java.lang.String r6 = ""
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            return r5
    }

    public static int price2Int(java.lang.String r3) {
            java.math.BigDecimal r0 = new java.math.BigDecimal
            r0.<init>(r3)
            java.math.BigDecimal r1 = new java.math.BigDecimal
            java.lang.String r2 = "100"
            r1.<init>(r2)
            java.math.BigDecimal r2 = r0.multiply(r1)
            float r2 = r2.floatValue()
            int r2 = (int) r2
            return r2
    }

    public static int string2Int(java.lang.String r1) {
            int r0 = java.lang.Integer.parseInt(r1)
            return r0
    }
}
