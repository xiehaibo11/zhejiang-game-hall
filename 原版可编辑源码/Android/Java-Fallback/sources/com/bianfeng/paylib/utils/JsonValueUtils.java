package com.bianfeng.paylib.utils;

public class JsonValueUtils {
    private static java.lang.String source;

    public JsonValueUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.Integer doubleToInt(java.lang.Object r1) {
            java.lang.Double r0 = new java.lang.Double
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            int r1 = r0.intValue()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            return r1
    }

    public static java.lang.String doubleToString(java.lang.Object r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Double r1 = new java.lang.Double
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.<init>(r2)
            int r2 = r1.intValue()
            r0.append(r2)
            java.lang.String r2 = ""
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String getSource() {
            java.lang.String r0 = com.bianfeng.paylib.utils.JsonValueUtils.source
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = "ymnH5game"
            com.bianfeng.paylib.utils.JsonValueUtils.source = r0
        Lc:
            java.lang.String r0 = com.bianfeng.paylib.utils.JsonValueUtils.source
            return r0
    }

    public static java.lang.String perProduct(java.lang.String r4, java.lang.String r5) {
            double r0 = java.lang.Double.parseDouble(r4)
            double r4 = java.lang.Double.parseDouble(r5)
            r2 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r4 = r4 / r2
            double r4 = r4 / r0
            float r4 = (float) r4
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r4)
            java.lang.String r4 = ""
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            return r4
    }

    public static double string2Double(java.lang.String r3) {
            double r0 = java.lang.Double.parseDouble(r3)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r3 = move-exception
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JsonValueUtils string2Int"
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.i(r3)
            r0 = 4746794007244308480(0x41dfffffffc00000, double:2.147483647E9)
            return r0
    }

    public static int string2Int(java.lang.String r3) {
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L5
            return r3
        L5:
            r3 = move-exception
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "JsonValueUtils string2Int"
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.i(r3)
            r3 = 2147483647(0x7fffffff, float:NaN)
            return r3
    }

    public static java.lang.String updataExt(java.lang.String r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bianfeng.thridlibrary.GsonUtils r1 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.util.Map r4 = r1.fromJsonWithObject(r4)
            java.lang.String r1 = "source"
            java.lang.Object r2 = r4.get(r1)
            java.lang.String r2 = r2.toString()
            com.bianfeng.paylib.utils.JsonValueUtils.source = r2
            r4.remove(r1)
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L24:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L52
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "gameid"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto L4a
            java.lang.Object r1 = r1.getValue()
            java.lang.Integer r1 = doubleToInt(r1)
            r0.put(r2, r1)
            goto L24
        L4a:
            java.lang.Object r1 = r1.getValue()
            r0.put(r2, r1)
            goto L24
        L52:
            com.bianfeng.thridlibrary.GsonUtils r4 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.lang.String r4 = r4.toJson(r0)
            return r4
    }
}
