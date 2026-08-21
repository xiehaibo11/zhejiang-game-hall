package com.meizu.cloud.pushsdk.notification.model;

public class AdvertisementOption implements android.os.Parcelable {
    public static final java.lang.String ADVERTISEMENT_OPTION = "ado";
    public static final java.lang.String AD_INSTALL_PACKAGE = "aip";
    public static final java.lang.String AD_PACKAGE = "ap";
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.notification.model.AdvertisementOption> CREATOR = null;
    public static final java.lang.String PRIORITY_VALID_TIME = "pt";
    public static final java.lang.String TAG = "AdvertisementOption";
    private java.lang.String mAdInstallPackage;
    private java.lang.String mAdPackage;
    private int mPriorityValidTime;


    static {
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption$1 r0 = new com.meizu.cloud.pushsdk.notification.model.AdvertisementOption$1
            r0.<init>()
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption.CREATOR = r0
            return
    }

    public AdvertisementOption() {
            r0 = this;
            r0.<init>()
            return
    }

    protected AdvertisementOption(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.readString()
            r1.mAdPackage = r0
            int r0 = r2.readInt()
            r1.mPriorityValidTime = r0
            java.lang.String r2 = r2.readString()
            r1.mAdInstallPackage = r2
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.AdvertisementOption parse(java.lang.String r2) {
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
            java.lang.String r0 = "AdvertisementOption"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
        L27:
            r0 = 0
        L28:
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r2 = parse(r0)
            return r2
    }

    public static com.meizu.cloud.pushsdk.notification.model.AdvertisementOption parse(org.json.JSONObject r6) {
            java.lang.String r0 = "aip"
            java.lang.String r1 = "pt"
            java.lang.String r2 = "ap"
            com.meizu.cloud.pushsdk.notification.model.AdvertisementOption r3 = new com.meizu.cloud.pushsdk.notification.model.AdvertisementOption
            r3.<init>()
            java.lang.String r4 = "AdvertisementOption"
            if (r6 == 0) goto L4e
            boolean r5 = r6.isNull(r2)     // Catch: org.json.JSONException -> L37
            if (r5 != 0) goto L1c
            java.lang.String r2 = r6.getString(r2)     // Catch: org.json.JSONException -> L37
            r3.setAdPackage(r2)     // Catch: org.json.JSONException -> L37
        L1c:
            boolean r2 = r6.isNull(r1)     // Catch: org.json.JSONException -> L37
            if (r2 != 0) goto L29
            int r1 = r6.getInt(r1)     // Catch: org.json.JSONException -> L37
            r3.setPriorityValidTime(r1)     // Catch: org.json.JSONException -> L37
        L29:
            boolean r1 = r6.isNull(r0)     // Catch: org.json.JSONException -> L37
            if (r1 != 0) goto L53
            java.lang.String r6 = r6.getString(r0)     // Catch: org.json.JSONException -> L37
            r3.setAdInstallPackage(r6)     // Catch: org.json.JSONException -> L37
            goto L53
        L37:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parse json obj error "
            r0.append(r1)
            java.lang.String r6 = r6.getMessage()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            goto L50
        L4e:
            java.lang.String r6 = "no such tag AdvertisementOption"
        L50:
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r6)
        L53:
            return r3
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getAdInstallPackage() {
            r1 = this;
            java.lang.String r0 = r1.mAdInstallPackage
            return r0
    }

    public java.lang.String getAdPackage() {
            r1 = this;
            java.lang.String r0 = r1.mAdPackage
            return r0
    }

    public int getPriorityValidTime() {
            r1 = this;
            int r0 = r1.mPriorityValidTime
            return r0
    }

    public void setAdInstallPackage(java.lang.String r1) {
            r0 = this;
            r0.mAdInstallPackage = r1
            return
    }

    public void setAdPackage(java.lang.String r1) {
            r0 = this;
            r0.mAdPackage = r1
            return
    }

    public void setPriorityValidTime(int r1) {
            r0 = this;
            r0.mPriorityValidTime = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AdvertisementOption{mAdPackage="
            r0.append(r1)
            java.lang.String r1 = r2.mAdPackage
            r0.append(r1)
            java.lang.String r1 = "mPriorityValidTime="
            r0.append(r1)
            int r1 = r2.mPriorityValidTime
            r0.append(r1)
            java.lang.String r1 = "mAdInstallPackage="
            r0.append(r1)
            java.lang.String r1 = r2.mAdInstallPackage
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.mAdPackage
            r1.writeString(r2)
            int r2 = r0.mPriorityValidTime
            r1.writeInt(r2)
            java.lang.String r2 = r0.mAdInstallPackage
            r1.writeString(r2)
            return
    }
}
