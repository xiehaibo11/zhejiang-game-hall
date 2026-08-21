package com.tencent.bugly.crashreport.crash;

public class CrashDetailBean implements android.os.Parcelable, java.lang.Comparable<com.tencent.bugly.crashreport.crash.CrashDetailBean> {
    public static final android.os.Parcelable.Creator<com.tencent.bugly.crashreport.crash.CrashDetailBean> CREATOR = null;
    public java.lang.String A;
    public java.lang.String B;
    public long C;
    public long D;
    public long E;
    public long F;
    public long G;
    public long H;
    public long I;
    public long J;
    public long K;
    public java.lang.String L;
    public java.lang.String M;
    public java.lang.String N;
    public java.lang.String O;
    public java.lang.String P;
    public long Q;
    public boolean R;
    public java.util.Map<java.lang.String, java.lang.String> S;
    public java.util.Map<java.lang.String, java.lang.String> T;
    public int U;
    public int V;
    public java.util.Map<java.lang.String, java.lang.String> W;
    public java.util.Map<java.lang.String, java.lang.String> X;
    public byte[] Y;
    public java.lang.String Z;
    public long a;
    public java.lang.String aa;
    public int b;
    public java.lang.String c;
    public boolean d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> h;
    public java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> i;
    public boolean j;
    public boolean k;
    public int l;
    public java.lang.String m;
    public java.lang.String n;
    public java.lang.String o;
    public java.lang.String p;
    public java.lang.String q;
    public long r;
    public java.lang.String s;
    public int t;
    public java.lang.String u;
    public java.lang.String v;
    public java.lang.String w;
    public java.lang.String x;
    public byte[] y;
    public java.util.Map<java.lang.String, java.lang.String> z;


    static {
            com.tencent.bugly.crashreport.crash.CrashDetailBean$1 r0 = new com.tencent.bugly.crashreport.crash.CrashDetailBean$1
            r0.<init>()
            com.tencent.bugly.crashreport.crash.CrashDetailBean.CREATOR = r0
            return
    }

    public CrashDetailBean() {
            r5 = this;
            r5.<init>()
            r0 = -1
            r5.a = r0
            r2 = 0
            r5.b = r2
            java.util.UUID r3 = java.util.UUID.randomUUID()
            java.lang.String r3 = r3.toString()
            r5.c = r3
            r5.d = r2
            java.lang.String r3 = ""
            r5.e = r3
            r5.f = r3
            r5.g = r3
            r4 = 0
            r5.h = r4
            r5.i = r4
            r5.j = r2
            r5.k = r2
            r5.l = r2
            r5.m = r3
            r5.n = r3
            r5.o = r3
            r5.p = r3
            r5.q = r3
            r5.r = r0
            r5.s = r4
            r5.t = r2
            r5.u = r3
            r5.v = r3
            r5.w = r4
            r5.x = r4
            r5.y = r4
            r5.z = r4
            r5.A = r3
            r5.B = r3
            r5.C = r0
            r5.D = r0
            r5.E = r0
            r5.F = r0
            r5.G = r0
            r5.H = r0
            r5.I = r0
            r5.J = r0
            r5.K = r0
            r5.L = r3
            r5.M = r3
            r5.N = r3
            r5.O = r3
            r5.P = r3
            r5.Q = r0
            r5.R = r2
            r5.S = r4
            r5.T = r4
            r0 = -1
            r5.U = r0
            r5.V = r0
            r5.W = r4
            r5.X = r4
            r5.Y = r4
            r5.Z = r4
            r5.aa = r4
            return
    }

    public CrashDetailBean(android.os.Parcel r6) {
            r5 = this;
            r5.<init>()
            r0 = -1
            r5.a = r0
            r2 = 0
            r5.b = r2
            java.util.UUID r3 = java.util.UUID.randomUUID()
            java.lang.String r3 = r3.toString()
            r5.c = r3
            r5.d = r2
            java.lang.String r3 = ""
            r5.e = r3
            r5.f = r3
            r5.g = r3
            r4 = 0
            r5.h = r4
            r5.i = r4
            r5.j = r2
            r5.k = r2
            r5.l = r2
            r5.m = r3
            r5.n = r3
            r5.o = r3
            r5.p = r3
            r5.q = r3
            r5.r = r0
            r5.s = r4
            r5.t = r2
            r5.u = r3
            r5.v = r3
            r5.w = r4
            r5.x = r4
            r5.y = r4
            r5.z = r4
            r5.A = r3
            r5.B = r3
            r5.C = r0
            r5.D = r0
            r5.E = r0
            r5.F = r0
            r5.G = r0
            r5.H = r0
            r5.I = r0
            r5.J = r0
            r5.K = r0
            r5.L = r3
            r5.M = r3
            r5.N = r3
            r5.O = r3
            r5.P = r3
            r5.Q = r0
            r5.R = r2
            r5.S = r4
            r5.T = r4
            r0 = -1
            r5.U = r0
            r5.V = r0
            r5.W = r4
            r5.X = r4
            r5.Y = r4
            r5.Z = r4
            r5.aa = r4
            int r0 = r6.readInt()
            r5.b = r0
            java.lang.String r0 = r6.readString()
            r5.c = r0
            byte r0 = r6.readByte()
            r1 = 1
            if (r0 != r1) goto L91
            r0 = 1
            goto L92
        L91:
            r0 = 0
        L92:
            r5.d = r0
            java.lang.String r0 = r6.readString()
            r5.e = r0
            java.lang.String r0 = r6.readString()
            r5.f = r0
            java.lang.String r0 = r6.readString()
            r5.g = r0
            byte r0 = r6.readByte()
            if (r0 != r1) goto Lae
            r0 = 1
            goto Laf
        Lae:
            r0 = 0
        Laf:
            r5.j = r0
            byte r0 = r6.readByte()
            if (r0 != r1) goto Lb9
            r0 = 1
            goto Lba
        Lb9:
            r0 = 0
        Lba:
            r5.k = r0
            int r0 = r6.readInt()
            r5.l = r0
            java.lang.String r0 = r6.readString()
            r5.m = r0
            java.lang.String r0 = r6.readString()
            r5.n = r0
            java.lang.String r0 = r6.readString()
            r5.o = r0
            java.lang.String r0 = r6.readString()
            r5.p = r0
            java.lang.String r0 = r6.readString()
            r5.q = r0
            long r3 = r6.readLong()
            r5.r = r3
            java.lang.String r0 = r6.readString()
            r5.s = r0
            int r0 = r6.readInt()
            r5.t = r0
            java.lang.String r0 = r6.readString()
            r5.u = r0
            java.lang.String r0 = r6.readString()
            r5.v = r0
            java.lang.String r0 = r6.readString()
            r5.w = r0
            java.util.Map r0 = com.tencent.bugly.proguard.ap.b(r6)
            r5.z = r0
            java.lang.String r0 = r6.readString()
            r5.A = r0
            java.lang.String r0 = r6.readString()
            r5.B = r0
            long r3 = r6.readLong()
            r5.C = r3
            long r3 = r6.readLong()
            r5.D = r3
            long r3 = r6.readLong()
            r5.E = r3
            long r3 = r6.readLong()
            r5.F = r3
            long r3 = r6.readLong()
            r5.G = r3
            long r3 = r6.readLong()
            r5.H = r3
            java.lang.String r0 = r6.readString()
            r5.L = r0
            java.lang.String r0 = r6.readString()
            r5.M = r0
            java.lang.String r0 = r6.readString()
            r5.N = r0
            java.lang.String r0 = r6.readString()
            r5.O = r0
            java.lang.String r0 = r6.readString()
            r5.P = r0
            long r3 = r6.readLong()
            r5.Q = r3
            byte r0 = r6.readByte()
            if (r0 != r1) goto L165
            goto L166
        L165:
            r1 = 0
        L166:
            r5.R = r1
            java.util.Map r0 = com.tencent.bugly.proguard.ap.b(r6)
            r5.S = r0
            java.util.Map r0 = com.tencent.bugly.proguard.ap.a(r6)
            r5.h = r0
            java.util.Map r0 = com.tencent.bugly.proguard.ap.a(r6)
            r5.i = r0
            int r0 = r6.readInt()
            r5.U = r0
            int r0 = r6.readInt()
            r5.V = r0
            java.util.Map r0 = com.tencent.bugly.proguard.ap.b(r6)
            r5.W = r0
            java.util.Map r0 = com.tencent.bugly.proguard.ap.b(r6)
            r5.X = r0
            byte[] r0 = r6.createByteArray()
            r5.Y = r0
            byte[] r0 = r6.createByteArray()
            r5.y = r0
            java.lang.String r0 = r6.readString()
            r5.Z = r0
            java.lang.String r0 = r6.readString()
            r5.aa = r0
            java.lang.String r0 = r6.readString()
            r5.x = r0
            long r0 = r6.readLong()
            r5.I = r0
            long r0 = r6.readLong()
            r5.J = r0
            long r0 = r6.readLong()
            r5.K = r0
            return
    }

    @Override
    public int compareTo(com.tencent.bugly.crashreport.crash.CrashDetailBean r5) {
            r4 = this;
            com.tencent.bugly.crashreport.crash.CrashDetailBean r5 = (com.tencent.bugly.crashreport.crash.CrashDetailBean) r5
            if (r5 == 0) goto L15
            long r0 = r4.r
            long r2 = r5.r
            long r0 = r0 - r2
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 > 0) goto L15
            if (r5 >= 0) goto L13
            r5 = -1
            return r5
        L13:
            r5 = 0
            return r5
        L15:
            r5 = 1
            return r5
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            int r4 = r2.b
            r3.writeInt(r4)
            java.lang.String r4 = r2.c
            r3.writeString(r4)
            boolean r4 = r2.d
            byte r4 = (byte) r4
            r3.writeByte(r4)
            java.lang.String r4 = r2.e
            r3.writeString(r4)
            java.lang.String r4 = r2.f
            r3.writeString(r4)
            java.lang.String r4 = r2.g
            r3.writeString(r4)
            boolean r4 = r2.j
            byte r4 = (byte) r4
            r3.writeByte(r4)
            boolean r4 = r2.k
            byte r4 = (byte) r4
            r3.writeByte(r4)
            int r4 = r2.l
            r3.writeInt(r4)
            java.lang.String r4 = r2.m
            r3.writeString(r4)
            java.lang.String r4 = r2.n
            r3.writeString(r4)
            java.lang.String r4 = r2.o
            r3.writeString(r4)
            java.lang.String r4 = r2.p
            r3.writeString(r4)
            java.lang.String r4 = r2.q
            r3.writeString(r4)
            long r0 = r2.r
            r3.writeLong(r0)
            java.lang.String r4 = r2.s
            r3.writeString(r4)
            int r4 = r2.t
            r3.writeInt(r4)
            java.lang.String r4 = r2.u
            r3.writeString(r4)
            java.lang.String r4 = r2.v
            r3.writeString(r4)
            java.lang.String r4 = r2.w
            r3.writeString(r4)
            java.util.Map<java.lang.String, java.lang.String> r4 = r2.z
            com.tencent.bugly.proguard.ap.b(r3, r4)
            java.lang.String r4 = r2.A
            r3.writeString(r4)
            java.lang.String r4 = r2.B
            r3.writeString(r4)
            long r0 = r2.C
            r3.writeLong(r0)
            long r0 = r2.D
            r3.writeLong(r0)
            long r0 = r2.E
            r3.writeLong(r0)
            long r0 = r2.F
            r3.writeLong(r0)
            long r0 = r2.G
            r3.writeLong(r0)
            long r0 = r2.H
            r3.writeLong(r0)
            java.lang.String r4 = r2.L
            r3.writeString(r4)
            java.lang.String r4 = r2.M
            r3.writeString(r4)
            java.lang.String r4 = r2.N
            r3.writeString(r4)
            java.lang.String r4 = r2.O
            r3.writeString(r4)
            java.lang.String r4 = r2.P
            r3.writeString(r4)
            long r0 = r2.Q
            r3.writeLong(r0)
            boolean r4 = r2.R
            byte r4 = (byte) r4
            r3.writeByte(r4)
            java.util.Map<java.lang.String, java.lang.String> r4 = r2.S
            com.tencent.bugly.proguard.ap.b(r3, r4)
            java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> r4 = r2.h
            com.tencent.bugly.proguard.ap.a(r3, r4)
            java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> r4 = r2.i
            com.tencent.bugly.proguard.ap.a(r3, r4)
            int r4 = r2.U
            r3.writeInt(r4)
            int r4 = r2.V
            r3.writeInt(r4)
            java.util.Map<java.lang.String, java.lang.String> r4 = r2.W
            com.tencent.bugly.proguard.ap.b(r3, r4)
            java.util.Map<java.lang.String, java.lang.String> r4 = r2.X
            com.tencent.bugly.proguard.ap.b(r3, r4)
            byte[] r4 = r2.Y
            r3.writeByteArray(r4)
            byte[] r4 = r2.y
            r3.writeByteArray(r4)
            java.lang.String r4 = r2.Z
            r3.writeString(r4)
            java.lang.String r4 = r2.aa
            r3.writeString(r4)
            java.lang.String r4 = r2.x
            r3.writeString(r4)
            long r0 = r2.I
            r3.writeLong(r0)
            long r0 = r2.J
            r3.writeLong(r0)
            long r0 = r2.K
            r3.writeLong(r0)
            return
    }
}
