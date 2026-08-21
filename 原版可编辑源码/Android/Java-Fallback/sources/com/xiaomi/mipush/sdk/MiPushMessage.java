package com.xiaomi.mipush.sdk;

public class MiPushMessage implements com.xiaomi.mipush.sdk.PushMessageHandler.a {
    private static final java.lang.String KEY_ALIAS = "alias";
    private static final java.lang.String KEY_CATEGORY = "category";
    private static final java.lang.String KEY_CONTENT = "content";
    private static final java.lang.String KEY_DESC = "description";
    private static final java.lang.String KEY_EXTRA = "extra";
    private static final java.lang.String KEY_MESSAGE_ID = "messageId";
    private static final java.lang.String KEY_MESSAGE_TYPE = "messageType";
    private static final java.lang.String KEY_NOTIFIED = "isNotified";
    private static final java.lang.String KEY_NOTIFY_ID = "notifyId";
    private static final java.lang.String KEY_NOTIFY_TYPE = "notifyType";
    private static final java.lang.String KEY_PASS_THROUGH = "passThrough";
    private static final java.lang.String KEY_TITLE = "title";
    private static final java.lang.String KEY_TOPIC = "topic";
    private static final java.lang.String KEY_USER_ACCOUNT = "user_account";
    public static final int MESSAGE_TYPE_ACCOUNT = 3;
    public static final int MESSAGE_TYPE_ALIAS = 1;
    public static final int MESSAGE_TYPE_REG = 0;
    public static final int MESSAGE_TYPE_TOPIC = 2;
    private static final long serialVersionUID = 1;
    private java.lang.String alias;
    private boolean arrived;
    private java.lang.String category;
    private java.lang.String content;
    private java.lang.String description;
    private java.util.HashMap<java.lang.String, java.lang.String> extra;
    private boolean isNotified;
    private java.lang.String messageId;
    private int messageType;
    private int notifyId;
    private int notifyType;
    private int passThrough;
    private java.lang.String title;
    private java.lang.String topic;
    private java.lang.String userAccount;

    public MiPushMessage() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.arrived = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.extra = r0
            return
    }

    public static com.xiaomi.mipush.sdk.MiPushMessage fromBundle(android.os.Bundle r2) {
            com.xiaomi.mipush.sdk.MiPushMessage r0 = new com.xiaomi.mipush.sdk.MiPushMessage
            r0.<init>()
            java.lang.String r1 = "messageId"
            java.lang.String r1 = r2.getString(r1)
            r0.messageId = r1
            java.lang.String r1 = "messageType"
            int r1 = r2.getInt(r1)
            r0.messageType = r1
            java.lang.String r1 = "passThrough"
            int r1 = r2.getInt(r1)
            r0.passThrough = r1
            java.lang.String r1 = "alias"
            java.lang.String r1 = r2.getString(r1)
            r0.alias = r1
            java.lang.String r1 = "user_account"
            java.lang.String r1 = r2.getString(r1)
            r0.userAccount = r1
            java.lang.String r1 = "topic"
            java.lang.String r1 = r2.getString(r1)
            r0.topic = r1
            java.lang.String r1 = "content"
            java.lang.String r1 = r2.getString(r1)
            r0.content = r1
            java.lang.String r1 = "description"
            java.lang.String r1 = r2.getString(r1)
            r0.description = r1
            java.lang.String r1 = "title"
            java.lang.String r1 = r2.getString(r1)
            r0.title = r1
            java.lang.String r1 = "isNotified"
            boolean r1 = r2.getBoolean(r1)
            r0.isNotified = r1
            java.lang.String r1 = "notifyId"
            int r1 = r2.getInt(r1)
            r0.notifyId = r1
            java.lang.String r1 = "notifyType"
            int r1 = r2.getInt(r1)
            r0.notifyType = r1
            java.lang.String r1 = "category"
            java.lang.String r1 = r2.getString(r1)
            r0.category = r1
            java.lang.String r1 = "extra"
            java.io.Serializable r2 = r2.getSerializable(r1)
            java.util.HashMap r2 = (java.util.HashMap) r2
            r0.extra = r2
            return r0
    }

    public java.lang.String getAlias() {
            r1 = this;
            java.lang.String r0 = r1.alias
            return r0
    }

    public java.lang.String getCategory() {
            r1 = this;
            java.lang.String r0 = r1.category
            return r0
    }

    public java.lang.String getContent() {
            r1 = this;
            java.lang.String r0 = r1.content
            return r0
    }

    public java.lang.String getDescription() {
            r1 = this;
            java.lang.String r0 = r1.description
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getExtra() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.extra
            return r0
    }

    public java.lang.String getMessageId() {
            r1 = this;
            java.lang.String r0 = r1.messageId
            return r0
    }

    public int getMessageType() {
            r1 = this;
            int r0 = r1.messageType
            return r0
    }

    public int getNotifyId() {
            r1 = this;
            int r0 = r1.notifyId
            return r0
    }

    public int getNotifyType() {
            r1 = this;
            int r0 = r1.notifyType
            return r0
    }

    public int getPassThrough() {
            r1 = this;
            int r0 = r1.passThrough
            return r0
    }

    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.title
            return r0
    }

    public java.lang.String getTopic() {
            r1 = this;
            java.lang.String r0 = r1.topic
            return r0
    }

    public java.lang.String getUserAccount() {
            r1 = this;
            java.lang.String r0 = r1.userAccount
            return r0
    }

    public boolean isArrivedMessage() {
            r1 = this;
            boolean r0 = r1.arrived
            return r0
    }

    public boolean isNotified() {
            r1 = this;
            boolean r0 = r1.isNotified
            return r0
    }

    public void setAlias(java.lang.String r1) {
            r0 = this;
            r0.alias = r1
            return
    }

    public void setArrivedMessage(boolean r1) {
            r0 = this;
            r0.arrived = r1
            return
    }

    public void setCategory(java.lang.String r1) {
            r0 = this;
            r0.category = r1
            return
    }

    public void setContent(java.lang.String r1) {
            r0 = this;
            r0.content = r1
            return
    }

    public void setDescription(java.lang.String r1) {
            r0 = this;
            r0.description = r1
            return
    }

    public void setExtra(java.util.Map<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.extra
            r0.clear()
            if (r2 == 0) goto Lc
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.extra
            r0.putAll(r2)
        Lc:
            return
    }

    public void setMessageId(java.lang.String r1) {
            r0 = this;
            r0.messageId = r1
            return
    }

    public void setMessageType(int r1) {
            r0 = this;
            r0.messageType = r1
            return
    }

    public void setNotified(boolean r1) {
            r0 = this;
            r0.isNotified = r1
            return
    }

    public void setNotifyId(int r1) {
            r0 = this;
            r0.notifyId = r1
            return
    }

    public void setNotifyType(int r1) {
            r0 = this;
            r0.notifyType = r1
            return
    }

    public void setPassThrough(int r1) {
            r0 = this;
            r0.passThrough = r1
            return
    }

    public void setTitle(java.lang.String r1) {
            r0 = this;
            r0.title = r1
            return
    }

    public void setTopic(java.lang.String r1) {
            r0 = this;
            r0.topic = r1
            return
    }

    public void setUserAccount(java.lang.String r1) {
            r0 = this;
            r0.userAccount = r1
            return
    }

    public android.os.Bundle toBundle() {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = r3.messageId
            java.lang.String r2 = "messageId"
            r0.putString(r2, r1)
            int r1 = r3.passThrough
            java.lang.String r2 = "passThrough"
            r0.putInt(r2, r1)
            int r1 = r3.messageType
            java.lang.String r2 = "messageType"
            r0.putInt(r2, r1)
            java.lang.String r1 = r3.alias
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L29
            java.lang.String r1 = r3.alias
            java.lang.String r2 = "alias"
            r0.putString(r2, r1)
        L29:
            java.lang.String r1 = r3.userAccount
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L38
            java.lang.String r1 = r3.userAccount
            java.lang.String r2 = "user_account"
            r0.putString(r2, r1)
        L38:
            java.lang.String r1 = r3.topic
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L47
            java.lang.String r1 = r3.topic
            java.lang.String r2 = "topic"
            r0.putString(r2, r1)
        L47:
            java.lang.String r1 = r3.content
            java.lang.String r2 = "content"
            r0.putString(r2, r1)
            java.lang.String r1 = r3.description
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L5d
            java.lang.String r1 = r3.description
            java.lang.String r2 = "description"
            r0.putString(r2, r1)
        L5d:
            java.lang.String r1 = r3.title
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L6c
            java.lang.String r1 = r3.title
            java.lang.String r2 = "title"
            r0.putString(r2, r1)
        L6c:
            boolean r1 = r3.isNotified
            java.lang.String r2 = "isNotified"
            r0.putBoolean(r2, r1)
            int r1 = r3.notifyId
            java.lang.String r2 = "notifyId"
            r0.putInt(r2, r1)
            int r1 = r3.notifyType
            java.lang.String r2 = "notifyType"
            r0.putInt(r2, r1)
            java.lang.String r1 = r3.category
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L90
            java.lang.String r1 = r3.category
            java.lang.String r2 = "category"
            r0.putString(r2, r1)
        L90:
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r3.extra
            if (r1 == 0) goto L99
            java.lang.String r2 = "extra"
            r0.putSerializable(r2, r1)
        L99:
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "messageId={"
            r0.append(r1)
            java.lang.String r1 = r2.messageId
            r0.append(r1)
            java.lang.String r1 = "},passThrough={"
            r0.append(r1)
            int r1 = r2.passThrough
            r0.append(r1)
            java.lang.String r1 = "},alias={"
            r0.append(r1)
            java.lang.String r1 = r2.alias
            r0.append(r1)
            java.lang.String r1 = "},topic={"
            r0.append(r1)
            java.lang.String r1 = r2.topic
            r0.append(r1)
            java.lang.String r1 = "},userAccount={"
            r0.append(r1)
            java.lang.String r1 = r2.userAccount
            r0.append(r1)
            java.lang.String r1 = "},content={"
            r0.append(r1)
            java.lang.String r1 = r2.content
            r0.append(r1)
            java.lang.String r1 = "},description={"
            r0.append(r1)
            java.lang.String r1 = r2.description
            r0.append(r1)
            java.lang.String r1 = "},title={"
            r0.append(r1)
            java.lang.String r1 = r2.title
            r0.append(r1)
            java.lang.String r1 = "},isNotified={"
            r0.append(r1)
            boolean r1 = r2.isNotified
            r0.append(r1)
            java.lang.String r1 = "},notifyId={"
            r0.append(r1)
            int r1 = r2.notifyId
            r0.append(r1)
            java.lang.String r1 = "},notifyType={"
            r0.append(r1)
            int r1 = r2.notifyType
            r0.append(r1)
            java.lang.String r1 = "}, category={"
            r0.append(r1)
            java.lang.String r1 = r2.category
            r0.append(r1)
            java.lang.String r1 = "}, extra={"
            r0.append(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r2.extra
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
