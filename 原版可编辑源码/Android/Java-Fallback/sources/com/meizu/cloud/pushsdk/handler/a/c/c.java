package com.meizu.cloud.pushsdk.handler.a.c;

public class c implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.meizu.cloud.pushsdk.handler.a.c.c> CREATOR = null;
    private com.meizu.cloud.pushsdk.handler.MessageV3 a;
    private java.lang.String b;
    private int c;
    private int d;


    static {
            com.meizu.cloud.pushsdk.handler.a.c.c$1 r0 = new com.meizu.cloud.pushsdk.handler.a.c.c$1
            r0.<init>()
            com.meizu.cloud.pushsdk.handler.a.c.c.CREATOR = r0
            return
    }

    protected c(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.meizu.cloud.pushsdk.handler.MessageV3> r0 = com.meizu.cloud.pushsdk.handler.MessageV3.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r2.readParcelable(r0)
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = (com.meizu.cloud.pushsdk.handler.MessageV3) r0
            r1.a = r0
            java.lang.String r0 = r2.readString()
            r1.b = r0
            int r0 = r2.readInt()
            r1.c = r0
            int r2 = r2.readInt()
            r1.d = r2
            return
    }

    public c(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public com.meizu.cloud.pushsdk.handler.MessageV3 a() {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r1.a
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public int b() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public void b(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public int c() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NotificationState{messageV3="
            r0.append(r1)
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", notificationPkg='"
            r0.append(r1)
            java.lang.String r1 = r3.b
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", notificationId='"
            r0.append(r2)
            int r2 = r3.c
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", state='"
            r0.append(r2)
            int r2 = r3.d
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
            com.meizu.cloud.pushsdk.handler.MessageV3 r0 = r1.a
            r2.writeParcelable(r0, r3)
            java.lang.String r3 = r1.b
            r2.writeString(r3)
            int r3 = r1.c
            r2.writeInt(r3)
            int r3 = r1.d
            r2.writeInt(r3)
            return
    }
}
