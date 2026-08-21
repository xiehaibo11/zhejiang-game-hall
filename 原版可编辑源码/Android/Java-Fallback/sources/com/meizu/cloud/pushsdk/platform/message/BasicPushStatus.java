package com.meizu.cloud.pushsdk.platform.message;

public abstract class BasicPushStatus implements java.io.Serializable {
    public static final java.lang.String SUCCESS_CODE = "200";
    public static final java.lang.String TAG = "BasicPushStatus";
    public java.lang.String code;
    public java.lang.String message;

    public BasicPushStatus() {
            r0 = this;
            r0.<init>()
            return
    }

    public BasicPushStatus(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            org.json.JSONObject r0 = r3.parse(r4)
            if (r0 == 0) goto L46
            java.lang.String r1 = r3.code
            java.lang.String r2 = "200"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L46
            java.lang.String r1 = "value"
            boolean r2 = r0.isNull(r1)
            if (r2 != 0) goto L46
            org.json.JSONObject r0 = r0.getJSONObject(r1)     // Catch: org.json.JSONException -> L23
            r3.parseValueData(r0)     // Catch: org.json.JSONException -> L23
            goto L46
        L23:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "parse value data error "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = " json "
            r1.append(r0)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r0 = "BasicPushStatus"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r4)
        L46:
            return
    }

    public java.lang.String getCode() {
            r1 = this;
            java.lang.String r0 = r1.code
            return r0
    }

    public java.lang.String getMessage() {
            r1 = this;
            java.lang.String r0 = r1.message
            return r0
    }

    protected org.json.JSONObject parse(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "message"
            java.lang.String r1 = "code"
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            r3 = 0
            if (r2 != 0) goto L4a
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2f
            r2.<init>(r5)     // Catch: org.json.JSONException -> L2f
            boolean r5 = r2.isNull(r1)     // Catch: org.json.JSONException -> L2c
            if (r5 != 0) goto L1d
            java.lang.String r5 = r2.getString(r1)     // Catch: org.json.JSONException -> L2c
            r4.setCode(r5)     // Catch: org.json.JSONException -> L2c
        L1d:
            boolean r5 = r2.isNull(r0)     // Catch: org.json.JSONException -> L2c
            if (r5 != 0) goto L2a
            java.lang.String r5 = r2.getString(r0)     // Catch: org.json.JSONException -> L2c
            r4.setMessage(r5)     // Catch: org.json.JSONException -> L2c
        L2a:
            r3 = r2
            goto L4a
        L2c:
            r5 = move-exception
            r3 = r2
            goto L30
        L2f:
            r5 = move-exception
        L30:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "covert json error "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "BasicPushStatus"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r5)
        L4a:
            return r3
    }

    public abstract void parseValueData(org.json.JSONObject r1);

    public void setCode(java.lang.String r1) {
            r0 = this;
            r0.code = r1
            return
    }

    public void setMessage(java.lang.String r1) {
            r0 = this;
            r0.message = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BasicPushStatus{code='"
            r0.append(r1)
            java.lang.String r1 = r3.code
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", message='"
            r0.append(r2)
            java.lang.String r2 = r3.message
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
