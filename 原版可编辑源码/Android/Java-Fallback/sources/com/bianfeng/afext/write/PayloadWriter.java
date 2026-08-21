package com.bianfeng.afext.write;

public final class PayloadWriter {



    interface ApkSigningBlockHandler {
        com.bianfeng.afext.write.ApkSigningBlock handle(java.util.Map<java.lang.Integer, java.nio.ByteBuffer> r1);
    }

    private PayloadWriter() {
            r0 = this;
            r0.<init>()
            return
    }

    static void handleApkSigningBlock(java.io.File r16, com.bianfeng.afext.write.PayloadWriter.ApkSigningBlockHandler r17, boolean r18) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r1 = 0
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L109
            java.lang.String r0 = "rw"
            r3 = r16
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L109
            java.nio.channels.FileChannel r4 = r2.getChannel()     // Catch: java.lang.Throwable -> L106
            long r5 = com.bianfeng.afext.read.ApkUtil.getCommentLength(r4)     // Catch: java.lang.Throwable -> L104
            long r7 = com.bianfeng.afext.read.ApkUtil.findCentralDirStartOffset(r4, r5)     // Catch: java.lang.Throwable -> L104
            com.bianfeng.afext.read.Pair r0 = com.bianfeng.afext.read.ApkUtil.findApkSigningBlock(r4, r7)     // Catch: java.lang.Throwable -> L104
            java.lang.Object r9 = r0.getFirst()     // Catch: java.lang.Throwable -> L104
            java.nio.ByteBuffer r9 = (java.nio.ByteBuffer) r9     // Catch: java.lang.Throwable -> L104
            java.lang.Object r0 = r0.getSecond()     // Catch: java.lang.Throwable -> L104
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Throwable -> L104
            long r10 = r0.longValue()     // Catch: java.lang.Throwable -> L104
            java.util.Map r0 = com.bianfeng.afext.read.ApkUtil.findIdValues(r9)     // Catch: java.lang.Throwable -> L104
            r9 = 1896449818(0x7109871a, float:6.810044E29)
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L104
            java.lang.Object r9 = r0.get(r9)     // Catch: java.lang.Throwable -> L104
            java.nio.ByteBuffer r9 = (java.nio.ByteBuffer) r9     // Catch: java.lang.Throwable -> L104
            if (r9 == 0) goto Lfc
            r9 = r17
            com.bianfeng.afext.write.ApkSigningBlock r0 = r9.handle(r0)     // Catch: java.lang.Throwable -> L104
            r12 = 0
            int r9 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r9 == 0) goto Lf3
            int r9 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r9 == 0) goto Lf3
            r2.seek(r7)     // Catch: java.lang.Throwable -> L104
            r9 = 0
            r12 = 1024(0x400, float:1.435E-42)
            if (r18 == 0) goto L86
            java.io.File r13 = new java.io.File     // Catch: java.lang.Throwable -> L104
            java.lang.String r3 = r16.getParent()     // Catch: java.lang.Throwable -> L104
            java.util.UUID r14 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L104
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L104
            r13.<init>(r3, r14)     // Catch: java.lang.Throwable -> L104
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L7e
            r3.<init>(r13)     // Catch: java.lang.Throwable -> L7e
            byte[] r14 = new byte[r12]     // Catch: java.lang.Throwable -> L7c
        L6d:
            int r15 = r2.read(r14)     // Catch: java.lang.Throwable -> L7c
            if (r15 <= 0) goto L77
            r3.write(r14, r9, r15)     // Catch: java.lang.Throwable -> L7c
            goto L6d
        L77:
            r3.close()     // Catch: java.lang.Throwable -> L104
            r3 = r1
            goto L92
        L7c:
            r0 = move-exception
            goto L80
        L7e:
            r0 = move-exception
            r3 = r1
        L80:
            if (r3 == 0) goto L85
            r3.close()     // Catch: java.lang.Throwable -> L104
        L85:
            throw r0     // Catch: java.lang.Throwable -> L104
        L86:
            long r13 = r4.size()     // Catch: java.lang.Throwable -> L104
            long r13 = r13 - r7
            int r3 = (int) r13     // Catch: java.lang.Throwable -> L104
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L104
            r2.read(r3)     // Catch: java.lang.Throwable -> L104
            r13 = r1
        L92:
            r4.position(r10)     // Catch: java.lang.Throwable -> L104
            long r14 = r0.writeApkSigningBlock(r2)     // Catch: java.lang.Throwable -> L104
            if (r18 == 0) goto Lc0
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lb5
            r3.<init>(r13)     // Catch: java.lang.Throwable -> Lb5
            byte[] r0 = new byte[r12]     // Catch: java.lang.Throwable -> Lb3
        La2:
            int r1 = r3.read(r0)     // Catch: java.lang.Throwable -> Lb3
            if (r1 <= 0) goto Lac
            r2.write(r0, r9, r1)     // Catch: java.lang.Throwable -> Lb3
            goto La2
        Lac:
            r3.close()     // Catch: java.lang.Throwable -> L104
            r13.delete()     // Catch: java.lang.Throwable -> L104
            goto Lc3
        Lb3:
            r0 = move-exception
            goto Lb7
        Lb5:
            r0 = move-exception
            r3 = r1
        Lb7:
            if (r3 == 0) goto Lbc
            r3.close()     // Catch: java.lang.Throwable -> L104
        Lbc:
            r13.delete()     // Catch: java.lang.Throwable -> L104
            throw r0     // Catch: java.lang.Throwable -> L104
        Lc0:
            r2.write(r3)     // Catch: java.lang.Throwable -> L104
        Lc3:
            long r0 = r2.getFilePointer()     // Catch: java.lang.Throwable -> L104
            r2.setLength(r0)     // Catch: java.lang.Throwable -> L104
            long r0 = r4.size()     // Catch: java.lang.Throwable -> L104
            long r0 = r0 - r5
            r5 = 6
            long r0 = r0 - r5
            r2.seek(r0)     // Catch: java.lang.Throwable -> L104
            r0 = 4
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)     // Catch: java.lang.Throwable -> L104
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L104
            r0.order(r1)     // Catch: java.lang.Throwable -> L104
            long r14 = r14 + r7
            r5 = 8
            long r14 = r14 + r5
            long r7 = r7 - r10
            long r14 = r14 - r7
            int r1 = (int) r14     // Catch: java.lang.Throwable -> L104
            r0.putInt(r1)     // Catch: java.lang.Throwable -> L104
            r0.flip()     // Catch: java.lang.Throwable -> L104
            byte[] r0 = r0.array()     // Catch: java.lang.Throwable -> L104
            r2.write(r0)     // Catch: java.lang.Throwable -> L104
        Lf3:
            if (r4 == 0) goto Lf8
            r4.close()
        Lf8:
            r2.close()
            return
        Lfc:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L104
            java.lang.String r1 = "No APK Signature Scheme v2 block in APK Signing Block"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L104
            throw r0     // Catch: java.lang.Throwable -> L104
        L104:
            r0 = move-exception
            goto L10c
        L106:
            r0 = move-exception
            r4 = r1
            goto L10c
        L109:
            r0 = move-exception
            r2 = r1
            r4 = r2
        L10c:
            if (r4 == 0) goto L111
            r4.close()
        L111:
            if (r2 == 0) goto L116
            r2.close()
        L116:
            throw r0
    }

    public static void put(java.io.File r1, int r2, java.lang.String r3) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 0
            put(r1, r2, r3, r0)
            return
    }

    public static void put(java.io.File r3, int r4, java.lang.String r5, boolean r6) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            java.lang.String r0 = "UTF-8"
            byte[] r5 = r5.getBytes(r0)
            int r0 = r5.length
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r1)
            int r1 = r5.length
            r2 = 0
            r0.put(r5, r2, r1)
            r0.flip()
            put(r3, r4, r0, r6)
            return
    }

    public static void put(java.io.File r1, int r2, java.nio.ByteBuffer r3) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 0
            put(r1, r2, r3, r0)
            return
    }

    public static void put(java.io.File r1, int r2, java.nio.ByteBuffer r3, boolean r4) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.put(r2, r3)
            putAll(r1, r0, r4)
            return
    }

    public static void putAll(java.io.File r1, java.util.Map<java.lang.Integer, java.nio.ByteBuffer> r2) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 0
            putAll(r1, r2, r0)
            return
    }

    public static void putAll(java.io.File r1, java.util.Map<java.lang.Integer, java.nio.ByteBuffer> r2, boolean r3) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            com.bianfeng.afext.write.PayloadWriter$1 r0 = new com.bianfeng.afext.write.PayloadWriter$1
            r0.<init>(r2)
            handleApkSigningBlock(r1, r0, r3)
            return
    }

    public static void remove(java.io.File r1, int r2) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 0
            remove(r1, r2, r0)
            return
    }

    public static void remove(java.io.File r1, int r2, boolean r3) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            com.bianfeng.afext.write.PayloadWriter$2 r0 = new com.bianfeng.afext.write.PayloadWriter$2
            r0.<init>(r2)
            handleApkSigningBlock(r1, r0, r3)
            return
    }
}
