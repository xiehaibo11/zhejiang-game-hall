package com.bianfeng.afext.read;

public final class ApkUtil {
    public static final int APK_CHANNEL_BLOCK_ID = 1903654775;
    public static final int APK_SIGNATURE_SCHEME_V2_BLOCK_ID = 1896449818;
    public static final long APK_SIG_BLOCK_MAGIC_HI = 3617552046287187010L;
    public static final long APK_SIG_BLOCK_MAGIC_LO = 2334950737559900225L;
    private static final int APK_SIG_BLOCK_MIN_SIZE = 32;
    public static final java.lang.String DEFAULT_CHARSET = "UTF-8";
    private static final int UINT16_MAX_VALUE = 65535;
    private static final int ZIP_EOCD_COMMENT_LENGTH_FIELD_OFFSET = 20;
    private static final int ZIP_EOCD_REC_MIN_SIZE = 22;
    private static final int ZIP_EOCD_REC_SIG = 101010256;

    private ApkUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void checkByteOrderLittleEndian(java.nio.ByteBuffer r1) {
            java.nio.ByteOrder r1 = r1.order()
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN
            if (r1 != r0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "ByteBuffer byte order must be little endian"
            r1.<init>(r0)
            throw r1
    }

    public static com.bianfeng.afext.read.Pair<java.nio.ByteBuffer, java.lang.Long> findApkSigningBlock(java.nio.channels.FileChannel r2) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            long r0 = findCentralDirStartOffset(r2)
            com.bianfeng.afext.read.Pair r2 = findApkSigningBlock(r2, r0)
            return r2
    }

    public static com.bianfeng.afext.read.Pair<java.nio.ByteBuffer, java.lang.Long> findApkSigningBlock(java.nio.channels.FileChannel r7, long r8) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 32
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r2 < 0) goto Lcf
            r0 = 24
            long r0 = r8 - r0
            r7.position(r0)
            r0 = 24
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r7.read(r0)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r1)
            r1 = 8
            long r1 = r0.getLong(r1)
            r3 = 2334950737559900225(0x20676953204b5041, double:1.3968830566012645E-152)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto Lc7
            r1 = 16
            long r1 = r0.getLong(r1)
            r3 = 3617552046287187010(0x3234206b636f6c42, double:7.465385175170059E-67)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto Lc7
            r1 = 0
            long r2 = r0.getLong(r1)
            int r0 = r0.capacity()
            long r4 = (long) r0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto Lb0
            r4 = 2147483639(0x7ffffff7, double:1.060997891E-314)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto Lb0
            r4 = 8
            long r4 = r4 + r2
            int r0 = (int) r4
            long r4 = (long) r0
            long r8 = r8 - r4
            r4 = 0
            int r6 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r6 < 0) goto L99
            r7.position(r8)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r7.read(r0)
            java.nio.ByteOrder r7 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r7)
            long r4 = r0.getLong(r1)
            int r7 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r7 != 0) goto L7a
            java.lang.Long r7 = java.lang.Long.valueOf(r8)
            com.bianfeng.afext.read.Pair r7 = com.bianfeng.afext.read.Pair.of(r0, r7)
            return r7
        L7a:
            com.bianfeng.afext.read.SignatureNotFoundException r7 = new com.bianfeng.afext.read.SignatureNotFoundException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "APK Signing Block sizes in header and footer do not match: "
            r8.append(r9)
            r8.append(r4)
            java.lang.String r9 = " vs "
            r8.append(r9)
            r8.append(r2)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L99:
            com.bianfeng.afext.read.SignatureNotFoundException r7 = new com.bianfeng.afext.read.SignatureNotFoundException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "APK Signing Block offset out of range: "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r7.<init>(r8)
            throw r7
        Lb0:
            com.bianfeng.afext.read.SignatureNotFoundException r7 = new com.bianfeng.afext.read.SignatureNotFoundException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "APK Signing Block size out of range: "
            r8.append(r9)
            r8.append(r2)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        Lc7:
            com.bianfeng.afext.read.SignatureNotFoundException r7 = new com.bianfeng.afext.read.SignatureNotFoundException
            java.lang.String r8 = "No APK Signing Block before ZIP Central Directory"
            r7.<init>(r8)
            throw r7
        Lcf:
            com.bianfeng.afext.read.SignatureNotFoundException r7 = new com.bianfeng.afext.read.SignatureNotFoundException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "APK too small for APK Signing Block. ZIP Central Directory offset: "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r7.<init>(r8)
            throw r7
    }

    public static long findCentralDirStartOffset(java.nio.channels.FileChannel r2) throws java.io.IOException {
            long r0 = getCommentLength(r2)
            long r0 = findCentralDirStartOffset(r2, r0)
            return r0
    }

    public static long findCentralDirStartOffset(java.nio.channels.FileChannel r3, long r4) throws java.io.IOException {
            r0 = 4
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r1)
            long r1 = r3.size()
            long r1 = r1 - r4
            r4 = 6
            long r1 = r1 - r4
            r3.position(r1)
            r3.read(r0)
            r3 = 0
            int r3 = r0.getInt(r3)
            long r3 = (long) r3
            return r3
    }

    public static java.util.Map<java.lang.Integer, java.nio.ByteBuffer> findIdValues(java.nio.ByteBuffer r10) throws com.bianfeng.afext.read.SignatureNotFoundException {
            checkByteOrderLittleEndian(r10)
            int r0 = r10.capacity()
            int r0 = r0 + (-24)
            r1 = 8
            java.nio.ByteBuffer r10 = sliceFromTo(r10, r1, r0)
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2 = 0
        L15:
            boolean r3 = r10.hasRemaining()
            if (r3 == 0) goto Lb2
            int r2 = r2 + 1
            int r3 = r10.remaining()
            if (r3 < r1) goto L9b
            long r3 = r10.getLong()
            r5 = 4
            java.lang.String r7 = " size out of range: "
            java.lang.String r8 = "APK Signing Block entry #"
            int r9 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r9 < 0) goto L80
            r5 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r9 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r9 > 0) goto L80
            int r4 = (int) r3
            int r3 = r10.position()
            int r3 = r3 + r4
            int r5 = r10.remaining()
            if (r4 > r5) goto L59
            int r5 = r10.getInt()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            int r4 = r4 + (-4)
            java.nio.ByteBuffer r4 = getByteBuffer(r10, r4)
            r0.put(r5, r4)
            r10.position(r3)
            goto L15
        L59:
            com.bianfeng.afext.read.SignatureNotFoundException r0 = new com.bianfeng.afext.read.SignatureNotFoundException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r8)
            r1.append(r2)
            r1.append(r7)
            r1.append(r4)
            java.lang.String r2 = ", available: "
            r1.append(r2)
            int r10 = r10.remaining()
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            r0.<init>(r10)
            throw r0
        L80:
            com.bianfeng.afext.read.SignatureNotFoundException r10 = new com.bianfeng.afext.read.SignatureNotFoundException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            r0.append(r2)
            r0.append(r7)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
        L9b:
            com.bianfeng.afext.read.SignatureNotFoundException r10 = new com.bianfeng.afext.read.SignatureNotFoundException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Insufficient data to read size of APK Signing Block entry #"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
        Lb2:
            return r0
    }

    private static java.nio.ByteBuffer getByteBuffer(java.nio.ByteBuffer r3, int r4) throws java.nio.BufferUnderflowException {
            if (r4 < 0) goto L2f
            int r0 = r3.limit()
            int r1 = r3.position()
            int r4 = r4 + r1
            if (r4 < r1) goto L29
            if (r4 > r0) goto L29
            r3.limit(r4)
            java.nio.ByteBuffer r1 = r3.slice()     // Catch: java.lang.Throwable -> L24
            java.nio.ByteOrder r2 = r3.order()     // Catch: java.lang.Throwable -> L24
            r1.order(r2)     // Catch: java.lang.Throwable -> L24
            r3.position(r4)     // Catch: java.lang.Throwable -> L24
            r3.limit(r0)
            return r1
        L24:
            r4 = move-exception
            r3.limit(r0)
            throw r4
        L29:
            java.nio.BufferUnderflowException r3 = new java.nio.BufferUnderflowException
            r3.<init>()
            throw r3
        L2f:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "size: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    public static long getCommentLength(java.nio.channels.FileChannel r11) throws java.io.IOException {
            long r0 = r11.size()
            r2 = 22
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L5a
            long r0 = r0 - r2
            r2 = 65535(0xffff, double:3.23786E-319)
            long r2 = java.lang.Math.min(r0, r2)
            r4 = 0
            r5 = 0
        L14:
            long r6 = (long) r5
            int r8 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r8 > 0) goto L52
            long r6 = r0 - r6
            r8 = 4
            java.nio.ByteBuffer r8 = java.nio.ByteBuffer.allocate(r8)
            r11.position(r6)
            r11.read(r8)
            java.nio.ByteOrder r9 = java.nio.ByteOrder.LITTLE_ENDIAN
            r8.order(r9)
            int r8 = r8.getInt(r4)
            r9 = 101010256(0x6054b50, float:2.506985E-35)
            if (r8 != r9) goto L4f
            r8 = 2
            java.nio.ByteBuffer r8 = java.nio.ByteBuffer.allocate(r8)
            r9 = 20
            long r6 = r6 + r9
            r11.position(r6)
            r11.read(r8)
            java.nio.ByteOrder r6 = java.nio.ByteOrder.LITTLE_ENDIAN
            r8.order(r6)
            short r6 = r8.getShort(r4)
            if (r6 != r5) goto L4f
            long r0 = (long) r6
            return r0
        L4f:
            int r5 = r5 + 1
            goto L14
        L52:
            java.io.IOException r11 = new java.io.IOException
            java.lang.String r0 = "ZIP End of Central Directory (EOCD) record not found"
            r11.<init>(r0)
            throw r11
        L5a:
            java.io.IOException r11 = new java.io.IOException
            java.lang.String r0 = "APK too small for ZIP End of Central Directory (EOCD) record"
            r11.<init>(r0)
            throw r11
    }

    private static java.nio.ByteBuffer sliceFromTo(java.nio.ByteBuffer r3, int r4, int r5) {
            if (r4 < 0) goto L7e
            if (r5 < r4) goto L5f
            int r0 = r3.capacity()
            int r1 = r3.capacity()
            if (r5 > r1) goto L40
            int r0 = r3.limit()
            int r1 = r3.position()
            r2 = 0
            r3.position(r2)     // Catch: java.lang.Throwable -> L35
            r3.limit(r5)     // Catch: java.lang.Throwable -> L35
            r3.position(r4)     // Catch: java.lang.Throwable -> L35
            java.nio.ByteBuffer r4 = r3.slice()     // Catch: java.lang.Throwable -> L35
            java.nio.ByteOrder r5 = r3.order()     // Catch: java.lang.Throwable -> L35
            r4.order(r5)     // Catch: java.lang.Throwable -> L35
            r3.position(r2)
            r3.limit(r0)
            r3.position(r1)
            return r4
        L35:
            r4 = move-exception
            r3.position(r2)
            r3.limit(r0)
            r3.position(r1)
            throw r4
        L40:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "end > capacity: "
            r4.append(r1)
            r4.append(r5)
            java.lang.String r5 = " > "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L5f:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "end < start: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = " < "
            r0.append(r5)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
        L7e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "start: "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r3.<init>(r4)
            throw r3
    }
}
