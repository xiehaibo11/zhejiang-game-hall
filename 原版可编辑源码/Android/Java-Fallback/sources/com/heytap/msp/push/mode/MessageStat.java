package com.heytap.msp.push.mode;

public class MessageStat {
    private static final java.lang.String APP_PACKAGE = "appPackage";
    private static final java.lang.String DATA_EXTRA = "data_extra";
    private static final java.lang.String EVENT_ID = "eventID";
    private static final java.lang.String EVENT_TIME = "eventTime";
    private static final java.lang.String GLOBAL_ID = "globalID";
    private static final java.lang.String MESSAGE_TYPE = "messageType";
    private static final java.lang.String PROPERTY = "property";
    private static final java.lang.String STATISTICS_EXTRA = "statistics_extra";
    private static final java.lang.String TASK_ID = "taskID";
    private java.lang.String mAppPackage;
    private java.lang.String mDataExtra;
    private java.lang.String mEventId;
    private long mEventTime;
    private java.lang.String mGlobalId;
    private java.lang.String mProperty;
    private java.lang.String mStatisticsExtra;
    private java.lang.String mTaskID;
    private int mType;

    public MessageStat() {
            r2 = this;
            r2.<init>()
            r0 = 4096(0x1000, float:5.74E-42)
            r2.mType = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.mEventTime = r0
            return
    }

    public MessageStat(int r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r7 = this;
            r3 = 0
            r4 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r5 = r10
            r6 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public MessageStat(int r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15) {
            r9 = this;
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public MessageStat(int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r2 = this;
            r2.<init>()
            r0 = 4096(0x1000, float:5.74E-42)
            r2.mType = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.mEventTime = r0
            r2.setType(r3)
            r2.setAppPackage(r4)
            r2.setGlobalId(r5)
            r2.setTaskID(r6)
            r2.setEventId(r7)
            r2.setProperty(r8)
            r2.setStatisticsExtra(r9)
            r2.setDataExtra(r10)
            return
    }

    public MessageStat(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            r1 = 4096(0x1000, float:5.74E-42)
            r3 = 0
            r4 = 0
            java.lang.String r6 = ""
            r0 = r7
            r2 = r8
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public MessageStat(java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            r1 = 4096(0x1000, float:5.74E-42)
            r3 = 0
            r4 = 0
            r0 = r7
            r2 = r8
            r5 = r9
            r6 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public static com.heytap.msp.push.mode.MessageStat parse(java.lang.String r5) {
            java.lang.String r0 = ""
            com.heytap.msp.push.mode.MessageStat r1 = new com.heytap.msp.push.mode.MessageStat
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L63
            r2.<init>(r5)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = "messageType"
            r3 = 0
            int r5 = r2.optInt(r5, r3)     // Catch: java.lang.Exception -> L63
            r1.setType(r5)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = "appPackage"
            java.lang.String r5 = r2.optString(r5)     // Catch: java.lang.Exception -> L63
            r1.setAppPackage(r5)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = "eventID"
            java.lang.String r5 = r2.optString(r5)     // Catch: java.lang.Exception -> L63
            r1.setEventId(r5)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = "globalID"
            java.lang.String r5 = r2.optString(r5, r0)     // Catch: java.lang.Exception -> L63
            r1.setGlobalId(r5)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = "taskID"
            java.lang.String r5 = r2.optString(r5, r0)     // Catch: java.lang.Exception -> L63
            r1.setTaskID(r5)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = "property"
            java.lang.String r5 = r2.optString(r5, r0)     // Catch: java.lang.Exception -> L63
            r1.setProperty(r5)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = "eventTime"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L63
            long r3 = r2.optLong(r5, r3)     // Catch: java.lang.Exception -> L63
            r1.setEventTime(r3)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = "statistics_extra"
            java.lang.String r5 = r2.optString(r5)     // Catch: java.lang.Exception -> L63
            r1.setStatisticsExtra(r5)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = "data_extra"
            java.lang.String r5 = r2.optString(r5)     // Catch: java.lang.Exception -> L63
            r1.setDataExtra(r5)     // Catch: java.lang.Exception -> L63
            return r1
        L63:
            r5 = move-exception
            java.lang.String r5 = r5.getLocalizedMessage()
            com.heytap.mcssdk.utils.d.e(r5)
            r5 = 0
            return r5
    }

    public java.lang.String getAppPackage() {
            r1 = this;
            java.lang.String r0 = r1.mAppPackage
            return r0
    }

    public java.lang.String getDataExtra() {
            r1 = this;
            java.lang.String r0 = r1.mDataExtra
            return r0
    }

    public java.lang.String getEventId() {
            r1 = this;
            java.lang.String r0 = r1.mEventId
            return r0
    }

    public long getEventTime() {
            r2 = this;
            long r0 = r2.mEventTime
            return r0
    }

    public java.lang.String getGlobalId() {
            r1 = this;
            java.lang.String r0 = r1.mGlobalId
            return r0
    }

    public java.lang.String getProperty() {
            r1 = this;
            java.lang.String r0 = r1.mProperty
            return r0
    }

    public java.lang.String getStatisticsExtra() {
            r1 = this;
            java.lang.String r0 = r1.mStatisticsExtra
            return r0
    }

    public java.lang.String getTaskID() {
            r1 = this;
            java.lang.String r0 = r1.mTaskID
            return r0
    }

    public int getType() {
            r1 = this;
            int r0 = r1.mType
            return r0
    }

    public void setAppPackage(java.lang.String r1) {
            r0 = this;
            r0.mAppPackage = r1
            return
    }

    public void setDataExtra(java.lang.String r1) {
            r0 = this;
            r0.mDataExtra = r1
            return
    }

    public void setEventId(java.lang.String r1) {
            r0 = this;
            r0.mEventId = r1
            return
    }

    public void setEventTime(long r1) {
            r0 = this;
            r0.mEventTime = r1
            return
    }

    public void setGlobalId(java.lang.String r1) {
            r0 = this;
            r0.mGlobalId = r1
            return
    }

    public void setProperty(java.lang.String r1) {
            r0 = this;
            r0.mProperty = r1
            return
    }

    public void setStatisticsExtra(java.lang.String r1) {
            r0 = this;
            r0.mStatisticsExtra = r1
            return
    }

    public void setTaskID(int r2) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ""
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.mTaskID = r2
            return
    }

    public void setTaskID(java.lang.String r1) {
            r0 = this;
            r0.mTaskID = r1
            return
    }

    public void setType(int r1) {
            r0 = this;
            r0.mType = r1
            return
    }

    public java.lang.String toJsonObject() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "messageType"
            int r2 = r4.mType     // Catch: java.lang.Exception -> L75
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L75
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "eventID"
            java.lang.String r2 = r4.mEventId     // Catch: java.lang.Exception -> L75
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "appPackage"
            java.lang.String r2 = r4.mAppPackage     // Catch: java.lang.Exception -> L75
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "eventTime"
            long r2 = r4.mEventTime     // Catch: java.lang.Exception -> L75
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L75
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = r4.mGlobalId     // Catch: java.lang.Exception -> L75
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L75
            if (r1 != 0) goto L38
            java.lang.String r1 = "globalID"
            java.lang.String r2 = r4.mGlobalId     // Catch: java.lang.Exception -> L75
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L75
        L38:
            java.lang.String r1 = r4.mTaskID     // Catch: java.lang.Exception -> L75
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L75
            if (r1 != 0) goto L47
            java.lang.String r1 = "taskID"
            java.lang.String r2 = r4.mTaskID     // Catch: java.lang.Exception -> L75
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L75
        L47:
            java.lang.String r1 = r4.mProperty     // Catch: java.lang.Exception -> L75
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L75
            if (r1 != 0) goto L56
            java.lang.String r1 = "property"
            java.lang.String r2 = r4.mProperty     // Catch: java.lang.Exception -> L75
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L75
        L56:
            java.lang.String r1 = r4.mStatisticsExtra     // Catch: java.lang.Exception -> L75
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L75
            if (r1 != 0) goto L65
            java.lang.String r1 = "statistics_extra"
            java.lang.String r2 = r4.mStatisticsExtra     // Catch: java.lang.Exception -> L75
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L75
        L65:
            java.lang.String r1 = r4.mDataExtra     // Catch: java.lang.Exception -> L75
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L75
            if (r1 != 0) goto L7d
            java.lang.String r1 = "data_extra"
            java.lang.String r2 = r4.mDataExtra     // Catch: java.lang.Exception -> L75
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L75
            goto L7d
        L75:
            r1 = move-exception
            java.lang.String r1 = r1.getLocalizedMessage()
            com.heytap.mcssdk.utils.d.e(r1)
        L7d:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
