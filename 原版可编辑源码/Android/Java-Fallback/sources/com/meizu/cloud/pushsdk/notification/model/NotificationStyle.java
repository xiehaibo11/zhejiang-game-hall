package com.meizu.cloud.pushsdk.notification.model;

public class NotificationStyle implements android.os.Parcelable {
    public static final java.lang.String BANNER_IMAGE_URL = "bi";
    public static final java.lang.String BASE_STYLE = "bs";
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.notification.model.NotificationStyle> CREATOR = null;
    public static final java.lang.String EXPANDABLE_IMAGE_URL = "ei";
    public static final java.lang.String EXPANDABLE_TEXT = "et";
    public static final java.lang.String INNER_STYLE = "is";
    public static final java.lang.String NOTIFICATION_STYLE = "ns";
    public static final java.lang.String TAG = "notification_style";
    private java.lang.String bannerImageUrl;
    private int baseStyle;
    private java.lang.String expandableImageUrl;
    private java.lang.String expandableText;
    private int innerStyle;


    static {
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle$1 r0 = new com.meizu.cloud.pushsdk.notification.model.NotificationStyle$1
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle.CREATOR = r0
            return
    }

    public NotificationStyle() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.baseStyle = r0
            r1.innerStyle = r0
            return
    }

    public NotificationStyle(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.baseStyle = r0
            r1.innerStyle = r0
            int r0 = r2.readInt()
            r1.baseStyle = r0
            int r0 = r2.readInt()
            r1.innerStyle = r0
            java.lang.String r0 = r2.readString()
            r1.expandableText = r0
            java.lang.String r0 = r2.readString()
            r1.expandableImageUrl = r0
            java.lang.String r2 = r2.readString()
            r1.bannerImageUrl = r2
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.NotificationStyle parse(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L27
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lc
            r0.<init>(r2)     // Catch: org.json.JSONException -> Lc
            goto L28
        Lc:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse json string error "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "notification_style"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
        L27:
            r0 = 0
        L28:
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r2 = parse(r0)
            return r2
    }

    public static com.meizu.cloud.pushsdk.notification.model.NotificationStyle parse(org.json.JSONObject r8) {
            java.lang.String r0 = "bi"
            java.lang.String r1 = "ei"
            java.lang.String r2 = "et"
            java.lang.String r3 = "is"
            java.lang.String r4 = "bs"
            com.meizu.cloud.pushsdk.notification.model.NotificationStyle r5 = new com.meizu.cloud.pushsdk.notification.model.NotificationStyle
            r5.<init>()
            java.lang.String r6 = "notification_style"
            if (r8 == 0) goto L6c
            boolean r7 = r8.isNull(r4)     // Catch: org.json.JSONException -> L55
            if (r7 != 0) goto L20
            int r4 = r8.getInt(r4)     // Catch: org.json.JSONException -> L55
            r5.setBaseStyle(r4)     // Catch: org.json.JSONException -> L55
        L20:
            boolean r4 = r8.isNull(r3)     // Catch: org.json.JSONException -> L55
            if (r4 != 0) goto L2d
            int r3 = r8.getInt(r3)     // Catch: org.json.JSONException -> L55
            r5.setInnerStyle(r3)     // Catch: org.json.JSONException -> L55
        L2d:
            boolean r3 = r8.isNull(r2)     // Catch: org.json.JSONException -> L55
            if (r3 != 0) goto L3a
            java.lang.String r2 = r8.getString(r2)     // Catch: org.json.JSONException -> L55
            r5.setExpandableText(r2)     // Catch: org.json.JSONException -> L55
        L3a:
            boolean r2 = r8.isNull(r1)     // Catch: org.json.JSONException -> L55
            if (r2 != 0) goto L47
            java.lang.String r1 = r8.getString(r1)     // Catch: org.json.JSONException -> L55
            r5.setExpandableImageUrl(r1)     // Catch: org.json.JSONException -> L55
        L47:
            boolean r1 = r8.isNull(r0)     // Catch: org.json.JSONException -> L55
            if (r1 != 0) goto L71
            java.lang.String r8 = r8.getString(r0)     // Catch: org.json.JSONException -> L55
            r5.setBannerImageUrl(r8)     // Catch: org.json.JSONException -> L55
            goto L71
        L55:
            r8 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse json obj error "
            r0.append(r1)
            java.lang.String r8 = r8.getMessage()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            goto L6e
        L6c:
            java.lang.String r8 = "no such tag notification_style"
        L6e:
            com.meizu.cloud.pushinternal.DebugLogger.e(r6, r8)
        L71:
            return r5
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getBannerImageUrl() {
            r1 = this;
            java.lang.String r0 = r1.bannerImageUrl
            return r0
    }

    public int getBaseStyle() {
            r1 = this;
            int r0 = r1.baseStyle
            return r0
    }

    public java.lang.String getExpandableImageUrl() {
            r1 = this;
            java.lang.String r0 = r1.expandableImageUrl
            return r0
    }

    public java.lang.String getExpandableText() {
            r1 = this;
            java.lang.String r0 = r1.expandableText
            return r0
    }

    public int getInnerStyle() {
            r1 = this;
            int r0 = r1.innerStyle
            return r0
    }

    public void setBannerImageUrl(java.lang.String r1) {
            r0 = this;
            r0.bannerImageUrl = r1
            return
    }

    public void setBaseStyle(int r1) {
            r0 = this;
            r0.baseStyle = r1
            return
    }

    public void setExpandableImageUrl(java.lang.String r1) {
            r0 = this;
            r0.expandableImageUrl = r1
            return
    }

    public void setExpandableText(java.lang.String r1) {
            r0 = this;
            r0.expandableText = r1
            return
    }

    public void setInnerStyle(int r1) {
            r0 = this;
            r0.innerStyle = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NotificationStyle{baseStyle="
            r0.append(r1)
            int r1 = r3.baseStyle
            r0.append(r1)
            java.lang.String r1 = ", innerStyle="
            r0.append(r1)
            int r1 = r3.innerStyle
            r0.append(r1)
            java.lang.String r1 = ", expandableText='"
            r0.append(r1)
            java.lang.String r1 = r3.expandableText
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", expandableImageUrl='"
            r0.append(r2)
            java.lang.String r2 = r3.expandableImageUrl
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", bannerImageUrl='"
            r0.append(r2)
            java.lang.String r2 = r3.bannerImageUrl
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            int r2 = r0.baseStyle
            r1.writeInt(r2)
            int r2 = r0.innerStyle
            r1.writeInt(r2)
            java.lang.String r2 = r0.expandableText
            r1.writeString(r2)
            java.lang.String r2 = r0.expandableImageUrl
            r1.writeString(r2)
            java.lang.String r2 = r0.bannerImageUrl
            r1.writeString(r2)
            return
    }
}
