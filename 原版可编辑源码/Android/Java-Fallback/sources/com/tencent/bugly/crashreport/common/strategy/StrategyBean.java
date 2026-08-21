package com.tencent.bugly.crashreport.common.strategy;

public class StrategyBean implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.tencent.bugly.crashreport.common.strategy.StrategyBean> CREATOR = null;
    public static java.lang.String a = "https://android.bugly.qq.com/rqd/async";
    public static java.lang.String b = "https://android.bugly.qq.com/rqd/async";
    public static java.lang.String c;
    public long d;
    public long e;
    public boolean f;
    public boolean g;
    public boolean h;
    public boolean i;
    public boolean j;
    public boolean k;
    public boolean l;
    public boolean m;
    public boolean n;
    public long o;
    public long p;
    public java.lang.String q;
    public java.lang.String r;
    public java.lang.String s;
    public java.util.Map<java.lang.String, java.lang.String> t;
    public int u;
    public long v;
    public long w;


    static {
            com.tencent.bugly.crashreport.common.strategy.StrategyBean$1 r0 = new com.tencent.bugly.crashreport.common.strategy.StrategyBean$1
            r0.<init>()
            com.tencent.bugly.crashreport.common.strategy.StrategyBean.CREATOR = r0
            return
    }

    public StrategyBean() {
            r6 = this;
            r6.<init>()
            r0 = -1
            r6.d = r0
            r6.e = r0
            r2 = 1
            r6.f = r2
            r6.g = r2
            r6.h = r2
            r6.i = r2
            r3 = 0
            r6.j = r3
            r6.k = r2
            r6.l = r2
            r6.m = r2
            r6.n = r2
            r4 = 30000(0x7530, double:1.4822E-319)
            r6.p = r4
            java.lang.String r2 = com.tencent.bugly.crashreport.common.strategy.StrategyBean.a
            r6.q = r2
            java.lang.String r2 = com.tencent.bugly.crashreport.common.strategy.StrategyBean.b
            r6.r = r2
            r2 = 10
            r6.u = r2
            r4 = 300000(0x493e0, double:1.482197E-318)
            r6.v = r4
            r6.w = r0
            long r0 = java.lang.System.currentTimeMillis()
            r6.e = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "S(@L@L@)"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            com.tencent.bugly.crashreport.common.strategy.StrategyBean.c = r1
            r0.setLength(r3)
            java.lang.String r1 = "*^@K#K@!"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.s = r0
            return
    }

    public StrategyBean(android.os.Parcel r7) {
            r6 = this;
            r6.<init>()
            r0 = -1
            r6.d = r0
            r6.e = r0
            r2 = 1
            r6.f = r2
            r6.g = r2
            r6.h = r2
            r6.i = r2
            r3 = 0
            r6.j = r3
            r6.k = r2
            r6.l = r2
            r6.m = r2
            r6.n = r2
            r4 = 30000(0x7530, double:1.4822E-319)
            r6.p = r4
            java.lang.String r4 = com.tencent.bugly.crashreport.common.strategy.StrategyBean.a
            r6.q = r4
            java.lang.String r4 = com.tencent.bugly.crashreport.common.strategy.StrategyBean.b
            r6.r = r4
            r4 = 10
            r6.u = r4
            r4 = 300000(0x493e0, double:1.482197E-318)
            r6.v = r4
            r6.w = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le3
            r0.<init>()     // Catch: java.lang.Exception -> Le3
            java.lang.String r1 = "S(@L@L@)"
            r0.append(r1)     // Catch: java.lang.Exception -> Le3
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Le3
            com.tencent.bugly.crashreport.common.strategy.StrategyBean.c = r0     // Catch: java.lang.Exception -> Le3
            long r0 = r7.readLong()     // Catch: java.lang.Exception -> Le3
            r6.e = r0     // Catch: java.lang.Exception -> Le3
            byte r0 = r7.readByte()     // Catch: java.lang.Exception -> Le3
            if (r0 != r2) goto L52
            r0 = 1
            goto L53
        L52:
            r0 = 0
        L53:
            r6.f = r0     // Catch: java.lang.Exception -> Le3
            byte r0 = r7.readByte()     // Catch: java.lang.Exception -> Le3
            if (r0 != r2) goto L5d
            r0 = 1
            goto L5e
        L5d:
            r0 = 0
        L5e:
            r6.g = r0     // Catch: java.lang.Exception -> Le3
            byte r0 = r7.readByte()     // Catch: java.lang.Exception -> Le3
            if (r0 != r2) goto L68
            r0 = 1
            goto L69
        L68:
            r0 = 0
        L69:
            r6.h = r0     // Catch: java.lang.Exception -> Le3
            java.lang.String r0 = r7.readString()     // Catch: java.lang.Exception -> Le3
            r6.q = r0     // Catch: java.lang.Exception -> Le3
            java.lang.String r0 = r7.readString()     // Catch: java.lang.Exception -> Le3
            r6.r = r0     // Catch: java.lang.Exception -> Le3
            java.lang.String r0 = r7.readString()     // Catch: java.lang.Exception -> Le3
            r6.s = r0     // Catch: java.lang.Exception -> Le3
            java.util.Map r0 = com.tencent.bugly.proguard.ap.b(r7)     // Catch: java.lang.Exception -> Le3
            r6.t = r0     // Catch: java.lang.Exception -> Le3
            byte r0 = r7.readByte()     // Catch: java.lang.Exception -> Le3
            if (r0 != r2) goto L8b
            r0 = 1
            goto L8c
        L8b:
            r0 = 0
        L8c:
            r6.i = r0     // Catch: java.lang.Exception -> Le3
            byte r0 = r7.readByte()     // Catch: java.lang.Exception -> Le3
            if (r0 != r2) goto L96
            r0 = 1
            goto L97
        L96:
            r0 = 0
        L97:
            r6.j = r0     // Catch: java.lang.Exception -> Le3
            byte r0 = r7.readByte()     // Catch: java.lang.Exception -> Le3
            if (r0 != r2) goto La1
            r0 = 1
            goto La2
        La1:
            r0 = 0
        La2:
            r6.m = r0     // Catch: java.lang.Exception -> Le3
            byte r0 = r7.readByte()     // Catch: java.lang.Exception -> Le3
            if (r0 != r2) goto Lac
            r0 = 1
            goto Lad
        Lac:
            r0 = 0
        Lad:
            r6.n = r0     // Catch: java.lang.Exception -> Le3
            long r0 = r7.readLong()     // Catch: java.lang.Exception -> Le3
            r6.p = r0     // Catch: java.lang.Exception -> Le3
            byte r0 = r7.readByte()     // Catch: java.lang.Exception -> Le3
            if (r0 != r2) goto Lbd
            r0 = 1
            goto Lbe
        Lbd:
            r0 = 0
        Lbe:
            r6.k = r0     // Catch: java.lang.Exception -> Le3
            byte r0 = r7.readByte()     // Catch: java.lang.Exception -> Le3
            if (r0 != r2) goto Lc7
            goto Lc8
        Lc7:
            r2 = 0
        Lc8:
            r6.l = r2     // Catch: java.lang.Exception -> Le3
            long r0 = r7.readLong()     // Catch: java.lang.Exception -> Le3
            r6.o = r0     // Catch: java.lang.Exception -> Le3
            int r0 = r7.readInt()     // Catch: java.lang.Exception -> Le3
            r6.u = r0     // Catch: java.lang.Exception -> Le3
            long r0 = r7.readLong()     // Catch: java.lang.Exception -> Le3
            r6.v = r0     // Catch: java.lang.Exception -> Le3
            long r0 = r7.readLong()     // Catch: java.lang.Exception -> Le3
            r6.w = r0     // Catch: java.lang.Exception -> Le3
            return
        Le3:
            r7 = move-exception
            r7.printStackTrace()
            return
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
            long r0 = r2.e
            r3.writeLong(r0)
            boolean r4 = r2.f
            byte r4 = (byte) r4
            r3.writeByte(r4)
            boolean r4 = r2.g
            byte r4 = (byte) r4
            r3.writeByte(r4)
            boolean r4 = r2.h
            byte r4 = (byte) r4
            r3.writeByte(r4)
            java.lang.String r4 = r2.q
            r3.writeString(r4)
            java.lang.String r4 = r2.r
            r3.writeString(r4)
            java.lang.String r4 = r2.s
            r3.writeString(r4)
            java.util.Map<java.lang.String, java.lang.String> r4 = r2.t
            com.tencent.bugly.proguard.ap.b(r3, r4)
            boolean r4 = r2.i
            byte r4 = (byte) r4
            r3.writeByte(r4)
            boolean r4 = r2.j
            byte r4 = (byte) r4
            r3.writeByte(r4)
            boolean r4 = r2.m
            byte r4 = (byte) r4
            r3.writeByte(r4)
            boolean r4 = r2.n
            byte r4 = (byte) r4
            r3.writeByte(r4)
            long r0 = r2.p
            r3.writeLong(r0)
            boolean r4 = r2.k
            byte r4 = (byte) r4
            r3.writeByte(r4)
            boolean r4 = r2.l
            byte r4 = (byte) r4
            r3.writeByte(r4)
            long r0 = r2.o
            r3.writeLong(r0)
            int r4 = r2.u
            r3.writeInt(r4)
            long r0 = r2.v
            r3.writeLong(r0)
            long r0 = r2.w
            r3.writeLong(r0)
            return
    }
}
