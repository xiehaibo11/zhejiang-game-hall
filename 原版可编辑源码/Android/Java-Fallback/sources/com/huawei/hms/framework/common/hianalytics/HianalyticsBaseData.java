package com.huawei.hms.framework.common.hianalytics;

public abstract class HianalyticsBaseData {
    protected static final java.lang.String SDK_NAME = "sdk_name";
    private static final java.lang.String SDK_TYPE = "sdk_type";
    private static final java.lang.String TAG = "HianalyticsBaseData";
    private java.util.LinkedHashMap<java.lang.String, java.lang.String> data;

    public HianalyticsBaseData() {
            r3 = this;
            r3.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r3.data = r0
            java.lang.String r1 = "sdk_type"
            java.lang.String r2 = "UxPP"
            r0.put(r1, r2)
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = r3.data
            java.lang.String r1 = "sdk_name"
            java.lang.String r2 = "Restclient"
            r0.put(r1, r2)
            return
    }

    public java.util.LinkedHashMap<java.lang.String, java.lang.String> get() {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = r1.data
            return r0
    }

    public com.huawei.hms.framework.common.hianalytics.HianalyticsBaseData put(java.lang.String r4, long r5) {
            r3 = this;
            if (r4 != 0) goto L19
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "key = null : value = "
            r4.append(r0)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "HianalyticsBaseData"
            com.huawei.hms.framework.common.Logger.v(r5, r4)
            goto L2f
        L19:
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = r3.data
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.put(r4, r5)
        L2f:
            return r3
    }

    public com.huawei.hms.framework.common.hianalytics.HianalyticsBaseData put(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto Lb
            if (r4 != 0) goto L5
            goto Lb
        L5:
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = r2.data
            r0.put(r3, r4)
            goto L29
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "key = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " : value = "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "HianalyticsBaseData"
            com.huawei.hms.framework.common.Logger.v(r4, r3)
        L29:
            return r2
    }

    public com.huawei.hms.framework.common.hianalytics.HianalyticsBaseData put(java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            if (r2 == 0) goto Lf
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L9
            goto Lf
        L9:
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = r1.data
            r0.putAll(r2)
            goto L16
        Lf:
            java.lang.String r2 = "HianalyticsBaseData"
            java.lang.String r0 = "data is null"
            com.huawei.hms.framework.common.Logger.v(r2, r0)
        L16:
            return r1
    }

    public java.lang.String toString() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.LinkedHashMap r1 = r4.get()
            java.util.Set r1 = r1.entrySet()     // Catch: org.json.JSONException -> L2b
            java.util.Iterator r1 = r1.iterator()     // Catch: org.json.JSONException -> L2b
        L11:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L2b
            if (r2 == 0) goto L33
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L2b
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: org.json.JSONException -> L2b
            java.lang.Object r3 = r2.getKey()     // Catch: org.json.JSONException -> L2b
            java.lang.String r3 = (java.lang.String) r3     // Catch: org.json.JSONException -> L2b
            java.lang.Object r2 = r2.getValue()     // Catch: org.json.JSONException -> L2b
            r0.put(r3, r2)     // Catch: org.json.JSONException -> L2b
            goto L11
        L2b:
            r1 = move-exception
            java.lang.String r2 = "HianalyticsBaseData"
            java.lang.String r3 = "catch JSONException"
            com.huawei.hms.framework.common.Logger.w(r2, r3, r1)
        L33:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
