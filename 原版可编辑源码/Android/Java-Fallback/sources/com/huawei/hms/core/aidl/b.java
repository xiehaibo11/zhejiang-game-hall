package com.huawei.hms.core.aidl;

public class b implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.huawei.hms.core.aidl.b> CREATOR = null;
    public java.lang.String a;
    public android.os.Bundle b;
    private int c;
    private android.os.Bundle d;

    static class a implements android.os.Parcelable.Creator<com.huawei.hms.core.aidl.b> {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.huawei.hms.core.aidl.b createFromParcel(android.os.Parcel r3) {
                r2 = this;
                com.huawei.hms.core.aidl.b r0 = new com.huawei.hms.core.aidl.b
                r1 = 0
                r0.<init>(r3, r1)
                return r0
        }

        @Override
        public com.huawei.hms.core.aidl.b createFromParcel(android.os.Parcel r1) {
                r0 = this;
                com.huawei.hms.core.aidl.b r1 = r0.createFromParcel(r1)
                return r1
        }

        @Override
        public com.huawei.hms.core.aidl.b[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.core.aidl.b[] r1 = new com.huawei.hms.core.aidl.b[r1]
                return r1
        }

        @Override
        public com.huawei.hms.core.aidl.b[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.core.aidl.b[] r1 = r0.newArray(r1)
                return r1
        }
    }

    static {
            com.huawei.hms.core.aidl.b$a r0 = new com.huawei.hms.core.aidl.b$a
            r0.<init>()
            com.huawei.hms.core.aidl.b.CREATOR = r0
            return
    }

    public b() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r1 = 1
            r2.c = r1
            r2.d = r0
            return
    }

    private b(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r1 = 1
            r2.c = r1
            r2.d = r0
            r2.a(r3)
            return
    }

    b(android.os.Parcel r1, com.huawei.hms.core.aidl.b.a r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public b(java.lang.String r3, int r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r1 = 1
            r2.c = r1
            r2.d = r0
            r2.a = r3
            r2.c = r4
            return
    }

    private static java.lang.ClassLoader a(java.lang.Class r0) {
            java.lang.ClassLoader r0 = r0.getClassLoader()
            return r0
    }

    private void a(android.os.Parcel r2) {
            r1 = this;
            int r0 = r2.readInt()
            r1.c = r0
            java.lang.String r0 = r2.readString()
            r1.a = r0
            java.lang.Class<android.os.Bundle> r0 = android.os.Bundle.class
            java.lang.ClassLoader r0 = a(r0)
            android.os.Bundle r0 = r2.readBundle(r0)
            r1.b = r0
            java.lang.Class<android.os.Bundle> r0 = android.os.Bundle.class
            java.lang.ClassLoader r0 = a(r0)
            android.os.Bundle r2 = r2.readBundle(r0)
            r1.d = r2
            return
    }

    public android.os.Bundle a() {
            r1 = this;
            android.os.Bundle r0 = r1.d
            return r0
    }

    public com.huawei.hms.core.aidl.b a(android.os.Bundle r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    public int b() {
            r1 = this;
            android.os.Bundle r0 = r1.d
            if (r0 != 0) goto L6
            r0 = 0
            goto L7
        L6:
            r0 = 1
        L7:
            return r0
    }

    public int c() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            int r2 = r0.c
            r1.writeInt(r2)
            java.lang.String r2 = r0.a
            r1.writeString(r2)
            android.os.Bundle r2 = r0.b
            r1.writeBundle(r2)
            android.os.Bundle r2 = r0.d
            r1.writeBundle(r2)
            return
    }
}
