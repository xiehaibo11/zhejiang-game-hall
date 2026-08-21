package com.sigmob.sdk.nativead;

public class z implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.nativead.z> CREATOR = null;
    private int a;
    private int b;
    private int c;
    private int d;


    static {
            com.sigmob.sdk.nativead.z$1 r0 = new com.sigmob.sdk.nativead.z$1
            r0.<init>()
            com.sigmob.sdk.nativead.z.CREATOR = r0
            return
    }

    public z() {
            r0 = this;
            r0.<init>()
            return
    }

    protected z(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            int r0 = r2.readInt()
            r1.a = r0
            int r0 = r2.readInt()
            r1.b = r0
            int r0 = r2.readInt()
            r1.c = r0
            int r2 = r2.readInt()
            r1.d = r2
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public void b(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public int c() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public void c(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public int d() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public void d(int r1) {
            r0 = this;
            r0.d = r1
            return
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
            int r2 = r0.a
            r1.writeInt(r2)
            int r2 = r0.b
            r1.writeInt(r2)
            int r2 = r0.c
            r1.writeInt(r2)
            int r2 = r0.d
            r1.writeInt(r2)
            return
    }
}
