package com.kwad.sdk.utils;

public final class SystemUtil {
    private static long aJC;
    private static long aJD;
    private static int aJE;
    private static com.kwad.sdk.utils.SystemUtil.LEVEL aJF;

    public enum LEVEL extends java.lang.Enum<com.kwad.sdk.utils.SystemUtil.LEVEL> {
        private static final com.kwad.sdk.utils.SystemUtil.LEVEL[] $VALUES = null;
        public static final com.kwad.sdk.utils.SystemUtil.LEVEL BAD = null;
        public static final com.kwad.sdk.utils.SystemUtil.LEVEL BEST = null;
        public static final com.kwad.sdk.utils.SystemUtil.LEVEL HIGH = null;
        public static final com.kwad.sdk.utils.SystemUtil.LEVEL LOW = null;
        public static final com.kwad.sdk.utils.SystemUtil.LEVEL MIDDLE = null;
        public static final com.kwad.sdk.utils.SystemUtil.LEVEL UN_KNOW = null;
        int value;

        static {
                com.kwad.sdk.utils.SystemUtil$LEVEL r0 = new com.kwad.sdk.utils.SystemUtil$LEVEL
                r1 = 0
                r2 = 5
                java.lang.String r3 = "BEST"
                r0.<init>(r3, r1, r2)
                com.kwad.sdk.utils.SystemUtil.LEVEL.BEST = r0
                com.kwad.sdk.utils.SystemUtil$LEVEL r0 = new com.kwad.sdk.utils.SystemUtil$LEVEL
                r3 = 4
                r4 = 1
                java.lang.String r5 = "HIGH"
                r0.<init>(r5, r4, r3)
                com.kwad.sdk.utils.SystemUtil.LEVEL.HIGH = r0
                com.kwad.sdk.utils.SystemUtil$LEVEL r0 = new com.kwad.sdk.utils.SystemUtil$LEVEL
                r5 = 3
                r6 = 2
                java.lang.String r7 = "MIDDLE"
                r0.<init>(r7, r6, r5)
                com.kwad.sdk.utils.SystemUtil.LEVEL.MIDDLE = r0
                com.kwad.sdk.utils.SystemUtil$LEVEL r0 = new com.kwad.sdk.utils.SystemUtil$LEVEL
                java.lang.String r7 = "LOW"
                r0.<init>(r7, r5, r6)
                com.kwad.sdk.utils.SystemUtil.LEVEL.LOW = r0
                com.kwad.sdk.utils.SystemUtil$LEVEL r0 = new com.kwad.sdk.utils.SystemUtil$LEVEL
                java.lang.String r7 = "BAD"
                r0.<init>(r7, r3, r4)
                com.kwad.sdk.utils.SystemUtil.LEVEL.BAD = r0
                com.kwad.sdk.utils.SystemUtil$LEVEL r0 = new com.kwad.sdk.utils.SystemUtil$LEVEL
                java.lang.String r7 = "UN_KNOW"
                r8 = -1
                r0.<init>(r7, r2, r8)
                com.kwad.sdk.utils.SystemUtil.LEVEL.UN_KNOW = r0
                r7 = 6
                com.kwad.sdk.utils.SystemUtil$LEVEL[] r7 = new com.kwad.sdk.utils.SystemUtil.LEVEL[r7]
                com.kwad.sdk.utils.SystemUtil$LEVEL r8 = com.kwad.sdk.utils.SystemUtil.LEVEL.BEST
                r7[r1] = r8
                com.kwad.sdk.utils.SystemUtil$LEVEL r1 = com.kwad.sdk.utils.SystemUtil.LEVEL.HIGH
                r7[r4] = r1
                com.kwad.sdk.utils.SystemUtil$LEVEL r1 = com.kwad.sdk.utils.SystemUtil.LEVEL.MIDDLE
                r7[r6] = r1
                com.kwad.sdk.utils.SystemUtil$LEVEL r1 = com.kwad.sdk.utils.SystemUtil.LEVEL.LOW
                r7[r5] = r1
                com.kwad.sdk.utils.SystemUtil$LEVEL r1 = com.kwad.sdk.utils.SystemUtil.LEVEL.BAD
                r7[r3] = r1
                r7[r2] = r0
                com.kwad.sdk.utils.SystemUtil.LEVEL.$VALUES = r7
                return
        }

        LEVEL(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.value = r3
                return
        }

        public static com.kwad.sdk.utils.SystemUtil.LEVEL valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.utils.SystemUtil$LEVEL> r0 = com.kwad.sdk.utils.SystemUtil.LEVEL.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.utils.SystemUtil$LEVEL r1 = (com.kwad.sdk.utils.SystemUtil.LEVEL) r1
                return r1
        }

        public static com.kwad.sdk.utils.SystemUtil.LEVEL[] values() {
                com.kwad.sdk.utils.SystemUtil$LEVEL[] r0 = com.kwad.sdk.utils.SystemUtil.LEVEL.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.utils.SystemUtil$LEVEL[] r0 = (com.kwad.sdk.utils.SystemUtil.LEVEL[]) r0
                return r0
        }

        public final int getValue() {
                r1 = this;
                int r0 = r1.value
                return r0
        }
    }

    public static class a {
        public long aJG;
        public long aJH;
        public long aJI;
        public long aJJ;
        public long aJK;
        public int mThreadsCount;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            return
    }

    public static long JE() {
            r0 = 0
            java.io.FileReader r1 = new java.io.FileReader     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L44
            java.lang.String r2 = "/proc/meminfo"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L44
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L44
            r3 = 8192(0x2000, float:1.148E-41)
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L44
        Lf:
            java.lang.String r0 = r2.readLine()     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3b
            if (r0 == 0) goto L35
            java.lang.String r1 = "MemTotal"
            boolean r1 = r0.contains(r1)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3b
            if (r1 == 0) goto Lf
            java.lang.String r1 = "\\s+"
            java.lang.String[] r0 = r0.split(r1)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3b
            r1 = 1
            r0 = r0[r1]     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3b
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3b
            long r0 = r0.longValue()     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L3b
            r3 = 10
            long r0 = r0 << r3
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return r0
        L35:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            goto L47
        L39:
            r0 = move-exception
            goto L40
        L3b:
            r0 = r2
            goto L44
        L3d:
            r1 = move-exception
            r2 = r0
            r0 = r1
        L40:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            throw r0
        L44:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
        L47:
            r0 = 0
            return r0
    }

    public static com.kwad.sdk.utils.SystemUtil.a JF() {
            java.lang.String r0 = "Threads:"
            java.lang.String r1 = "VmRSS:"
            java.lang.String r2 = "VmSize"
            com.kwad.sdk.utils.SystemUtil$a r3 = new com.kwad.sdk.utils.SystemUtil$a
            r3.<init>()
            r4 = 0
            java.io.RandomAccessFile r5 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L7d java.io.IOException -> L82
            java.lang.String r6 = "/proc/self/status"
            java.lang.String r7 = "r"
            r5.<init>(r6, r7)     // Catch: java.lang.Throwable -> L7d java.io.IOException -> L82
        L15:
            java.lang.String r4 = r5.readLine()     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            if (r4 == 0) goto L74
            boolean r6 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            if (r6 != 0) goto L15
            boolean r6 = r4.startsWith(r2)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            java.lang.String r7 = "kB"
            if (r6 == 0) goto L40
            boolean r6 = r4.contains(r7)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            if (r6 == 0) goto L40
            java.lang.String r4 = av(r4, r2)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            if (r4 == 0) goto L15
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            long r6 = r4.longValue()     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            r3.aJH = r6     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            goto L15
        L40:
            boolean r6 = r4.startsWith(r1)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            if (r6 == 0) goto L5d
            boolean r6 = r4.contains(r7)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            if (r6 == 0) goto L5d
            java.lang.String r4 = av(r4, r1)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            if (r4 == 0) goto L15
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            long r6 = r4.longValue()     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            r3.aJI = r6     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            goto L15
        L5d:
            boolean r6 = r4.startsWith(r0)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            if (r6 == 0) goto L15
            java.lang.String r4 = av(r4, r0)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            if (r4 == 0) goto L15
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            r3.mThreadsCount = r4     // Catch: java.lang.Throwable -> L78 java.io.IOException -> L7b
            goto L15
        L74:
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
            goto L85
        L78:
            r0 = move-exception
            r4 = r5
            goto L7e
        L7b:
            r4 = r5
            goto L82
        L7d:
            r0 = move-exception
        L7e:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            throw r0
        L82:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
        L85:
            return r3
    }

    private static java.lang.String av(java.lang.String r4, java.lang.String r5) {
            int r5 = r5.length()
            r0 = -1
            r1 = r0
        L6:
            int r2 = r4.length()
            if (r5 >= r2) goto L22
            char r2 = r4.charAt(r5)
            r3 = 48
            if (r2 < r3) goto L1c
            r3 = 57
            if (r2 > r3) goto L1c
            if (r1 != r0) goto L1f
            r1 = r5
            goto L1f
        L1c:
            if (r1 == r0) goto L1f
            goto L23
        L1f:
            int r5 = r5 + 1
            goto L6
        L22:
            r5 = r0
        L23:
            if (r1 != r0) goto L27
            r4 = 0
            return r4
        L27:
            if (r5 != r0) goto L2e
            java.lang.String r4 = r4.substring(r1)
            return r4
        L2e:
            java.lang.String r4 = r4.substring(r1, r5)
            return r4
    }

    public static boolean b(android.content.Context r5, java.lang.String... r6) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = r0
        L5:
            if (r1 > 0) goto L1c
            r2 = r6[r0]     // Catch: java.lang.Exception -> L1c
            int r3 = android.os.Process.myPid()     // Catch: java.lang.Exception -> L1c
            int r4 = android.os.Process.myUid()     // Catch: java.lang.Exception -> L1c
            int r2 = r5.checkPermission(r2, r3, r4)     // Catch: java.lang.Exception -> L1c
            r3 = -1
            if (r2 != r3) goto L19
            return r0
        L19:
            int r1 = r1 + 1
            goto L5
        L1c:
            r5 = 1
            return r5
    }

    public static boolean cX(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 29
            if (r0 < r1) goto L8
            r2 = 0
            return r2
        L8:
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            boolean r2 = b(r2, r0)
            return r2
    }

    public static long cY(android.content.Context r2) {
            java.lang.String r0 = "activity"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.ActivityManager r2 = (android.app.ActivityManager) r2
            android.app.ActivityManager$MemoryInfo r0 = new android.app.ActivityManager$MemoryInfo
            r0.<init>()
            r2.getMemoryInfo(r0)
            long r0 = r0.availMem
            return r0
    }

    public static void checkUiThread() {
            return
    }

    public static boolean de(int r1) {
            int r0 = getApiLevel()
            if (r0 < r1) goto L8
            r1 = 1
            return r1
        L8:
            r1 = 0
            return r1
    }

    private static int getApiLevel() {
            int r0 = android.os.Build.VERSION.SDK_INT
            return r0
    }

    public static java.lang.String getProcessName(android.content.Context r0) {
            java.lang.String r0 = com.kwad.sdk.utils.ap.getProcessName(r0)
            return r0
    }

    public static boolean isInMainProcess(android.content.Context r0) {
            boolean r0 = com.kwad.sdk.utils.ap.isInMainProcess(r0)
            return r0
    }
}
