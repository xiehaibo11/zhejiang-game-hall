package com.huawei.hms.base.log;

public class c {
    public final java.lang.StringBuilder a;
    public java.lang.String b;
    public java.lang.String c;
    public int d;
    public long e;
    public long f;
    public java.lang.String g;
    public int h;
    public int i;
    public int j;

    public c(int r4, java.lang.String r5, int r6, java.lang.String r7) {
            r3 = this;
            r3.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r3.a = r0
            r0 = 0
            r3.b = r0
            java.lang.String r0 = "HMS"
            r3.c = r0
            r0 = 0
            r3.d = r0
            r1 = 0
            r3.e = r1
            r3.f = r1
            r3.j = r0
            r3.j = r4
            r3.b = r5
            r3.d = r6
            if (r7 == 0) goto L26
            r3.c = r7
        L26:
            r3.b()
            return
    }

    public static java.lang.String a(int r1) {
            r0 = 3
            if (r1 == r0) goto L1a
            r0 = 4
            if (r1 == r0) goto L17
            r0 = 5
            if (r1 == r0) goto L14
            r0 = 6
            if (r1 == r0) goto L11
            java.lang.String r1 = java.lang.String.valueOf(r1)
            return r1
        L11:
            java.lang.String r1 = "E"
            return r1
        L14:
            java.lang.String r1 = "W"
            return r1
        L17:
            java.lang.String r1 = "I"
            return r1
        L1a:
            java.lang.String r1 = "D"
            return r1
    }

    public <T> com.huawei.hms.base.log.c a(T r2) {
            r1 = this;
            java.lang.StringBuilder r0 = r1.a
            r0.append(r2)
            return r1
    }

    public com.huawei.hms.base.log.c a(java.lang.Throwable r2) {
            r1 = this;
            r0 = 10
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            com.huawei.hms.base.log.c r0 = r1.a(r0)
            java.lang.String r2 = android.util.Log.getStackTraceString(r2)
            r0.a(r2)
            return r1
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.a(r0)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.lang.StringBuilder a(java.lang.StringBuilder r2) {
            r1 = this;
            r0 = 32
            r2.append(r0)
            java.lang.StringBuilder r0 = r1.a
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            return r2
    }

    public final com.huawei.hms.base.log.c b() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r3.e = r0
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            long r1 = r0.getId()
            r3.f = r1
            int r1 = android.os.Process.myPid()
            r3.h = r1
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            int r1 = r0.length
            int r2 = r3.j
            if (r1 <= r2) goto L2d
            r0 = r0[r2]
            java.lang.String r1 = r0.getFileName()
            r3.g = r1
            int r0 = r0.getLineNumber()
            r3.i = r0
        L2d:
            return r3
    }

    public final java.lang.StringBuilder b(java.lang.StringBuilder r5) {
            r4 = this;
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.getDefault()
            java.lang.String r2 = "yyyy-MM-dd HH:mm:ss.SSS"
            r0.<init>(r2, r1)
            r1 = 91
            r5.append(r1)
            long r1 = r4.e
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r0 = r0.format(r1)
            r5.append(r0)
            int r0 = r4.d
            java.lang.String r0 = a(r0)
            r1 = 32
            r5.append(r1)
            r5.append(r0)
            r0 = 47
            r5.append(r0)
            java.lang.String r2 = r4.c
            r5.append(r2)
            r5.append(r0)
            java.lang.String r0 = r4.b
            r5.append(r0)
            r5.append(r1)
            int r0 = r4.h
            r5.append(r0)
            r0 = 58
            r5.append(r0)
            long r2 = r4.f
            r5.append(r2)
            r5.append(r1)
            java.lang.String r1 = r4.g
            r5.append(r1)
            r5.append(r0)
            int r0 = r4.i
            r5.append(r0)
            r0 = 93
            r5.append(r0)
            return r5
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.b(r0)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.b(r0)
            r1.a(r0)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
