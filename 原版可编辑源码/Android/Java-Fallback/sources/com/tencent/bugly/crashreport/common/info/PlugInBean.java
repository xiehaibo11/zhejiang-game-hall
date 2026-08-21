package com.tencent.bugly.crashreport.common.info;

public class PlugInBean implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.tencent.bugly.crashreport.common.info.PlugInBean> CREATOR = null;
    public final java.lang.String a;
    public final java.lang.String b;
    public final java.lang.String c;


    static {
            com.tencent.bugly.crashreport.common.info.PlugInBean$1 r0 = new com.tencent.bugly.crashreport.common.info.PlugInBean$1
            r0.<init>()
            com.tencent.bugly.crashreport.common.info.PlugInBean.CREATOR = r0
            return
    }

    public PlugInBean(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.readString()
            r1.a = r0
            java.lang.String r0 = r2.readString()
            r1.b = r0
            java.lang.String r2 = r2.readString()
            r1.c = r2
            return
    }

    public PlugInBean(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "plid:"
            r0.<init>(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = " plV:"
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = " plUUID:"
            r0.append(r1)
            java.lang.String r1 = r2.c
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.a
            r1.writeString(r2)
            java.lang.String r2 = r0.b
            r1.writeString(r2)
            java.lang.String r2 = r0.c
            r1.writeString(r2)
            return
    }
}
