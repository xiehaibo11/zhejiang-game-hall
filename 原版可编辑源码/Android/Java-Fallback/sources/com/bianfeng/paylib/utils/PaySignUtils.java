package com.bianfeng.paylib.utils;

public class PaySignUtils {
    public PaySignUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String sign(java.lang.String r5) {
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r0 = r0.getWebPayPrivateKey()
            com.bianfeng.thridlibrary.GsonUtils r1 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.util.Map r5 = r1.fromJsonWithObject(r5)
            java.util.TreeMap r1 = new java.util.TreeMap
            r1.<init>()
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L1d:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L37
            java.lang.Object r2 = r5.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            r1.put(r3, r2)
            goto L1d
        L37:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L44:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lb8
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            java.lang.String r4 = "store_id"
            boolean r4 = r4.equalsIgnoreCase(r3)
            if (r4 != 0) goto L7a
            java.lang.String r4 = "channel_id"
            boolean r4 = r4.equalsIgnoreCase(r3)
            if (r4 != 0) goto L7a
            java.lang.String r4 = "quantity"
            boolean r4 = r4.equalsIgnoreCase(r3)
            if (r4 != 0) goto L7a
            java.lang.String r4 = "price"
            boolean r4 = r4.equalsIgnoreCase(r3)
            if (r4 == 0) goto L97
        L7a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r2 = ""
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            java.lang.Double r2 = java.lang.Double.valueOf(r2)
            int r2 = r2.intValue()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
        L97:
            java.lang.String r4 = "client_info"
            boolean r4 = r4.equalsIgnoreCase(r3)
            if (r4 == 0) goto La7
            com.bianfeng.thridlibrary.GsonUtils r4 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.lang.String r2 = r4.toJson(r2)
        La7:
            r5.append(r3)
            java.lang.String r3 = "="
            r5.append(r3)
            r5.append(r2)
            java.lang.String r2 = "&"
            r5.append(r2)
            goto L44
        Lb8:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            r1.append(r0)
            java.lang.String r5 = r1.toString()
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "签名前-----"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            com.bianfeng.utilslib.SignMd5Utils r0 = com.bianfeng.utilslib.SignMd5Utils.getInstance()
            java.lang.String r5 = r0.md5(r5)
            return r5
    }
}
