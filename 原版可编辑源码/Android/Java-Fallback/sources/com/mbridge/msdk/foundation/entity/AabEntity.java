package com.mbridge.msdk.foundation.entity;

public class AabEntity implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    private static java.lang.String TAG;
    public int hlp;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.entity.AabEntity> r0 = com.mbridge.msdk.foundation.entity.AabEntity.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.entity.AabEntity.TAG = r0
            return
    }

    public AabEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.entity.AabEntity parser(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L22
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L22
            com.mbridge.msdk.foundation.entity.AabEntity r3 = new com.mbridge.msdk.foundation.entity.AabEntity
            r3.<init>()
            java.lang.String r1 = "hlp"
            boolean r2 = r0.has(r1)
            if (r2 == 0) goto L21
            int r0 = r0.optInt(r1)
            r3.setHlp(r0)
        L21:
            return r3
        L22:
            r3 = move-exception
            java.lang.String r0 = com.mbridge.msdk.foundation.entity.AabEntity.TAG
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            return r1
    }

    public int getHlp() {
            r1 = this;
            int r0 = r1.hlp
            return r0
    }

    public void setHlp(int r1) {
            r0 = this;
            r0.hlp = r1
            return
    }

    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "hlp"
            int r2 = r3.hlp     // Catch: org.json.JSONException -> Ld
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return r0
    }
}
