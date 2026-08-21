package com.ss.android.ttmd5;

public class TTMd5 {
    private static final int DEFAULT_SAMPLE_COUNT = 9;
    private static final int DEFAULT_SAMPLE_SIZE = 8192;
    private static final char[] HEX_CHARS = null;
    private static final java.lang.String PROTOCOL = "ttmd5";
    private static final java.lang.String TAG = "TTMd5";
    private static final int VERSION_MAIN = 1;
    private static final int VERSION_SUB = 1;

    static class 1 {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface CHECK_MD5_STATUS {
        public static final int FILE_NOT_EXIST = 5;
        public static final int GET_FILE_MD5_ERROR = 6;
        public static final int MD5_EMPTY = 2;
        public static final int MD5_MATCH = 0;
        public static final int MD5_NOT_MATCH = 1;
        public static final int TTMD5_TAG_PARSER_ERROR = 4;
        public static final int TTMD5_VERSION_NOT_SUPPORT = 3;
        public static final int UNKNOWN_ERROR = 99;
    }

    private static class TTMd5Args {
        private java.lang.String realMd5;
        private int sampleCount;
        private long sampleSize;
        private int versionMain;
        private int versionSub;

        private TTMd5Args() {
                r0 = this;
                r0.<init>()
                return
        }

        TTMd5Args(com.ss.android.ttmd5.TTMd5.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static int access$000(com.ss.android.ttmd5.TTMd5.TTMd5Args r0) {
                int r0 = r0.versionMain
                return r0
        }

        static int access$002(com.ss.android.ttmd5.TTMd5.TTMd5Args r0, int r1) {
                r0.versionMain = r1
                return r1
        }

        static int access$100(com.ss.android.ttmd5.TTMd5.TTMd5Args r0) {
                int r0 = r0.sampleCount
                return r0
        }

        static int access$102(com.ss.android.ttmd5.TTMd5.TTMd5Args r0, int r1) {
                r0.sampleCount = r1
                return r1
        }

        static long access$200(com.ss.android.ttmd5.TTMd5.TTMd5Args r2) {
                long r0 = r2.sampleSize
                return r0
        }

        static long access$202(com.ss.android.ttmd5.TTMd5.TTMd5Args r0, long r1) {
                r0.sampleSize = r1
                return r1
        }

        static int access$300(com.ss.android.ttmd5.TTMd5.TTMd5Args r0) {
                int r0 = r0.versionSub
                return r0
        }

        static int access$302(com.ss.android.ttmd5.TTMd5.TTMd5Args r0, int r1) {
                r0.versionSub = r1
                return r1
        }

        static java.lang.String access$400(com.ss.android.ttmd5.TTMd5.TTMd5Args r0) {
                java.lang.String r0 = r0.realMd5
                return r0
        }

        static java.lang.String access$402(com.ss.android.ttmd5.TTMd5.TTMd5Args r0, java.lang.String r1) {
                r0.realMd5 = r1
                return r1
        }
    }

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.ss.android.ttmd5.TTMd5.HEX_CHARS = r0
            return
    }

    public TTMd5() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String _ttmd5(com.ss.android.ttmd5.IRandomAccess r21, int r22, long r23) throws java.lang.Exception {
            r0 = r22
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)
            if (r1 != 0) goto Ld
            java.lang.String r0 = ""
            return r0
        Ld:
            long r9 = r21.length()     // Catch: java.lang.Throwable -> L9a
            r11 = 1
            if (r0 <= 0) goto L2b
            r2 = 0
            int r2 = (r23 > r2 ? 1 : (r23 == r2 ? 0 : -1))
            if (r2 <= 0) goto L2b
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L9a
            long r2 = r2 * r23
            r4 = 8
            long r4 = r4 * r9
            r6 = 10
            long r4 = r4 / r6
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L28
            goto L2b
        L28:
            r12 = r23
            goto L2d
        L2b:
            r12 = r9
            r0 = r11
        L2d:
            r2 = 8192(0x2000, float:1.148E-41)
            byte[] r14 = new byte[r2]     // Catch: java.lang.Throwable -> L9a
            r15 = 0
            r2 = r21
            r3 = r1
            r4 = r14
            r5 = r15
            r7 = r12
            updateSample(r2, r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L9a
            r2 = 2
            if (r0 <= r2) goto L60
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L9a
            long r2 = r2 * r12
            long r2 = r9 - r2
            int r7 = r0 + (-1)
            long r4 = (long) r7     // Catch: java.lang.Throwable -> L9a
            long r17 = r2 / r4
            r8 = r11
        L49:
            if (r8 >= r7) goto L60
            long r2 = r12 + r17
            long r15 = r15 + r2
            r2 = r21
            r3 = r1
            r4 = r14
            r5 = r15
            r19 = r7
            r20 = r8
            r7 = r12
            updateSample(r2, r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L9a
            int r8 = r20 + 1
            r7 = r19
            goto L49
        L60:
            if (r0 <= r11) goto L6c
            long r5 = r9 - r12
            r2 = r21
            r3 = r1
            r4 = r14
            r7 = r12
            updateSample(r2, r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L9a
        L6c:
            byte[] r1 = r1.digest()     // Catch: java.lang.Throwable -> L9a
            java.lang.String r1 = toHexString(r1)     // Catch: java.lang.Throwable -> L9a
            if (r0 != r11) goto L7e
            int r2 = (r12 > r9 ? 1 : (r12 == r9 ? 0 : -1))
            if (r2 != 0) goto L7e
            r21.close()     // Catch: java.lang.Throwable -> L7d
        L7d:
            return r1
        L7e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9a
            r2.<init>()     // Catch: java.lang.Throwable -> L9a
            java.lang.String r0 = generateTTMd5Tag(r0, r12)     // Catch: java.lang.Throwable -> L9a
            r2.append(r0)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r0 = ";"
            r2.append(r0)     // Catch: java.lang.Throwable -> L9a
            r2.append(r1)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L9a
            r21.close()     // Catch: java.lang.Throwable -> L99
        L99:
            return r0
        L9a:
            r0 = move-exception
            r21.close()     // Catch: java.lang.Throwable -> L9e
        L9e:
            throw r0
    }

    private static java.lang.String _ttmd5(java.io.File r1, int r2, long r3) throws java.lang.Exception {
            com.ss.android.ttmd5.FileRandomAccess r0 = new com.ss.android.ttmd5.FileRandomAccess
            r0.<init>(r1)
            java.lang.String r1 = _ttmd5(r0, r2, r3)
            return r1
    }

    public static int checkMd5(java.io.File r4, java.io.File r5) {
            if (r4 == 0) goto L31
            if (r5 == 0) goto L31
            boolean r0 = r4.exists()     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L31
            boolean r0 = r5.exists()     // Catch: java.lang.Throwable -> L2a
            if (r0 != 0) goto L11
            goto L31
        L11:
            r0 = 0
            if (r4 != r5) goto L15
            return r0
        L15:
            r1 = 8192(0x2000, double:4.0474E-320)
            r3 = 9
            java.lang.String r4 = _ttmd5(r4, r3, r1)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r5 = _ttmd5(r5, r3, r1)     // Catch: java.lang.Throwable -> L2a
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L2a
            if (r4 == 0) goto L28
            return r0
        L28:
            r4 = 1
            return r4
        L2a:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 99
            return r4
        L31:
            r4 = 5
            return r4
    }

    public static int checkMd5(java.lang.String r1, java.io.File r2) {
            r0 = 0
            int r1 = checkMd5(r1, r2, r0)
            return r1
    }

    public static int checkMd5(java.lang.String r6, java.io.File r7, com.ss.android.ttmd5.IRandomAccess r8) {
            if (r6 == 0) goto Lab
            int r0 = r6.length()
            if (r0 != 0) goto La
            goto Lab
        La:
            r0 = 5
            if (r8 == 0) goto L1b
            long r1 = r8.length()     // Catch: java.lang.Throwable -> La7
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L25
            r8.close()     // Catch: java.lang.Throwable -> L1a
        L1a:
            return r0
        L1b:
            if (r7 == 0) goto Laa
            boolean r1 = r7.exists()     // Catch: java.lang.Throwable -> La7
            if (r1 != 0) goto L25
            goto Laa
        L25:
            r0 = -1
            r1 = -1
            com.ss.android.ttmd5.TTMd5$TTMd5Args r3 = parserTTMd5Args(r6)     // Catch: java.lang.Throwable -> La5
            r4 = 1
            if (r3 == 0) goto L3f
            int r0 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$000(r3)     // Catch: java.lang.Throwable -> La7
            if (r0 <= r4) goto L37
            r6 = 3
            return r6
        L37:
            int r0 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$100(r3)     // Catch: java.lang.Throwable -> La7
            long r1 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$200(r3)     // Catch: java.lang.Throwable -> La7
        L3f:
            r5 = 0
            if (r8 == 0) goto L47
            java.lang.String r7 = _ttmd5(r8, r0, r1)     // Catch: java.lang.Throwable -> L4c
            goto L51
        L47:
            java.lang.String r7 = _ttmd5(r7, r0, r1)     // Catch: java.lang.Throwable -> L4c
            goto L51
        L4c:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> La7
            r7 = r5
        L51:
            if (r7 == 0) goto La3
            int r8 = r7.length()     // Catch: java.lang.Throwable -> La7
            if (r8 != 0) goto L5a
            goto La3
        L5a:
            r8 = 0
            if (r3 == 0) goto L9b
            int r0 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$000(r3)     // Catch: java.lang.Throwable -> La7
            if (r0 != r4) goto L6a
            int r0 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$300(r3)     // Catch: java.lang.Throwable -> La7
            if (r0 != r4) goto L6a
            goto L9b
        L6a:
            java.lang.String r6 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$400(r3)     // Catch: java.lang.Throwable -> La7
            if (r6 == 0) goto La2
            com.ss.android.ttmd5.TTMd5$TTMd5Args r5 = parserTTMd5Args(r7)     // Catch: java.lang.Throwable -> L74
        L74:
            if (r5 == 0) goto La2
            int r6 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$100(r3)     // Catch: java.lang.Throwable -> La7
            int r7 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$100(r5)     // Catch: java.lang.Throwable -> La7
            if (r6 != r7) goto La2
            long r6 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$200(r3)     // Catch: java.lang.Throwable -> La7
            long r0 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$200(r5)     // Catch: java.lang.Throwable -> La7
            int r6 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r6 != 0) goto La2
            java.lang.String r6 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$400(r3)     // Catch: java.lang.Throwable -> La7
            java.lang.String r7 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$400(r5)     // Catch: java.lang.Throwable -> La7
            boolean r6 = r6.equals(r7)     // Catch: java.lang.Throwable -> La7
            if (r6 == 0) goto La2
            return r8
        L9b:
            boolean r6 = r7.equals(r6)     // Catch: java.lang.Throwable -> La7
            if (r6 == 0) goto La2
            return r8
        La2:
            return r4
        La3:
            r6 = 6
            return r6
        La5:
            r6 = 4
            return r6
        La7:
            r6 = 99
            return r6
        Laa:
            return r0
        Lab:
            r6 = 2
            return r6
    }

    private static long decryptNum(java.lang.String r4) throws java.lang.RuntimeException {
            r0 = 16
            long r0 = java.lang.Long.parseLong(r4, r0)     // Catch: java.lang.Throwable -> Lc
            r2 = 31
            long r0 = r0 - r2
            r4 = 4
            long r0 = r0 >> r4
            return r0
        Lc:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ttmd5 decryptNum error, num = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private static java.lang.String encryptionNum(long r2) {
            r0 = 4
            long r2 = r2 << r0
            r0 = 31
            long r2 = r2 + r0
            java.lang.String r2 = java.lang.Long.toHexString(r2)
            return r2
    }

    private static java.lang.String generateTTMd5Tag(int r3, long r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ttmd5:1:1:"
            r0.append(r1)
            long r1 = (long) r3
            java.lang.String r3 = encryptionNum(r1)
            r0.append(r3)
            java.lang.String r3 = "g"
            r0.append(r3)
            java.lang.String r3 = encryptionNum(r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.lang.String md5(java.io.File r3) {
            r0 = -1
            r1 = -1
            java.lang.String r3 = ttmd5(r3, r0, r1)
            return r3
    }

    private static com.ss.android.ttmd5.TTMd5.TTMd5Args parserTTMd5Args(java.lang.String r6) throws java.lang.Exception {
            java.lang.String r0 = "ttmd5:"
            boolean r0 = r6.startsWith(r0)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            java.lang.String r0 = ";"
            java.lang.String[] r6 = r6.split(r0)
            r0 = 0
            r2 = r6[r0]
            java.lang.String r3 = ":"
            java.lang.String[] r2 = r2.split(r3)
            com.ss.android.ttmd5.TTMd5$TTMd5Args r3 = new com.ss.android.ttmd5.TTMd5$TTMd5Args
            r3.<init>(r1)
            r1 = 1
            r4 = r2[r1]
            int r4 = java.lang.Integer.parseInt(r4)
            com.ss.android.ttmd5.TTMd5.TTMd5Args.access$002(r3, r4)
            int r4 = com.ss.android.ttmd5.TTMd5.TTMd5Args.access$000(r3)
            if (r4 <= r1) goto L2f
            return r3
        L2f:
            r4 = 2
            r4 = r2[r4]
            int r4 = java.lang.Integer.parseInt(r4)
            com.ss.android.ttmd5.TTMd5.TTMd5Args.access$302(r3, r4)
            r4 = 3
            r2 = r2[r4]
            java.lang.String r4 = "g"
            java.lang.String[] r2 = r2.split(r4)
            r0 = r2[r0]
            long r4 = decryptNum(r0)
            int r0 = (int) r4
            com.ss.android.ttmd5.TTMd5.TTMd5Args.access$102(r3, r0)
            r0 = r2[r1]
            long r4 = decryptNum(r0)
            com.ss.android.ttmd5.TTMd5.TTMd5Args.access$202(r3, r4)
            r6 = r6[r1]
            com.ss.android.ttmd5.TTMd5.TTMd5Args.access$402(r3, r6)
            return r3
    }

    private static java.lang.String toHexString(byte[] r10) {
            if (r10 == 0) goto L2d
            int r0 = r10.length
            int r1 = r0 * 2
            char[] r2 = new char[r1]
            r3 = 0
            r4 = r3
            r5 = r4
        La:
            if (r4 >= r0) goto L27
            int r6 = r4 + 0
            r6 = r10[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r7 = r5 + 1
            char[] r8 = com.ss.android.ttmd5.TTMd5.HEX_CHARS
            int r9 = r6 >> 4
            char r9 = r8[r9]
            r2[r5] = r9
            int r5 = r7 + 1
            r6 = r6 & 15
            char r6 = r8[r6]
            r2[r7] = r6
            int r4 = r4 + 1
            goto La
        L27:
            java.lang.String r10 = new java.lang.String
            r10.<init>(r2, r3, r1)
            return r10
        L2d:
            java.lang.NullPointerException r10 = new java.lang.NullPointerException
            java.lang.String r0 = "bytes is null"
            r10.<init>(r0)
            throw r10
    }

    public static java.lang.String ttmd5(com.ss.android.ttmd5.IRandomAccess r3) {
            r0 = 9
            r1 = 8192(0x2000, double:4.0474E-320)
            java.lang.String r3 = ttmd5(r3, r0, r1)
            return r3
    }

    public static java.lang.String ttmd5(com.ss.android.ttmd5.IRandomAccess r2, int r3) {
            r0 = 8192(0x2000, double:4.0474E-320)
            java.lang.String r2 = ttmd5(r2, r3, r0)
            return r2
    }

    public static java.lang.String ttmd5(com.ss.android.ttmd5.IRandomAccess r1, int r2, long r3) {
            java.lang.String r0 = ""
            if (r1 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = _ttmd5(r1, r2, r3)     // Catch: java.lang.Throwable -> La
            return r1
        La:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static java.lang.String ttmd5(java.io.File r3) {
            r0 = 9
            r1 = 8192(0x2000, double:4.0474E-320)
            java.lang.String r3 = ttmd5(r3, r0, r1)
            return r3
    }

    public static java.lang.String ttmd5(java.io.File r2, int r3) {
            r0 = 8192(0x2000, double:4.0474E-320)
            java.lang.String r2 = ttmd5(r2, r3, r0)
            return r2
    }

    public static java.lang.String ttmd5(java.io.File r2, int r3, long r4) {
            java.lang.String r0 = ""
            if (r2 == 0) goto L12
            boolean r1 = r2.exists()     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Lb
            goto L12
        Lb:
            java.lang.String r2 = _ttmd5(r2, r3, r4)     // Catch: java.lang.Throwable -> L10
            return r2
        L10:
            r2 = move-exception
            goto L13
        L12:
            return r0
        L13:
            r2.printStackTrace()
            return r0
    }

    private static void updateSample(com.ss.android.ttmd5.IRandomAccess r4, java.security.MessageDigest r5, byte[] r6, long r7, long r9) throws java.io.IOException {
            r4.seek(r7, r9)
            r7 = 0
        L5:
            int r0 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r0 >= 0) goto L46
            long r0 = r9 - r7
            int r2 = r6.length
            long r2 = (long) r2
            long r0 = java.lang.Math.min(r0, r2)
            int r0 = (int) r0
            r1 = 0
            int r0 = r4.read(r6, r1, r0)
            if (r0 <= 0) goto L1f
            r5.update(r6, r1, r0)
            long r0 = (long) r0
            long r7 = r7 + r0
            goto L5
        L1f:
            java.io.IOException r4 = new java.io.IOException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "updateSample unexpected readCount <= 0, readCount = "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = ", readTotalCount = "
            r5.append(r6)
            r5.append(r7)
            java.lang.String r6 = ", sampleSize = "
            r5.append(r6)
            r5.append(r9)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L46:
            return
    }
}
