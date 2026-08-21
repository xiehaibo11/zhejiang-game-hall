package com.xiaomi.push;

class fn {
    private android.content.Context a;
    private com.xiaomi.push.fq a;
    private com.xiaomi.push.fs a;
    private java.io.InputStream a;
    private java.nio.ByteBuffer a;
    private java.util.zip.Adler32 a;
    private volatile boolean a;
    private byte[] a;
    private java.nio.ByteBuffer b;

    fn(java.io.InputStream r2, com.xiaomi.push.fs r3, android.content.Context r4) {
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
            java.io.BufferedInputStream r0 = new java.io.BufferedInputStream
            r0.<init>(r2)
            r1.a = r0
            r1.a = r3
            com.xiaomi.push.fq r2 = new com.xiaomi.push.fq
            r2.<init>()
            r1.a = r2
            r1.a = r4
            return
    }

    private java.nio.ByteBuffer a() {
            r8 = this;
            java.nio.ByteBuffer r0 = r8.a
            r0.clear()
            java.nio.ByteBuffer r0 = r8.a
            r1 = 8
            r8.a(r0, r1)
            java.nio.ByteBuffer r0 = r8.a
            r1 = 0
            short r0 = r0.getShort(r1)
            java.nio.ByteBuffer r2 = r8.a
            r3 = 2
            short r2 = r2.getShort(r3)
            r3 = -15618(0xffffffffffffc2fe, float:NaN)
            if (r0 != r3) goto L102
            r0 = 5
            if (r2 != r0) goto L102
            java.nio.ByteBuffer r0 = r8.a
            r2 = 4
            int r0 = r0.getInt(r2)
            java.nio.ByteBuffer r3 = r8.a
            int r3 = r3.position()
            r4 = 32768(0x8000, float:4.5918E-41)
            if (r0 > r4) goto Lfa
            int r4 = r0 + 4
            java.nio.ByteBuffer r5 = r8.a
            int r5 = r5.remaining()
            if (r4 <= r5) goto L5c
            int r4 = r0 + 2048
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.allocate(r4)
            java.nio.ByteBuffer r5 = r8.a
            byte[] r5 = r5.array()
            java.nio.ByteBuffer r6 = r8.a
            int r6 = r6.arrayOffset()
            java.nio.ByteBuffer r7 = r8.a
            int r7 = r7.position()
            int r6 = r6 + r7
            r4.put(r5, r1, r6)
        L59:
            r8.a = r4
            goto L85
        L5c:
            java.nio.ByteBuffer r4 = r8.a
            int r4 = r4.capacity()
            r5 = 4096(0x1000, float:5.74E-42)
            if (r4 <= r5) goto L85
            r4 = 2048(0x800, float:2.87E-42)
            if (r0 >= r4) goto L85
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.allocate(r4)
            java.nio.ByteBuffer r5 = r8.a
            byte[] r5 = r5.array()
            java.nio.ByteBuffer r6 = r8.a
            int r6 = r6.arrayOffset()
            java.nio.ByteBuffer r7 = r8.a
            int r7 = r7.position()
            int r6 = r6 + r7
            r4.put(r5, r1, r6)
            goto L59
        L85:
            java.nio.ByteBuffer r4 = r8.a
            r8.a(r4, r0)
            java.nio.ByteBuffer r4 = r8.b
            r4.clear()
            java.nio.ByteBuffer r4 = r8.b
            r8.a(r4, r2)
            java.nio.ByteBuffer r2 = r8.b
            r2.position(r1)
            java.nio.ByteBuffer r2 = r8.b
            int r2 = r2.getInt()
            java.util.zip.Adler32 r4 = r8.a
            r4.reset()
            java.util.zip.Adler32 r4 = r8.a
            java.nio.ByteBuffer r5 = r8.a
            byte[] r5 = r5.array()
            java.nio.ByteBuffer r6 = r8.a
            int r6 = r6.position()
            r4.update(r5, r1, r6)
            java.util.zip.Adler32 r1 = r8.a
            long r4 = r1.getValue()
            int r1 = (int) r4
            if (r2 != r1) goto Lcf
            byte[] r1 = r8.a
            if (r1 == 0) goto Lcc
            java.nio.ByteBuffer r2 = r8.a
            byte[] r2 = r2.array()
            r4 = 1
            com.xiaomi.push.service.bp.a(r1, r2, r4, r3, r0)
        Lcc:
            java.nio.ByteBuffer r0 = r8.a
            return r0
        Lcf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "CRC = "
            r0.append(r1)
            java.util.zip.Adler32 r1 = r8.a
            long r3 = r1.getValue()
            int r1 = (int) r3
            r0.append(r1)
            java.lang.String r1 = " and "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Corrupted Blob bad CRC"
            r0.<init>(r1)
            throw r0
        Lfa:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Blob size too large"
            r0.<init>(r1)
            throw r0
        L102:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Malformed Input"
            r0.<init>(r1)
            throw r0
    }

    private void a(java.nio.ByteBuffer r4, int r5) {
            r3 = this;
            int r0 = r4.position()
        L4:
            java.io.InputStream r1 = r3.a
            byte[] r2 = r4.array()
            int r1 = r1.read(r2, r0, r5)
            r2 = -1
            if (r1 == r2) goto L19
            int r5 = r5 - r1
            int r0 = r0 + r1
            if (r5 > 0) goto L4
            r4.position(r0)
            return
        L19:
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
    }

    private void c() {
            r9 = this;
            r0 = 0
            r9.a = r0
            com.xiaomi.push.fl r1 = r9.a()
            java.lang.String r2 = r1.a()
            java.lang.String r3 = "CONN"
            boolean r2 = r3.equals(r2)
            r3 = 1
            if (r2 == 0) goto L67
            byte[] r1 = r1.a()
            com.xiaomi.push.dx$f r1 = com.xiaomi.push.dx.f.a(r1)
            boolean r2 = r1.a()
            if (r2 == 0) goto L2c
            com.xiaomi.push.fs r0 = r9.a
            java.lang.String r2 = r1.a()
            r0.a(r2)
            r0 = r3
        L2c:
            boolean r2 = r1.c()
            if (r2 == 0) goto L4f
            com.xiaomi.push.dx$b r2 = r1.a()
            com.xiaomi.push.fl r4 = new com.xiaomi.push.fl
            r4.<init>()
            java.lang.String r5 = "SYNC"
            java.lang.String r6 = "CONF"
            r4.a(r5, r6)
            byte[] r2 = r2.a()
            r5 = 0
            r4.a(r2, r5)
            com.xiaomi.push.fs r2 = r9.a
            r2.a(r4)
        L4f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "[Slim] CONN: host = "
            r2.append(r4)
            java.lang.String r1 = r1.b()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L67:
            if (r0 == 0) goto L16e
            com.xiaomi.push.fs r0 = r9.a
            byte[] r0 = r0.a()
            r9.a = r0
        L71:
            boolean r0 = r9.a
            if (r0 != 0) goto L16d
            com.xiaomi.push.fl r0 = r9.a()
            com.xiaomi.push.fs r1 = r9.a
            r1.c()
            short r1 = r0.a()
            if (r1 == r3) goto L166
            java.lang.String r2 = " failure:"
            java.lang.String r4 = "; Id="
            java.lang.String r5 = "[Slim] Parse packet from Blob chid="
            r6 = 3
            r7 = 2
            if (r1 == r7) goto Le4
            if (r1 == r6) goto La9
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[Slim] unknow blob type "
            r1.append(r2)
            short r0 = r0.a()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        La5:
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            goto L71
        La9:
            com.xiaomi.push.fq r1 = r9.a     // Catch: java.lang.Exception -> Lbb
            byte[] r6 = r0.a()     // Catch: java.lang.Exception -> Lbb
            com.xiaomi.push.fs r7 = r9.a     // Catch: java.lang.Exception -> Lbb
            com.xiaomi.push.gn r1 = r1.a(r6, r7)     // Catch: java.lang.Exception -> Lbb
            com.xiaomi.push.fs r6 = r9.a     // Catch: java.lang.Exception -> Lbb
            r6.b(r1)     // Catch: java.lang.Exception -> Lbb
            goto L71
        Lbb:
            r1 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
        Lc1:
            r6.append(r5)
            int r5 = r0.a()
            r6.append(r5)
            r6.append(r4)
            java.lang.String r0 = r0.e()
            r6.append(r0)
            r6.append(r2)
            java.lang.String r0 = r1.getMessage()
            r6.append(r0)
            java.lang.String r0 = r6.toString()
            goto La5
        Le4:
            java.lang.String r1 = r0.a()
            java.lang.String r8 = "SECMSG"
            boolean r1 = r8.equals(r1)
            if (r1 == 0) goto L13a
            int r1 = r0.a()
            if (r1 == r7) goto Lfc
            int r1 = r0.a()
            if (r1 != r6) goto L13a
        Lfc:
            java.lang.String r1 = r0.b()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L13a
            int r1 = r0.a()     // Catch: java.lang.Exception -> L133
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L133
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L133
            java.lang.String r6 = r0.g()     // Catch: java.lang.Exception -> L133
            com.xiaomi.push.service.bg r7 = com.xiaomi.push.service.bg.a()     // Catch: java.lang.Exception -> L133
            com.xiaomi.push.service.bg$b r1 = r7.a(r1, r6)     // Catch: java.lang.Exception -> L133
            com.xiaomi.push.fq r6 = r9.a     // Catch: java.lang.Exception -> L133
            java.lang.String r1 = r1.h     // Catch: java.lang.Exception -> L133
            byte[] r1 = r0.a(r1)     // Catch: java.lang.Exception -> L133
            com.xiaomi.push.fs r7 = r9.a     // Catch: java.lang.Exception -> L133
            com.xiaomi.push.gn r1 = r6.a(r1, r7)     // Catch: java.lang.Exception -> L133
            com.xiaomi.push.fs r6 = r9.a     // Catch: java.lang.Exception -> L133
            r6.b(r1)     // Catch: java.lang.Exception -> L133
            goto L71
        L133:
            r1 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            goto Lc1
        L13a:
            int r1 = r0.a()
            r2 = 10
            if (r1 != r2) goto L166
            r0.b(r2)
            com.xiaomi.push.service.ao r1 = r0.a
            android.content.Context r2 = r9.a
            boolean r2 = com.xiaomi.push.w.a(r2)
            r1.a = r2
            com.xiaomi.push.service.ao r1 = r0.a
            android.content.Context r2 = r9.a
            boolean r2 = com.xiaomi.push.bj.e(r2)
            r1.b = r2
            com.xiaomi.push.service.ao r1 = r0.a
            long r4 = java.lang.System.currentTimeMillis()
            r1.a = r4
            java.lang.String r1 = "rcv blob from chid 10"
            com.xiaomi.channel.commonutils.logger.b.c(r1)
        L166:
            com.xiaomi.push.fs r1 = r9.a
            r1.a(r0)
            goto L71
        L16d:
            return
        L16e:
            java.lang.String r0 = "[Slim] Invalid CONN"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Invalid Connection"
            r0.<init>(r1)
            throw r0
    }

    com.xiaomi.push.fl a() {
            r6 = this;
            r0 = 0
            java.nio.ByteBuffer r1 = r6.a()     // Catch: java.io.IOException -> L55
            int r2 = r1.position()     // Catch: java.io.IOException -> L55
            r1.flip()     // Catch: java.io.IOException -> L53
            r3 = 8
            r1.position(r3)     // Catch: java.io.IOException -> L53
            if (r2 != r3) goto L19
            com.xiaomi.push.fr r1 = new com.xiaomi.push.fr     // Catch: java.io.IOException -> L53
            r1.<init>()     // Catch: java.io.IOException -> L53
            goto L21
        L19:
            java.nio.ByteBuffer r1 = r1.slice()     // Catch: java.io.IOException -> L53
            com.xiaomi.push.fl r1 = com.xiaomi.push.fl.a(r1)     // Catch: java.io.IOException -> L53
        L21:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L53
            r3.<init>()     // Catch: java.io.IOException -> L53
            java.lang.String r4 = "[Slim] Read {cmd="
            r3.append(r4)     // Catch: java.io.IOException -> L53
            java.lang.String r4 = r1.a()     // Catch: java.io.IOException -> L53
            r3.append(r4)     // Catch: java.io.IOException -> L53
            java.lang.String r4 = ";chid="
            r3.append(r4)     // Catch: java.io.IOException -> L53
            int r4 = r1.a()     // Catch: java.io.IOException -> L53
            r3.append(r4)     // Catch: java.io.IOException -> L53
            java.lang.String r4 = ";len="
            r3.append(r4)     // Catch: java.io.IOException -> L53
            r3.append(r2)     // Catch: java.io.IOException -> L53
            java.lang.String r4 = "}"
            r3.append(r4)     // Catch: java.io.IOException -> L53
            java.lang.String r3 = r3.toString()     // Catch: java.io.IOException -> L53
            com.xiaomi.channel.commonutils.logger.b.c(r3)     // Catch: java.io.IOException -> L53
            return r1
        L53:
            r1 = move-exception
            goto L57
        L55:
            r1 = move-exception
            r2 = r0
        L57:
            if (r2 != 0) goto L5f
            java.nio.ByteBuffer r2 = r6.a
            int r2 = r2.position()
        L5f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "[Slim] read Blob ["
            r3.append(r4)
            java.nio.ByteBuffer r4 = r6.a
            byte[] r4 = r4.array()
            r5 = 128(0x80, float:1.8E-43)
            if (r2 <= r5) goto L74
            r2 = r5
        L74:
            java.lang.String r0 = com.xiaomi.push.ai.a(r4, r0, r2)
            r3.append(r0)
            java.lang.String r0 = "] Err:"
            r3.append(r0)
            java.lang.String r0 = r1.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            throw r1
    }

    void a() {
            r2 = this;
            r2.c()     // Catch: java.io.IOException -> L4
            goto L9
        L4:
            r0 = move-exception
            boolean r1 = r2.a
            if (r1 == 0) goto La
        L9:
            return
        La:
            throw r0
    }

    void b() {
            r1 = this;
            r0 = 1
            r1.a = r0
            return
    }
}
