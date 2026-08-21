package com.bianfeng.ymnsdk.gongxiang;

public final class a {
    public static com.bianfeng.ymnsdk.gongxiang.d<java.nio.ByteBuffer, java.lang.Long> a(java.nio.channels.FileChannel r3) throws java.io.IOException, com.bianfeng.ymnsdk.gongxiang.f {
            long r0 = b(r3)
            com.bianfeng.ymnsdk.gongxiang.d r2 = a(r3, r0)
            return r2
    }

    public static com.bianfeng.ymnsdk.gongxiang.d<java.nio.ByteBuffer, java.lang.Long> a(java.nio.channels.FileChannel r12, long r13) throws java.io.IOException, com.bianfeng.ymnsdk.gongxiang.f {
            r0 = 32
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 < 0) goto Ld0
            r0 = 24
            long r0 = r13 - r0
            r12.position(r0)
            r0 = 24
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r12.read(r0)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r1)
            r1 = 8
            long r1 = r0.getLong(r1)
            r3 = 2334950737559900225(0x20676953204b5041, double:1.3968830566012645E-152)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto Lc8
            r1 = 16
            long r1 = r0.getLong(r1)
            r3 = 3617552046287187010(0x3234206b636f6c42, double:7.465385175170059E-67)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto Lc8
            r1 = 0
            long r2 = r0.getLong(r1)
            int r4 = r0.capacity()
            long r4 = (long) r4
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 < 0) goto Lb1
            r4 = 2147483639(0x7ffffff7, double:1.060997891E-314)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 > 0) goto Lb1
            r4 = 8
            long r4 = r4 + r2
            int r5 = (int) r4
            long r6 = (long) r5
            long r6 = r13 - r6
            r8 = 0
            int r4 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r4 < 0) goto L9a
            r12.position(r6)
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.allocate(r5)
            r12.read(r4)
            java.nio.ByteOrder r8 = java.nio.ByteOrder.LITTLE_ENDIAN
            r4.order(r8)
            long r8 = r4.getLong(r1)
            int r1 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r1 != 0) goto L7b
            java.lang.Long r1 = java.lang.Long.valueOf(r6)
            com.bianfeng.ymnsdk.gongxiang.d r1 = com.bianfeng.ymnsdk.gongxiang.d.a(r4, r1)
            return r1
        L7b:
            com.bianfeng.ymnsdk.gongxiang.f r1 = new com.bianfeng.ymnsdk.gongxiang.f
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "APK Signing Block sizes in header and footer do not match: "
            r10.append(r11)
            r10.append(r8)
            java.lang.String r11 = " vs "
            r10.append(r11)
            r10.append(r2)
            java.lang.String r10 = r10.toString()
            r1.<init>(r10)
            throw r1
        L9a:
            com.bianfeng.ymnsdk.gongxiang.f r1 = new com.bianfeng.ymnsdk.gongxiang.f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r8 = "APK Signing Block offset out of range: "
            r4.append(r8)
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r1.<init>(r4)
            throw r1
        Lb1:
            com.bianfeng.ymnsdk.gongxiang.f r1 = new com.bianfeng.ymnsdk.gongxiang.f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "APK Signing Block size out of range: "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            r1.<init>(r4)
            throw r1
        Lc8:
            com.bianfeng.ymnsdk.gongxiang.f r1 = new com.bianfeng.ymnsdk.gongxiang.f
            java.lang.String r2 = "No APK Signing Block before ZIP Central Directory"
            r1.<init>(r2)
            throw r1
        Ld0:
            com.bianfeng.ymnsdk.gongxiang.f r0 = new com.bianfeng.ymnsdk.gongxiang.f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "APK too small for APK Signing Block. ZIP Central Directory offset: "
            r1.append(r2)
            r1.append(r13)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    private static java.nio.ByteBuffer a(java.nio.ByteBuffer r5, int r6) throws java.nio.BufferUnderflowException {
            if (r6 < 0) goto L31
            int r0 = r5.limit()
            int r1 = r5.position()
            int r2 = r1 + r6
            if (r2 < r1) goto L2b
            if (r2 > r0) goto L2b
            r5.limit(r2)
            java.nio.ByteBuffer r3 = r5.slice()     // Catch: java.lang.Throwable -> L26
            java.nio.ByteOrder r4 = r5.order()     // Catch: java.lang.Throwable -> L26
            r3.order(r4)     // Catch: java.lang.Throwable -> L26
            r5.position(r2)     // Catch: java.lang.Throwable -> L26
            r5.limit(r0)
            return r3
        L26:
            r3 = move-exception
            r5.limit(r0)
            throw r3
        L2b:
            java.nio.BufferUnderflowException r3 = new java.nio.BufferUnderflowException
            r3.<init>()
            throw r3
        L31:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "size: "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    private static java.nio.ByteBuffer a(java.nio.ByteBuffer r6, int r7, int r8) {
            if (r7 < 0) goto L7f
            if (r8 < r7) goto L60
            int r0 = r6.capacity()
            int r1 = r6.capacity()
            if (r8 > r1) goto L41
            int r1 = r6.limit()
            int r2 = r6.position()
            r3 = 0
            r6.position(r3)     // Catch: java.lang.Throwable -> L36
            r6.limit(r8)     // Catch: java.lang.Throwable -> L36
            r6.position(r7)     // Catch: java.lang.Throwable -> L36
            java.nio.ByteBuffer r4 = r6.slice()     // Catch: java.lang.Throwable -> L36
            java.nio.ByteOrder r5 = r6.order()     // Catch: java.lang.Throwable -> L36
            r4.order(r5)     // Catch: java.lang.Throwable -> L36
            r6.position(r3)
            r6.limit(r1)
            r6.position(r2)
            return r4
        L36:
            r4 = move-exception
            r6.position(r3)
            r6.limit(r1)
            r6.position(r2)
            throw r4
        L41:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "end > capacity: "
            r2.append(r3)
            r2.append(r8)
            java.lang.String r3 = " > "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L60:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "end < start: "
            r1.append(r2)
            r1.append(r8)
            java.lang.String r2 = " < "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L7f:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "start: "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    private static void a(java.nio.ByteBuffer r2) {
            java.nio.ByteOrder r0 = r2.order()
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            if (r0 != r1) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "ByteBuffer byte order must be little endian"
            r0.<init>(r1)
            throw r0
    }

    public static long b(java.nio.channels.FileChannel r2) throws java.io.IOException {
            long r0 = c(r2)
            long r0 = b(r2, r0)
            return r0
    }

    public static long b(java.nio.channels.FileChannel r5, long r6) throws java.io.IOException {
            r0 = 4
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r1)
            long r1 = r5.size()
            long r1 = r1 - r6
            r3 = 6
            long r1 = r1 - r3
            r5.position(r1)
            r5.read(r0)
            r1 = 0
            int r1 = r0.getInt(r1)
            long r1 = (long) r1
            return r1
    }

    public static java.util.Map<java.lang.Integer, java.nio.ByteBuffer> b(java.nio.ByteBuffer r11) throws com.bianfeng.ymnsdk.gongxiang.f {
            a(r11)
            int r0 = r11.capacity()
            int r0 = r0 + (-24)
            r1 = 8
            java.nio.ByteBuffer r0 = a(r11, r1, r0)
            java.util.LinkedHashMap r2 = new java.util.LinkedHashMap
            r2.<init>()
            r3 = 0
        L15:
            boolean r4 = r0.hasRemaining()
            if (r4 == 0) goto Lb2
            int r3 = r3 + 1
            int r4 = r0.remaining()
            if (r4 < r1) goto L9b
            long r4 = r0.getLong()
            r6 = 4
            java.lang.String r8 = " size out of range: "
            java.lang.String r9 = "APK Signing Block entry #"
            int r10 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r10 < 0) goto L80
            r6 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r10 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r10 > 0) goto L80
            int r6 = (int) r4
            int r7 = r0.position()
            int r7 = r7 + r6
            int r10 = r0.remaining()
            if (r6 > r10) goto L59
            int r8 = r0.getInt()
            java.lang.Integer r9 = java.lang.Integer.valueOf(r8)
            int r10 = r6 + (-4)
            java.nio.ByteBuffer r10 = a(r0, r10)
            r2.put(r9, r10)
            r0.position(r7)
            goto L15
        L59:
            com.bianfeng.ymnsdk.gongxiang.f r1 = new com.bianfeng.ymnsdk.gongxiang.f
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r9)
            r10.append(r3)
            r10.append(r8)
            r10.append(r6)
            java.lang.String r8 = ", available: "
            r10.append(r8)
            int r8 = r0.remaining()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            r1.<init>(r8)
            throw r1
        L80:
            com.bianfeng.ymnsdk.gongxiang.f r1 = new com.bianfeng.ymnsdk.gongxiang.f
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r9)
            r6.append(r3)
            r6.append(r8)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            r1.<init>(r6)
            throw r1
        L9b:
            com.bianfeng.ymnsdk.gongxiang.f r1 = new com.bianfeng.ymnsdk.gongxiang.f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Insufficient data to read size of APK Signing Block entry #"
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            r1.<init>(r4)
            throw r1
        Lb2:
            return r2
    }

    public static long c(java.nio.channels.FileChannel r14) throws java.io.IOException {
            long r0 = r14.size()
            r2 = 22
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L5e
            long r4 = r0 - r2
            r6 = 65535(0xffff, double:3.23786E-319)
            long r4 = java.lang.Math.min(r4, r6)
            long r2 = r0 - r2
            r6 = 0
        L16:
            long r7 = (long) r6
            int r9 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r9 > 0) goto L56
            long r7 = (long) r6
            long r7 = r2 - r7
            r9 = 4
            java.nio.ByteBuffer r9 = java.nio.ByteBuffer.allocate(r9)
            r14.position(r7)
            r14.read(r9)
            java.nio.ByteOrder r10 = java.nio.ByteOrder.LITTLE_ENDIAN
            r9.order(r10)
            r10 = 0
            int r11 = r9.getInt(r10)
            r12 = 101010256(0x6054b50, float:2.506985E-35)
            if (r11 != r12) goto L53
            r11 = 2
            java.nio.ByteBuffer r11 = java.nio.ByteBuffer.allocate(r11)
            r12 = 20
            long r12 = r12 + r7
            r14.position(r12)
            r14.read(r11)
            java.nio.ByteOrder r12 = java.nio.ByteOrder.LITTLE_ENDIAN
            r11.order(r12)
            short r10 = r11.getShort(r10)
            if (r10 != r6) goto L53
            long r12 = (long) r10
            return r12
        L53:
            int r6 = r6 + 1
            goto L16
        L56:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r7 = "ZIP End of Central Directory (EOCD) record not found"
            r6.<init>(r7)
            throw r6
        L5e:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "APK too small for ZIP End of Central Directory (EOCD) record"
            r2.<init>(r3)
            throw r2
    }
}
