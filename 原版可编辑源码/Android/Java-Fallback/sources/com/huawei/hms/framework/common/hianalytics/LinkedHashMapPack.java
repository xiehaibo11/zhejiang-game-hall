package com.huawei.hms.framework.common.hianalytics;

public class LinkedHashMapPack {
    private java.util.LinkedHashMap<java.lang.String, java.lang.String> map;

    public LinkedHashMapPack() {
            r1 = this;
            r1.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.map = r0
            return
    }

    public java.util.LinkedHashMap<java.lang.String, java.lang.String> getAll() {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = r1.map
            return r0
    }

    public com.huawei.hms.framework.common.hianalytics.LinkedHashMapPack put(java.lang.String r4, long r5) {
            r3 = this;
            if (r4 == 0) goto L18
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = r3.map
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.put(r4, r5)
        L18:
            return r3
    }

    public com.huawei.hms.framework.common.hianalytics.LinkedHashMapPack put(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L9
            if (r3 == 0) goto L9
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = r1.map
            r0.put(r2, r3)
        L9:
            return r1
    }

    public com.huawei.hms.framework.common.hianalytics.LinkedHashMapPack put(java.lang.String r2, boolean r3) {
            r1 = this;
            if (r2 == 0) goto L10
            if (r3 == 0) goto L9
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r3 = r1.map
            java.lang.String r0 = "1"
            goto Ld
        L9:
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r3 = r1.map
            java.lang.String r0 = "0"
        Ld:
            r3.put(r2, r0)
        L10:
            return r1
    }
}
