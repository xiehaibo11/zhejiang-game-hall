package com.meizu.cloud.pushsdk.handler;

public class MessageV3 implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.handler.MessageV3> CREATOR = null;
    private static final java.lang.String TAG = "Message_V3";
    private java.lang.String activity;
    private int clickType;
    private java.lang.String content;
    private java.lang.String deviceId;
    private boolean isDiscard;
    private com.meizu.cloud.pushsdk.notification.model.AdvanceSetting mAdvanceSetting;
    private com.meizu.cloud.pushsdk.notification.model.AppIconSetting mAppIconSetting;
    private com.meizu.cloud.pushsdk.notification.model.NotificationStyle mNotificationStyle;
    private com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting mTimeDisplaySetting;
    private java.lang.String notificationMessage;
    private java.lang.String packageName;
    private java.util.Map<java.lang.String, java.lang.String> paramsMap;
    private java.lang.String pushTimestamp;
    private java.lang.String seqId;
    private java.lang.String taskId;
    private java.lang.String throughMessage;
    private java.lang.String title;
    private java.lang.String uploadDataPackageName;
    private java.lang.String uriPackageName;
    private java.lang.String webUrl;


    static {
            com.meizu.cloud.pushsdk.handler.MessageV3$1 r0 = new com.meizu.cloud.pushsdk.handler.MessageV3$1
            r0.<init>()
            com.meizu.cloud.pushsdk.handler.MessageV3.CREATOR = r0
            return
    }

    public MessageV3() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.paramsMap = r0
            return
    }

    public MessageV3(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.paramsMap = r0
            java.lang.String r0 = r2.readString()
            r1.taskId = r0
            java.lang.String r0 = r2.readString()
            r1.seqId = r0
            java.lang.String r0 = r2.readString()
            r1.deviceId = r0
            java.lang.String r0 = r2.readString()
            r1.title = r0
            java.lang.String r0 = r2.readString()
            r1.content = r0
            java.lang.String r0 = r2.readString()
            r1.packageName = r0
            int r0 = r2.readInt()
            r1.clickType = r0
            byte r0 = r2.readByte()
            if (r0 == 0) goto L3c
            r0 = 1
            goto L3d
        L3c:
            r0 = 0
        L3d:
            r1.isDiscard = r0
            java.lang.String r0 = r2.readString()
            r1.activity = r0
            java.lang.String r0 = r2.readString()
            r1.webUrl = r0
            java.lang.String r0 = r2.readString()
            r1.uriPackageName = r0
            java.lang.String r0 = r2.readString()
            r1.uploadDataPackageName = r0
            java.lang.String r0 = r2.readString()
            r1.pushTimestamp = r0
            java.lang.Class r0 = r1.getClass()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            java.util.HashMap r0 = r2.readHashMap(r0)
            r1.paramsMap = r0
            java.lang.String r0 = r2.readString()
            r1.throughMessage = r0
            java.lang.String r0 = r2.readString()
            r1.notificationMessage = r0
            java.lang.Class<com.meizu.cloud.pushsdk.notification.model.AdvanceSetting> r0 = com.meizu.cloud.pushsdk.notification.model.AdvanceSetting.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r0 = (com.meizu.cloud.pushsdk.notification.model.AdvanceSetting) r0
            r1.mAdvanceSetting = r0
            java.lang.Class<com.meizu.cloud.pushsdk.notification.model.AppIconSetting> r0 = com.meizu.cloud.pushsdk.notification.model.AppIconSetting.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r0 = (com.meizu.cloud.pushsdk.notification.model.AppIconSetting) r0
            r1.mAppIconSetting = r0
            java.lang.Class<com.meizu.cloud.pushsdk.notification.model.NotificationStyle> r0 = com.meizu.cloud.pushsdk.notification.model.NotificationStyle.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = (com.meizu.cloud.pushsdk.notification.model.NotificationStyle) r0
            r1.mNotificationStyle = r0
            java.lang.Class<com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting> r0 = com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r2 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r2 = (com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting) r2
            r1.mTimeDisplaySetting = r2
            return
    }

    private static java.util.Map<java.lang.String, java.lang.String> getParamsMap(org.json.JSONObject r4) {
            java.util.HashMap r0 = new java.util.HashMap     // Catch: org.json.JSONException -> L22
            int r1 = r4.length()     // Catch: org.json.JSONException -> L22
            r0.<init>(r1)     // Catch: org.json.JSONException -> L22
            java.util.Iterator r1 = r4.keys()     // Catch: org.json.JSONException -> L22
        Ld:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L22
            if (r2 == 0) goto L21
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L22
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L22
            java.lang.String r3 = r4.getString(r2)     // Catch: org.json.JSONException -> L22
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L22
            goto Ld
        L21:
            return r0
        L22:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public static com.meizu.cloud.pushsdk.handler.MessageV3 parse(java.lang.String r4, java.lang.String r5, java.lang.String r6, com.meizu.cloud.pushsdk.notification.MPushMessage r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "V2 message "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Message_V3"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = new com.meizu.cloud.pushsdk.handler.MessageV3
            r0.<init>()
            r0.setPackageName(r4)
            r0.setUploadDataPackageName(r4)
            r0.setDeviceId(r5)
            r0.setTaskId(r6)
            java.lang.String r4 = r7.getTitle()
            r0.setTitle(r4)
            java.lang.String r4 = r7.getContent()
            r0.setContent(r4)
            java.lang.String r4 = r7.getIsDiscard()
            java.lang.String r5 = "true"
            boolean r4 = r5.equals(r4)
            r0.setIsDiscard(r4)
            java.lang.String r4 = r7.getClickType()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            int r4 = r4.intValue()
            r0.setClickType(r4)
            r4 = 0
            r0.setWhiteList(r4)
            r4 = 0
            r0.setDelayedReportMillis(r4)
            java.util.Map r4 = r7.getExtra()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L66:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L108
            java.lang.Object r5 = r4.next()
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5
            java.lang.Object r6 = r5.getKey()
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object r5 = r5.getValue()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r2 = "activity"
            boolean r2 = r2.equals(r6)
            if (r2 == 0) goto L89
            r0.setActivity(r5)
        L89:
            java.lang.String r2 = "url"
            boolean r2 = r2.equals(r6)
            if (r2 == 0) goto L94
            r0.setWebUrl(r5)
        L94:
            java.lang.String r2 = "pk"
            boolean r2 = r2.equals(r6)
            if (r2 == 0) goto L9f
            r0.setUriPackageName(r5)
        L9f:
            java.lang.String r2 = "ns"
            boolean r2 = r2.equals(r6)
            if (r2 == 0) goto Lae
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r2 = com.meizu.cloud.pushsdk.notification.model.NotificationStyle.parse(r5)
            r0.setNotificationStyle(r2)
        Lae:
            java.lang.String r2 = "as"
            boolean r3 = r2.equals(r6)
            if (r3 == 0) goto Lbd
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r3 = com.meizu.cloud.pushsdk.notification.model.AdvanceSetting.parse(r5)
            r0.setAdvanceSetting(r3)
        Lbd:
            java.lang.String r3 = "is"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto Lcc
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r3 = com.meizu.cloud.pushsdk.notification.model.AppIconSetting.parse(r5)
            r0.setAppIconSetting(r3)
        Lcc:
            java.lang.String r3 = "ts"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto Ldb
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r3 = com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting.parse(r5)
            r0.setTimeDisplaySetting(r3)
        Ldb:
            java.lang.String r3 = "bs"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto Lea
            com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting r3 = com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting.parse(r5)
            r0.setBrightRemindSetting(r3)
        Lea:
            boolean r2 = r2.equals(r6)
            if (r2 == 0) goto Lf7
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx r2 = com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx.parse(r5)
            r0.setAdvanceSettingEx(r2)
        Lf7:
            java.lang.String r2 = "ado"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto L66
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r5 = com.meizu.cloud.pushsdk.notification.model.AdvertisementOption.parse(r5)
            r0.setAdvertisementOption(r5)
            goto L66
        L108:
            java.util.Map r4 = r7.getParams()
            r0.setParamsMap(r4)
            java.util.Map r4 = r7.getExtra()
            org.json.JSONObject r4 = com.meizu.cloud.pushsdk.d.f.e.a(r4)
            java.lang.String r4 = r4.toString()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "MessageV2 extra json is "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r5)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L138
            r0.setNotificationMessage(r4)
        L138:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "parse V2 message to V3 message "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r4)
            return r0
    }

    public static com.meizu.cloud.pushsdk.handler.MessageV3 parse(java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r1 = 0
            r2 = 0
            r5 = 0
            r7 = 0
            r8 = 0
            r0 = r10
            r3 = r11
            r4 = r12
            r6 = r13
            com.meizu.cloud.pushsdk.handler.MessageV3 r10 = parse(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return r10
    }

    public static com.meizu.cloud.pushsdk.handler.MessageV3 parse(java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            r1 = 0
            r2 = 0
            r7 = 0
            r8 = 0
            r0 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            com.meizu.cloud.pushsdk.handler.MessageV3 r10 = parse(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return r10
    }

    public static com.meizu.cloud.pushsdk.handler.MessageV3 parse(java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16) {
            r7 = 0
            r8 = 0
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = parse(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return r0
    }

    public static com.meizu.cloud.pushsdk.handler.MessageV3 parse(java.lang.String r21, java.lang.String r22, java.lang.String r23, java.lang.String r24, java.lang.String r25, java.lang.String r26, java.lang.String r27, boolean r28, long r29) {
            r0 = r27
            java.lang.String r1 = "ado"
            java.lang.String r2 = "bs"
            java.lang.String r3 = "parameters"
            java.lang.String r4 = "pk"
            java.lang.String r5 = "task_id"
            java.lang.String r6 = "url"
            java.lang.String r7 = "activity"
            java.lang.String r8 = "ts"
            java.lang.String r9 = "is"
            java.lang.String r10 = "ns"
            java.lang.String r11 = "extra"
            java.lang.String r12 = "clickType"
            java.lang.String r13 = "isDiscard"
            java.lang.String r14 = "content"
            java.lang.String r15 = "title"
            r16 = r1
            java.lang.String r1 = "Message_V3"
            r17 = r2
            java.lang.String r2 = "as"
            r18 = r3
            com.meizu.cloud.pushsdk.handler.MessageV3 r3 = new com.meizu.cloud.pushsdk.handler.MessageV3
            r3.<init>()
            boolean r19 = r21.isEmpty()
            if (r19 != 0) goto L3d
            r19 = r4
            r4 = r21
            r3.setPackageName(r4)
            goto L3f
        L3d:
            r19 = r4
        L3f:
            boolean r4 = r22.isEmpty()
            if (r4 != 0) goto L4a
            r4 = r22
            r3.setUploadDataPackageName(r4)
        L4a:
            boolean r4 = r23.isEmpty()
            if (r4 != 0) goto L55
            r4 = r23
            r3.setPushTimestamp(r4)
        L55:
            boolean r4 = r24.isEmpty()
            if (r4 != 0) goto L60
            r4 = r24
            r3.setDeviceId(r4)
        L60:
            boolean r4 = r25.isEmpty()
            if (r4 != 0) goto L6c
            r4 = r25
            r3.setTaskId(r4)
            goto L6e
        L6c:
            r4 = r25
        L6e:
            boolean r20 = r26.isEmpty()
            if (r20 != 0) goto L79
            r4 = r26
            r3.setSeqId(r4)
        L79:
            boolean r4 = r27.isEmpty()
            if (r4 != 0) goto L82
            r3.setNotificationMessage(r0)
        L82:
            r4 = r28
            r3.setWhiteList(r4)
            r20 = r5
            r4 = r29
            r3.setDelayedReportMillis(r4)
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a9
            r4.<init>(r0)     // Catch: org.json.JSONException -> L1a9
            java.lang.String r0 = "data"
            org.json.JSONObject r0 = r4.getJSONObject(r0)     // Catch: org.json.JSONException -> L1a9
            boolean r4 = r0.isNull(r15)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto La6
            java.lang.String r4 = r0.getString(r15)     // Catch: org.json.JSONException -> L1a9
            r3.setTitle(r4)     // Catch: org.json.JSONException -> L1a9
        La6:
            boolean r4 = r0.isNull(r14)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto Lb3
            java.lang.String r4 = r0.getString(r14)     // Catch: org.json.JSONException -> L1a9
            r3.setContent(r4)     // Catch: org.json.JSONException -> L1a9
        Lb3:
            boolean r4 = r0.isNull(r13)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto Lc0
            boolean r4 = r0.getBoolean(r13)     // Catch: org.json.JSONException -> L1a9
            r3.setIsDiscard(r4)     // Catch: org.json.JSONException -> L1a9
        Lc0:
            boolean r4 = r0.isNull(r12)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto Lcd
            int r4 = r0.getInt(r12)     // Catch: org.json.JSONException -> L1a9
            r3.setClickType(r4)     // Catch: org.json.JSONException -> L1a9
        Lcd:
            boolean r4 = r0.isNull(r11)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto L1c2
            org.json.JSONObject r0 = r0.getJSONObject(r11)     // Catch: org.json.JSONException -> L1a9
            boolean r4 = r0.isNull(r10)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto Le8
            org.json.JSONObject r4 = r0.getJSONObject(r10)     // Catch: org.json.JSONException -> L1a9
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r4 = com.meizu.cloud.pushsdk.notification.model.NotificationStyle.parse(r4)     // Catch: org.json.JSONException -> L1a9
            r3.setNotificationStyle(r4)     // Catch: org.json.JSONException -> L1a9
        Le8:
            boolean r4 = r0.isNull(r9)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto Lf9
            org.json.JSONObject r4 = r0.getJSONObject(r9)     // Catch: org.json.JSONException -> L1a9
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r4 = com.meizu.cloud.pushsdk.notification.model.AppIconSetting.parse(r4)     // Catch: org.json.JSONException -> L1a9
            r3.setAppIconSetting(r4)     // Catch: org.json.JSONException -> L1a9
        Lf9:
            boolean r4 = r0.isNull(r2)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto L10a
            org.json.JSONObject r4 = r0.getJSONObject(r2)     // Catch: org.json.JSONException -> L1a9
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r4 = com.meizu.cloud.pushsdk.notification.model.AdvanceSetting.parse(r4)     // Catch: org.json.JSONException -> L1a9
            r3.setAdvanceSetting(r4)     // Catch: org.json.JSONException -> L1a9
        L10a:
            boolean r4 = r0.isNull(r8)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto L11b
            org.json.JSONObject r4 = r0.getJSONObject(r8)     // Catch: org.json.JSONException -> L1a9
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r4 = com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting.parse(r4)     // Catch: org.json.JSONException -> L1a9
            r3.setTimeDisplaySetting(r4)     // Catch: org.json.JSONException -> L1a9
        L11b:
            boolean r4 = r0.isNull(r7)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto L128
            java.lang.String r4 = r0.getString(r7)     // Catch: org.json.JSONException -> L1a9
            r3.setActivity(r4)     // Catch: org.json.JSONException -> L1a9
        L128:
            boolean r4 = r0.isNull(r6)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto L135
            java.lang.String r4 = r0.getString(r6)     // Catch: org.json.JSONException -> L1a9
            r3.setWebUrl(r4)     // Catch: org.json.JSONException -> L1a9
        L135:
            r4 = r20
            boolean r5 = r0.isNull(r4)     // Catch: org.json.JSONException -> L1a9
            if (r5 != 0) goto L14f
            boolean r5 = android.text.TextUtils.isEmpty(r25)     // Catch: org.json.JSONException -> L1a9
            if (r5 == 0) goto L14f
            java.lang.String r5 = "Flyme 4 notification message by through message or taskId is null"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r5)     // Catch: org.json.JSONException -> L1a9
            java.lang.String r4 = r0.getString(r4)     // Catch: org.json.JSONException -> L1a9
            r3.setTaskId(r4)     // Catch: org.json.JSONException -> L1a9
        L14f:
            r4 = r19
            boolean r5 = r0.isNull(r4)     // Catch: org.json.JSONException -> L1a9
            if (r5 != 0) goto L15e
            java.lang.String r4 = r0.getString(r4)     // Catch: org.json.JSONException -> L1a9
            r3.setUriPackageName(r4)     // Catch: org.json.JSONException -> L1a9
        L15e:
            r4 = r18
            boolean r5 = r0.isNull(r4)     // Catch: org.json.JSONException -> L1a9
            if (r5 != 0) goto L171
            org.json.JSONObject r4 = r0.getJSONObject(r4)     // Catch: org.json.JSONException -> L1a9
            java.util.Map r4 = getParamsMap(r4)     // Catch: org.json.JSONException -> L1a9
            r3.setParamsMap(r4)     // Catch: org.json.JSONException -> L1a9
        L171:
            r4 = r17
            boolean r5 = r0.isNull(r4)     // Catch: org.json.JSONException -> L1a9
            if (r5 != 0) goto L184
            org.json.JSONObject r4 = r0.getJSONObject(r4)     // Catch: org.json.JSONException -> L1a9
            com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting r4 = com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting.parse(r4)     // Catch: org.json.JSONException -> L1a9
            r3.setBrightRemindSetting(r4)     // Catch: org.json.JSONException -> L1a9
        L184:
            boolean r4 = r0.isNull(r2)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto L195
            org.json.JSONObject r2 = r0.getJSONObject(r2)     // Catch: org.json.JSONException -> L1a9
            com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx r2 = com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx.parse(r2)     // Catch: org.json.JSONException -> L1a9
            r3.setAdvanceSettingEx(r2)     // Catch: org.json.JSONException -> L1a9
        L195:
            r2 = r16
            boolean r4 = r0.isNull(r2)     // Catch: org.json.JSONException -> L1a9
            if (r4 != 0) goto L1c2
            org.json.JSONObject r0 = r0.getJSONObject(r2)     // Catch: org.json.JSONException -> L1a9
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r0 = com.meizu.cloud.pushsdk.notification.model.AdvertisementOption.parse(r0)     // Catch: org.json.JSONException -> L1a9
            r3.setAdvertisementOption(r0)     // Catch: org.json.JSONException -> L1a9
            goto L1c2
        L1a9:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "parse message error "
            r2.append(r4)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
        L1c2:
            return r3
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getActivity() {
            r1 = this;
            java.lang.String r0 = r1.activity
            return r0
    }

    public com.meizu.cloud.pushsdk.notification.model.AdvanceSetting getAdvanceSetting() {
            r1 = this;
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r0 = r1.mAdvanceSetting
            return r0
    }

    public com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx getAdvanceSettingEx() {
            r1 = this;
            r0 = 0
            return r0
    }

    public com.meizu.cloud.pushsdk.notification.model.AdvertisementOption getAdvertisementOption() {
            r1 = this;
            r0 = 0
            return r0
    }

    public com.meizu.cloud.pushsdk.notification.model.AppIconSetting getAppIconSetting() {
            r1 = this;
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r0 = r1.mAppIconSetting
            return r0
    }

    public com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting getBrightRemindSetting() {
            r1 = this;
            r0 = 0
            return r0
    }

    public int getClickType() {
            r1 = this;
            int r0 = r1.clickType
            return r0
    }

    public java.lang.String getContent() {
            r1 = this;
            java.lang.String r0 = r1.content
            return r0
    }

    public long getDelayedReportMillis() {
            r2 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getDeviceId() {
            r1 = this;
            java.lang.String r0 = r1.deviceId
            return r0
    }

    public java.lang.String getNotificationMessage() {
            r1 = this;
            java.lang.String r0 = r1.notificationMessage
            return r0
    }

    public com.meizu.cloud.pushsdk.notification.model.NotificationStyle getNotificationStyle() {
            r1 = this;
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = r1.mNotificationStyle
            return r0
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getParamsMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.paramsMap
            return r0
    }

    public java.lang.String getPushTimestamp() {
            r1 = this;
            java.lang.String r0 = r1.pushTimestamp
            return r0
    }

    public java.lang.String getSeqId() {
            r1 = this;
            java.lang.String r0 = r1.seqId
            return r0
    }

    public java.lang.String getTaskId() {
            r1 = this;
            java.lang.String r0 = r1.taskId
            return r0
    }

    public java.lang.String getThroughMessage() {
            r1 = this;
            java.lang.String r0 = r1.throughMessage
            return r0
    }

    public com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting getTimeDisplaySetting() {
            r1 = this;
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r0 = r1.mTimeDisplaySetting
            return r0
    }

    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.title
            return r0
    }

    public java.lang.String getUploadDataPackageName() {
            r1 = this;
            java.lang.String r0 = r1.uploadDataPackageName
            return r0
    }

    public java.lang.String getUriPackageName() {
            r1 = this;
            java.lang.String r0 = r1.uriPackageName
            return r0
    }

    public java.lang.String getWebUrl() {
            r1 = this;
            java.lang.String r0 = r1.webUrl
            return r0
    }

    public boolean getWhiteList() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isDiscard() {
            r1 = this;
            boolean r0 = r1.isDiscard
            return r0
    }

    public void setActivity(java.lang.String r1) {
            r0 = this;
            r0.activity = r1
            return
    }

    public void setAdvanceSetting(com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r1) {
            r0 = this;
            r0.mAdvanceSetting = r1
            return
    }

    public void setAdvanceSettingEx(com.meizu.cloud.pushsdk.notification.model.AdvanceSettingEx r1) {
            r0 = this;
            return
    }

    public void setAdvertisementOption(com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r1) {
            r0 = this;
            return
    }

    public void setAppIconSetting(com.meizu.cloud.pushsdk.notification.model.AppIconSetting r1) {
            r0 = this;
            r0.mAppIconSetting = r1
            return
    }

    public void setBrightRemindSetting(com.meizu.cloud.pushsdk.notification.model.BrightRemindSetting r1) {
            r0 = this;
            return
    }

    public void setClickType(int r1) {
            r0 = this;
            r0.clickType = r1
            return
    }

    public void setContent(java.lang.String r1) {
            r0 = this;
            r0.content = r1
            return
    }

    public void setDelayedReportMillis(long r1) {
            r0 = this;
            return
    }

    public void setDeviceId(java.lang.String r1) {
            r0 = this;
            r0.deviceId = r1
            return
    }

    public void setIsDiscard(boolean r1) {
            r0 = this;
            r0.isDiscard = r1
            return
    }

    public void setNotificationMessage(java.lang.String r1) {
            r0 = this;
            r0.notificationMessage = r1
            return
    }

    public void setNotificationStyle(com.meizu.cloud.pushsdk.notification.model.NotificationStyle r1) {
            r0 = this;
            r0.mNotificationStyle = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public void setParamsMap(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.paramsMap = r1
            return
    }

    public void setPushTimestamp(java.lang.String r1) {
            r0 = this;
            r0.pushTimestamp = r1
            return
    }

    public void setSeqId(java.lang.String r1) {
            r0 = this;
            r0.seqId = r1
            return
    }

    public void setTaskId(java.lang.String r1) {
            r0 = this;
            r0.taskId = r1
            return
    }

    public void setThroughMessage(java.lang.String r1) {
            r0 = this;
            r0.throughMessage = r1
            return
    }

    public void setTimeDisplaySetting(com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r1) {
            r0 = this;
            r0.mTimeDisplaySetting = r1
            return
    }

    public void setTitle(java.lang.String r1) {
            r0 = this;
            r0.title = r1
            return
    }

    public void setUploadDataPackageName(java.lang.String r1) {
            r0 = this;
            r0.uploadDataPackageName = r1
            return
    }

    public void setUriPackageName(java.lang.String r1) {
            r0 = this;
            r0.uriPackageName = r1
            return
    }

    public void setWebUrl(java.lang.String r1) {
            r0 = this;
            r0.webUrl = r1
            return
    }

    public void setWhiteList(boolean r1) {
            r0 = this;
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MessageV3{taskId='"
            r0.append(r1)
            java.lang.String r1 = r3.taskId
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", seqId='"
            r0.append(r2)
            java.lang.String r2 = r3.seqId
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", deviceId='"
            r0.append(r2)
            java.lang.String r2 = r3.deviceId
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", title='"
            r0.append(r2)
            java.lang.String r2 = r3.title
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", content='"
            r0.append(r2)
            java.lang.String r2 = r3.content
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", packageName='"
            r0.append(r2)
            java.lang.String r2 = r3.packageName
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", clickType="
            r0.append(r2)
            int r2 = r3.clickType
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", isDiscard="
            r0.append(r2)
            boolean r2 = r3.isDiscard
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", activity='"
            r0.append(r2)
            java.lang.String r2 = r3.activity
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", webUrl='"
            r0.append(r2)
            java.lang.String r2 = r3.webUrl
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", uriPackageName='"
            r0.append(r2)
            java.lang.String r2 = r3.uriPackageName
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", pushTimestamp='"
            r0.append(r2)
            java.lang.String r2 = r3.pushTimestamp
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", uploadDataPackageName='"
            r0.append(r2)
            java.lang.String r2 = r3.uploadDataPackageName
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", paramsMap="
            r0.append(r2)
            java.util.Map<java.lang.String, java.lang.String> r2 = r3.paramsMap
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", throughMessage='"
            r0.append(r2)
            java.lang.String r2 = r3.throughMessage
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", notificationMessage='"
            r0.append(r2)
            java.lang.String r2 = r3.notificationMessage
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mAdvanceSetting="
            r0.append(r2)
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r2 = r3.mAdvanceSetting
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mAppIconSetting="
            r0.append(r2)
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r2 = r3.mAppIconSetting
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mNotificationStyle="
            r0.append(r2)
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r2 = r3.mNotificationStyle
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mTimeDisplaySetting="
            r0.append(r2)
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r2 = r3.mTimeDisplaySetting
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            java.lang.String r0 = r1.taskId
            r2.writeString(r0)
            java.lang.String r0 = r1.seqId
            r2.writeString(r0)
            java.lang.String r0 = r1.deviceId
            r2.writeString(r0)
            java.lang.String r0 = r1.title
            r2.writeString(r0)
            java.lang.String r0 = r1.content
            r2.writeString(r0)
            java.lang.String r0 = r1.packageName
            r2.writeString(r0)
            int r0 = r1.clickType
            r2.writeInt(r0)
            boolean r0 = r1.isDiscard
            byte r0 = (byte) r0
            r2.writeByte(r0)
            java.lang.String r0 = r1.activity
            r2.writeString(r0)
            java.lang.String r0 = r1.webUrl
            r2.writeString(r0)
            java.lang.String r0 = r1.uriPackageName
            r2.writeString(r0)
            java.lang.String r0 = r1.uploadDataPackageName
            r2.writeString(r0)
            java.lang.String r0 = r1.pushTimestamp
            r2.writeString(r0)
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.paramsMap
            r2.writeMap(r0)
            java.lang.String r0 = r1.throughMessage
            r2.writeString(r0)
            java.lang.String r0 = r1.notificationMessage
            r2.writeString(r0)
            com.meizu.cloud.pushsdk.notification.model.AdvanceSetting r0 = r1.mAdvanceSetting
            r2.writeParcelable(r0, r3)
            com.meizu.cloud.pushsdk.notification.model.AppIconSetting r0 = r1.mAppIconSetting
            r2.writeParcelable(r0, r3)
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r0 = r1.mNotificationStyle
            r2.writeParcelable(r0, r3)
            com.meizu.cloud.pushsdk.notification.model.TimeDisplaySetting r0 = r1.mTimeDisplaySetting
            r2.writeParcelable(r0, r3)
            return
    }
}
