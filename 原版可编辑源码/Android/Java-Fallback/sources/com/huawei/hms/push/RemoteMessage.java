package com.huawei.hms.push;

public class RemoteMessage implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.huawei.hms.push.RemoteMessage> CREATOR = null;
    public static final int PRIORITY_HIGH = 1;
    public static final int PRIORITY_NORMAL = 2;
    public static final int PRIORITY_UNKNOWN = 0;
    public static final java.lang.String[] a = null;
    public static final int[] b = null;
    public static final long[] c = null;
    public static final java.util.HashMap<java.lang.String, java.lang.Object> d = null;
    public static final java.util.HashMap<java.lang.String, java.lang.Object> e = null;
    public static final java.util.HashMap<java.lang.String, java.lang.Object> f = null;
    public static final java.util.HashMap<java.lang.String, java.lang.Object> g = null;
    public static final java.util.HashMap<java.lang.String, java.lang.Object> h = null;
    public android.os.Bundle i;
    public com.huawei.hms.push.RemoteMessage.Notification j;

    public static class Builder {
        public final android.os.Bundle a;
        public final java.util.Map<java.lang.String, java.lang.String> b;

        public Builder(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                r2.a = r0
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r2.b = r0
                android.os.Bundle r0 = r2.a
                java.lang.String r1 = "to"
                r0.putString(r1, r3)
                return
        }

        public com.huawei.hms.push.RemoteMessage.Builder addData(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                if (r2 == 0) goto L8
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.b
                r0.put(r2, r3)
                return r1
            L8:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "add data failed, key is null."
                r2.<init>(r3)
                throw r2
        }

        public com.huawei.hms.push.RemoteMessage build() {
                r12 = this;
                java.lang.String r0 = "msgId"
                java.lang.String r1 = "receiptMode"
                java.lang.String r2 = "sendMode"
                java.lang.String r3 = "ttl"
                java.lang.String r4 = "collapseKey"
                java.lang.String r5 = "send message failed"
                java.lang.String r6 = "RemoteMessage"
                android.os.Bundle r7 = new android.os.Bundle
                r7.<init>()
                org.json.JSONObject r8 = new org.json.JSONObject
                r8.<init>()
                java.util.Map<java.lang.String, java.lang.String> r9 = r12.b     // Catch: org.json.JSONException -> Lbd
                java.util.Set r9 = r9.entrySet()     // Catch: org.json.JSONException -> Lbd
                java.util.Iterator r9 = r9.iterator()     // Catch: org.json.JSONException -> Lbd
            L22:
                boolean r10 = r9.hasNext()     // Catch: org.json.JSONException -> Lbd
                if (r10 == 0) goto L3c
                java.lang.Object r10 = r9.next()     // Catch: org.json.JSONException -> Lbd
                java.util.Map$Entry r10 = (java.util.Map.Entry) r10     // Catch: org.json.JSONException -> Lbd
                java.lang.Object r11 = r10.getKey()     // Catch: org.json.JSONException -> Lbd
                java.lang.String r11 = (java.lang.String) r11     // Catch: org.json.JSONException -> Lbd
                java.lang.Object r10 = r10.getValue()     // Catch: org.json.JSONException -> Lbd
                r8.put(r11, r10)     // Catch: org.json.JSONException -> Lbd
                goto L22
            L3c:
                java.lang.String r9 = r8.toString()     // Catch: org.json.JSONException -> Lb2
                org.json.JSONObject r10 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lb2
                r10.<init>()     // Catch: org.json.JSONException -> Lb2
                android.os.Bundle r11 = r12.a     // Catch: org.json.JSONException -> Lb2
                java.lang.String r11 = r11.getString(r4)     // Catch: org.json.JSONException -> Lb2
                r10.put(r4, r11)     // Catch: org.json.JSONException -> Lb2
                android.os.Bundle r4 = r12.a     // Catch: org.json.JSONException -> Lb2
                int r4 = r4.getInt(r3)     // Catch: org.json.JSONException -> Lb2
                r10.put(r3, r4)     // Catch: org.json.JSONException -> Lb2
                android.os.Bundle r3 = r12.a     // Catch: org.json.JSONException -> Lb2
                int r3 = r3.getInt(r2)     // Catch: org.json.JSONException -> Lb2
                r10.put(r2, r3)     // Catch: org.json.JSONException -> Lb2
                android.os.Bundle r2 = r12.a     // Catch: org.json.JSONException -> Lb2
                int r2 = r2.getInt(r1)     // Catch: org.json.JSONException -> Lb2
                r10.put(r1, r2)     // Catch: org.json.JSONException -> Lb2
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lb2
                r1.<init>()     // Catch: org.json.JSONException -> Lb2
                int r2 = r8.length()     // Catch: org.json.JSONException -> Lb2
                if (r2 == 0) goto L79
                java.lang.String r2 = "data"
                r1.put(r2, r9)     // Catch: org.json.JSONException -> Lb2
            L79:
                android.os.Bundle r2 = r12.a     // Catch: org.json.JSONException -> Lb2
                java.lang.String r2 = r2.getString(r0)     // Catch: org.json.JSONException -> Lb2
                r1.put(r0, r2)     // Catch: org.json.JSONException -> Lb2
                java.lang.String r0 = "msgContent"
                r10.put(r0, r1)     // Catch: org.json.JSONException -> Lb2
                java.lang.String r0 = r10.toString()     // Catch: org.json.JSONException -> Lb2
                java.nio.charset.Charset r1 = com.huawei.hms.push.w.a     // Catch: org.json.JSONException -> Lb2
                byte[] r0 = r0.getBytes(r1)     // Catch: org.json.JSONException -> Lb2
                java.lang.String r1 = "message_body"
                r7.putByteArray(r1, r0)     // Catch: org.json.JSONException -> Lb2
                android.os.Bundle r0 = r12.a
                java.lang.String r1 = "to"
                java.lang.String r0 = r0.getString(r1)
                r7.putString(r1, r0)
                android.os.Bundle r0 = r12.a
                java.lang.String r1 = "message_type"
                java.lang.String r0 = r0.getString(r1)
                r7.putString(r1, r0)
                com.huawei.hms.push.RemoteMessage r0 = new com.huawei.hms.push.RemoteMessage
                r0.<init>(r7)
                return r0
            Lb2:
                java.lang.String r0 = "JSONException: parse message body failed."
                com.huawei.hms.support.log.HMSLog.w(r6, r0)
                com.huawei.hms.support.api.push.PushException r0 = new com.huawei.hms.support.api.push.PushException
                r0.<init>(r5)
                throw r0
            Lbd:
                java.lang.String r0 = "JSONException: parse data to json failed."
                com.huawei.hms.support.log.HMSLog.w(r6, r0)
                com.huawei.hms.support.api.push.PushException r0 = new com.huawei.hms.support.api.push.PushException
                r0.<init>(r5)
                throw r0
        }

        public com.huawei.hms.push.RemoteMessage.Builder clearData() {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.b
                r0.clear()
                return r1
        }

        public com.huawei.hms.push.RemoteMessage.Builder setCollapseKey(java.lang.String r3) {
                r2 = this;
                android.os.Bundle r0 = r2.a
                java.lang.String r1 = "collapseKey"
                r0.putString(r1, r3)
                return r2
        }

        public com.huawei.hms.push.RemoteMessage.Builder setData(java.util.Map<java.lang.String, java.lang.String> r4) {
                r3 = this;
                java.util.Map<java.lang.String, java.lang.String> r0 = r3.b
                r0.clear()
                java.util.Set r4 = r4.entrySet()
                java.util.Iterator r4 = r4.iterator()
            Ld:
                boolean r0 = r4.hasNext()
                if (r0 == 0) goto L27
                java.lang.Object r0 = r4.next()
                java.util.Map$Entry r0 = (java.util.Map.Entry) r0
                java.util.Map<java.lang.String, java.lang.String> r1 = r3.b
                java.lang.Object r2 = r0.getKey()
                java.lang.Object r0 = r0.getValue()
                r1.put(r2, r0)
                goto Ld
            L27:
                return r3
        }

        public com.huawei.hms.push.RemoteMessage.Builder setMessageId(java.lang.String r3) {
                r2 = this;
                android.os.Bundle r0 = r2.a
                java.lang.String r1 = "msgId"
                r0.putString(r1, r3)
                return r2
        }

        public com.huawei.hms.push.RemoteMessage.Builder setMessageType(java.lang.String r3) {
                r2 = this;
                android.os.Bundle r0 = r2.a
                java.lang.String r1 = "message_type"
                r0.putString(r1, r3)
                return r2
        }

        public com.huawei.hms.push.RemoteMessage.Builder setReceiptMode(int r3) {
                r2 = this;
                r0 = 1
                if (r3 == r0) goto Le
                if (r3 != 0) goto L6
                goto Le
            L6:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "receipt mode can only be 0 or 1."
                r3.<init>(r0)
                throw r3
            Le:
                android.os.Bundle r0 = r2.a
                java.lang.String r1 = "receiptMode"
                r0.putInt(r1, r3)
                return r2
        }

        public com.huawei.hms.push.RemoteMessage.Builder setSendMode(int r3) {
                r2 = this;
                if (r3 == 0) goto Le
                r0 = 1
                if (r3 != r0) goto L6
                goto Le
            L6:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "send mode can only be 0 or 1."
                r3.<init>(r0)
                throw r3
            Le:
                android.os.Bundle r0 = r2.a
                java.lang.String r1 = "sendMode"
                r0.putInt(r1, r3)
                return r2
        }

        public com.huawei.hms.push.RemoteMessage.Builder setTtl(int r3) {
                r2 = this;
                r0 = 1
                if (r3 < r0) goto L10
                r0 = 1296000(0x13c680, float:1.816083E-39)
                if (r3 > r0) goto L10
                android.os.Bundle r0 = r2.a
                java.lang.String r1 = "ttl"
                r0.putInt(r1, r3)
                return r2
            L10:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "ttl must be greater than or equal to 1 and less than or equal to 1296000"
                r3.<init>(r0)
                throw r3
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface MessagePriority {
    }

    public static class Notification implements java.io.Serializable {
        public final long[] A;
        public final java.lang.String B;
        public final java.lang.String a;
        public final java.lang.String b;
        public final java.lang.String[] c;
        public final java.lang.String d;
        public final java.lang.String e;
        public final java.lang.String[] f;
        public final java.lang.String g;
        public final java.lang.String h;
        public final java.lang.String i;
        public final java.lang.String j;
        public final java.lang.String k;
        public final java.lang.String l;
        public final java.lang.String m;
        public final android.net.Uri n;
        public final int o;
        public final java.lang.String p;
        public final int q;
        public final int r;
        public final int s;
        public final int[] t;
        public final java.lang.String u;
        public final int v;
        public final java.lang.String w;
        public final int x;
        public final java.lang.String y;
        public final java.lang.String z;

        public Notification(android.os.Bundle r4) {
                r3 = this;
                r3.<init>()
                java.lang.String r0 = "notifyTitle"
                java.lang.String r0 = r4.getString(r0)
                r3.a = r0
                java.lang.String r0 = "content"
                java.lang.String r0 = r4.getString(r0)
                r3.d = r0
                java.lang.String r0 = "title_loc_key"
                java.lang.String r0 = r4.getString(r0)
                r3.b = r0
                java.lang.String r0 = "body_loc_key"
                java.lang.String r0 = r4.getString(r0)
                r3.e = r0
                java.lang.String r0 = "title_loc_args"
                java.lang.String[] r0 = r4.getStringArray(r0)
                r3.c = r0
                java.lang.String r0 = "body_loc_args"
                java.lang.String[] r0 = r4.getStringArray(r0)
                r3.f = r0
                java.lang.String r0 = "icon"
                java.lang.String r0 = r4.getString(r0)
                r3.g = r0
                java.lang.String r0 = "color"
                java.lang.String r0 = r4.getString(r0)
                r3.j = r0
                java.lang.String r0 = "sound"
                java.lang.String r0 = r4.getString(r0)
                r3.h = r0
                java.lang.String r0 = "tag"
                java.lang.String r0 = r4.getString(r0)
                r3.i = r0
                java.lang.String r0 = "channelId"
                java.lang.String r0 = r4.getString(r0)
                r3.m = r0
                java.lang.String r0 = "acn"
                java.lang.String r0 = r4.getString(r0)
                r3.k = r0
                java.lang.String r0 = "intentUri"
                java.lang.String r0 = r4.getString(r0)
                r3.l = r0
                java.lang.String r0 = "notifyId"
                int r0 = r4.getInt(r0)
                r3.o = r0
                java.lang.String r0 = "url"
                java.lang.String r0 = r4.getString(r0)
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                r2 = 0
                if (r1 != 0) goto L85
                android.net.Uri r0 = android.net.Uri.parse(r0)
                goto L86
            L85:
                r0 = r2
            L86:
                r3.n = r0
                java.lang.String r0 = "notifyIcon"
                java.lang.String r0 = r4.getString(r0)
                r3.p = r0
                java.lang.String r0 = "defaultLightSettings"
                int r0 = r4.getInt(r0)
                r3.q = r0
                java.lang.String r0 = "defaultSound"
                int r0 = r4.getInt(r0)
                r3.r = r0
                java.lang.String r0 = "defaultVibrateTimings"
                int r0 = r4.getInt(r0)
                r3.s = r0
                java.lang.String r0 = "lightSettings"
                int[] r0 = r4.getIntArray(r0)
                r3.t = r0
                java.lang.String r0 = "when"
                java.lang.String r0 = r4.getString(r0)
                r3.u = r0
                java.lang.String r0 = "localOnly"
                int r0 = r4.getInt(r0)
                r3.v = r0
                java.lang.String r0 = "badgeSetNum"
                java.lang.String r0 = r4.getString(r0, r2)
                r3.w = r0
                java.lang.String r0 = "autoCancel"
                int r0 = r4.getInt(r0)
                r3.x = r0
                java.lang.String r0 = "priority"
                java.lang.String r0 = r4.getString(r0, r2)
                r3.y = r0
                java.lang.String r0 = "ticker"
                java.lang.String r0 = r4.getString(r0)
                r3.z = r0
                java.lang.String r0 = "vibrateTimings"
                long[] r0 = r4.getLongArray(r0)
                r3.A = r0
                java.lang.String r0 = "visibility"
                java.lang.String r4 = r4.getString(r0, r2)
                r3.B = r4
                return
        }

        public Notification(android.os.Bundle r1, com.huawei.hms.push.b r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public final java.lang.Integer a(java.lang.String r3) {
                r2 = this;
                if (r3 == 0) goto L22
                java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.NumberFormatException -> L7
                goto L23
            L7:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "NumberFormatException: get "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = " failed."
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r0 = "RemoteMessage"
                com.huawei.hms.support.log.HMSLog.w(r0, r3)
            L22:
                r3 = 0
            L23:
                return r3
        }

        public java.lang.Integer getBadgeNumber() {
                r1 = this;
                java.lang.String r0 = r1.w
                java.lang.Integer r0 = r1.a(r0)
                return r0
        }

        public java.lang.String getBody() {
                r1 = this;
                java.lang.String r0 = r1.d
                return r0
        }

        public java.lang.String[] getBodyLocalizationArgs() {
                r1 = this;
                java.lang.String[] r0 = r1.f
                if (r0 != 0) goto L8
                r0 = 0
                java.lang.String[] r0 = new java.lang.String[r0]
                goto Le
            L8:
                java.lang.Object r0 = r0.clone()
                java.lang.String[] r0 = (java.lang.String[]) r0
            Le:
                return r0
        }

        public java.lang.String getBodyLocalizationKey() {
                r1 = this;
                java.lang.String r0 = r1.e
                return r0
        }

        public java.lang.String getChannelId() {
                r1 = this;
                java.lang.String r0 = r1.m
                return r0
        }

        public java.lang.String getClickAction() {
                r1 = this;
                java.lang.String r0 = r1.k
                return r0
        }

        public java.lang.String getColor() {
                r1 = this;
                java.lang.String r0 = r1.j
                return r0
        }

        public java.lang.String getIcon() {
                r1 = this;
                java.lang.String r0 = r1.g
                return r0
        }

        public android.net.Uri getImageUrl() {
                r1 = this;
                java.lang.String r0 = r1.p
                if (r0 != 0) goto L6
                r0 = 0
                goto La
            L6:
                android.net.Uri r0 = android.net.Uri.parse(r0)
            La:
                return r0
        }

        public java.lang.Integer getImportance() {
                r1 = this;
                java.lang.String r0 = r1.y
                java.lang.Integer r0 = r1.a(r0)
                return r0
        }

        public java.lang.String getIntentUri() {
                r1 = this;
                java.lang.String r0 = r1.l
                return r0
        }

        public int[] getLightSettings() {
                r1 = this;
                int[] r0 = r1.t
                if (r0 != 0) goto L8
                r0 = 0
                int[] r0 = new int[r0]
                goto Le
            L8:
                java.lang.Object r0 = r0.clone()
                int[] r0 = (int[]) r0
            Le:
                return r0
        }

        public android.net.Uri getLink() {
                r1 = this;
                android.net.Uri r0 = r1.n
                return r0
        }

        public int getNotifyId() {
                r1 = this;
                int r0 = r1.o
                return r0
        }

        public java.lang.String getSound() {
                r1 = this;
                java.lang.String r0 = r1.h
                return r0
        }

        public java.lang.String getTag() {
                r1 = this;
                java.lang.String r0 = r1.i
                return r0
        }

        public java.lang.String getTicker() {
                r1 = this;
                java.lang.String r0 = r1.z
                return r0
        }

        public java.lang.String getTitle() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        public java.lang.String[] getTitleLocalizationArgs() {
                r1 = this;
                java.lang.String[] r0 = r1.c
                if (r0 != 0) goto L8
                r0 = 0
                java.lang.String[] r0 = new java.lang.String[r0]
                goto Le
            L8:
                java.lang.Object r0 = r0.clone()
                java.lang.String[] r0 = (java.lang.String[]) r0
            Le:
                return r0
        }

        public java.lang.String getTitleLocalizationKey() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }

        public long[] getVibrateConfig() {
                r1 = this;
                long[] r0 = r1.A
                if (r0 != 0) goto L8
                r0 = 0
                long[] r0 = new long[r0]
                goto Le
            L8:
                java.lang.Object r0 = r0.clone()
                long[] r0 = (long[]) r0
            Le:
                return r0
        }

        public java.lang.Integer getVisibility() {
                r1 = this;
                java.lang.String r0 = r1.B
                java.lang.Integer r0 = r1.a(r0)
                return r0
        }

        public java.lang.Long getWhen() {
                r3 = this;
                java.lang.String r0 = "RemoteMessage"
                java.lang.String r1 = r3.u
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L20
                java.lang.String r1 = r3.u     // Catch: java.lang.StringIndexOutOfBoundsException -> L15 java.text.ParseException -> L1b
                long r1 = com.huawei.hms.push.utils.DateUtil.parseUtcToMillisecond(r1)     // Catch: java.lang.StringIndexOutOfBoundsException -> L15 java.text.ParseException -> L1b
                java.lang.Long r0 = java.lang.Long.valueOf(r1)     // Catch: java.lang.StringIndexOutOfBoundsException -> L15 java.text.ParseException -> L1b
                goto L21
            L15:
                java.lang.String r1 = "StringIndexOutOfBoundsException: parse when failed."
                com.huawei.hms.support.log.HMSLog.w(r0, r1)
                goto L20
            L1b:
                java.lang.String r1 = "ParseException: parse when failed."
                com.huawei.hms.support.log.HMSLog.w(r0, r1)
            L20:
                r0 = 0
            L21:
                return r0
        }

        public boolean isAutoCancel() {
                r2 = this;
                int r0 = r2.x
                r1 = 1
                if (r0 != r1) goto L6
                goto L7
            L6:
                r1 = 0
            L7:
                return r1
        }

        public boolean isDefaultLight() {
                r2 = this;
                int r0 = r2.q
                r1 = 1
                if (r0 != r1) goto L6
                goto L7
            L6:
                r1 = 0
            L7:
                return r1
        }

        public boolean isDefaultSound() {
                r2 = this;
                int r0 = r2.r
                r1 = 1
                if (r0 != r1) goto L6
                goto L7
            L6:
                r1 = 0
            L7:
                return r1
        }

        public boolean isDefaultVibrate() {
                r2 = this;
                int r0 = r2.s
                r1 = 1
                if (r0 != r1) goto L6
                goto L7
            L6:
                r1 = 0
            L7:
                return r1
        }

        public boolean isLocalOnly() {
                r2 = this;
                int r0 = r2.v
                r1 = 1
                if (r0 != r1) goto L6
                goto L7
            L6:
                r1 = 0
            L7:
                return r1
        }
    }

    static {
            r0 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)
            java.lang.String[] r2 = new java.lang.String[r0]
            com.huawei.hms.push.RemoteMessage.a = r2
            int[] r2 = new int[r0]
            com.huawei.hms.push.RemoteMessage.b = r2
            long[] r0 = new long[r0]
            com.huawei.hms.push.RemoteMessage.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r2 = 8
            r0.<init>(r2)
            com.huawei.hms.push.RemoteMessage.d = r0
            java.lang.String r3 = ""
            java.lang.String r4 = "from"
            r0.put(r4, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.d
            java.lang.String r4 = "collapseKey"
            r0.put(r4, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.d
            java.lang.String r4 = "sendTime"
            r0.put(r4, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.d
            r4 = 86400(0x15180, float:1.21072E-40)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r5 = "ttl"
            r0.put(r5, r4)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.d
            r4 = 2
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r5 = "urgency"
            r0.put(r5, r4)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.d
            java.lang.String r5 = "oriUrgency"
            r0.put(r5, r4)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.d
            java.lang.String r4 = "sendMode"
            r0.put(r4, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.d
            java.lang.String r4 = "receiptMode"
            r0.put(r4, r1)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>(r2)
            com.huawei.hms.push.RemoteMessage.e = r0
            java.lang.String r1 = "title_loc_key"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.e
            java.lang.String r1 = "body_loc_key"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.e
            java.lang.String r1 = "notifyIcon"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.e
            java.lang.String[] r1 = com.huawei.hms.push.RemoteMessage.a
            java.lang.String r4 = "title_loc_args"
            r0.put(r4, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.e
            java.lang.String[] r1 = com.huawei.hms.push.RemoteMessage.a
            java.lang.String r4 = "body_loc_args"
            r0.put(r4, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.e
            java.lang.String r1 = "ticker"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.e
            java.lang.String r1 = "notifyTitle"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.e
            java.lang.String r1 = "content"
            r0.put(r1, r3)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>(r2)
            com.huawei.hms.push.RemoteMessage.f = r0
            java.lang.String r1 = "icon"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.f
            java.lang.String r1 = "color"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.f
            java.lang.String r1 = "sound"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.f
            r1 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r4 = "defaultLightSettings"
            r0.put(r4, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.f
            int[] r4 = com.huawei.hms.push.RemoteMessage.b
            java.lang.String r5 = "lightSettings"
            r0.put(r5, r4)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.f
            java.lang.String r4 = "defaultSound"
            r0.put(r4, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.f
            java.lang.String r4 = "defaultVibrateTimings"
            r0.put(r4, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.f
            long[] r4 = com.huawei.hms.push.RemoteMessage.c
            java.lang.String r5 = "vibrateTimings"
            r0.put(r5, r4)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>(r2)
            com.huawei.hms.push.RemoteMessage.g = r0
            java.lang.String r2 = "tag"
            r0.put(r2, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.g
            java.lang.String r2 = "when"
            r0.put(r2, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.g
            java.lang.String r2 = "localOnly"
            r0.put(r2, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.g
            java.lang.String r2 = "badgeSetNum"
            r0.put(r2, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.g
            java.lang.String r2 = "priority"
            r0.put(r2, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.g
            java.lang.String r2 = "autoCancel"
            r0.put(r2, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.g
            java.lang.String r1 = "visibility"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.g
            java.lang.String r1 = "channelId"
            r0.put(r1, r3)
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 3
            r0.<init>(r1)
            com.huawei.hms.push.RemoteMessage.h = r0
            java.lang.String r1 = "acn"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.h
            java.lang.String r1 = "intentUri"
            r0.put(r1, r3)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.huawei.hms.push.RemoteMessage.h
            java.lang.String r1 = "url"
            r0.put(r1, r3)
            com.huawei.hms.push.b r0 = new com.huawei.hms.push.b
            r0.<init>()
            com.huawei.hms.push.RemoteMessage.CREATOR = r0
            return
    }

    public RemoteMessage(android.os.Bundle r1) {
            r0 = this;
            r0.<init>()
            android.os.Bundle r1 = r0.a(r1)
            r0.i = r1
            return
    }

    public RemoteMessage(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            android.os.Bundle r0 = r2.readBundle()
            r1.i = r0
            java.io.Serializable r2 = r2.readSerializable()
            com.huawei.hms.push.RemoteMessage$Notification r2 = (com.huawei.hms.push.RemoteMessage.Notification) r2
            r1.j = r2
            return
    }

    public static org.json.JSONObject a(org.json.JSONObject r1) {
            if (r1 == 0) goto L9
            java.lang.String r0 = "msgContent"
            org.json.JSONObject r1 = r1.optJSONObject(r0)
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static org.json.JSONObject b(android.os.Bundle r1) {
            java.lang.String r0 = "message_body"
            byte[] r1 = r1.getByteArray(r0)     // Catch: org.json.JSONException -> L10
            java.lang.String r1 = com.huawei.hms.push.v.a(r1)     // Catch: org.json.JSONException -> L10
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10
            r0.<init>(r1)     // Catch: org.json.JSONException -> L10
            return r0
        L10:
            java.lang.String r1 = "RemoteMessage"
            java.lang.String r0 = "JSONException:parse message body failed."
            com.huawei.hms.support.log.HMSLog.w(r1, r0)
            r1 = 0
            return r1
    }

    public static org.json.JSONObject b(org.json.JSONObject r1) {
            if (r1 == 0) goto L9
            java.lang.String r0 = "notifyDetail"
            org.json.JSONObject r1 = r1.optJSONObject(r0)
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static org.json.JSONObject c(org.json.JSONObject r1) {
            if (r1 == 0) goto L9
            java.lang.String r0 = "param"
            org.json.JSONObject r1 = r1.optJSONObject(r0)
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static org.json.JSONObject d(org.json.JSONObject r1) {
            if (r1 == 0) goto L9
            java.lang.String r0 = "psContent"
            org.json.JSONObject r1 = r1.optJSONObject(r0)
            return r1
        L9:
            r1 = 0
            return r1
    }

    public final android.os.Bundle a(android.os.Bundle r14) {
            r13 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            org.json.JSONObject r2 = b(r14)
            org.json.JSONObject r3 = a(r2)
            r1 = 0
            java.lang.String r4 = "data"
            java.lang.String r5 = com.huawei.hms.push.utils.JsonUtil.getString(r3, r4, r1)
            java.lang.String r6 = "analyticInfo"
            java.lang.String r7 = com.huawei.hms.push.utils.JsonUtil.getString(r3, r6, r1)
            r0.putString(r6, r7)
            java.lang.String r6 = "device_token"
            java.lang.String r7 = r14.getString(r6)
            r0.putString(r6, r7)
            org.json.JSONObject r6 = d(r3)
            org.json.JSONObject r7 = b(r6)
            org.json.JSONObject r8 = c(r6)
            java.lang.String r9 = "inputType"
            int r9 = r14.getInt(r9)
            r10 = 1
            if (r9 != r10) goto L4f
            boolean r9 = com.huawei.hms.push.s.a(r3, r6, r5)
            if (r9 == 0) goto L4f
            java.lang.String r1 = "message_body"
            byte[] r14 = r14.getByteArray(r1)
            java.lang.String r14 = com.huawei.hms.push.v.a(r14)
            r0.putString(r4, r14)
            return r0
        L4f:
            java.lang.String r9 = "to"
            java.lang.String r10 = r14.getString(r9)
            java.lang.String r11 = "message_type"
            java.lang.String r14 = r14.getString(r11)
            java.lang.String r12 = "msgId"
            java.lang.String r1 = com.huawei.hms.push.utils.JsonUtil.getString(r3, r12, r1)
            r0.putString(r9, r10)
            r0.putString(r4, r5)
            r0.putString(r12, r1)
            r0.putString(r11, r14)
            java.util.HashMap<java.lang.String, java.lang.Object> r14 = com.huawei.hms.push.RemoteMessage.d
            com.huawei.hms.push.utils.JsonUtil.transferJsonObjectToBundle(r2, r0, r14)
            r1 = r13
            r4 = r6
            r5 = r7
            r6 = r8
            android.os.Bundle r14 = r1.a(r2, r3, r4, r5, r6)
            java.lang.String r1 = "notification"
            r0.putBundle(r1, r14)
            return r0
    }

    public final android.os.Bundle a(org.json.JSONObject r3, org.json.JSONObject r4, org.json.JSONObject r5, org.json.JSONObject r6, org.json.JSONObject r7) {
            r2 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.util.HashMap<java.lang.String, java.lang.Object> r1 = com.huawei.hms.push.RemoteMessage.e
            com.huawei.hms.push.utils.JsonUtil.transferJsonObjectToBundle(r5, r0, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r5 = com.huawei.hms.push.RemoteMessage.f
            com.huawei.hms.push.utils.JsonUtil.transferJsonObjectToBundle(r6, r0, r5)
            java.util.HashMap<java.lang.String, java.lang.Object> r5 = com.huawei.hms.push.RemoteMessage.g
            com.huawei.hms.push.utils.JsonUtil.transferJsonObjectToBundle(r3, r0, r5)
            java.util.HashMap<java.lang.String, java.lang.Object> r3 = com.huawei.hms.push.RemoteMessage.h
            com.huawei.hms.push.utils.JsonUtil.transferJsonObjectToBundle(r7, r0, r3)
            java.lang.String r3 = "notifyId"
            r5 = 0
            int r4 = com.huawei.hms.push.utils.JsonUtil.getInt(r4, r3, r5)
            r0.putInt(r3, r4)
            return r0
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getAnalyticInfo() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "analyticInfo"
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getAnalyticInfoMap() {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            android.os.Bundle r1 = r5.i
            java.lang.String r2 = "analyticInfo"
            java.lang.String r1 = r1.getString(r2)
            if (r1 == 0) goto L43
            java.lang.String r2 = r1.trim()
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L43
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L3c
            r2.<init>(r1)     // Catch: org.json.JSONException -> L3c
            java.util.Iterator r1 = r2.keys()     // Catch: org.json.JSONException -> L3c
        L22:
            boolean r3 = r1.hasNext()     // Catch: org.json.JSONException -> L3c
            if (r3 == 0) goto L43
            java.lang.Object r3 = r1.next()     // Catch: org.json.JSONException -> L3c
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: org.json.JSONException -> L3c
            java.lang.Object r4 = r2.get(r3)     // Catch: org.json.JSONException -> L3c
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: org.json.JSONException -> L3c
            r0.put(r3, r4)     // Catch: org.json.JSONException -> L3c
            goto L22
        L3c:
            java.lang.String r1 = "RemoteMessage"
            java.lang.String r2 = "JSONException: get analyticInfo from map failed."
            com.huawei.hms.support.log.HMSLog.w(r1, r2)
        L43:
            return r0
    }

    public java.lang.String getCollapseKey() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "collapseKey"
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public java.lang.String getData() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "data"
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getDataOfMap() {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            android.os.Bundle r1 = r5.i
            java.lang.String r2 = "data"
            java.lang.String r1 = r1.getString(r2)
            if (r1 == 0) goto L43
            java.lang.String r2 = r1.trim()
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L43
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L3c
            r2.<init>(r1)     // Catch: org.json.JSONException -> L3c
            java.util.Iterator r1 = r2.keys()     // Catch: org.json.JSONException -> L3c
        L22:
            boolean r3 = r1.hasNext()     // Catch: org.json.JSONException -> L3c
            if (r3 == 0) goto L43
            java.lang.Object r3 = r1.next()     // Catch: org.json.JSONException -> L3c
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: org.json.JSONException -> L3c
            java.lang.Object r4 = r2.get(r3)     // Catch: org.json.JSONException -> L3c
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: org.json.JSONException -> L3c
            r0.put(r3, r4)     // Catch: org.json.JSONException -> L3c
            goto L22
        L3c:
            java.lang.String r1 = "RemoteMessage"
            java.lang.String r2 = "JSONException: get data from map failed"
            com.huawei.hms.support.log.HMSLog.w(r1, r2)
        L43:
            return r0
    }

    public java.lang.String getFrom() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "from"
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public java.lang.String getMessageId() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "msgId"
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public java.lang.String getMessageType() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "message_type"
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public com.huawei.hms.push.RemoteMessage.Notification getNotification() {
            r3 = this;
            android.os.Bundle r0 = r3.i
            java.lang.String r1 = "notification"
            android.os.Bundle r0 = r0.getBundle(r1)
            com.huawei.hms.push.RemoteMessage$Notification r1 = r3.j
            r2 = 0
            if (r1 != 0) goto L16
            if (r0 == 0) goto L16
            com.huawei.hms.push.RemoteMessage$Notification r1 = new com.huawei.hms.push.RemoteMessage$Notification
            r1.<init>(r0, r2)
            r3.j = r1
        L16:
            com.huawei.hms.push.RemoteMessage$Notification r0 = r3.j
            if (r0 != 0) goto L26
            com.huawei.hms.push.RemoteMessage$Notification r0 = new com.huawei.hms.push.RemoteMessage$Notification
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            r0.<init>(r1, r2)
            r3.j = r0
        L26:
            com.huawei.hms.push.RemoteMessage$Notification r0 = r3.j
            return r0
    }

    public int getOriginalUrgency() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "oriUrgency"
            int r0 = r0.getInt(r1)
            r1 = 1
            if (r0 == r1) goto Lf
            r1 = 2
            if (r0 == r1) goto Lf
            r0 = 0
        Lf:
            return r0
    }

    public int getReceiptMode() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "receiptMode"
            int r0 = r0.getInt(r1)
            return r0
    }

    public int getSendMode() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "sendMode"
            int r0 = r0.getInt(r1)
            return r0
    }

    public long getSentTime() {
            r4 = this;
            r0 = 0
            android.os.Bundle r2 = r4.i     // Catch: java.lang.NumberFormatException -> L15
            java.lang.String r3 = "sendTime"
            java.lang.String r2 = r2.getString(r3)     // Catch: java.lang.NumberFormatException -> L15
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.NumberFormatException -> L15
            if (r3 != 0) goto L14
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L15
        L14:
            return r0
        L15:
            java.lang.String r2 = "RemoteMessage"
            java.lang.String r3 = "NumberFormatException: get sendTime error."
            com.huawei.hms.support.log.HMSLog.w(r2, r3)
            return r0
    }

    public java.lang.String getTo() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "to"
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public java.lang.String getToken() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "device_token"
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public int getTtl() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "ttl"
            int r0 = r0.getInt(r1)
            return r0
    }

    public int getUrgency() {
            r2 = this;
            android.os.Bundle r0 = r2.i
            java.lang.String r1 = "urgency"
            int r0 = r0.getInt(r1)
            r1 = 1
            if (r0 == r1) goto Lf
            r1 = 2
            if (r0 == r1) goto Lf
            r0 = 0
        Lf:
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            android.os.Bundle r2 = r0.i
            r1.writeBundle(r2)
            com.huawei.hms.push.RemoteMessage$Notification r2 = r0.j
            r1.writeSerializable(r2)
            return
    }
}
