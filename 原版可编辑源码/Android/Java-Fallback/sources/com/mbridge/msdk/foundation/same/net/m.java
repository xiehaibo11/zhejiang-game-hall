package com.mbridge.msdk.foundation.same.net;

public final class m {
    private static volatile java.util.concurrent.atomic.AtomicInteger a;
    private java.util.concurrent.ExecutorService b;


    private class a implements java.lang.Runnable {
        final com.mbridge.msdk.foundation.same.net.m a;
        private java.lang.String b;
        private java.nio.ByteBuffer c;
        private java.io.OutputStream d;
        private boolean e;
        private com.mbridge.msdk.foundation.same.net.e f;
        private java.net.Socket g;
        private java.lang.String h;
        private int i;

        a(com.mbridge.msdk.foundation.same.net.m r1, java.lang.String r2, int r3, java.lang.String r4, boolean r5, com.mbridge.msdk.foundation.same.net.e r6) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.e = r1
                r0.h = r2
                r0.i = r3
                r0.b = r4
                r0.e = r5
                r0.f = r6
                return
        }

        private void a(java.lang.String r4) {
                r3 = this;
                com.mbridge.msdk.foundation.same.net.e r0 = r3.f
                if (r0 == 0) goto L24
                com.mbridge.msdk.foundation.same.net.e.c r0 = new com.mbridge.msdk.foundation.same.net.e.c
                r1 = 404(0x194, float:5.66E-43)
                boolean r2 = android.text.TextUtils.isEmpty(r4)
                if (r2 == 0) goto L10
                java.lang.String r4 = "Unknown exception"
            L10:
                byte[] r4 = r4.getBytes()
                r2 = 0
                r0.<init>(r1, r4, r2)
                com.mbridge.msdk.foundation.same.net.a.a r4 = new com.mbridge.msdk.foundation.same.net.a.a
                r1 = 13
                r4.<init>(r1, r0)
                com.mbridge.msdk.foundation.same.net.e r0 = r3.f
                r0.onError(r4)
            L24:
                return
        }

        @Override
        public final void run() {
                r15 = this;
                java.lang.String r0 = " length : "
                java.lang.String r1 = "SocketManager"
                r2 = 0
                java.net.Socket r3 = new java.net.Socket     // Catch: java.lang.Throwable -> L299
                java.lang.String r4 = r15.h     // Catch: java.lang.Throwable -> L299
                int r5 = r15.i     // Catch: java.lang.Throwable -> L299
                r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L299
                r15.g = r3     // Catch: java.lang.Throwable -> L299
                r4 = 15000(0x3a98, float:2.102E-41)
                r3.setSoTimeout(r4)     // Catch: java.lang.Throwable -> L299
                java.lang.String r3 = r15.h     // Catch: java.lang.Throwable -> L299
                com.mbridge.msdk.foundation.same.net.f.d r4 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L299
                java.lang.String r4 = r4.f     // Catch: java.lang.Throwable -> L299
                boolean r3 = r3.contains(r4)     // Catch: java.lang.Throwable -> L299
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L299
                r4.<init>()     // Catch: java.lang.Throwable -> L299
                java.lang.String r5 = "Socket connect : "
                r4.append(r5)     // Catch: java.lang.Throwable -> L299
                java.lang.String r5 = r15.h     // Catch: java.lang.Throwable -> L299
                r4.append(r5)     // Catch: java.lang.Throwable -> L299
                java.lang.String r5 = " : "
                r4.append(r5)     // Catch: java.lang.Throwable -> L299
                int r5 = r15.i     // Catch: java.lang.Throwable -> L299
                r4.append(r5)     // Catch: java.lang.Throwable -> L299
                java.lang.String r5 = " isAnalytics : "
                r4.append(r5)     // Catch: java.lang.Throwable -> L299
                r4.append(r3)     // Catch: java.lang.Throwable -> L299
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L299
                com.mbridge.msdk.foundation.tools.z.d(r1, r4)     // Catch: java.lang.Throwable -> L299
                java.net.Socket r4 = r15.g     // Catch: java.lang.Throwable -> L299
                java.io.OutputStream r4 = r4.getOutputStream()     // Catch: java.lang.Throwable -> L299
                r15.d = r4     // Catch: java.lang.Throwable -> L299
                r4 = 8
                byte[] r5 = new byte[r4]     // Catch: java.lang.Throwable -> L299
                java.nio.ByteBuffer r5 = java.nio.ByteBuffer.wrap(r5)     // Catch: java.lang.Throwable -> L299
                r15.c = r5     // Catch: java.lang.Throwable -> L299
                java.nio.ByteOrder r6 = java.nio.ByteOrder.BIG_ENDIAN     // Catch: java.lang.Throwable -> L299
                r5.order(r6)     // Catch: java.lang.Throwable -> L299
                java.nio.ByteBuffer r5 = r15.c     // Catch: java.lang.Throwable -> L299
                r6 = 2
                r5.put(r6)     // Catch: java.lang.Throwable -> L299
                java.lang.String r5 = r15.b     // Catch: java.lang.Throwable -> L299
                boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L299
                r7 = 3
                r8 = 1
                if (r5 == 0) goto L76
                java.nio.ByteBuffer r5 = r15.c     // Catch: java.lang.Throwable -> L299
                r5.put(r8)     // Catch: java.lang.Throwable -> L299
                goto L82
            L76:
                java.nio.ByteBuffer r5 = r15.c     // Catch: java.lang.Throwable -> L299
                boolean r9 = r15.e     // Catch: java.lang.Throwable -> L299
                if (r9 == 0) goto L7e
                r9 = r7
                goto L7f
            L7e:
                r9 = r6
            L7f:
                r5.put(r9)     // Catch: java.lang.Throwable -> L299
            L82:
                java.nio.ByteBuffer r5 = r15.c     // Catch: java.lang.Throwable -> L299
                java.util.concurrent.atomic.AtomicInteger r9 = com.mbridge.msdk.foundation.same.net.m.b()     // Catch: java.lang.Throwable -> L299
                int r9 = r9.getAndIncrement()     // Catch: java.lang.Throwable -> L299
                short r9 = (short) r9     // Catch: java.lang.Throwable -> L299
                r5.putShort(r9)     // Catch: java.lang.Throwable -> L299
                java.lang.String r5 = r15.b     // Catch: java.lang.Throwable -> L299
                boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L299
                r9 = 0
                if (r5 == 0) goto Lab
                java.nio.ByteBuffer r5 = r15.c     // Catch: java.lang.Throwable -> L299
                r5.putInt(r9)     // Catch: java.lang.Throwable -> L299
                java.io.OutputStream r5 = r15.d     // Catch: java.lang.Throwable -> L299
                java.nio.ByteBuffer r10 = r15.c     // Catch: java.lang.Throwable -> L299
                byte[] r10 = r10.array()     // Catch: java.lang.Throwable -> L299
                r5.write(r10)     // Catch: java.lang.Throwable -> L299
                r10 = r9
                goto Lee
            Lab:
                boolean r5 = r15.e     // Catch: java.lang.Throwable -> L299
                if (r5 == 0) goto Ld2
                java.lang.String r5 = r15.b     // Catch: java.lang.Throwable -> L299
                boolean r10 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L299
                if (r10 == 0) goto Lb9
                r5 = r2
                goto Ld8
            Lb9:
                java.io.ByteArrayOutputStream r10 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L299
                r10.<init>()     // Catch: java.lang.Throwable -> L299
                java.util.zip.GZIPOutputStream r11 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L299
                r11.<init>(r10)     // Catch: java.lang.Throwable -> L299
                byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L299
                r11.write(r5)     // Catch: java.lang.Throwable -> L299
                r11.close()     // Catch: java.lang.Throwable -> L299
                byte[] r5 = r10.toByteArray()     // Catch: java.lang.Throwable -> L299
                goto Ld8
            Ld2:
                java.lang.String r5 = r15.b     // Catch: java.lang.Throwable -> L299
                byte[] r5 = r5.getBytes()     // Catch: java.lang.Throwable -> L299
            Ld8:
                int r10 = r5.length     // Catch: java.lang.Throwable -> L299
                java.nio.ByteBuffer r11 = r15.c     // Catch: java.lang.Throwable -> L299
                r11.putInt(r10)     // Catch: java.lang.Throwable -> L299
                java.io.OutputStream r11 = r15.d     // Catch: java.lang.Throwable -> L299
                java.nio.ByteBuffer r12 = r15.c     // Catch: java.lang.Throwable -> L299
                byte[] r12 = r12.array()     // Catch: java.lang.Throwable -> L299
                r11.write(r12)     // Catch: java.lang.Throwable -> L299
                java.io.OutputStream r11 = r15.d     // Catch: java.lang.Throwable -> L299
                r11.write(r5)     // Catch: java.lang.Throwable -> L299
            Lee:
                java.io.OutputStream r5 = r15.d     // Catch: java.lang.Throwable -> L299
                r5.flush()     // Catch: java.lang.Throwable -> L299
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L299
                r5.<init>()     // Catch: java.lang.Throwable -> L299
                java.lang.String r11 = "Socket Request : header : "
                r5.append(r11)     // Catch: java.lang.Throwable -> L299
                java.nio.ByteBuffer r11 = r15.c     // Catch: java.lang.Throwable -> L299
                byte[] r11 = r11.array()     // Catch: java.lang.Throwable -> L299
                java.lang.String r11 = java.util.Arrays.toString(r11)     // Catch: java.lang.Throwable -> L299
                r5.append(r11)     // Catch: java.lang.Throwable -> L299
                r5.append(r0)     // Catch: java.lang.Throwable -> L299
                r5.append(r10)     // Catch: java.lang.Throwable -> L299
                java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L299
                com.mbridge.msdk.foundation.tools.z.a(r1, r5)     // Catch: java.lang.Throwable -> L299
                java.net.Socket r5 = r15.g     // Catch: java.lang.Throwable -> L299
                java.io.InputStream r5 = r5.getInputStream()     // Catch: java.lang.Throwable -> L299
                byte[] r10 = new byte[r4]     // Catch: java.lang.Throwable -> L299
                r5.read(r10, r9, r4)     // Catch: java.lang.Throwable -> L299
                java.nio.ByteBuffer r11 = java.nio.ByteBuffer.wrap(r10)     // Catch: java.lang.Throwable -> L299
                r15.c = r11     // Catch: java.lang.Throwable -> L299
                java.nio.ByteOrder r12 = java.nio.ByteOrder.BIG_ENDIAN     // Catch: java.lang.Throwable -> L299
                r11.order(r12)     // Catch: java.lang.Throwable -> L299
                java.nio.ByteBuffer r11 = r15.c     // Catch: java.lang.Throwable -> L299
                r12 = 4
                int r11 = r11.getInt(r12)     // Catch: java.lang.Throwable -> L299
                r12 = r10[r8]     // Catch: java.lang.Throwable -> L299
                if (r12 != r7) goto L13a
                r7 = r8
                goto L13b
            L13a:
                r7 = r9
            L13b:
                r12 = r10[r8]     // Catch: java.lang.Throwable -> L299
                if (r12 != r6) goto L141
                r12 = r8
                goto L142
            L141:
                r12 = r9
            L142:
                java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L299
                r13.<init>()     // Catch: java.lang.Throwable -> L299
                java.lang.String r14 = "Socket Response : header : "
                r13.append(r14)     // Catch: java.lang.Throwable -> L299
                java.lang.String r10 = java.util.Arrays.toString(r10)     // Catch: java.lang.Throwable -> L299
                r13.append(r10)     // Catch: java.lang.Throwable -> L299
                r13.append(r0)     // Catch: java.lang.Throwable -> L299
                r13.append(r11)     // Catch: java.lang.Throwable -> L299
                java.lang.String r0 = " isGzip : "
                r13.append(r0)     // Catch: java.lang.Throwable -> L299
                r13.append(r7)     // Catch: java.lang.Throwable -> L299
                java.lang.String r0 = r13.toString()     // Catch: java.lang.Throwable -> L299
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L299
                byte[] r0 = new byte[r11]     // Catch: java.lang.Throwable -> L299
                java.io.DataInputStream r10 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L299
                java.net.Socket r13 = r15.g     // Catch: java.lang.Throwable -> L299
                java.io.InputStream r13 = r13.getInputStream()     // Catch: java.lang.Throwable -> L299
                r10.<init>(r13)     // Catch: java.lang.Throwable -> L299
                r10.readFully(r0)     // Catch: java.lang.Throwable -> L299
                if (r7 != 0) goto L18a
                if (r11 <= r6) goto L18a
                r6 = r0[r9]     // Catch: java.lang.Throwable -> L299
                int r4 = r6 << 8
                r6 = r0[r8]     // Catch: java.lang.Throwable -> L299
                r6 = r6 & 255(0xff, float:3.57E-43)
                r4 = r4 | r6
                r6 = 8075(0x1f8b, float:1.1315E-41)
                if (r4 != r6) goto L18a
                r7 = r8
            L18a:
                com.mbridge.msdk.foundation.same.net.e r4 = r15.f     // Catch: java.lang.Throwable -> L299
                if (r4 != 0) goto L1a6
                java.net.Socket r0 = r15.g
                if (r0 == 0) goto L1a5
                r0.close()     // Catch: java.io.IOException -> L19d
                r15.c = r2     // Catch: java.io.IOException -> L19d
                java.io.OutputStream r0 = r15.d     // Catch: java.io.IOException -> L19d
                r0.close()     // Catch: java.io.IOException -> L19d
                goto L1a5
            L19d:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L1a5:
                return
            L1a6:
                if (r12 == 0) goto L1d2
                if (r11 != 0) goto L1d2
                com.mbridge.msdk.foundation.same.net.e r0 = r15.f     // Catch: java.lang.Throwable -> L299
                com.mbridge.msdk.foundation.same.net.e.c r3 = new com.mbridge.msdk.foundation.same.net.e.c     // Catch: java.lang.Throwable -> L299
                r4 = 204(0xcc, float:2.86E-43)
                r3.<init>(r4, r2, r2)     // Catch: java.lang.Throwable -> L299
                com.mbridge.msdk.foundation.same.net.k r3 = com.mbridge.msdk.foundation.same.net.k.a(r2, r3)     // Catch: java.lang.Throwable -> L299
                r0.onSuccess(r3)     // Catch: java.lang.Throwable -> L299
                java.net.Socket r0 = r15.g
                if (r0 == 0) goto L1d1
                r0.close()     // Catch: java.io.IOException -> L1c9
                r15.c = r2     // Catch: java.io.IOException -> L1c9
                java.io.OutputStream r0 = r15.d     // Catch: java.io.IOException -> L1c9
                r0.close()     // Catch: java.io.IOException -> L1c9
                goto L1d1
            L1c9:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L1d1:
                return
            L1d2:
                if (r11 >= r8) goto L1f1
                java.lang.String r0 = "The response data less than 1"
                r15.a(r0)     // Catch: java.lang.Throwable -> L299
                java.net.Socket r0 = r15.g
                if (r0 == 0) goto L1f0
                r0.close()     // Catch: java.io.IOException -> L1e8
                r15.c = r2     // Catch: java.io.IOException -> L1e8
                java.io.OutputStream r0 = r15.d     // Catch: java.io.IOException -> L1e8
                r0.close()     // Catch: java.io.IOException -> L1e8
                goto L1f0
            L1e8:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L1f0:
                return
            L1f1:
                r4 = 200(0xc8, float:2.8E-43)
                if (r3 == 0) goto L225
                r0 = r0[r9]     // Catch: java.lang.Throwable -> L299
                if (r0 != r8) goto L208
                com.mbridge.msdk.foundation.same.net.e r0 = r15.f     // Catch: java.lang.Throwable -> L299
                com.mbridge.msdk.foundation.same.net.e.c r3 = new com.mbridge.msdk.foundation.same.net.e.c     // Catch: java.lang.Throwable -> L299
                r3.<init>(r4, r2, r2)     // Catch: java.lang.Throwable -> L299
                com.mbridge.msdk.foundation.same.net.k r3 = com.mbridge.msdk.foundation.same.net.k.a(r2, r3)     // Catch: java.lang.Throwable -> L299
                r0.onSuccess(r3)     // Catch: java.lang.Throwable -> L299
                goto L20d
            L208:
                java.lang.String r0 = "The server returns fail"
                r15.a(r0)     // Catch: java.lang.Throwable -> L299
            L20d:
                java.net.Socket r0 = r15.g
                if (r0 == 0) goto L224
                r0.close()     // Catch: java.io.IOException -> L21c
                r15.c = r2     // Catch: java.io.IOException -> L21c
                java.io.OutputStream r0 = r15.d     // Catch: java.io.IOException -> L21c
                r0.close()     // Catch: java.io.IOException -> L21c
                goto L224
            L21c:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L224:
                return
            L225:
                if (r7 == 0) goto L22e
                com.mbridge.msdk.foundation.same.net.m r3 = r15.a     // Catch: java.lang.Throwable -> L270
                java.lang.String r0 = r3.a(r0)     // Catch: java.lang.Throwable -> L270
                goto L234
            L22e:
                java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> L270
                r3.<init>(r0)     // Catch: java.lang.Throwable -> L270
                r0 = r3
            L234:
                boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L270
                if (r3 != 0) goto L240
                org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L270
                r3.<init>(r0)     // Catch: java.lang.Throwable -> L270
                goto L241
            L240:
                r3 = r2
            L241:
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L270
                r6.<init>()     // Catch: java.lang.Throwable -> L270
                java.lang.String r7 = "Socket Response length : "
                r6.append(r7)     // Catch: java.lang.Throwable -> L270
                r6.append(r11)     // Catch: java.lang.Throwable -> L270
                java.lang.String r7 = " "
                r6.append(r7)     // Catch: java.lang.Throwable -> L270
                int r0 = r0.length()     // Catch: java.lang.Throwable -> L270
                r6.append(r0)     // Catch: java.lang.Throwable -> L270
                java.lang.String r0 = r6.toString()     // Catch: java.lang.Throwable -> L270
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L270
                com.mbridge.msdk.foundation.same.net.e r0 = r15.f     // Catch: java.lang.Throwable -> L270
                com.mbridge.msdk.foundation.same.net.e.c r6 = new com.mbridge.msdk.foundation.same.net.e.c     // Catch: java.lang.Throwable -> L270
                r6.<init>(r4, r2, r2)     // Catch: java.lang.Throwable -> L270
                com.mbridge.msdk.foundation.same.net.k r3 = com.mbridge.msdk.foundation.same.net.k.a(r3, r6)     // Catch: java.lang.Throwable -> L270
                r0.onSuccess(r3)     // Catch: java.lang.Throwable -> L270
                goto L287
            L270:
                r0 = move-exception
                java.lang.String r3 = r0.getMessage()     // Catch: java.lang.Throwable -> L299
                java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L299
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L299
                boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L299
                if (r0 == 0) goto L284
                java.lang.String r3 = "The JSON data is illegal"
            L284:
                r15.a(r3)     // Catch: java.lang.Throwable -> L299
            L287:
                r5.close()     // Catch: java.lang.Throwable -> L299
                java.net.Socket r0 = r15.g
                if (r0 == 0) goto L2cc
                r0.close()     // Catch: java.io.IOException -> L2c4
                r15.c = r2     // Catch: java.io.IOException -> L2c4
                java.io.OutputStream r0 = r15.d     // Catch: java.io.IOException -> L2c4
                r0.close()     // Catch: java.io.IOException -> L2c4
                goto L2cc
            L299:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L2cd
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2cd
                r3.<init>()     // Catch: java.lang.Throwable -> L2cd
                java.lang.String r4 = "Socket exception: "
                r3.append(r4)     // Catch: java.lang.Throwable -> L2cd
                r3.append(r0)     // Catch: java.lang.Throwable -> L2cd
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L2cd
                com.mbridge.msdk.foundation.tools.z.a(r1, r3)     // Catch: java.lang.Throwable -> L2cd
                r15.a(r0)     // Catch: java.lang.Throwable -> L2cd
                java.net.Socket r0 = r15.g
                if (r0 == 0) goto L2cc
                r0.close()     // Catch: java.io.IOException -> L2c4
                r15.c = r2     // Catch: java.io.IOException -> L2c4
                java.io.OutputStream r0 = r15.d     // Catch: java.io.IOException -> L2c4
                r0.close()     // Catch: java.io.IOException -> L2c4
                goto L2cc
            L2c4:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            L2cc:
                return
            L2cd:
                r0 = move-exception
                java.net.Socket r3 = r15.g
                if (r3 == 0) goto L2e5
                r3.close()     // Catch: java.io.IOException -> L2dd
                r15.c = r2     // Catch: java.io.IOException -> L2dd
                java.io.OutputStream r2 = r15.d     // Catch: java.io.IOException -> L2dd
                r2.close()     // Catch: java.io.IOException -> L2dd
                goto L2e5
            L2dd:
                r2 = move-exception
                java.lang.String r2 = r2.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            L2e5:
                throw r0
        }
    }

    private static final class b {
        private static com.mbridge.msdk.foundation.same.net.m a;

        static {
                com.mbridge.msdk.foundation.same.net.m r0 = new com.mbridge.msdk.foundation.same.net.m
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.same.net.m.b.a = r0
                return
        }

        static com.mbridge.msdk.foundation.same.net.m a() {
                com.mbridge.msdk.foundation.same.net.m r0 = com.mbridge.msdk.foundation.same.net.m.b.a
                return r0
        }
    }

    static {
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.net.m.a = r0
            return
    }

    private m() {
            r10 = this;
            r10.<init>()
            java.util.concurrent.ThreadPoolExecutor r9 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            com.mbridge.msdk.foundation.same.net.m$1 r7 = new com.mbridge.msdk.foundation.same.net.m$1
            r7.<init>(r10)
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r8 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r8.<init>()
            r1 = 5
            r2 = 10
            r3 = 5
            r0 = r9
            r0.<init>(r1, r2, r3, r5, r6, r7, r8)
            r10.b = r9
            return
    }

    m(com.mbridge.msdk.foundation.same.net.m.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.same.net.m a() {
            com.mbridge.msdk.foundation.same.net.m r0 = com.mbridge.msdk.foundation.same.net.m.b.a()
            return r0
    }

    static java.util.concurrent.atomic.AtomicInteger b() {
            java.util.concurrent.atomic.AtomicInteger r0 = com.mbridge.msdk.foundation.same.net.m.a
            return r0
    }

    public final java.lang.String a(byte[] r7) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L35
            int r0 = r7.length
            if (r0 != 0) goto L6
            goto L35
        L6:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
            r1.<init>(r7)
            java.util.zip.GZIPInputStream r7 = new java.util.zip.GZIPInputStream
            r7.<init>(r1)
            r2 = 1024(0x400, float:1.435E-42)
            byte[] r3 = new byte[r2]
        L19:
            r4 = 0
            int r5 = r7.read(r3, r4, r2)
            if (r5 <= 0) goto L24
            r0.write(r3, r4, r5)
            goto L19
        L24:
            r7.close()
            r1.close()
            r0.flush()
            r0.close()
            java.lang.String r7 = r0.toString()
            return r7
        L35:
            r7 = 0
            return r7
    }

    public final void a(java.lang.String r10, int r11, java.lang.String r12, boolean r13, com.mbridge.msdk.foundation.same.net.e r14) {
            r9 = this;
            java.util.concurrent.ExecutorService r0 = r9.b
            com.mbridge.msdk.foundation.same.net.m$a r8 = new com.mbridge.msdk.foundation.same.net.m$a
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.execute(r8)
            return
    }
}
