package com.meizu.cloud.pushsdk.handler;

public class MessageV4 extends com.meizu.cloud.pushsdk.handler.MessageV3 {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.handler.MessageV3> CREATOR = null;
    private static final java.lang.String TAG = "MessageV4";
    private com.meizu.cloud.pushsdk.notification.model.ActVideoSetting actVideoSetting;


    static {
            com.meizu.cloud.pushsdk.handler.MessageV4$1 r0 = new com.meizu.cloud.pushsdk.handler.MessageV4$1
            r0.<init>()
            com.meizu.cloud.pushsdk.handler.MessageV4.CREATOR = r0
            return
    }

    public MessageV4() {
            r0 = this;
            r0.<init>()
            return
    }

    public MessageV4(android.os.Parcel r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.Class<com.meizu.cloud.pushsdk.notification.model.ActVideoSetting> r0 = com.meizu.cloud.pushsdk.notification.model.ActVideoSetting.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r2 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r2 = (com.meizu.cloud.pushsdk.notification.model.ActVideoSetting) r2
            r1.actVideoSetting = r2
            return
    }

    public static com.meizu.cloud.pushsdk.handler.MessageV4 parse(com.meizu.cloud.pushsdk.handler.MessageV3 r5) {
            java.lang.String r0 = "acts"
            java.lang.String r1 = "extra"
            com.meizu.cloud.pushsdk.handler.MessageV4 r2 = new com.meizu.cloud.pushsdk.handler.MessageV4
            r2.<init>()
            java.lang.String r3 = r5.getNotificationMessage()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r4 = "MessageV4"
            if (r3 != 0) goto L59
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L40
            java.lang.String r5 = r5.getNotificationMessage()     // Catch: org.json.JSONException -> L40
            r3.<init>(r5)     // Catch: org.json.JSONException -> L40
            java.lang.String r5 = "data"
            org.json.JSONObject r5 = r3.getJSONObject(r5)     // Catch: org.json.JSONException -> L40
            boolean r3 = r5.isNull(r1)     // Catch: org.json.JSONException -> L40
            if (r3 != 0) goto L59
            org.json.JSONObject r5 = r5.getJSONObject(r1)     // Catch: org.json.JSONException -> L40
            boolean r1 = r5.isNull(r0)     // Catch: org.json.JSONException -> L40
            if (r1 != 0) goto L59
            org.json.JSONObject r5 = r5.getJSONObject(r0)     // Catch: org.json.JSONException -> L40
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r5 = com.meizu.cloud.pushsdk.notification.model.ActVideoSetting.parse(r5)     // Catch: org.json.JSONException -> L40
            r2.setActVideoSetting(r5)     // Catch: org.json.JSONException -> L40
            goto L59
        L40:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse messageV4 error "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r5)
        L59:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "MessageV4 "
            r5.append(r0)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r5)
            return r2
    }

    public com.meizu.cloud.pushsdk.notification.model.ActVideoSetting getActVideoSetting() {
            r1 = this;
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r0 = r1.actVideoSetting
            return r0
    }

    public void setActVideoSetting(com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r1) {
            r0 = this;
            r0.actVideoSetting = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MessageV4{actVideoSetting="
            r0.append(r1)
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r1 = r2.actVideoSetting
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r1 = super.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            super.writeToParcel(r2, r3)
            com.meizu.cloud.pushsdk.notification.model.ActVideoSetting r0 = r1.actVideoSetting
            r2.writeParcelable(r0, r3)
            return
    }
}
