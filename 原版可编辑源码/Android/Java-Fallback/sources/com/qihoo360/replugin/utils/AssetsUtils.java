package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class AssetsUtils {
    private static final java.lang.String TAG = "ws001";

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class 1 {
        static final int[] $SwitchMap$com$qihoo360$replugin$utils$AssetsUtils$QuickExtractResult = null;

        static {
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult[] r0 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.qihoo360.replugin.utils.AssetsUtils.1.$SwitchMap$com$qihoo360$replugin$utils$AssetsUtils$QuickExtractResult = r0
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r1 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.FAIL     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.qihoo360.replugin.utils.AssetsUtils.1.$SwitchMap$com$qihoo360$replugin$utils$AssetsUtils$QuickExtractResult     // Catch: java.lang.NoSuchFieldError -> L1d
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r1 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.EXISTED     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public enum QuickExtractResult extends java.lang.Enum<com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult> {
        private static final com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult[] $VALUES = null;
        public static final com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult EXISTED = null;
        public static final com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult FAIL = null;
        public static final com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult SUCCESS = null;

        static {
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r0 = new com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult
                r1 = 0
                java.lang.String r2 = "SUCCESS"
                r0.<init>(r2, r1)
                com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.SUCCESS = r0
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r0 = new com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult
                r2 = 1
                java.lang.String r3 = "FAIL"
                r0.<init>(r3, r2)
                com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.FAIL = r0
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r0 = new com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult
                r3 = 2
                java.lang.String r4 = "EXISTED"
                r0.<init>(r4, r3)
                com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.EXISTED = r0
                r4 = 3
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult[] r4 = new com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult[r4]
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r5 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.SUCCESS
                r4[r1] = r5
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r1 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.FAIL
                r4[r2] = r1
                r4[r3] = r0
                com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.$VALUES = r4
                return
        }

        QuickExtractResult(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult valueOf(java.lang.String r1) {
                java.lang.Class<com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult> r0 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r1 = (com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult) r1
                return r1
        }

        public static com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult[] values() {
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult[] r0 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.$VALUES
                java.lang.Object r0 = r0.clone()
                com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult[] r0 = (com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult[]) r0
                return r0
        }
    }

    public AssetsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final boolean extractTo(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r4 = "/"
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            java.io.InputStream r2 = com.qihoo360.replugin.utils.FileUtils.openInputStreamFromAssetsQuietly(r2, r3)
            r4 = 0
            if (r2 != 0) goto L40
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L3f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "extractTo: Fail to open "
            r2.append(r5)
            r2.append(r3)
            java.lang.String r3 = "from Assets"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.e(r3, r2)
        L3f:
            return r4
        L40:
            com.qihoo360.replugin.utils.FileUtils.copyInputStreamToFile(r2, r0)     // Catch: java.lang.Throwable -> L48 java.io.IOException -> L4a
            r3 = 1
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r3
        L48:
            r3 = move-exception
            goto L52
        L4a:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L48
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r4
        L52:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            throw r3
    }

    public static final com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult quickExtractTo(android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            java.io.File r7 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r1 = "/"
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0)
            java.io.File r0 = r7.getParentFile()
            boolean r1 = r0.exists()
            java.lang.String r2 = "ws001"
            if (r1 != 0) goto L46
            boolean r1 = r0.mkdirs()
            if (r1 != 0) goto L46
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "can't create: "
            r3.append(r4)
            java.lang.String r4 = r0.getPath()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            android.util.Log.e(r2, r3)
            com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r3 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.FAIL
            return r3
        L46:
            boolean r1 = r0.exists()
            if (r1 == 0) goto La6
            boolean r1 = r0.isDirectory()
            if (r1 != 0) goto L53
            goto La6
        L53:
            boolean r0 = r7.exists()
            if (r0 == 0) goto L5c
            com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r3 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.EXISTED
            return r3
        L5c:
            boolean r3 = extractTo(r3, r4, r5, r6)
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L86
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "create new: "
            r4.append(r5)
            java.lang.String r5 = r7.getPath()
            r4.append(r5)
            if (r3 == 0) goto L7a
            java.lang.String r5 = " ok"
            goto L7c
        L7a:
            java.lang.String r5 = " error"
        L7c:
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            android.util.Log.d(r2, r4)
        L86:
            if (r3 != 0) goto La3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "a u e rc f "
            r3.append(r4)
            java.lang.String r4 = r7.getPath()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            android.util.Log.e(r2, r3)
            com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r3 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.FAIL
            return r3
        La3:
            com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r3 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.SUCCESS
            return r3
        La6:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "can't create dir: "
            r3.append(r4)
            java.lang.String r4 = r0.getPath()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            android.util.Log.e(r2, r3)
            com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r3 = com.qihoo360.replugin.utils.AssetsUtils.QuickExtractResult.FAIL
            return r3
    }

    public static final boolean quickExtractTo(android.content.Context r1, com.qihoo360.replugin.model.PluginInfo r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = r2.getPath()
            com.qihoo360.replugin.utils.AssetsUtils$QuickExtractResult r1 = quickExtractTo(r1, r0, r3, r4, r5)
            int[] r5 = com.qihoo360.replugin.utils.AssetsUtils.1.$SwitchMap$com$qihoo360$replugin$utils$AssetsUtils$QuickExtractResult
            int r1 = r1.ordinal()
            r1 = r5[r1]
            r5 = 1
            if (r1 == r5) goto L59
            r0 = 2
            if (r1 == r0) goto L58
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "/"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            r1.<init>(r3)
            java.io.File r2 = r2.getNativeLibsDir()
            java.lang.String r3 = r1.getAbsolutePath()
            boolean r2 = com.qihoo360.loader2.PluginNativeLibsHelper.install(r3, r2)
            if (r2 != 0) goto L58
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "a u e rc f so "
            r3.append(r4)
            java.lang.String r1 = r1.getPath()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r3, r1)
            return r2
        L58:
            return r5
        L59:
            r1 = 0
            return r1
    }
}
