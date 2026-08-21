package com.xiaomi.push;

public class fo {
    private int a;
    private com.xiaomi.push.fs a;
    private java.io.OutputStream a;
    java.nio.ByteBuffer a;
    private java.util.zip.Adler32 a;
    private byte[] a;
    private int b;
    private java.nio.ByteBuffer b;

    fo(java.io.OutputStream r2, com.xiaomi.push.fs r3) {
            r1 = this;
            r1.<init>()
            r0 = 2048(0x800, float:2.87E-42)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r1.a = r0
            r0 = 4
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r1.b = r0
            java.util.zip.Adler32 r0 = new java.util.zip.Adler32
            r0.<init>()
            r1.a = r0
            java.io.BufferedOutputStream r0 = new java.io.BufferedOutputStream
            r0.<init>(r2)
            r1.a = r0
            r1.a = r3
            java.util.TimeZone r2 = java.util.TimeZone.getDefault()
            int r3 = r2.getRawOffset()
            r0 = 3600000(0x36ee80, float:5.044674E-39)
            int r3 = r3 / r0
            r1.a = r3
            boolean r2 = r2.useDaylightTime()
            r1.b = r2
            return
    }

    public int a(com.xiaomi.push.fl r8) {
            r7 = this;
            int r0 = r8.c()
            r1 = 32768(0x8000, float:4.5918E-41)
            r2 = 0
            if (r0 <= r1) goto L3f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Blob size="
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = " should be less than "
            r3.append(r0)
            r3.append(r1)
            java.lang.String r0 = " Drop blob chid="
            r3.append(r0)
            int r0 = r8.a()
            r3.append(r0)
            java.lang.String r0 = " id="
            r3.append(r0)
            java.lang.String r8 = r8.e()
            r3.append(r8)
            java.lang.String r8 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r8)
            return r2
        L3f:
            java.nio.ByteBuffer r1 = r7.a
            r1.clear()
            int r1 = r0 + 8
            r3 = 4
            int r1 = r1 + r3
            java.nio.ByteBuffer r4 = r7.a
            int r4 = r4.capacity()
            if (r1 > r4) goto L5a
            java.nio.ByteBuffer r4 = r7.a
            int r4 = r4.capacity()
            r5 = 4096(0x1000, float:5.74E-42)
            if (r4 <= r5) goto L60
        L5a:
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.allocate(r1)
            r7.a = r1
        L60:
            java.nio.ByteBuffer r1 = r7.a
            r4 = -15618(0xffffffffffffc2fe, float:NaN)
            r1.putShort(r4)
            java.nio.ByteBuffer r1 = r7.a
            r4 = 5
            r1.putShort(r4)
            java.nio.ByteBuffer r1 = r7.a
            r1.putInt(r0)
            java.nio.ByteBuffer r1 = r7.a
            int r1 = r1.position()
            java.nio.ByteBuffer r4 = r7.a
            java.nio.ByteBuffer r4 = r8.a(r4)
            r7.a = r4
            java.lang.String r4 = r8.a()
            java.lang.String r5 = "CONN"
            boolean r4 = r5.equals(r4)
            if (r4 != 0) goto La4
            byte[] r4 = r7.a
            if (r4 != 0) goto L98
            com.xiaomi.push.fs r4 = r7.a
            byte[] r4 = r4.a()
            r7.a = r4
        L98:
            byte[] r4 = r7.a
            java.nio.ByteBuffer r5 = r7.a
            byte[] r5 = r5.array()
            r6 = 1
            com.xiaomi.push.service.bp.a(r4, r5, r6, r1, r0)
        La4:
            java.util.zip.Adler32 r0 = r7.a
            r0.reset()
            java.util.zip.Adler32 r0 = r7.a
            java.nio.ByteBuffer r1 = r7.a
            byte[] r1 = r1.array()
            java.nio.ByteBuffer r4 = r7.a
            int r4 = r4.position()
            r0.update(r1, r2, r4)
            java.util.zip.Adler32 r0 = r7.a
            long r0 = r0.getValue()
            int r0 = (int) r0
            java.nio.ByteBuffer r1 = r7.b
            r1.putInt(r2, r0)
            java.io.OutputStream r0 = r7.a
            java.nio.ByteBuffer r1 = r7.a
            byte[] r1 = r1.array()
            java.nio.ByteBuffer r4 = r7.a
            int r4 = r4.position()
            r0.write(r1, r2, r4)
            java.io.OutputStream r0 = r7.a
            java.nio.ByteBuffer r1 = r7.b
            byte[] r1 = r1.array()
            r0.write(r1, r2, r3)
            java.io.OutputStream r0 = r7.a
            r0.flush()
            java.nio.ByteBuffer r0 = r7.a
            int r0 = r0.position()
            int r0 = r0 + r3
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[Slim] Wrote {cmd="
            r1.append(r2)
            java.lang.String r2 = r8.a()
            r1.append(r2)
            java.lang.String r2 = ";chid="
            r1.append(r2)
            int r8 = r8.a()
            r1.append(r8)
            java.lang.String r8 = ";len="
            r1.append(r8)
            r1.append(r0)
            java.lang.String r8 = "}"
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r8)
            return r0
    }

    public void a() {
            r7 = this;
            com.xiaomi.push.dx$e r0 = new com.xiaomi.push.dx$e
            r0.<init>()
            r1 = 106(0x6a, float:1.49E-43)
            r0.a(r1)
            java.lang.String r1 = android.os.Build.MODEL
            r0.a(r1)
            java.lang.String r1 = com.xiaomi.push.v.a()
            r0.b(r1)
            java.lang.String r1 = com.xiaomi.push.service.bv.a()
            r0.c(r1)
            r1 = 48
            r0.b(r1)
            com.xiaomi.push.fs r2 = r7.a
            java.lang.String r2 = r2.b()
            r0.d(r2)
            com.xiaomi.push.fs r2 = r7.a
            java.lang.String r2 = r2.a()
            r0.e(r2)
            java.util.Locale r2 = java.util.Locale.getDefault()
            java.lang.String r2 = r2.toString()
            r0.f(r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r0.c(r2)
            com.xiaomi.push.fs r2 = r7.a
            com.xiaomi.push.fx r2 = r2.a()
            byte[] r2 = r2.a()
            if (r2 == 0) goto L57
            com.xiaomi.push.dx$b r2 = com.xiaomi.push.dx.b.a(r2)
            r0.a(r2)
        L57:
            com.xiaomi.push.fl r2 = new com.xiaomi.push.fl
            r2.<init>()
            r3 = 0
            r2.a(r3)
            r3 = 0
            java.lang.String r4 = "CONN"
            r2.a(r4, r3)
            r4 = 0
            java.lang.String r6 = "xiaomi.com"
            r2.a(r4, r6, r3)
            byte[] r0 = r0.a()
            r2.a(r0, r3)
            r7.a(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "[slim] open conn: andver="
            r0.append(r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r0.append(r2)
            java.lang.String r2 = " sdk="
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = " tz="
            r0.append(r1)
            int r1 = r7.a
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            int r1 = r7.b
            r0.append(r1)
            java.lang.String r1 = " Model="
            r0.append(r1)
            java.lang.String r1 = android.os.Build.MODEL
            r0.append(r1)
            java.lang.String r1 = " os="
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.INCREMENTAL
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            return
    }

    public void b() {
            r3 = this;
            com.xiaomi.push.fl r0 = new com.xiaomi.push.fl
            r0.<init>()
            java.lang.String r1 = "CLOSE"
            r2 = 0
            r0.a(r1, r2)
            r3.a(r0)
            java.io.OutputStream r0 = r3.a
            r0.close()
            return
    }
}
