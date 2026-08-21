package com.bianfeng.ymnsdk.gongxiang;

public final class j {

    static class a implements com.bianfeng.ymnsdk.gongxiang.j.b {
        final java.util.Map a;

        a(java.util.Map r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public com.bianfeng.ymnsdk.gongxiang.g a(java.util.Map<java.lang.Integer, java.nio.ByteBuffer> r8) {
                r7 = this;
                java.util.Map r0 = r7.a
                if (r0 == 0) goto Lf
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto Lf
                java.util.Map r0 = r7.a
                r8.putAll(r0)
            Lf:
                com.bianfeng.ymnsdk.gongxiang.g r0 = new com.bianfeng.ymnsdk.gongxiang.g
                r0.<init>()
                java.util.Set r1 = r8.entrySet()
                java.util.Iterator r2 = r1.iterator()
            L1c:
                boolean r3 = r2.hasNext()
                if (r3 == 0) goto L41
                java.lang.Object r3 = r2.next()
                java.util.Map$Entry r3 = (java.util.Map.Entry) r3
                com.bianfeng.ymnsdk.gongxiang.h r4 = new com.bianfeng.ymnsdk.gongxiang.h
                java.lang.Object r5 = r3.getKey()
                java.lang.Integer r5 = (java.lang.Integer) r5
                int r5 = r5.intValue()
                java.lang.Object r6 = r3.getValue()
                java.nio.ByteBuffer r6 = (java.nio.ByteBuffer) r6
                r4.<init>(r5, r6)
                r0.a(r4)
                goto L1c
            L41:
                return r0
        }
    }

    interface b {
        com.bianfeng.ymnsdk.gongxiang.g a(java.util.Map<java.lang.Integer, java.nio.ByteBuffer> r1);
    }

    public static void a(java.io.File r4, int r5, java.lang.String r6, boolean r7) throws java.io.IOException, com.bianfeng.ymnsdk.gongxiang.f {
            java.lang.String r0 = "UTF-8"
            byte[] r0 = r6.getBytes(r0)
            int r1 = r0.length
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.allocate(r1)
            java.nio.ByteOrder r2 = java.nio.ByteOrder.LITTLE_ENDIAN
            r1.order(r2)
            int r2 = r0.length
            r3 = 0
            r1.put(r0, r3, r2)
            r1.flip()
            a(r4, r5, r1, r7)
            return
    }

    public static void a(java.io.File r2, int r3, java.nio.ByteBuffer r4, boolean r5) throws java.io.IOException, com.bianfeng.ymnsdk.gongxiang.f {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)
            r0.put(r1, r4)
            a(r2, r0, r5)
            return
    }

    static void a(java.io.File r24, com.bianfeng.ymnsdk.gongxiang.j.b r25, boolean r26) throws java.io.IOException, com.bianfeng.ymnsdk.gongxiang.f {
            r1 = 0
            r2 = 0
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L173
            java.lang.String r3 = "rw"
            r4 = r24
            r0.<init>(r4, r3)     // Catch: java.lang.Throwable -> L173
            r1 = r0
            java.nio.channels.FileChannel r0 = r1.getChannel()     // Catch: java.lang.Throwable -> L173
            r2 = r0
            long r5 = com.bianfeng.ymnsdk.gongxiang.a.c(r2)     // Catch: java.lang.Throwable -> L173
            long r7 = com.bianfeng.ymnsdk.gongxiang.a.b(r2, r5)     // Catch: java.lang.Throwable -> L173
            com.bianfeng.ymnsdk.gongxiang.d r0 = com.bianfeng.ymnsdk.gongxiang.a.a(r2, r7)     // Catch: java.lang.Throwable -> L173
            r3 = r0
            java.lang.Object r0 = r3.a()     // Catch: java.lang.Throwable -> L173
            java.nio.ByteBuffer r0 = (java.nio.ByteBuffer) r0     // Catch: java.lang.Throwable -> L173
            r9 = r0
            java.lang.Object r0 = r3.b()     // Catch: java.lang.Throwable -> L173
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Throwable -> L173
            long r10 = r0.longValue()     // Catch: java.lang.Throwable -> L173
            java.util.Map r0 = com.bianfeng.ymnsdk.gongxiang.a.b(r9)     // Catch: java.lang.Throwable -> L173
            r12 = r0
            r0 = 1896449818(0x7109871a, float:6.810044E29)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L173
            java.lang.Object r0 = r12.get(r0)     // Catch: java.lang.Throwable -> L173
            java.nio.ByteBuffer r0 = (java.nio.ByteBuffer) r0     // Catch: java.lang.Throwable -> L173
            r13 = r0
            if (r13 == 0) goto L161
            r14 = r25
            com.bianfeng.ymnsdk.gongxiang.g r0 = r14.a(r12)     // Catch: java.lang.Throwable -> L15f
            r15 = r0
            r16 = 0
            int r0 = (r10 > r16 ? 1 : (r10 == r16 ? 0 : -1))
            if (r0 == 0) goto L14d
            int r0 = (r7 > r16 ? 1 : (r7 == r16 ? 0 : -1))
            if (r0 == 0) goto L14d
            r1.seek(r7)     // Catch: java.lang.Throwable -> L15f
            r16 = 0
            r0 = 0
            r17 = r0
            if (r26 == 0) goto Lb3
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L15f
            r20 = r3
            java.lang.String r3 = r24.getParent()     // Catch: java.lang.Throwable -> L15f
            java.util.UUID r21 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L15f
            java.lang.String r4 = r21.toString()     // Catch: java.lang.Throwable -> L15f
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L15f
            r3 = r0
            r4 = 0
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> La7
            r0.<init>(r3)     // Catch: java.lang.Throwable -> La7
            r4 = r0
            r17 = r3
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r3 = new byte[r0]     // Catch: java.lang.Throwable -> La3
            r0 = r3
        L81:
            int r3 = r1.read(r0)     // Catch: java.lang.Throwable -> La3
            r21 = r3
            if (r3 <= 0) goto L96
            r3 = r21
            r21 = r9
            r9 = 0
            r4.write(r0, r9, r3)     // Catch: java.lang.Throwable -> L94
            r9 = r21
            goto L81
        L94:
            r0 = move-exception
            goto Lac
        L96:
            r3 = r21
            r21 = r9
            r4.close()     // Catch: java.lang.Throwable -> L15f
            r3 = r16
            r4 = r17
            goto Lc5
        La3:
            r0 = move-exception
            r21 = r9
            goto Lac
        La7:
            r0 = move-exception
            r17 = r3
            r21 = r9
        Lac:
            if (r4 == 0) goto Lb1
            r4.close()     // Catch: java.lang.Throwable -> L15f
        Lb1:
            throw r0     // Catch: java.lang.Throwable -> L15f
        Lb3:
            r20 = r3
            r21 = r9
            long r3 = r2.size()     // Catch: java.lang.Throwable -> L15f
            long r3 = r3 - r7
            int r0 = (int) r3     // Catch: java.lang.Throwable -> L15f
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L15f
            r1.read(r0)     // Catch: java.lang.Throwable -> L15f
            r3 = r0
            r4 = r17
        Lc5:
            r2.position(r10)     // Catch: java.lang.Throwable -> L15f
            long r16 = r15.a(r1)     // Catch: java.lang.Throwable -> L15f
            if (r26 == 0) goto L110
            r9 = 0
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L101
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L101
            r9 = r0
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L101
        Ld9:
            int r19 = r9.read(r0)     // Catch: java.lang.Throwable -> L101
            r22 = r19
            if (r19 <= 0) goto Lf2
            r19 = r12
            r18 = r13
            r12 = r22
            r13 = 0
            r1.write(r0, r13, r12)     // Catch: java.lang.Throwable -> Lf0
            r13 = r18
            r12 = r19
            goto Ld9
        Lf0:
            r0 = move-exception
            goto L106
        Lf2:
            r19 = r12
            r18 = r13
            r12 = r22
            r9.close()     // Catch: java.lang.Throwable -> L15f
            r4.delete()     // Catch: java.lang.Throwable -> L15f
            goto L117
        L101:
            r0 = move-exception
            r19 = r12
            r18 = r13
        L106:
            if (r9 == 0) goto L10b
            r9.close()     // Catch: java.lang.Throwable -> L15f
        L10b:
            r4.delete()     // Catch: java.lang.Throwable -> L15f
            throw r0     // Catch: java.lang.Throwable -> L15f
        L110:
            r19 = r12
            r18 = r13
            r1.write(r3)     // Catch: java.lang.Throwable -> L15f
        L117:
            long r12 = r1.getFilePointer()     // Catch: java.lang.Throwable -> L15f
            r1.setLength(r12)     // Catch: java.lang.Throwable -> L15f
            long r12 = r2.size()     // Catch: java.lang.Throwable -> L15f
            long r12 = r12 - r5
            r22 = 6
            long r12 = r12 - r22
            r1.seek(r12)     // Catch: java.lang.Throwable -> L15f
            r0 = 4
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)     // Catch: java.lang.Throwable -> L15f
            java.nio.ByteOrder r9 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L15f
            r0.order(r9)     // Catch: java.lang.Throwable -> L15f
            long r12 = r7 + r16
            r22 = 8
            long r12 = r12 + r22
            long r22 = r7 - r10
            long r12 = r12 - r22
            int r9 = (int) r12     // Catch: java.lang.Throwable -> L15f
            r0.putInt(r9)     // Catch: java.lang.Throwable -> L15f
            r0.flip()     // Catch: java.lang.Throwable -> L15f
            byte[] r9 = r0.array()     // Catch: java.lang.Throwable -> L15f
            r1.write(r9)     // Catch: java.lang.Throwable -> L15f
            goto L155
        L14d:
            r20 = r3
            r21 = r9
            r19 = r12
            r18 = r13
        L155:
            if (r2 == 0) goto L15a
            r2.close()
        L15a:
            r1.close()
            return
        L15f:
            r0 = move-exception
            goto L176
        L161:
            r14 = r25
            r20 = r3
            r21 = r9
            r19 = r12
            r18 = r13
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L15f
            java.lang.String r3 = "No APK Signature Scheme v2 block in APK Signing Block"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L15f
            throw r0     // Catch: java.lang.Throwable -> L15f
        L173:
            r0 = move-exception
            r14 = r25
        L176:
            if (r2 == 0) goto L17b
            r2.close()
        L17b:
            if (r1 == 0) goto L180
            r1.close()
        L180:
            throw r0
    }

    public static void a(java.io.File r1, java.util.Map<java.lang.Integer, java.nio.ByteBuffer> r2, boolean r3) throws java.io.IOException, com.bianfeng.ymnsdk.gongxiang.f {
            com.bianfeng.ymnsdk.gongxiang.j$a r0 = new com.bianfeng.ymnsdk.gongxiang.j$a
            r0.<init>(r2)
            a(r1, r0, r3)
            return
    }
}
