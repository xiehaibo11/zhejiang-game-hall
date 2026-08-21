package com.ss.android.socialbase.downloader.utils;

public class DownloadUtils {
    public static final java.lang.String ACCEPT_RANGES = "Accept-Ranges";
    public static final java.lang.String CACHE_CONTROL = "Cache-Control";
    public static final int CHUNKED_CONTENT_LENGTH = -1;
    public static final java.lang.String CONTENT_DISPOSITION = "Content-Disposition";
    private static java.util.regex.Pattern CONTENT_DISPOSITION_NON_QUOTED_PATTERN = null;
    private static java.util.regex.Pattern CONTENT_DISPOSITION_QUOTED_PATTERN = null;
    public static final java.lang.String CONTENT_LENGTH = "Content-Length";
    public static final java.lang.String CONTENT_RANGE = "Content-Range";
    private static final java.util.regex.Pattern CONTENT_RANGE_RIGHT_VALUE = null;
    public static final java.lang.String CONTENT_TYPE = "Content-Type";
    public static final int DEFAULT_MIN_TIME_INTERVAL = 1000;
    public static final java.lang.String ETAG = "Etag";
    private static final java.lang.String EXTERNAL_STORAGE_PERMISSION = "android.permission.WRITE_EXTERNAL_STORAGE";
    private static final long FILE_COPY_BUFFER_SIZE = 31457280;
    public static final java.lang.String HEADER_TAG_DOWNLOAD_CACHE = "download-tc21-1-15";
    private static final char[] HEX_CHARS = null;
    public static final java.lang.String IF_MODIFIED_SINCE = "if-modified-since";
    public static final java.lang.String LAST_MODIFIED = "last-modified";
    public static final java.lang.String LAST_MODIFIED_CASE = "Last-Modified";
    private static final long ONE_KB = 1024;
    private static final long ONE_MB = 1048576;
    private static final java.lang.String TAG = null;
    public static final java.lang.String TRANSFER_ENCODING = "Transfer-Encoding";
    public static final java.lang.String VALUE_CHUNKED = "chunked";
    public static final java.lang.String X_CACHE = "X-Cache";
    private static android.net.ConnectivityManager connectivityManager;
    private static java.lang.String sCurProcessName;
    private static java.lang.Boolean sIsDownloaderProcess;
    private static java.lang.Boolean sIsMainProcess;
    private static volatile android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback>> saveTempFileListeners;
    private static volatile android.util.SparseArray<java.lang.Boolean> saveTempFileStatusMap;

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.utils.DownloadUtils> r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG = r0
            java.lang.String r0 = ".*\\d+ *- *(\\d+) */ *\\d+"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.ss.android.socialbase.downloader.utils.DownloadUtils.CONTENT_RANGE_RIGHT_VALUE = r0
            r0 = 0
            com.ss.android.socialbase.downloader.utils.DownloadUtils.sCurProcessName = r0
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileStatusMap = r1
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileListeners = r1
            r1 = 16
            char[] r1 = new char[r1]
            r1 = {x0030: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.ss.android.socialbase.downloader.utils.DownloadUtils.HEX_CHARS = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.CONTENT_DISPOSITION_QUOTED_PATTERN = r0
            com.ss.android.socialbase.downloader.utils.DownloadUtils.CONTENT_DISPOSITION_NON_QUOTED_PATTERN = r0
            return
    }

    public DownloadUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> add0_0RangeHeader(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r2, java.lang.String r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r2 == 0) goto L23
            int r1 = r2.size()
            if (r1 <= 0) goto L23
            java.util.Iterator r2 = r2.iterator()
        L11:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r2.next()
            com.ss.android.socialbase.downloader.model.HttpHeader r1 = (com.ss.android.socialbase.downloader.model.HttpHeader) r1
            if (r1 == 0) goto L11
            r0.add(r1)
            goto L11
        L23:
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L33
            com.ss.android.socialbase.downloader.model.HttpHeader r2 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r1 = "If-Match"
            r2.<init>(r1, r3)
            r0.add(r2)
        L33:
            com.ss.android.socialbase.downloader.model.HttpHeader r2 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r3 = "Accept-Encoding"
            java.lang.String r1 = "identity"
            r2.<init>(r3, r1)
            r0.add(r2)
            com.ss.android.socialbase.downloader.model.HttpHeader r2 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r3 = "bytes=0-0"
            java.lang.String r1 = "Range"
            r2.<init>(r1, r3)
            r0.add(r2)
            return r0
    }

    public static java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> addRangeHeader(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r3, java.lang.String r4, long r5, long r7) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r3 == 0) goto L23
            int r1 = r3.size()
            if (r1 <= 0) goto L23
            java.util.Iterator r3 = r3.iterator()
        L11:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r3.next()
            com.ss.android.socialbase.downloader.model.HttpHeader r1 = (com.ss.android.socialbase.downloader.model.HttpHeader) r1
            if (r1 == 0) goto L11
            r0.add(r1)
            goto L11
        L23:
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 != 0) goto L33
            com.ss.android.socialbase.downloader.model.HttpHeader r3 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r1 = "If-Match"
            r3.<init>(r1, r4)
            r0.add(r3)
        L33:
            com.ss.android.socialbase.downloader.model.HttpHeader r3 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r4 = "Accept-Encoding"
            java.lang.String r1 = "identity"
            r3.<init>(r4, r1)
            r0.add(r3)
            r3 = 0
            int r3 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            r4 = 1
            r1 = 0
            if (r3 > 0) goto L56
            java.lang.Object[] r3 = new java.lang.Object[r4]
            java.lang.String r4 = java.lang.String.valueOf(r5)
            r3[r1] = r4
            java.lang.String r4 = "bytes=%s-"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            goto L6b
        L56:
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r2 = java.lang.String.valueOf(r5)
            r3[r1] = r2
            java.lang.String r1 = java.lang.String.valueOf(r7)
            r3[r4] = r1
            java.lang.String r4 = "bytes=%s-%s"
            java.lang.String r3 = java.lang.String.format(r4, r3)
        L6b:
            com.ss.android.socialbase.downloader.model.HttpHeader r4 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r1 = "Range"
            r4.<init>(r1, r3)
            r0.add(r4)
            java.lang.String r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " range CurrentOffset:"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = " EndOffset:"
            r1.append(r5)
            r1.append(r7)
            java.lang.String r5 = ", range = "
            r1.append(r5)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r4, r3)
            return r0
    }

    public static java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> addRangeHeader(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r6, java.lang.String r7, com.ss.android.socialbase.downloader.model.DownloadChunk r8) {
            long r2 = r8.getCurOffset()
            long r4 = r8.getEndOffset()
            r0 = r6
            r1 = r7
            java.util.List r6 = addRangeHeader(r0, r1, r2, r4)
            return r6
    }

    public static void addTTNetProtectTimeout(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r4, com.ss.android.socialbase.downloader.model.DownloadInfo r5) {
            long r0 = r5.getTtnetProtectTimeout()
            r2 = 300(0x12c, double:1.48E-321)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L18
            com.ss.android.socialbase.downloader.model.HttpHeader r5 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "extra_ttnet_protect_timeout"
            r5.<init>(r1, r0)
            r4.add(r5)
        L18:
            return
    }

    public static void addThrottleNetSpeed(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r4, com.ss.android.socialbase.downloader.model.DownloadInfo r5) {
            long r0 = r5.getThrottleNetSpeed()
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L18
            com.ss.android.socialbase.downloader.model.HttpHeader r5 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "extra_throttle_net_speed"
            r5.<init>(r1, r0)
            r4.add(r5)
        L18:
            return
    }

    public static double byteToMb(long r2) {
            double r2 = (double) r2
            r0 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r2 = r2 / r0
            return r2
    }

    public static boolean cacheExpired(com.ss.android.socialbase.downloader.model.DownloadInfo r7) {
            boolean r0 = r7.isDeleteCacheIfCheckFailed()
            java.lang.String r1 = " expired="
            r2 = 0
            if (r0 != 0) goto L1b
            java.lang.String r0 = r7.getLastModified()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.String r3 = "dcache::last modify is emtpy, so just return cache"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r3)
            goto L4c
        L1b:
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "dcache::curt="
            r3.append(r4)
            long r4 = java.lang.System.currentTimeMillis()
            r3.append(r4)
            r3.append(r1)
            long r4 = r7.getCacheExpiredTime()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r3)
            long r3 = java.lang.System.currentTimeMillis()
            long r5 = r7.getCacheExpiredTime()
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L4c
            r2 = 1
        L4c:
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "cacheExpired::dcache::name="
            r3.append(r4)
            java.lang.String r7 = r7.getName()
            r3.append(r7)
            r3.append(r1)
            r3.append(r2)
            java.lang.String r7 = r3.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r7)
            return r2
    }

    public static boolean canAcceptPartial(int r4, java.lang.String r5) {
            r0 = 16777216(0x1000000, float:2.3509887E-38)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)
            r1 = 206(0xce, float:2.89E-43)
            r2 = 0
            r3 = 1
            if (r0 == 0) goto L12
            if (r4 == r1) goto L10
            if (r4 != r3) goto L11
        L10:
            r2 = r3
        L11:
            return r2
        L12:
            r0 = 400(0x190, float:5.6E-43)
            if (r4 < r0) goto L17
            return r2
        L17:
            if (r4 == r1) goto L23
            if (r4 == r3) goto L23
            java.lang.String r4 = "bytes"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L24
        L23:
            r2 = r3
        L24:
            return r2
    }

    public static boolean canChunkDowngradeRetry(com.ss.android.socialbase.downloader.exception.BaseException r5, com.ss.android.socialbase.downloader.model.DownloadInfo r6) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            int r5 = r5.getErrorCode()
            r1 = 1000(0x3e8, float:1.401E-42)
            r2 = 1
            if (r5 == r1) goto L49
            r1 = 1032(0x408, float:1.446E-42)
            if (r5 == r1) goto L49
            r1 = 1033(0x409, float:1.448E-42)
            if (r5 == r1) goto L49
            r1 = 1034(0x40a, float:1.449E-42)
            if (r5 == r1) goto L49
            r1 = 1008(0x3f0, float:1.413E-42)
            if (r5 == r1) goto L49
            r1 = 1026(0x402, float:1.438E-42)
            if (r5 == r1) goto L49
            r1 = 1027(0x403, float:1.439E-42)
            if (r5 == r1) goto L49
            r1 = 1044(0x414, float:1.463E-42)
            if (r5 == r1) goto L49
            r1 = 1020(0x3fc, float:1.43E-42)
            if (r5 != r1) goto L2e
            goto L49
        L2e:
            r1 = 1049(0x419, float:1.47E-42)
            if (r5 == r1) goto L48
            r1 = 1055(0x41f, float:1.478E-42)
            if (r5 == r1) goto L48
            r1 = 1006(0x3ee, float:1.41E-42)
            if (r5 == r1) goto L48
            if (r6 == 0) goto L48
            long r5 = r6.getCurBytes()
            r3 = 8388608(0x800000, double:4.144523E-317)
            int r5 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r5 >= 0) goto L48
            return r2
        L48:
            return r0
        L49:
            return r2
    }

    public static int checkMd5Status(java.io.File r0, java.lang.String r1) {
            int r0 = com.ss.android.ttmd5.TTMd5.checkMd5(r1, r0)
            return r0
    }

    public static int checkMd5Status(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1, r2)
            int r1 = com.ss.android.ttmd5.TTMd5.checkMd5(r3, r0)
            return r1
    }

    public static boolean checkMd5Valid(java.io.File r0, java.lang.String r1) {
            int r0 = com.ss.android.ttmd5.TTMd5.checkMd5(r1, r0)
            boolean r0 = isMd5Valid(r0)
            return r0
    }

    public static boolean checkMd5Valid(java.lang.String r0, java.lang.String r1, java.lang.String r2) {
            int r0 = checkMd5Status(r0, r1, r2)
            boolean r0 = isMd5Valid(r0)
            return r0
    }

    public static boolean checkPermission(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L11
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto La
            goto L11
        La:
            int r2 = r2.checkCallingOrSelfPermission(r3)
            if (r2 != 0) goto L11
            r0 = 1
        L11:
            return r0
    }

    public static void clearAntiHijackDir(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r1 = "download_dir"
            org.json.JSONObject r1 = r0.optJSONObject(r1)
            if (r1 == 0) goto L7a
            java.lang.String r2 = "ins_desc"
            java.lang.String r1 = r1.optString(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L26
            java.lang.String r2 = r3.getSavePath()
            deleteFile(r2, r1)
        L26:
            java.lang.String r1 = r3.getTitle()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L34
            java.lang.String r1 = r3.getName()
        L34:
            java.lang.String r0 = getRedirectSavePath(r1, r0)
            java.lang.String r3 = r3.getSavePath()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L7a
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L7a
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
        L52:
            if (r1 == 0) goto L7a
            if (r0 == 0) goto L7a
            boolean r3 = r0.isDirectory()
            if (r3 == 0) goto L7a
            java.lang.String r3 = r1.getName()
            java.lang.String r2 = r0.getName()
            boolean r3 = android.text.TextUtils.equals(r3, r2)
            if (r3 == 0) goto L7a
            java.lang.String r3 = r0.getPath()
            deleteDirIfEmpty(r3)
            java.io.File r1 = r1.getParentFile()
            java.io.File r0 = r0.getParentFile()
            goto L52
        L7a:
            return
    }

    public static com.ss.android.socialbase.downloader.constants.ListenerType convertListenerType(int r2) {
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            int r1 = r1.ordinal()
            if (r2 != r1) goto Ld
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            goto L17
        Ld:
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
            int r1 = r1.ordinal()
            if (r2 != r1) goto L17
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION
        L17:
            return r0
    }

    public static boolean copyFile(java.io.File r1, java.io.File r2) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r0 = 1
            boolean r1 = copyFile(r1, r2, r0)
            return r1
    }

    public static boolean copyFile(java.io.File r5, java.io.File r6, boolean r7) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r0 = 0
            if (r5 == 0) goto Lad
            if (r6 == 0) goto Lad
            boolean r1 = r5.exists()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            if (r1 == 0) goto Lad
            boolean r1 = r5.isDirectory()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            if (r1 != 0) goto Lad
            java.lang.String r1 = r5.getCanonicalPath()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r2 = r6.getCanonicalPath()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            if (r1 == 0) goto L21
            goto Lad
        L21:
            java.io.File r1 = r6.getParentFile()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r2 = "Destination '"
            if (r1 == 0) goto L52
            boolean r3 = r1.mkdirs()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            if (r3 != 0) goto L52
            boolean r3 = r1.isDirectory()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            if (r3 == 0) goto L36
            goto L52
        L36:
            com.ss.android.socialbase.downloader.exception.BaseException r5 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r6 = 1053(0x41d, float:1.476E-42)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r7.<init>()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r7.append(r2)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r7.append(r1)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r1 = "' directory cannot be created"
            r7.append(r1)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r5.<init>(r6, r7)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            throw r5     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
        L52:
            java.lang.String r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r3.<init>()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r4 = "copyFile: srcFile:"
            r3.append(r4)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r4 = r5.getPath()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r3.append(r4)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r4 = " destFile:"
            r3.append(r4)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r4 = r6.getPath()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r3.append(r4)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            android.util.Log.e(r1, r3)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            boolean r1 = r6.exists()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            if (r1 == 0) goto L9f
            boolean r1 = r6.canWrite()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            if (r1 == 0) goto L85
            goto L9f
        L85:
            java.io.IOException r5 = new java.io.IOException     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r7.<init>()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r7.append(r2)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r7.append(r6)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r6 = "' exists but is read-only"
            r7.append(r6)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r5.<init>(r6)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            throw r5     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
        L9f:
            doCopyFile(r5, r6, r7)     // Catch: java.lang.Throwable -> La4 com.ss.android.socialbase.downloader.exception.BaseException -> Lab
            r5 = 1
            return r5
        La4:
            r5 = move-exception
            java.lang.String r6 = "CopyFile"
            parseException(r5, r6)
            return r0
        Lab:
            r5 = move-exception
            throw r5
        Lad:
            return r0
    }

    public static void copyFileFromExistFileWithSameName(com.ss.android.socialbase.downloader.model.DownloadInfo r6, java.lang.String r7) throws com.ss.android.socialbase.downloader.exception.BaseException {
            if (r6 == 0) goto L96
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L96
            java.lang.String r0 = r6.getName()
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L14
            goto L96
        L14:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r6.getSavePath()
            r0.<init>(r1, r7)
            java.io.File r1 = new java.io.File
            java.lang.String r2 = r6.getSavePath()
            java.lang.String r3 = r6.getName()
            r1.<init>(r2, r3)
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "copyFileFromExistFileWithSameName: existFile:"
            r3.append(r4)
            java.lang.String r4 = r0.getPath()
            r3.append(r4)
            java.lang.String r4 = " targetFile:"
            r3.append(r4)
            java.lang.String r4 = r1.getPath()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            android.util.Log.e(r2, r3)
            boolean r2 = r1.exists()
            r3 = 1001(0x3e9, float:1.403E-42)
            if (r2 == 0) goto L67
            boolean r2 = r1.canWrite()
            if (r2 == 0) goto L5f
            goto L67
        L5f:
            com.ss.android.socialbase.downloader.exception.BaseException r6 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.String r7 = "targetPath file exists but read-only"
            r6.<init>(r3, r7)
            throw r6
        L67:
            boolean r0 = copyFile(r0, r1)
            r1 = 1
            r0 = r0 ^ r1
            if (r0 != 0) goto L70
            return
        L70:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r2 = 4
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r4 = 0
            java.lang.String r5 = r6.getSavePath()
            r2[r4] = r5
            r2[r1] = r7
            r7 = 2
            java.lang.String r1 = r6.getSavePath()
            r2[r7] = r1
            r7 = 3
            java.lang.String r6 = r6.getName()
            r2[r7] = r6
            java.lang.String r6 = "Can't copy the exist file(%s/%s) to the target file(%s/%s)"
            java.lang.String r6 = java.lang.String.format(r6, r2)
            r0.<init>(r3, r6)
            throw r0
        L96:
            return
    }

    public static long cost(long r2) {
            long r0 = java.lang.System.currentTimeMillis()
            long r0 = r0 - r2
            return r0
    }

    public static com.ss.android.socialbase.downloader.model.RandomAccessOutputStream createOutputStream(com.ss.android.socialbase.downloader.model.DownloadInfo r8, java.lang.String r9, java.lang.String r10, int r11) throws com.ss.android.socialbase.downloader.exception.BaseException {
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 != 0) goto L131
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 != 0) goto L131
            java.io.File r0 = new java.io.File
            r0.<init>(r9, r10)
            boolean r10 = r0.exists()
            r1 = 1
            r2 = 0
            if (r10 == 0) goto L42
            boolean r10 = r0.isDirectory()
            if (r10 != 0) goto L20
            goto L42
        L20:
            com.ss.android.socialbase.downloader.exception.BaseException r8 = new com.ss.android.socialbase.downloader.exception.BaseException
            r10 = 1035(0x40b, float:1.45E-42)
            java.io.IOException r11 = new java.io.IOException
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r2] = r9
            boolean r9 = r0.isDirectory()
            java.lang.Boolean r9 = java.lang.Boolean.valueOf(r9)
            r3[r1] = r9
            java.lang.String r9 = "path is :%s, path is directory:%B:"
            java.lang.String r9 = java.lang.String.format(r9, r3)
            r11.<init>(r9)
            r8.<init>(r10, r11)
            throw r8
        L42:
            boolean r10 = r0.exists()
            if (r10 != 0) goto L12b
            java.io.File r10 = new java.io.File     // Catch: java.io.IOException -> L122
            r10.<init>(r9)     // Catch: java.io.IOException -> L122
            boolean r3 = r10.exists()     // Catch: java.io.IOException -> L122
            if (r3 == 0) goto L59
            boolean r3 = r10.isDirectory()     // Catch: java.io.IOException -> L122
            if (r3 != 0) goto Ldf
        L59:
            boolean r3 = r10.exists()     // Catch: java.io.IOException -> L122
            if (r3 != 0) goto Le3
            boolean r3 = r10.mkdirs()     // Catch: java.io.IOException -> L122
            if (r3 != 0) goto Ldf
            boolean r3 = r10.exists()     // Catch: java.io.IOException -> L122
            if (r3 != 0) goto Ldf
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r8)     // Catch: java.io.IOException -> L122
            java.lang.String r4 = "opt_mkdir_failed"
            int r3 = r3.optInt(r4, r2)     // Catch: java.io.IOException -> L122
            r4 = 1030(0x406, float:1.443E-42)
            java.lang.String r5 = "download savePath directory can not created:"
            if (r3 != r1) goto Lca
            r1 = r2
        L7c:
            if (r2 != 0) goto L8e
            int r3 = r1 + 1
            r6 = 3
            if (r1 >= r6) goto L8e
            r6 = 10
            java.lang.Thread.sleep(r6)     // Catch: java.lang.InterruptedException -> L8e java.io.IOException -> L122
            boolean r2 = r10.mkdirs()     // Catch: java.io.IOException -> L122
            r1 = r3
            goto L7c
        L8e:
            if (r2 != 0) goto Ldf
            java.lang.String r8 = r8.getSavePath()     // Catch: java.io.IOException -> L122
            long r10 = getAvailableSpaceBytes(r8)     // Catch: java.io.IOException -> L122
            r0 = 16384(0x4000, double:8.095E-320)
            int r8 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r8 >= 0) goto Lb5
            com.ss.android.socialbase.downloader.exception.BaseException r8 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.io.IOException -> L122
            r10 = 1006(0x3ee, float:1.41E-42)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L122
            r11.<init>()     // Catch: java.io.IOException -> L122
            r11.append(r5)     // Catch: java.io.IOException -> L122
            r11.append(r9)     // Catch: java.io.IOException -> L122
            java.lang.String r9 = r11.toString()     // Catch: java.io.IOException -> L122
            r8.<init>(r10, r9)     // Catch: java.io.IOException -> L122
            throw r8     // Catch: java.io.IOException -> L122
        Lb5:
            com.ss.android.socialbase.downloader.exception.BaseException r8 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.io.IOException -> L122
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L122
            r10.<init>()     // Catch: java.io.IOException -> L122
            r10.append(r5)     // Catch: java.io.IOException -> L122
            r10.append(r9)     // Catch: java.io.IOException -> L122
            java.lang.String r9 = r10.toString()     // Catch: java.io.IOException -> L122
            r8.<init>(r4, r9)     // Catch: java.io.IOException -> L122
            throw r8     // Catch: java.io.IOException -> L122
        Lca:
            com.ss.android.socialbase.downloader.exception.BaseException r8 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.io.IOException -> L122
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L122
            r10.<init>()     // Catch: java.io.IOException -> L122
            r10.append(r5)     // Catch: java.io.IOException -> L122
            r10.append(r9)     // Catch: java.io.IOException -> L122
            java.lang.String r9 = r10.toString()     // Catch: java.io.IOException -> L122
            r8.<init>(r4, r9)     // Catch: java.io.IOException -> L122
            throw r8     // Catch: java.io.IOException -> L122
        Ldf:
            r0.createNewFile()     // Catch: java.io.IOException -> L122
            goto L12b
        Le3:
            r10.delete()     // Catch: java.io.IOException -> L122
            boolean r8 = r10.mkdirs()     // Catch: java.io.IOException -> L122
            r11 = 1031(0x407, float:1.445E-42)
            if (r8 != 0) goto L10b
            boolean r8 = r10.exists()     // Catch: java.io.IOException -> L122
            if (r8 != 0) goto L10b
            com.ss.android.socialbase.downloader.exception.BaseException r8 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.io.IOException -> L122
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L122
            r10.<init>()     // Catch: java.io.IOException -> L122
            java.lang.String r0 = "download savePath is not directory:path="
            r10.append(r0)     // Catch: java.io.IOException -> L122
            r10.append(r9)     // Catch: java.io.IOException -> L122
            java.lang.String r9 = r10.toString()     // Catch: java.io.IOException -> L122
            r8.<init>(r11, r9)     // Catch: java.io.IOException -> L122
            throw r8     // Catch: java.io.IOException -> L122
        L10b:
            com.ss.android.socialbase.downloader.exception.BaseException r8 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.io.IOException -> L122
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L122
            r10.<init>()     // Catch: java.io.IOException -> L122
            java.lang.String r0 = "download savePath is not directory:"
            r10.append(r0)     // Catch: java.io.IOException -> L122
            r10.append(r9)     // Catch: java.io.IOException -> L122
            java.lang.String r9 = r10.toString()     // Catch: java.io.IOException -> L122
            r8.<init>(r11, r9)     // Catch: java.io.IOException -> L122
            throw r8     // Catch: java.io.IOException -> L122
        L122:
            r8 = move-exception
            com.ss.android.socialbase.downloader.exception.BaseException r9 = new com.ss.android.socialbase.downloader.exception.BaseException
            r10 = 1036(0x40c, float:1.452E-42)
            r9.<init>(r10, r8)
            throw r9
        L12b:
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r8 = new com.ss.android.socialbase.downloader.model.RandomAccessOutputStream
            r8.<init>(r0, r11)
            return r8
        L131:
            com.ss.android.socialbase.downloader.exception.BaseException r8 = new com.ss.android.socialbase.downloader.exception.BaseException
            r9 = 1021(0x3fd, float:1.431E-42)
            java.io.IOException r10 = new java.io.IOException
            java.lang.String r11 = "path must be not empty"
            r10.<init>(r11)
            r8.<init>(r9, r10)
            throw r8
    }

    public static void deleteAllDownloadFiles(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = 1
            deleteAllDownloadFiles(r1, r0)
            return
    }

    public static void deleteAllDownloadFiles(com.ss.android.socialbase.downloader.model.DownloadInfo r2, boolean r3) {
            if (r2 != 0) goto L3
            return
        L3:
            if (r3 == 0) goto L10
            java.lang.String r0 = r2.getSavePath()     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = r2.getName()     // Catch: java.lang.Throwable -> L50
            deleteFile(r0, r1)     // Catch: java.lang.Throwable -> L50
        L10:
            java.lang.String r0 = r2.getTempPath()     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = r2.getTempName()     // Catch: java.lang.Throwable -> L50
            deleteFile(r0, r1)     // Catch: java.lang.Throwable -> L50
            boolean r0 = r2.isSavePathRedirected()     // Catch: java.lang.Throwable -> L50
            if (r0 == 0) goto L24
            clearAntiHijackDir(r2)     // Catch: java.lang.Throwable -> L50
        L24:
            if (r3 == 0) goto L54
            java.lang.String r3 = r2.getUrl()     // Catch: java.lang.Throwable -> L50
            java.lang.String r3 = md5Hex(r3)     // Catch: java.lang.Throwable -> L50
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L50
            if (r0 != 0) goto L54
            java.lang.String r0 = r2.getSavePath()     // Catch: java.lang.Throwable -> L50
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L50
            if (r0 != 0) goto L54
            java.lang.String r0 = r2.getSavePath()     // Catch: java.lang.Throwable -> L50
            boolean r3 = r0.contains(r3)     // Catch: java.lang.Throwable -> L50
            if (r3 == 0) goto L54
            java.lang.String r2 = r2.getSavePath()     // Catch: java.lang.Throwable -> L50
            deleteDirIfEmpty(r2)     // Catch: java.lang.Throwable -> L50
            goto L54
        L50:
            r2 = move-exception
            r2.printStackTrace()
        L54:
            return
    }

    private static boolean deleteDirIfEmpty(java.lang.String r3) {
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "deleteDirIfEmpty on thread: "
            r1.append(r2)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.w(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto L3c
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.isDirectory()
            if (r3 == 0) goto L3c
            boolean r3 = r0.delete()
            if (r3 != 0) goto L3a
            java.lang.String r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.String r0 = "deleteDirIfEmpty return false"
            android.util.Log.w(r3, r0)
            return r1
        L3a:
            r3 = 1
            return r3
        L3c:
            return r1
    }

    public static void deleteFile(java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L38
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L38
            java.io.File r0 = new java.io.File
            r0.<init>(r4, r5)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L38
            java.lang.String r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "deleteFile: "
            r2.append(r3)
            r2.append(r4)
            java.lang.String r4 = "/"
            r2.append(r4)
            r2.append(r5)
            java.lang.String r4 = r2.toString()
            android.util.Log.e(r1, r4)
            r0.delete()
        L38:
            return
    }

    private static void doCopyFile(java.io.File r18, java.io.File r19, boolean r20) throws java.io.IOException {
            r0 = r18
            r1 = r19
            boolean r2 = r19.exists()
            if (r2 == 0) goto L2d
            boolean r2 = r19.isDirectory()
            if (r2 != 0) goto L11
            goto L2d
        L11:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Destination '"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = "' exists but is a directory"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
        L2d:
            java.io.FileInputStream r2 = new java.io.FileInputStream
            r2.<init>(r0)
            java.nio.channels.FileChannel r9 = r2.getChannel()     // Catch: java.lang.Throwable -> Led
            java.io.FileOutputStream r10 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Ldc
            r10.<init>(r1)     // Catch: java.lang.Throwable -> Ldc
            java.nio.channels.FileChannel r11 = r10.getChannel()     // Catch: java.lang.Throwable -> Lcd
            long r12 = r9.size()     // Catch: java.lang.Throwable -> Lbc
            r14 = 0
            r16 = r14
        L47:
            int r3 = (r16 > r12 ? 1 : (r16 == r12 ? 0 : -1))
            if (r3 >= 0) goto L67
            long r3 = r12 - r16
            r5 = 31457280(0x1e00000, double:1.55419614E-316)
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L56
            r7 = r5
            goto L57
        L56:
            r7 = r3
        L57:
            r3 = r11
            r4 = r9
            r5 = r16
            long r3 = r3.transferFrom(r4, r5, r7)     // Catch: java.lang.Throwable -> Lbc
            int r5 = (r3 > r14 ? 1 : (r3 == r14 ? 0 : -1))
            if (r5 != 0) goto L64
            goto L67
        L64:
            long r16 = r16 + r3
            goto L47
        L67:
            if (r11 == 0) goto L6c
            r11.close()     // Catch: java.lang.Throwable -> Lcd
        L6c:
            r10.close()     // Catch: java.lang.Throwable -> Ldc
            if (r9 == 0) goto L74
            r9.close()     // Catch: java.lang.Throwable -> Led
        L74:
            r2.close()
            long r2 = r18.length()
            long r4 = r19.length()
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 != 0) goto L8d
            if (r20 == 0) goto L8c
            long r2 = r18.lastModified()
            r1.setLastModified(r2)
        L8c:
            return
        L8d:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Failed to copy full contents from '"
            r7.append(r8)
            r7.append(r0)
            java.lang.String r0 = "' to '"
            r7.append(r0)
            r7.append(r1)
            java.lang.String r0 = "' Expected length: "
            r7.append(r0)
            r7.append(r2)
            java.lang.String r0 = " Actual: "
            r7.append(r0)
            r7.append(r4)
            java.lang.String r0 = r7.toString()
            r6.<init>(r0)
            throw r6
        Lbc:
            r0 = move-exception
            r1 = r0
            throw r1     // Catch: java.lang.Throwable -> Lbf
        Lbf:
            r0 = move-exception
            r3 = r0
            if (r11 == 0) goto Lcc
            r11.close()     // Catch: java.lang.Throwable -> Lc7
            goto Lcc
        Lc7:
            r0 = move-exception
            r4 = r0
            r1.addSuppressed(r4)     // Catch: java.lang.Throwable -> Lcd
        Lcc:
            throw r3     // Catch: java.lang.Throwable -> Lcd
        Lcd:
            r0 = move-exception
            r1 = r0
            throw r1     // Catch: java.lang.Throwable -> Ld0
        Ld0:
            r0 = move-exception
            r3 = r0
            r10.close()     // Catch: java.lang.Throwable -> Ld6
            goto Ldb
        Ld6:
            r0 = move-exception
            r4 = r0
            r1.addSuppressed(r4)     // Catch: java.lang.Throwable -> Ldc
        Ldb:
            throw r3     // Catch: java.lang.Throwable -> Ldc
        Ldc:
            r0 = move-exception
            r1 = r0
            throw r1     // Catch: java.lang.Throwable -> Ldf
        Ldf:
            r0 = move-exception
            r3 = r0
            if (r9 == 0) goto Lec
            r9.close()     // Catch: java.lang.Throwable -> Le7
            goto Lec
        Le7:
            r0 = move-exception
            r4 = r0
            r1.addSuppressed(r4)     // Catch: java.lang.Throwable -> Led
        Lec:
            throw r3     // Catch: java.lang.Throwable -> Led
        Led:
            r0 = move-exception
            r1 = r0
            throw r1     // Catch: java.lang.Throwable -> Lf0
        Lf0:
            r0 = move-exception
            r3 = r0
            r2.close()     // Catch: java.lang.Throwable -> Lf6
            goto Lfb
        Lf6:
            r0 = move-exception
            r2 = r0
            r1.addSuppressed(r2)
        Lfb:
            throw r3
    }

    private static void ensureDirExists(java.io.File r1) {
            boolean r0 = r1.exists()
            if (r0 != 0) goto L9
            r1.mkdirs()
        L9:
            return
    }

    public static void ensureDirExists(java.lang.String r1) {
            if (r1 != 0) goto L3
            return
        L3:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            ensureDirExists(r0)
            return
    }

    public static java.lang.String generateDistinctDirectory(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L1f
            java.lang.String r2 = md5Hex(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            boolean r0 = r1.contains(r2)
            if (r0 != 0) goto L1f
            java.io.File r0 = new java.io.File
            r0.<init>(r1, r2)
            java.lang.String r1 = r0.getAbsolutePath()
        L1f:
            return r1
    }

    public static long getAvailableSpaceBytes(java.lang.String r5) throws com.ss.android.socialbase.downloader.exception.BaseException {
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Throwable -> L1d java.lang.IllegalArgumentException -> L26
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L1d java.lang.IllegalArgumentException -> L26
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1d java.lang.IllegalArgumentException -> L26
            r1 = 18
            if (r5 < r1) goto L10
            long r0 = r0.getAvailableBytes()     // Catch: java.lang.Throwable -> L1d java.lang.IllegalArgumentException -> L26
            goto L1c
        L10:
            int r5 = r0.getAvailableBlocks()     // Catch: java.lang.Throwable -> L1d java.lang.IllegalArgumentException -> L26
            long r1 = (long) r5     // Catch: java.lang.Throwable -> L1d java.lang.IllegalArgumentException -> L26
            int r5 = r0.getBlockSize()     // Catch: java.lang.Throwable -> L1d java.lang.IllegalArgumentException -> L26
            long r3 = (long) r5
            long r0 = r1 * r3
        L1c:
            return r0
        L1d:
            r5 = move-exception
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1052(0x41c, float:1.474E-42)
            r0.<init>(r1, r5)
            throw r0
        L26:
            r5 = move-exception
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1050(0x41a, float:1.471E-42)
            r0.<init>(r1, r5)
            throw r0
    }

    public static boolean getBoolean(java.lang.Object r0, boolean r1) {
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.ClassCastException -> L7
            boolean r0 = r0.booleanValue()     // Catch: java.lang.ClassCastException -> L7
            return r0
        L7:
            return r1
    }

    public static android.net.ConnectivityManager getConnectivityManager(android.content.Context r1) {
            android.net.ConnectivityManager r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.connectivityManager
            if (r0 != 0) goto Lf
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)
            r0 = r1
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            com.ss.android.socialbase.downloader.utils.DownloadUtils.connectivityManager = r0
        Lf:
            return r0
    }

    public static long getContentLength(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r4) {
            r0 = -1
            if (r4 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = "Content-Length"
            java.lang.String r2 = getRespHeadFieldIgnoreCase(r4, r2)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L1d
            r3 = 1
            boolean r3 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r3)
            if (r3 == 0) goto L1d
            long r0 = parseContentLengthFromContentRange(r4)
            goto L21
        L1d:
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L21
        L21:
            return r0
    }

    public static long getCurByte(com.ss.android.socialbase.downloader.model.DownloadInfo r6) {
            r0 = 0
            if (r6 != 0) goto L5
            return r0
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            int r3 = r6.getId()
            java.util.List r2 = r2.getDownloadChunk(r3)
            int r3 = r6.getChunkCount()
            r4 = 1
            if (r3 <= r4) goto L19
            goto L1a
        L19:
            r4 = 0
        L1a:
            boolean r5 = r6.isBreakpointAvailable()
            if (r5 == 0) goto L33
            if (r4 == 0) goto L2f
            if (r2 == 0) goto L33
            int r6 = r2.size()
            if (r3 != r6) goto L33
            long r0 = getTotalOffset(r2)
            goto L33
        L2f:
            long r0 = r6.getCurBytes()
        L33:
            return r0
    }

    public static java.lang.String getCurProcessName(android.content.Context r2) {
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sCurProcessName
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L9
            return r0
        L9:
            java.lang.String r0 = getCurProcessNameByApplication()
            com.ss.android.socialbase.downloader.utils.DownloadUtils.sCurProcessName = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L18
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sCurProcessName
            return r2
        L18:
            java.lang.String r0 = getCurProcessNameByActivityThread()
            com.ss.android.socialbase.downloader.utils.DownloadUtils.sCurProcessName = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L27
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sCurProcessName
            return r2
        L27:
            java.lang.String r2 = getCurProcessNameByActivityManager(r2)
            com.ss.android.socialbase.downloader.utils.DownloadUtils.sCurProcessName = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L36
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sCurProcessName
            return r2
        L36:
            java.lang.String r2 = getCurProcessNameFromProc()
            com.ss.android.socialbase.downloader.utils.DownloadUtils.sCurProcessName = r2
            return r2
    }

    private static java.lang.String getCurProcessNameByActivityManager(android.content.Context r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            int r1 = android.os.Process.myPid()     // Catch: java.lang.Exception -> L4b
            java.lang.String r2 = "activity"
            java.lang.Object r4 = r4.getSystemService(r2)     // Catch: java.lang.Exception -> L4b
            android.app.ActivityManager r4 = (android.app.ActivityManager) r4     // Catch: java.lang.Exception -> L4b
            if (r4 == 0) goto L4f
            java.util.List r4 = r4.getRunningAppProcesses()     // Catch: java.lang.Exception -> L4b
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L4b
        L1a:
            boolean r2 = r4.hasNext()     // Catch: java.lang.Exception -> L4b
            if (r2 == 0) goto L4f
            java.lang.Object r2 = r4.next()     // Catch: java.lang.Exception -> L4b
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2     // Catch: java.lang.Exception -> L4b
            int r3 = r2.pid     // Catch: java.lang.Exception -> L4b
            if (r3 != r1) goto L1a
            boolean r4 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Exception -> L4b
            if (r4 == 0) goto L48
            java.lang.String r4 = "Process"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4b
            r1.<init>()     // Catch: java.lang.Exception -> L4b
            java.lang.String r3 = "processName = "
            r1.append(r3)     // Catch: java.lang.Exception -> L4b
            java.lang.String r3 = r2.processName     // Catch: java.lang.Exception -> L4b
            r1.append(r3)     // Catch: java.lang.Exception -> L4b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L4b
            com.ss.android.socialbase.downloader.logger.Logger.d(r4, r1)     // Catch: java.lang.Exception -> L4b
        L48:
            java.lang.String r4 = r2.processName     // Catch: java.lang.Exception -> L4b
            return r4
        L4b:
            r4 = move-exception
            r4.printStackTrace()
        L4f:
            return r0
    }

    private static java.lang.String getCurProcessNameByActivityThread() {
            r0 = 0
            java.lang.String r1 = "android.app.ActivityThread"
            java.lang.Class<android.app.Application> r2 = android.app.Application.class
            java.lang.ClassLoader r2 = r2.getClassLoader()     // Catch: java.lang.Throwable -> L4d
            r3 = 0
            java.lang.Class r1 = java.lang.Class.forName(r1, r3, r2)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "currentProcessName"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L4d
            java.lang.Class[] r4 = (java.lang.Class[]) r4     // Catch: java.lang.Throwable -> L4d
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Throwable -> L4d
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L4d
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r1 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L4d
            boolean r2 = r1 instanceof java.lang.String     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto L55
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L4d
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L4b
            if (r0 != 0) goto L54
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Throwable -> L4b
            if (r0 == 0) goto L54
            java.lang.String r0 = "Process"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4b
            r2.<init>()     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = "processName = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L4b
            r2.append(r1)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L4b
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r2)     // Catch: java.lang.Throwable -> L4b
            goto L54
        L4b:
            r0 = move-exception
            goto L51
        L4d:
            r1 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
        L51:
            r0.printStackTrace()
        L54:
            r0 = r1
        L55:
            return r0
    }

    private static java.lang.String getCurProcessNameByApplication() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L31
            java.lang.String r0 = android.app.Application.getProcessName()     // Catch: java.lang.Exception -> L2d
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2d
            if (r1 != 0) goto L2c
            boolean r1 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Exception -> L2d
            if (r1 == 0) goto L2c
            java.lang.String r1 = "Process"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2d
            r2.<init>()     // Catch: java.lang.Exception -> L2d
            java.lang.String r3 = "processName = "
            r2.append(r3)     // Catch: java.lang.Exception -> L2d
            r2.append(r0)     // Catch: java.lang.Exception -> L2d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L2d
            com.ss.android.socialbase.downloader.logger.Logger.d(r1, r2)     // Catch: java.lang.Exception -> L2d
        L2c:
            return r0
        L2d:
            r0 = move-exception
            r0.printStackTrace()
        L31:
            r0 = 0
            return r0
    }

    private static java.lang.String getCurProcessNameFromProc() {
            r0 = 0
            r1 = 1
            r2 = 0
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L6a
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L6a
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L6a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6a
            r6.<init>()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r7 = "/proc/"
            r6.append(r7)     // Catch: java.lang.Throwable -> L6a
            int r7 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L6a
            r6.append(r7)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r7 = "/cmdline"
            r6.append(r7)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L6a
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r6 = "iso-8859-1"
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L6a
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L6a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b
            r4.<init>()     // Catch: java.lang.Throwable -> L6b
        L33:
            int r5 = r3.read()     // Catch: java.lang.Throwable -> L6b
            if (r5 <= 0) goto L3e
            char r5 = (char) r5     // Catch: java.lang.Throwable -> L6b
            r4.append(r5)     // Catch: java.lang.Throwable -> L6b
            goto L33
        L3e:
            boolean r5 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Throwable -> L6b
            if (r5 == 0) goto L5e
            java.lang.String r5 = "Process"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b
            r6.<init>()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r7 = "get processName = "
            r6.append(r7)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> L6b
            r6.append(r7)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L6b
            com.ss.android.socialbase.downloader.logger.Logger.d(r5, r6)     // Catch: java.lang.Throwable -> L6b
        L5e:
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L6b
            java.io.Closeable[] r1 = new java.io.Closeable[r1]
            r1[r0] = r3
            safeClose(r1)
            return r2
        L6a:
            r3 = r2
        L6b:
            java.io.Closeable[] r1 = new java.io.Closeable[r1]
            r1[r0] = r3
            safeClose(r1)
            return r2
    }

    public static java.io.File getDatabaseFile(android.content.Context r1, boolean r2, java.lang.String r3) {
            java.lang.String r0 = ""
            java.lang.String r0 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> L6
        L6:
            if (r2 == 0) goto L1b
            java.lang.String r2 = "mounted"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L1b
            boolean r2 = hasExternalStoragePermission(r1)
            if (r2 == 0) goto L1b
            java.io.File r2 = getExternalDBFile(r3)
            goto L1c
        L1b:
            r2 = 0
        L1c:
            if (r2 != 0) goto L22
            java.io.File r2 = r1.getDatabasePath(r3)
        L22:
            if (r2 != 0) goto L43
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "/data/data/"
            r2.append(r0)
            java.lang.String r1 = r1.getPackageName()
            r2.append(r1)
            java.lang.String r1 = "/database/"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r1, r3)
        L43:
            return r2
    }

    public static java.lang.String getDownloadPath() {
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            java.io.File r0 = r0.getGlobalSaveDir()
            r1 = 1
            java.lang.String r0 = getValidDownloadPath(r0, r1)
            return r0
    }

    public static java.lang.String getDownloadTempPath() {
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            java.io.File r0 = r0.getGlobalSaveTempDir()
            r1 = 0
            java.lang.String r0 = getValidDownloadPath(r0, r1)
            return r0
    }

    public static java.lang.String getEncodedStr(java.lang.String r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r6.length()
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L33
            char r4 = r6.charAt(r3)
            r5 = 31
            if (r4 <= r5) goto L1e
            r5 = 127(0x7f, float:1.78E-43)
            if (r4 < r5) goto L1a
            goto L1e
        L1a:
            r0.append(r4)
            goto L30
        L1e:
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r5[r2] = r4
            java.lang.String r4 = "\\u%04x"
            java.lang.String r4 = java.lang.String.format(r4, r5)
            r0.append(r4)
        L30:
            int r3 = r3 + 1
            goto Lb
        L33:
            java.lang.String r6 = r0.toString()
            return r6
    }

    public static java.lang.String getErrorMsgWithTagPrefix(java.lang.Throwable r1, java.lang.String r2) {
            if (r2 != 0) goto L7
            java.lang.String r1 = getThrowableMsg(r1)
            return r1
        L7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "-"
            r0.append(r2)
            java.lang.String r1 = getThrowableMsg(r1)
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    private static java.io.File getExternalDBFile(java.lang.String r4) {
            boolean r0 = isSdcardAvailable()
            r1 = 0
            if (r0 == 0) goto L62
            boolean r0 = isSdcardWritable()
            if (r0 != 0) goto Le
            goto L62
        Le:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Exception -> L5c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5c
            r2.<init>()     // Catch: java.lang.Exception -> L5c
            java.lang.String r3 = "database"
            r2.append(r3)     // Catch: java.lang.Exception -> L5c
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Exception -> L5c
            r2.append(r3)     // Catch: java.lang.Exception -> L5c
            r2.append(r4)     // Catch: java.lang.Exception -> L5c
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Exception -> L5c
            java.io.File r4 = r0.getExternalFilesDir(r4)     // Catch: java.lang.Exception -> L5c
            if (r4 != 0) goto L2f
            return r1
        L2f:
            boolean r0 = r4.exists()     // Catch: java.lang.Exception -> L59
            if (r0 != 0) goto L38
            r4.createNewFile()     // Catch: java.lang.Exception -> L59
        L38:
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()     // Catch: java.lang.Exception -> L59
            if (r0 == 0) goto L61
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG     // Catch: java.lang.Exception -> L59
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L59
            r1.<init>()     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "download db path:"
            r1.append(r2)     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = r4.getAbsolutePath()     // Catch: java.lang.Exception -> L59
            r1.append(r2)     // Catch: java.lang.Exception -> L59
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L59
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)     // Catch: java.lang.Exception -> L59
            goto L61
        L59:
            r0 = move-exception
            r1 = r4
            goto L5d
        L5c:
            r0 = move-exception
        L5d:
            r0.printStackTrace()
            r4 = r1
        L61:
            return r4
        L62:
            return r1
    }

    public static java.io.File getExternalDownloadPath() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> L5
            goto L7
        L5:
            java.lang.String r0 = ""
        L7:
            java.lang.String r1 = "mounted"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L16
            java.lang.String r0 = android.os.Environment.DIRECTORY_DOWNLOADS
            java.io.File r0 = android.os.Environment.getExternalStoragePublicDirectory(r0)
            return r0
        L16:
            r0 = 0
            return r0
    }

    public static java.lang.String getFileNameFromConnection(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r1, java.lang.String r2) {
            java.lang.String r0 = "Content-Disposition"
            java.lang.String r1 = r1.getResponseHeaderField(r0)
            java.lang.String r1 = parseContentDisposition(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L14
            java.lang.String r1 = md5Hex(r2)
        L14:
            return r1
    }

    private static long getFirstChunkCurOffset(java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r9) {
            r0 = -1
            if (r9 == 0) goto L45
            boolean r2 = r9.isEmpty()
            if (r2 != 0) goto L45
            java.util.Iterator r9 = r9.iterator()
            r2 = r0
        Lf:
            boolean r4 = r9.hasNext()
            if (r4 == 0) goto L44
            java.lang.Object r4 = r9.next()
            com.ss.android.socialbase.downloader.model.DownloadChunk r4 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r4
            if (r4 == 0) goto Lf
            long r5 = r4.getCurrentOffset()
            long r7 = r4.getEndOffset()
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto L33
            long r5 = r4.getEndOffset()
            r7 = 0
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 != 0) goto Lf
        L33:
            int r5 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r5 == 0) goto L3f
            long r5 = r4.getCurrentOffset()
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 <= 0) goto Lf
        L3f:
            long r2 = r4.getCurrentOffset()
            goto Lf
        L44:
            r0 = r2
        L45:
            return r0
    }

    public static long getFirstOffset(com.ss.android.socialbase.downloader.model.DownloadInfo r5) {
            if (r5 != 0) goto L5
            r0 = -1
            return r0
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadCache r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCache()
            int r1 = r5.getId()
            java.util.List r0 = r0.getDownloadChunk(r1)
            int r1 = r5.getChunkCount()
            r2 = 1
            r3 = 0
            if (r1 != r2) goto L1f
            long r3 = r5.getCurBytes()
            goto L30
        L1f:
            if (r0 == 0) goto L30
            int r5 = r0.size()
            if (r5 <= r2) goto L30
            long r0 = getFirstChunkCurOffset(r0)
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 < 0) goto L30
            r3 = r0
        L30:
            return r3
    }

    public static java.lang.String getFixLengthString(java.lang.String r1, int r2) {
            if (r2 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L17
            int r0 = r1.length()
            if (r0 > r2) goto L12
            goto L17
        L12:
            r0 = 0
            java.lang.String r1 = r1.substring(r0, r2)
        L17:
            return r1
    }

    public static int getInt(java.lang.Object r0, int r1) {
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.ClassCastException -> L7
            int r0 = r0.intValue()     // Catch: java.lang.ClassCastException -> L7
            return r0
        L7:
            return r1
    }

    public static java.lang.String getLoggerTag(java.lang.String r0) {
            java.lang.String r0 = com.ss.android.socialbase.downloader.logger.Logger.downloaderTag(r0)
            return r0
    }

    public static long getMaxBytesOverMobile() {
            r0 = 2147483648(0x80000000, double:1.0609978955E-314)
            return r0
    }

    public static java.lang.String getMd5StatusMsg(int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ttmd5 check code = "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 99
            if (r2 == r1) goto L9e
            switch(r2) {
                case 0: goto L8c;
                case 1: goto L7a;
                case 2: goto L68;
                case 3: goto L56;
                case 4: goto L44;
                case 5: goto L32;
                case 6: goto L1f;
                default: goto L1d;
            }
        L1d:
            goto Laf
        L1f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "get file md5 error"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto Laf
        L32:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "file not exist"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto Laf
        L44:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "ttmd5 tag parser error"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto Laf
        L56:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "ttmd5 version not support"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto Laf
        L68:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "md5 empty"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto Laf
        L7a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "md5 not match"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto Laf
        L8c:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "md5 match"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            goto Laf
        L9e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "unknown error"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
        Laf:
            return r0
    }

    public static java.lang.String getRedirectSavePath(java.lang.String r2, com.ss.android.socialbase.downloader.setting.DownloadSetting r3) {
            if (r3 == 0) goto L5e
            java.lang.String r0 = "download_dir"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            if (r3 == 0) goto L5e
            java.lang.String r0 = "dir_name"
            java.lang.String r3 = r3.optString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 1
            if (r0 != 0) goto L23
            java.lang.String r0 = "/"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L23
            java.lang.String r3 = r3.substring(r1)
        L23:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L60
            java.lang.String r0 = "%s"
            boolean r0 = r3.contains(r0)
            if (r0 != 0) goto L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L40:
            r3 = r2
            goto L4c
        L42:
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L4c
            r1 = 0
            r0[r1] = r2     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = java.lang.String.format(r3, r0)     // Catch: java.lang.Throwable -> L4c
            goto L40
        L4c:
            int r2 = r3.length()
            r0 = 255(0xff, float:3.57E-43)
            if (r2 <= r0) goto L60
            int r2 = r3.length()
            int r2 = r2 - r0
            java.lang.String r3 = r3.substring(r2)
            goto L60
        L5e:
            java.lang.String r3 = ""
        L60:
            return r3
    }

    public static java.lang.String getRespHeadFieldIgnoreCase(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r4, java.lang.String r5) {
            if (r4 == 0) goto L38
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L9
            goto L38
        L9:
            java.lang.String r0 = r4.getResponseHeaderField(r5)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r2 = 1
            java.lang.String r3 = "fix_get_http_resp_head_ignore_case"
            boolean r1 = r1.optBugFix(r3, r2)
            if (r1 != 0) goto L1b
            return r0
        L1b:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L29
            java.lang.String r0 = r5.toLowerCase()
            java.lang.String r0 = r4.getResponseHeaderField(r0)
        L29:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L37
            java.lang.String r5 = r5.toUpperCase()
            java.lang.String r0 = r4.getResponseHeaderField(r5)
        L37:
            return r0
        L38:
            r4 = 0
            return r4
    }

    public static java.lang.String getString(java.lang.Object r0, java.lang.String r1) {
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.ClassCastException -> L3
            return r0
        L3:
            return r1
    }

    public static java.lang.String getTargetFilePath(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            goto L22
        Ld:
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            r2 = 1
            java.lang.String r1 = java.io.File.separator
            r0[r2] = r1
            r2 = 2
            r0[r2] = r3
            java.lang.String r2 = "%s%s%s"
            java.lang.String r2 = java.lang.String.format(r2, r0)
            return r2
        L22:
            r2 = 0
            return r2
    }

    public static java.lang.String getTempFileName(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = "%s.tp"
            java.lang.String r2 = java.lang.String.format(r2, r0)
            return r2
    }

    public static java.lang.String getTempFilePath(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L13
        Ld:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L14
        L13:
            return r1
        L14:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1f
            java.lang.String r2 = getTargetFilePath(r3, r4)
            goto L23
        L1f:
            java.lang.String r2 = getTargetFilePath(r2, r4)
        L23:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L2a
            return r1
        L2a:
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            r3[r4] = r2
            java.lang.String r2 = "%s.tp"
            java.lang.String r2 = java.lang.String.format(r2, r3)
            return r2
    }

    public static java.lang.String getTempFileSavePath(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Le
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Le
            r1 = 0
            return r1
        Le:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L15
            r1 = r2
        L15:
            return r1
    }

    public static java.lang.String getThrowableMsg(java.lang.Throwable r0) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La
            return r0
        La:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "throwable getMsg error"
            return r0
    }

    public static long getTotalOffset(java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r4) {
            java.util.Iterator r4 = r4.iterator()
            r0 = 0
        L6:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L18
            java.lang.Object r2 = r4.next()
            com.ss.android.socialbase.downloader.model.DownloadChunk r2 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r2
            long r2 = r2.getDownloadChunkBytes()
            long r0 = r0 + r2
            goto L6
        L18:
            return r0
    }

    private static java.lang.String getValidDownloadPath(java.io.File r3, boolean r4) {
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r1 = isValidDirectory(r3)
            if (r1 == 0) goto Lf
            java.lang.String r3 = r3.getAbsolutePath()
            return r3
        Lf:
            android.content.pm.ApplicationInfo r3 = r0.getApplicationInfo()
            int r3 = r3.targetSdkVersion
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 29
            if (r1 < r2) goto L36
            if (r3 != r2) goto L23
            boolean r1 = android.os.Environment.isExternalStorageLegacy()
            if (r1 == 0) goto L25
        L23:
            if (r3 <= r2) goto L36
        L25:
            java.lang.String r3 = android.os.Environment.DIRECTORY_DOWNLOADS
            java.io.File r3 = r0.getExternalFilesDir(r3)
            boolean r4 = isValidDirectory(r3)
            if (r4 == 0) goto L58
            java.lang.String r3 = r3.getAbsolutePath()
            return r3
        L36:
            if (r4 == 0) goto L47
            java.io.File r3 = getExternalDownloadPath()
            boolean r4 = isValidDirectory(r3)
            if (r4 == 0) goto L47
            java.lang.String r3 = r3.getAbsolutePath()
            return r3
        L47:
            java.lang.String r3 = android.os.Environment.DIRECTORY_DOWNLOADS
            java.io.File r3 = r0.getExternalFilesDir(r3)
            boolean r4 = isValidDirectory(r3)
            if (r4 == 0) goto L58
            java.lang.String r3 = r3.getAbsolutePath()
            return r3
        L58:
            java.io.File r3 = r0.getFilesDir()
            java.lang.String r3 = r3.getAbsolutePath()
            return r3
    }

    private static void handleTempSaveCallback(int r3, boolean r4, com.ss.android.socialbase.downloader.exception.BaseException r5) {
            android.util.SparseArray<java.lang.Boolean> r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileStatusMap
            monitor-enter(r0)
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback>> r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileListeners     // Catch: java.lang.Throwable -> L46
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L46
            java.util.List r1 = (java.util.List) r1     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L29
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L46
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L29
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L46
            com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback r2 = (com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback) r2     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L11
            if (r4 == 0) goto L25
            r2.onSuccess()     // Catch: java.lang.Throwable -> L46
            goto L11
        L25:
            r2.onFailed(r5)     // Catch: java.lang.Throwable -> L46
            goto L11
        L29:
            java.lang.String r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG     // Catch: java.lang.Throwable -> L46
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46
            r5.<init>()     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = "handleTempSaveCallback id:"
            r5.append(r1)     // Catch: java.lang.Throwable -> L46
            r5.append(r3)     // Catch: java.lang.Throwable -> L46
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L46
            com.ss.android.socialbase.downloader.logger.Logger.d(r4, r5)     // Catch: java.lang.Throwable -> L46
            android.util.SparseArray<java.lang.Boolean> r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileStatusMap     // Catch: java.lang.Throwable -> L46
            r4.remove(r3)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
            return
        L46:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
            throw r3
    }

    public static boolean hasDownloadCacheHeader(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r4) {
            r0 = 0
            if (r4 == 0) goto L48
            int r1 = r4.size()
            if (r1 != 0) goto La
            goto L48
        La:
            java.util.Iterator r4 = r4.iterator()
        Le:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L48
            java.lang.Object r1 = r4.next()
            com.ss.android.socialbase.downloader.model.HttpHeader r1 = (com.ss.android.socialbase.downloader.model.HttpHeader) r1
            if (r1 == 0) goto Le
            java.lang.String r2 = r1.getName()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto Le
            java.lang.String r2 = r1.getValue()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L31
            goto Le
        L31:
            java.lang.String r2 = r1.getName()
            java.lang.String r3 = "download-tc21-1-15"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto Le
            java.lang.String r1 = r1.getValue()
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto Le
            r0 = 1
        L48:
            return r0
    }

    private static boolean hasExternalStoragePermission(android.content.Context r1) {
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            int r1 = r1.checkCallingOrSelfPermission(r0)
            if (r1 != 0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    public static java.lang.String hexToString(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L8
            r5 = 0
            return r5
        L8:
            int r0 = r5.length()
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            r2 = 0
        L11:
            if (r2 >= r0) goto L2e
            int r3 = r2 * 2
            int r4 = r3 + 2
            java.lang.String r3 = r5.substring(r3, r4)     // Catch: java.lang.Exception -> L27
            r4 = 16
            int r3 = java.lang.Integer.parseInt(r3, r4)     // Catch: java.lang.Exception -> L27
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3     // Catch: java.lang.Exception -> L27
            r1[r2] = r3     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r3 = move-exception
            r3.printStackTrace()
        L2b:
            int r2 = r2 + 1
            goto L11
        L2e:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L37
            java.lang.String r2 = "utf-8"
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L37
            r5 = r0
            goto L3b
        L37:
            r0 = move-exception
            r0.printStackTrace()
        L3b:
            return r5
    }

    public static boolean isChunkedTask(long r2) {
            r0 = -1
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 != 0) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            return r2
    }

    public static boolean isChunkedTask(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r7) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            r1 = 8
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r1)
            r2 = 1
            r3 = -1
            if (r1 == 0) goto L27
            java.lang.String r1 = "Transfer-Encoding"
            java.lang.String r1 = r7.getResponseHeaderField(r1)
            java.lang.String r5 = "chunked"
            boolean r1 = r5.equals(r1)
            if (r1 != 0) goto L25
            long r5 = getContentLength(r7)
            int r7 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r7 != 0) goto L26
        L25:
            r0 = r2
        L26:
            return r0
        L27:
            long r5 = getContentLength(r7)
            int r7 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r7 != 0) goto L30
            r0 = r2
        L30:
            return r0
    }

    public static boolean isConnectionException(java.lang.Throwable r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r2 = getThrowableMsg(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L17
            java.lang.String r1 = "Exception in connect"
            boolean r2 = r2.contains(r1)
            if (r2 == 0) goto L17
            r0 = 1
        L17:
            return r0
    }

    public static boolean isDownloadSuccessAndFileNotExist(int r1, java.lang.String r2, java.lang.String r3) {
            r0 = -3
            if (r1 != r0) goto Lb
            boolean r1 = isFileExist(r2, r3)
            if (r1 != 0) goto Lb
            r1 = 1
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static boolean isDownloaderProcess() {
            java.lang.Boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sIsDownloaderProcess
            if (r0 == 0) goto L9
            boolean r0 = r0.booleanValue()
            return r0
        L9:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            java.lang.String r0 = getCurProcessName(r0)
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            java.lang.String r2 = r2.getPackageName()
            r1.append(r2)
            java.lang.String r2 = ":downloader"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3a
            r0 = 1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.ss.android.socialbase.downloader.utils.DownloadUtils.sIsDownloaderProcess = r0
            goto L41
        L3a:
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.ss.android.socialbase.downloader.utils.DownloadUtils.sIsDownloaderProcess = r0
        L41:
            java.lang.Boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sIsDownloaderProcess
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean isFileDownloaded(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            boolean r0 = r2.isForce()
            java.lang.String r1 = r2.getMd5()
            boolean r2 = isFileDownloaded(r2, r0, r1)
            return r2
    }

    public static boolean isFileDownloaded(com.ss.android.socialbase.downloader.model.DownloadInfo r3, boolean r4, java.lang.String r5) {
            r0 = 0
            if (r4 != 0) goto L3f
            java.lang.String r4 = r3.getSavePath()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L3f
            java.lang.String r4 = r3.getName()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L18
            goto L3f
        L18:
            java.io.File r4 = new java.io.File     // Catch: java.lang.OutOfMemoryError -> L3b
            java.lang.String r1 = r3.getSavePath()     // Catch: java.lang.OutOfMemoryError -> L3b
            java.lang.String r2 = r3.getName()     // Catch: java.lang.OutOfMemoryError -> L3b
            r4.<init>(r1, r2)     // Catch: java.lang.OutOfMemoryError -> L3b
            boolean r4 = r4.exists()     // Catch: java.lang.OutOfMemoryError -> L3b
            if (r4 == 0) goto L3f
            java.lang.String r4 = r3.getSavePath()     // Catch: java.lang.OutOfMemoryError -> L3b
            java.lang.String r3 = r3.getName()     // Catch: java.lang.OutOfMemoryError -> L3b
            boolean r3 = checkMd5Valid(r4, r3, r5)     // Catch: java.lang.OutOfMemoryError -> L3b
            if (r3 == 0) goto L3f
            r3 = 1
            return r3
        L3b:
            r3 = move-exception
            r3.printStackTrace()
        L3f:
            return r0
    }

    public static boolean isFileDownloaded(java.lang.String r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            r0 = 0
            if (r4 != 0) goto L27
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L27
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L10
            goto L27
        L10:
            java.io.File r4 = new java.io.File     // Catch: java.lang.OutOfMemoryError -> L23
            r4.<init>(r1, r2)     // Catch: java.lang.OutOfMemoryError -> L23
            boolean r4 = r4.exists()     // Catch: java.lang.OutOfMemoryError -> L23
            if (r4 == 0) goto L27
            boolean r1 = checkMd5Valid(r1, r2, r3)     // Catch: java.lang.OutOfMemoryError -> L23
            if (r1 == 0) goto L27
            r1 = 1
            return r1
        L23:
            r1 = move-exception
            r1.printStackTrace()
        L27:
            return r0
    }

    public static boolean isFileDownloaded(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = 0
            if (r3 != 0) goto L28
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 != 0) goto L28
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L10
            goto L28
        L10:
            java.io.File r3 = new java.io.File     // Catch: java.lang.OutOfMemoryError -> L24
            r3.<init>(r1, r2)     // Catch: java.lang.OutOfMemoryError -> L24
            boolean r3 = r3.exists()     // Catch: java.lang.OutOfMemoryError -> L24
            if (r3 == 0) goto L28
            r3 = 0
            boolean r1 = checkMd5Valid(r1, r2, r3)     // Catch: java.lang.OutOfMemoryError -> L24
            if (r1 == 0) goto L28
            r1 = 1
            return r1
        L24:
            r1 = move-exception
            r1.printStackTrace()
        L28:
            return r0
    }

    public static boolean isFileExist(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L17
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L17
        Ld:
            java.io.File r0 = new java.io.File
            r0.<init>(r1, r2)
            boolean r1 = r0.exists()
            return r1
        L17:
            r1 = 0
            return r1
    }

    public static boolean isForbiddenException(java.lang.Throwable r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = getThrowableMsg(r4)
            boolean r2 = r4 instanceof com.ss.android.socialbase.downloader.exception.DownloadHttpException
            r3 = 1
            if (r2 == 0) goto L28
            com.ss.android.socialbase.downloader.exception.DownloadHttpException r4 = (com.ss.android.socialbase.downloader.exception.DownloadHttpException) r4
            if (r4 == 0) goto L19
            int r4 = r4.getHttpStatusCode()
            r2 = 403(0x193, float:5.65E-43)
            if (r4 == r2) goto L27
        L19:
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L28
            java.lang.String r4 = "403"
            boolean r4 = r1.contains(r4)
            if (r4 == 0) goto L28
        L27:
            return r3
        L28:
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L37
            java.lang.String r4 = "Forbidden"
            boolean r4 = r1.contains(r4)
            if (r4 == 0) goto L37
            r0 = r3
        L37:
            return r0
    }

    public static boolean isHeaderEqual(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r3, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r4) {
            if (r3 != r4) goto L4
            r3 = 1
            return r3
        L4:
            r0 = 0
            if (r3 == 0) goto L24
            if (r4 != 0) goto La
            goto L24
        La:
            int r1 = r3.size()
            int r2 = r4.size()
            if (r1 == r2) goto L15
            return r0
        L15:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>(r3)
            java.util.HashSet r3 = new java.util.HashSet
            r3.<init>(r4)
            boolean r3 = r0.equals(r3)
            return r3
        L24:
            return r0
    }

    public static boolean isHttpDataDirtyError(com.ss.android.socialbase.downloader.exception.BaseException r1) {
            if (r1 == 0) goto Lc
            int r1 = r1.getErrorCode()
            r0 = 1051(0x41b, float:1.473E-42)
            if (r1 != r0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public static boolean isHttpsError(com.ss.android.socialbase.downloader.exception.BaseException r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r1 = r3.getErrorCode()
            r2 = 1011(0x3f3, float:1.417E-42)
            if (r1 == r2) goto L1a
            java.lang.Throwable r1 = r3.getCause()
            if (r1 == 0) goto L1b
            java.lang.Throwable r3 = r3.getCause()
            boolean r3 = r3 instanceof javax.net.ssl.SSLHandshakeException
            if (r3 == 0) goto L1b
        L1a:
            r0 = 1
        L1b:
            return r0
    }

    public static boolean isInsufficientSpaceError(java.lang.Throwable r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.String r2 = "ENOSPC"
            r3 = 1
            if (r1 == 0) goto L42
            com.ss.android.socialbase.downloader.exception.BaseException r5 = (com.ss.android.socialbase.downloader.exception.BaseException) r5
            int r1 = r5.getErrorCode()
            r4 = 1006(0x3ee, float:1.41E-42)
            if (r1 != r4) goto L16
            return r3
        L16:
            r4 = 1023(0x3ff, float:1.434E-42)
            if (r1 == r4) goto L2d
            r4 = 1039(0x40f, float:1.456E-42)
            if (r1 == r4) goto L2d
            r4 = 1040(0x410, float:1.457E-42)
            if (r1 == r4) goto L2d
            r4 = 1054(0x41e, float:1.477E-42)
            if (r1 == r4) goto L2d
            r4 = 1064(0x428, float:1.491E-42)
            if (r1 != r4) goto L2b
            goto L2d
        L2b:
            r1 = r0
            goto L2e
        L2d:
            r1 = r3
        L2e:
            if (r1 == 0) goto L57
            java.lang.String r5 = r5.getMessage()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L41
            boolean r5 = r5.contains(r2)
            if (r5 == 0) goto L41
            r0 = r3
        L41:
            return r0
        L42:
            boolean r1 = r5 instanceof java.io.IOException
            if (r1 == 0) goto L57
            java.lang.String r5 = getThrowableMsg(r5)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L57
            boolean r5 = r5.contains(r2)
            if (r5 == 0) goto L57
            r0 = r3
        L57:
            return r0
    }

    public static boolean isMainProcess() {
            java.lang.Boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sIsMainProcess
            if (r0 == 0) goto L9
            boolean r0 = r0.booleanValue()
            return r0
        L9:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            java.lang.String r0 = getCurProcessName(r0)
            r1 = 0
            if (r0 == 0) goto L23
            java.lang.String r2 = ":"
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto L23
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r1)
            com.ss.android.socialbase.downloader.utils.DownloadUtils.sIsMainProcess = r0
            goto L3a
        L23:
            if (r0 == 0) goto L34
            android.content.Context r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            java.lang.String r2 = r2.getPackageName()
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L34
            r1 = 1
        L34:
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r1)
            com.ss.android.socialbase.downloader.utils.DownloadUtils.sIsMainProcess = r0
        L3a:
            java.lang.Boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.sIsMainProcess
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean isMainThread() {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public static boolean isMd5Valid(int r1) {
            if (r1 == 0) goto L8
            r0 = 2
            if (r1 != r0) goto L6
            goto L8
        L6:
            r1 = 0
            goto L9
        L8:
            r1 = 1
        L9:
            return r1
    }

    public static boolean isNetNotAvailableException(java.lang.Throwable r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r2 = getThrowableMsg(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L17
            java.lang.String r1 = "network not available"
            boolean r2 = r2.contains(r1)
            if (r2 == 0) goto L17
            r0 = 1
        L17:
            return r0
    }

    public static boolean isNetworkConnected(android.content.Context r1) {
            r0 = 0
            android.net.ConnectivityManager r1 = getConnectivityManager(r1)     // Catch: java.lang.Exception -> L14
            if (r1 != 0) goto L8
            return r0
        L8:
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L14
            if (r1 != 0) goto Lf
            return r0
        Lf:
            boolean r1 = r1.isConnected()     // Catch: java.lang.Exception -> L14
            return r1
        L14:
            return r0
    }

    public static boolean isNetworkError(java.lang.Throwable r2) {
            boolean r0 = r2 instanceof com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = (com.ss.android.socialbase.downloader.exception.BaseException) r2
            int r2 = r2.getErrorCode()
            r0 = 1055(0x41f, float:1.478E-42)
            if (r2 == r0) goto L5a
            r0 = 1023(0x3ff, float:1.434E-42)
            if (r2 == r0) goto L5a
            r0 = 1041(0x411, float:1.459E-42)
            if (r2 == r0) goto L5a
            r0 = 1022(0x3fe, float:1.432E-42)
            if (r2 == r0) goto L5a
            r0 = 1048(0x418, float:1.469E-42)
            if (r2 == r0) goto L5a
            r0 = 1056(0x420, float:1.48E-42)
            if (r2 == r0) goto L5a
            r0 = 1057(0x421, float:1.481E-42)
            if (r2 == r0) goto L5a
            r0 = 1058(0x422, float:1.483E-42)
            if (r2 == r0) goto L5a
            r0 = 1059(0x423, float:1.484E-42)
            if (r2 == r0) goto L5a
            r0 = 1060(0x424, float:1.485E-42)
            if (r2 == r0) goto L5a
            r0 = 1061(0x425, float:1.487E-42)
            if (r2 == r0) goto L5a
            r0 = 1067(0x42b, float:1.495E-42)
            if (r2 == r0) goto L5a
            r0 = 1049(0x419, float:1.47E-42)
            if (r2 == r0) goto L5a
            r0 = 1047(0x417, float:1.467E-42)
            if (r2 == r0) goto L5a
            r0 = 1051(0x41b, float:1.473E-42)
            if (r2 == r0) goto L5a
            r0 = 1004(0x3ec, float:1.407E-42)
            if (r2 == r0) goto L5a
            r0 = 1011(0x3f3, float:1.417E-42)
            if (r2 == r0) goto L5a
            r0 = 1002(0x3ea, float:1.404E-42)
            if (r2 == r0) goto L5a
            r0 = 1013(0x3f5, float:1.42E-42)
            if (r2 != r0) goto L59
            goto L5a
        L59:
            return r1
        L5a:
            r2 = 1
            return r2
    }

    public static boolean isNoWifiAndInNet() {
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 == 0) goto L14
            boolean r1 = isWifi(r0)
            if (r1 != 0) goto L14
            boolean r0 = isNetworkConnected(r0)
            if (r0 == 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    public static boolean isProcessNameSame(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            java.lang.String r0 = getCurProcessName(r0)
            if (r0 == 0) goto L19
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L19
            return r1
        L19:
            r2 = 0
            return r2
    }

    public static boolean isResponseCode304Error(java.lang.Throwable r1) {
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getTTNetHandler()
            boolean r1 = r0.isResponseCode304Error(r1)
            return r1
    }

    public static boolean isResponseCode412Error(java.lang.Throwable r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r2 = getThrowableMsg(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L17
            java.lang.String r1 = "Precondition Failed"
            boolean r2 = r2.contains(r1)
            if (r2 == 0) goto L17
            r0 = 1
        L17:
            return r0
    }

    public static boolean isResponseCode416Error(java.lang.Throwable r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r2 = getThrowableMsg(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L17
            java.lang.String r1 = "Requested Range Not Satisfiable"
            boolean r2 = r2.contains(r1)
            if (r2 == 0) goto L17
            r0 = 1
        L17:
            return r0
    }

    public static boolean isResponseCodeError(com.ss.android.socialbase.downloader.exception.BaseException r2) {
            boolean r0 = r2 instanceof com.ss.android.socialbase.downloader.exception.DownloadHttpException
            if (r0 == 0) goto L18
            com.ss.android.socialbase.downloader.exception.DownloadHttpException r2 = (com.ss.android.socialbase.downloader.exception.DownloadHttpException) r2
            int r0 = r2.getHttpStatusCode()
            r1 = 412(0x19c, float:5.77E-43)
            if (r0 == r1) goto L16
            int r2 = r2.getHttpStatusCode()
            r0 = 416(0x1a0, float:5.83E-43)
            if (r2 != r0) goto L18
        L16:
            r2 = 1
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    public static boolean isResponseCodeError(java.lang.Throwable r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r2 = getThrowableMsg(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L1f
            java.lang.String r1 = "Requested Range Not Satisfiable"
            boolean r1 = r2.contains(r1)
            if (r1 != 0) goto L1e
            java.lang.String r1 = "Precondition Failed"
            boolean r2 = r2.contains(r1)
            if (r2 == 0) goto L1f
        L1e:
            r0 = 1
        L1f:
            return r0
    }

    public static boolean isResponseCodeValid(int r1) {
            r0 = 206(0xce, float:2.89E-43)
            if (r1 == r0) goto Lb
            r0 = 200(0xc8, float:2.8E-43)
            if (r1 != r0) goto L9
            goto Lb
        L9:
            r1 = 0
            goto Lc
        Lb:
            r1 = 1
        Lc:
            return r1
    }

    public static boolean isResponseDataFromBegin(int r1) {
            r0 = 200(0xc8, float:2.8E-43)
            if (r1 == r0) goto Ld
            r0 = 201(0xc9, float:2.82E-43)
            if (r1 == r0) goto Ld
            if (r1 != 0) goto Lb
            goto Ld
        Lb:
            r1 = 0
            goto Le
        Ld:
            r1 = 1
        Le:
            return r1
    }

    public static boolean isSavePathSecurity(java.lang.String r4) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "save_path_security"
            int r0 = r0.optInt(r1)
            r1 = 1
            if (r0 <= 0) goto L3f
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 == 0) goto L3f
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 != 0) goto L3f
            java.lang.String r2 = "/data"
            boolean r2 = r4.startsWith(r2)
            if (r2 == 0) goto L22
            goto L3f
        L22:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Android/data/"
            r2.append(r3)
            java.lang.String r0 = r0.getPackageName()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            boolean r4 = r4.contains(r0)
            if (r4 != 0) goto L3f
            r4 = 0
            return r4
        L3f:
            return r1
    }

    private static boolean isSdcardAvailable() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L17
            java.lang.String r1 = "mounted_ro"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L15
            goto L17
        L15:
            r0 = 0
            goto L18
        L17:
            r0 = 1
        L18:
            return r0
    }

    private static boolean isSdcardWritable() {
            java.lang.String r0 = "mounted"
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> Lb
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> Lb
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static boolean isTimeOutException(java.lang.Throwable r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = getThrowableMsg(r2)
            boolean r2 = r2 instanceof java.net.SocketTimeoutException
            if (r2 != 0) goto L22
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L23
            java.lang.String r2 = "time out"
            boolean r2 = r1.contains(r2)
            if (r2 != 0) goto L22
            java.lang.String r2 = "Time-out"
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto L23
        L22:
            r0 = 1
        L23:
            return r0
    }

    public static boolean isValidDirectory(java.io.File r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = r2.exists()     // Catch: java.lang.Exception -> L1a
            if (r1 != 0) goto L11
            boolean r1 = r2.mkdirs()     // Catch: java.lang.Exception -> L1a
            if (r1 != 0) goto L11
            return r0
        L11:
            boolean r2 = r2.isDirectory()     // Catch: java.lang.Exception -> L1a
            if (r2 != 0) goto L18
            return r0
        L18:
            r2 = 1
            return r2
        L1a:
            return r0
    }

    public static boolean isWaitWifiAndInNet(com.ss.android.socialbase.downloader.exception.BaseException r0, com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            if (r1 == 0) goto L14
            boolean r0 = r1.isOnlyWifi()
            if (r0 == 0) goto L14
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r0 = isNetworkConnected(r0)
            if (r0 == 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    public static boolean isWifi(android.content.Context r2) {
            r0 = 0
            android.net.ConnectivityManager r2 = getConnectivityManager(r2)     // Catch: java.lang.Exception -> L1d
            if (r2 != 0) goto L8
            return r0
        L8:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L1d
            if (r2 == 0) goto L1d
            boolean r1 = r2.isAvailable()     // Catch: java.lang.Exception -> L1d
            if (r1 != 0) goto L15
            goto L1d
        L15:
            int r2 = r2.getType()     // Catch: java.lang.Exception -> L1d
            r1 = 1
            if (r1 != r2) goto L1d
            r0 = r1
        L1d:
            return r0
    }

    public static java.lang.String md5Hex(java.lang.String r3) {
            r0 = 0
            if (r3 == 0) goto L22
            int r1 = r3.length()     // Catch: java.lang.Exception -> L22
            if (r1 != 0) goto La
            goto L22
        La:
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = "UTF-8"
            byte[] r3 = r3.getBytes(r2)     // Catch: java.lang.Exception -> L22
            r1.update(r3)     // Catch: java.lang.Exception -> L22
            byte[] r3 = r1.digest()     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = toHexString(r3)     // Catch: java.lang.Exception -> L22
            return r3
        L22:
            return r0
    }

    public static boolean moveFile(java.io.File r5, java.io.File r6) throws com.ss.android.socialbase.downloader.exception.BaseException {
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "moveFile1: src:"
            r1.append(r2)
            java.lang.String r2 = r5.getPath()
            r1.append(r2)
            java.lang.String r2 = " dest:"
            r1.append(r2)
            java.lang.String r3 = r6.getPath()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            android.util.Log.e(r0, r1)
            boolean r0 = r5.renameTo(r6)
            if (r0 != 0) goto L5c
            boolean r0 = copyFile(r5, r6)
            java.lang.String r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG     // Catch: java.lang.Throwable -> L58
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L58
            r3.<init>()     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = "moveFile2: src:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = r5.getPath()     // Catch: java.lang.Throwable -> L58
            r3.append(r4)     // Catch: java.lang.Throwable -> L58
            r3.append(r2)     // Catch: java.lang.Throwable -> L58
            java.lang.String r6 = r6.getPath()     // Catch: java.lang.Throwable -> L58
            r3.append(r6)     // Catch: java.lang.Throwable -> L58
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L58
            android.util.Log.e(r1, r6)     // Catch: java.lang.Throwable -> L58
            r5.delete()     // Catch: java.lang.Throwable -> L58
            goto L5c
        L58:
            r5 = move-exception
            r5.printStackTrace()
        L5c:
            return r0
    }

    public static boolean needNotifyDownloaderProcess() {
            boolean r0 = isDownloaderProcess()
            r1 = 1
            if (r0 != 0) goto L18
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isDownloadInMultiProcess()
            if (r0 == 0) goto L18
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            boolean r0 = r0.isServiceAlive()
            if (r0 == 0) goto L18
            goto L19
        L18:
            r1 = 0
        L19:
            return r1
    }

    private static java.lang.String parseContentDisposition(java.lang.String r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.util.regex.Pattern r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.CONTENT_DISPOSITION_QUOTED_PATTERN     // Catch: java.lang.Exception -> L3f
            if (r1 != 0) goto L10
            java.lang.String r1 = "attachment;\\s*filename\\s*=\\s*\"([^\"]*)\""
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1)     // Catch: java.lang.Exception -> L3f
            com.ss.android.socialbase.downloader.utils.DownloadUtils.CONTENT_DISPOSITION_QUOTED_PATTERN = r1     // Catch: java.lang.Exception -> L3f
        L10:
            java.util.regex.Pattern r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.CONTENT_DISPOSITION_QUOTED_PATTERN     // Catch: java.lang.Exception -> L3f
            java.util.regex.Matcher r1 = r1.matcher(r4)     // Catch: java.lang.Exception -> L3f
            boolean r2 = r1.find()     // Catch: java.lang.Exception -> L3f
            r3 = 1
            if (r2 == 0) goto L22
            java.lang.String r4 = r1.group(r3)     // Catch: java.lang.Exception -> L3f
            return r4
        L22:
            java.util.regex.Pattern r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.CONTENT_DISPOSITION_NON_QUOTED_PATTERN     // Catch: java.lang.Exception -> L3f
            if (r1 != 0) goto L2e
            java.lang.String r1 = "attachment;\\s*filename\\s*=\\s*(.*)"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1)     // Catch: java.lang.Exception -> L3f
            com.ss.android.socialbase.downloader.utils.DownloadUtils.CONTENT_DISPOSITION_NON_QUOTED_PATTERN = r1     // Catch: java.lang.Exception -> L3f
        L2e:
            java.util.regex.Pattern r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.CONTENT_DISPOSITION_NON_QUOTED_PATTERN     // Catch: java.lang.Exception -> L3f
            java.util.regex.Matcher r4 = r1.matcher(r4)     // Catch: java.lang.Exception -> L3f
            boolean r1 = r4.find()     // Catch: java.lang.Exception -> L3f
            if (r1 == 0) goto L3f
            java.lang.String r4 = r4.group(r3)     // Catch: java.lang.Exception -> L3f
            return r4
        L3f:
            return r0
    }

    public static long parseContentLengthFromContentRange(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r5) {
            r0 = -1
            if (r5 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = "Content-Range"
            java.lang.String r5 = getRespHeadFieldIgnoreCase(r5, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 == 0) goto L12
            return r0
        L12:
            java.lang.String r2 = "bytes (\\d+)-(\\d+)/\\d+"
            java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r2)     // Catch: java.lang.Exception -> L39
            java.util.regex.Matcher r5 = r2.matcher(r5)     // Catch: java.lang.Exception -> L39
            boolean r2 = r5.find()     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L50
            r2 = 1
            java.lang.String r2 = r5.group(r2)     // Catch: java.lang.Exception -> L39
            long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Exception -> L39
            r4 = 2
            java.lang.String r5 = r5.group(r4)     // Catch: java.lang.Exception -> L39
            long r0 = java.lang.Long.parseLong(r5)     // Catch: java.lang.Exception -> L39
            long r0 = r0 - r2
            r2 = 1
            long r0 = r0 + r2
            return r0
        L39:
            r5 = move-exception
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "parse content-length from content-range failed "
            r3.append(r4)
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r5)
        L50:
            return r0
    }

    public static long parseContentRangeOfInstanceLength(java.lang.String r5) {
            r0 = -1
            if (r5 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = "/"
            java.lang.String[] r2 = r5.split(r2)
            int r3 = r2.length
            r4 = 2
            if (r3 < r4) goto L2d
            r3 = 1
            r2 = r2[r3]     // Catch: java.lang.NumberFormatException -> L17
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L17
            return r0
        L17:
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "parse instance length failed with "
            r3.append(r4)
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r5)
        L2d:
            return r0
    }

    public static void parseException(java.lang.Throwable r3, java.lang.String r4) throws com.ss.android.socialbase.downloader.exception.BaseException {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L8
            r0 = r4
            goto La
        L8:
            java.lang.String r0 = ""
        La:
            boolean r1 = r3 instanceof com.ss.android.socialbase.downloader.exception.BaseException
            if (r1 != 0) goto La5
            boolean r1 = r3 instanceof javax.net.ssl.SSLHandshakeException
            if (r1 != 0) goto L99
            boolean r1 = isTimeOutException(r3)
            if (r1 != 0) goto L8d
            boolean r1 = isResponseCode412Error(r3)
            r2 = 1004(0x3ec, float:1.407E-42)
            if (r1 != 0) goto L81
            boolean r1 = isResponseCode416Error(r3)
            if (r1 != 0) goto L75
            boolean r1 = isForbiddenException(r3)
            if (r1 != 0) goto L69
            boolean r1 = isNetNotAvailableException(r3)
            if (r1 != 0) goto L5d
            boolean r1 = isConnectionException(r3)
            if (r1 != 0) goto L51
            boolean r1 = r3 instanceof java.io.IOException
            if (r1 == 0) goto L45
            parseTTNetException(r3, r4)
            java.io.IOException r3 = (java.io.IOException) r3
            parseIOException(r3, r4)
            return
        L45:
            com.ss.android.socialbase.downloader.exception.BaseException r4 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r3 = getErrorMsgWithTagPrefix(r3, r0)
            r4.<init>(r1, r3)
            throw r4
        L51:
            com.ss.android.socialbase.downloader.exception.BaseException r4 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1041(0x411, float:1.459E-42)
            java.lang.String r3 = getErrorMsgWithTagPrefix(r3, r0)
            r4.<init>(r1, r3)
            throw r4
        L5d:
            com.ss.android.socialbase.downloader.exception.BaseException r4 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1049(0x419, float:1.47E-42)
            java.lang.String r3 = getErrorMsgWithTagPrefix(r3, r0)
            r4.<init>(r1, r3)
            throw r4
        L69:
            com.ss.android.socialbase.downloader.exception.BaseException r4 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1047(0x417, float:1.467E-42)
            java.lang.String r3 = getErrorMsgWithTagPrefix(r3, r0)
            r4.<init>(r1, r3)
            throw r4
        L75:
            com.ss.android.socialbase.downloader.exception.DownloadHttpException r4 = new com.ss.android.socialbase.downloader.exception.DownloadHttpException
            r1 = 416(0x1a0, float:5.83E-43)
            java.lang.String r3 = getErrorMsgWithTagPrefix(r3, r0)
            r4.<init>(r2, r1, r3)
            throw r4
        L81:
            com.ss.android.socialbase.downloader.exception.DownloadHttpException r4 = new com.ss.android.socialbase.downloader.exception.DownloadHttpException
            r1 = 412(0x19c, float:5.77E-43)
            java.lang.String r3 = getErrorMsgWithTagPrefix(r3, r0)
            r4.<init>(r2, r1, r3)
            throw r4
        L8d:
            com.ss.android.socialbase.downloader.exception.BaseException r4 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1048(0x418, float:1.469E-42)
            java.lang.String r3 = getErrorMsgWithTagPrefix(r3, r0)
            r4.<init>(r1, r3)
            throw r4
        L99:
            com.ss.android.socialbase.downloader.exception.BaseException r4 = new com.ss.android.socialbase.downloader.exception.BaseException
            r1 = 1011(0x3f3, float:1.417E-42)
            java.lang.String r3 = getErrorMsgWithTagPrefix(r3, r0)
            r4.<init>(r1, r3)
            throw r4
        La5:
            com.ss.android.socialbase.downloader.exception.BaseException r3 = (com.ss.android.socialbase.downloader.exception.BaseException) r3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.String r0 = "-"
            r4.append(r0)
            java.lang.String r0 = r3.getErrorMessage()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.setErrorMsg(r4)
            throw r3
    }

    public static java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> parseHostChunkList(java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r7) {
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            java.util.Iterator r2 = r7.iterator()
        Le:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L8b
            java.lang.Object r3 = r2.next()
            com.ss.android.socialbase.downloader.model.DownloadChunk r3 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r3
            if (r3 != 0) goto L1d
            goto Le
        L1d:
            boolean r4 = r3.isHostChunk()
            if (r4 == 0) goto L4e
            int r4 = r3.getChunkIndex()
            r0.put(r4, r3)
            int r4 = r3.getChunkIndex()
            java.lang.Object r4 = r1.get(r4)
            java.util.List r4 = (java.util.List) r4
            if (r4 == 0) goto Le
            java.util.Iterator r5 = r4.iterator()
        L3a:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L4a
            java.lang.Object r6 = r5.next()
            com.ss.android.socialbase.downloader.model.DownloadChunk r6 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r6
            r6.setHostChunk(r3)
            goto L3a
        L4a:
            r3.setSubChunkList(r4)
            goto Le
        L4e:
            int r4 = r3.getHostChunkIndex()
            java.lang.Object r4 = r0.get(r4)
            com.ss.android.socialbase.downloader.model.DownloadChunk r4 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r4
            if (r4 == 0) goto L6f
            java.util.List r5 = r4.getSubChunkList()
            if (r5 != 0) goto L68
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r4.setSubChunkList(r5)
        L68:
            r3.setHostChunk(r4)
            r5.add(r3)
            goto Le
        L6f:
            int r4 = r3.getHostChunkIndex()
            java.lang.Object r4 = r1.get(r4)
            java.util.List r4 = (java.util.List) r4
            if (r4 != 0) goto L87
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            int r5 = r3.getHostChunkIndex()
            r1.put(r5, r4)
        L87:
            r4.add(r3)
            goto Le
        L8b:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        L91:
            int r3 = r0.size()
            if (r2 >= r3) goto La5
            int r3 = r0.keyAt(r2)
            java.lang.Object r3 = r0.get(r3)
            r1.add(r3)
            int r2 = r2 + 1
            goto L91
        La5:
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto Lac
            goto Lad
        Lac:
            r7 = r1
        Lad:
            return r7
    }

    public static void parseIOException(java.io.IOException r1, java.lang.String r2) throws com.ss.android.socialbase.downloader.exception.BaseException {
            if (r2 != 0) goto L4
            java.lang.String r2 = ""
        L4:
            java.lang.String r2 = getErrorMsgWithTagPrefix(r1, r2)
            boolean r0 = r1 instanceof java.net.ConnectException
            if (r0 != 0) goto Ld6
            boolean r0 = r1 instanceof java.net.UnknownHostException
            if (r0 != 0) goto Lce
            boolean r0 = r1 instanceof java.net.NoRouteToHostException
            if (r0 != 0) goto Lc6
            boolean r0 = r1 instanceof java.net.UnknownServiceException
            if (r0 != 0) goto Lbe
            boolean r0 = r1 instanceof java.net.PortUnreachableException
            if (r0 != 0) goto Lb6
            boolean r0 = r1 instanceof java.net.SocketTimeoutException
            if (r0 != 0) goto Lae
            boolean r0 = r1 instanceof java.net.SocketException
            if (r0 != 0) goto La6
            boolean r0 = r1 instanceof java.net.HttpRetryException
            if (r0 != 0) goto L9e
            boolean r0 = r1 instanceof java.net.ProtocolException
            if (r0 != 0) goto L96
            boolean r0 = r1 instanceof java.net.MalformedURLException
            if (r0 != 0) goto L8e
            boolean r0 = r1 instanceof java.io.FileNotFoundException
            if (r0 != 0) goto L86
            boolean r0 = r1 instanceof java.io.InterruptedIOException
            if (r0 != 0) goto L7e
            boolean r0 = r1 instanceof java.io.UnsupportedEncodingException
            if (r0 != 0) goto L76
            boolean r0 = r1 instanceof java.io.EOFException
            if (r0 != 0) goto L6e
            boolean r0 = r1 instanceof okhttp3.internal.http2.StreamResetException
            if (r0 != 0) goto L66
            boolean r0 = r1 instanceof javax.net.ssl.SSLException
            if (r0 != 0) goto L5e
            boolean r1 = isInsufficientSpaceError(r1)
            if (r1 == 0) goto L56
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1006(0x3ee, float:1.41E-42)
            r1.<init>(r0, r2)
            throw r1
        L56:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1023(0x3ff, float:1.434E-42)
            r1.<init>(r0, r2)
            throw r1
        L5e:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1011(0x3f3, float:1.417E-42)
            r1.<init>(r0, r2)
            throw r1
        L66:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1067(0x42b, float:1.495E-42)
            r1.<init>(r0, r2)
            throw r1
        L6e:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1066(0x42a, float:1.494E-42)
            r1.<init>(r0, r2)
            throw r1
        L76:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1065(0x429, float:1.492E-42)
            r1.<init>(r0, r2)
            throw r1
        L7e:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1064(0x428, float:1.491E-42)
            r1.<init>(r0, r2)
            throw r1
        L86:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1063(0x427, float:1.49E-42)
            r1.<init>(r0, r2)
            throw r1
        L8e:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1062(0x426, float:1.488E-42)
            r1.<init>(r0, r2)
            throw r1
        L96:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1061(0x425, float:1.487E-42)
            r1.<init>(r0, r2)
            throw r1
        L9e:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1060(0x424, float:1.485E-42)
            r1.<init>(r0, r2)
            throw r1
        La6:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1059(0x423, float:1.484E-42)
            r1.<init>(r0, r2)
            throw r1
        Lae:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1048(0x418, float:1.469E-42)
            r1.<init>(r0, r2)
            throw r1
        Lb6:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1058(0x422, float:1.483E-42)
            r1.<init>(r0, r2)
            throw r1
        Lbe:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1057(0x421, float:1.481E-42)
            r1.<init>(r0, r2)
            throw r1
        Lc6:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1056(0x420, float:1.48E-42)
            r1.<init>(r0, r2)
            throw r1
        Lce:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1055(0x41f, float:1.478E-42)
            r1.<init>(r0, r2)
            throw r1
        Ld6:
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1041(0x411, float:1.459E-42)
            r1.<init>(r0, r2)
            throw r1
    }

    private static void parseTTNetException(java.lang.Throwable r2, java.lang.String r3) throws com.ss.android.socialbase.downloader.exception.DownloadTTNetException {
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getTTNetHandler()
            r1 = 0
            com.ss.android.socialbase.downloader.exception.DownloadTTNetException r0 = r0.translateTTNetException(r2, r1)
            if (r0 != 0) goto L17
            com.ss.android.socialbase.downloader.downloader.ITTNetHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getTTNetHandler()
            java.lang.Throwable r2 = r2.getCause()
            com.ss.android.socialbase.downloader.exception.DownloadTTNetException r0 = r0.translateTTNetException(r2, r1)
        L17:
            if (r0 != 0) goto L1a
            return
        L1a:
            java.lang.String r2 = getErrorMsgWithTagPrefix(r0, r3)
            com.ss.android.socialbase.downloader.exception.DownloadTTNetException r3 = new com.ss.android.socialbase.downloader.exception.DownloadTTNetException
            int r1 = r0.getErrorCode()
            r3.<init>(r1, r2)
            java.lang.String r2 = r0.getRequestLog()
            com.ss.android.socialbase.downloader.exception.DownloadTTNetException r2 = r3.setRequestLog(r2)
            throw r2
    }

    public static long parserMaxAge(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "max-age=([0-9]+)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            java.util.regex.Matcher r3 = r0.matcher(r3)
            boolean r0 = r3.find()
            if (r0 == 0) goto L27
            r0 = 1
            java.lang.String r3 = r3.group(r0)     // Catch: java.lang.Throwable -> L23
            long r1 = java.lang.Long.parseLong(r3)     // Catch: java.lang.Throwable -> L23
            goto L27
        L23:
            r3 = move-exception
            r3.printStackTrace()
        L27:
            return r1
    }

    public static void safeClose(android.database.Cursor... r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.length
            r1 = 0
        L5:
            if (r1 >= r0) goto L17
            r2 = r3[r1]
            if (r2 != 0) goto Lc
            goto L14
        Lc:
            r2.close()     // Catch: java.lang.Throwable -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            int r1 = r1 + 1
            goto L5
        L17:
            return
    }

    public static void safeClose(java.io.Closeable... r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.length
            r1 = 0
        L5:
            if (r1 >= r0) goto L17
            r2 = r3[r1]
            if (r2 != 0) goto Lc
            goto L14
        Lc:
            r2.close()     // Catch: java.lang.Throwable -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            int r1 = r1 + 1
            goto L5
        L17:
            return
    }

    public static void saveFileAsTargetName(com.ss.android.socialbase.downloader.model.DownloadInfo r17, com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r18, com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback r19) {
            r1 = r17
            r0 = r18
            r2 = r19
            java.lang.String r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "saveFileAsTargetName targetName is "
            r4.append(r5)
            java.lang.String r5 = r17.getTargetFilePath()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r3, r4)
            android.util.SparseArray<java.lang.Boolean> r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileStatusMap     // Catch: java.lang.Throwable -> L24a
            monitor-enter(r4)     // Catch: java.lang.Throwable -> L24a
            android.util.SparseArray<java.lang.Boolean> r5 = com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileStatusMap     // Catch: java.lang.Throwable -> L247
            int r6 = r17.getId()     // Catch: java.lang.Throwable -> L247
            java.lang.Object r5 = r5.get(r6)     // Catch: java.lang.Throwable -> L247
            java.lang.Boolean r6 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L247
            r7 = 1
            r8 = 0
            if (r5 != r6) goto L35
            r5 = r7
            goto L36
        L35:
            r5 = r8
        L36:
            if (r5 == 0) goto L62
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG     // Catch: java.lang.Throwable -> L247
            java.lang.String r5 = "has another same task is saving temp file"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r5)     // Catch: java.lang.Throwable -> L247
            if (r2 == 0) goto L60
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback>> r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileListeners     // Catch: java.lang.Throwable -> L247
            int r5 = r17.getId()     // Catch: java.lang.Throwable -> L247
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> L247
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> L247
            if (r0 != 0) goto L5d
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L247
            r0.<init>()     // Catch: java.lang.Throwable -> L247
            android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.depend.ITempFileSaveCompleteCallback>> r5 = com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileListeners     // Catch: java.lang.Throwable -> L247
            int r1 = r17.getId()     // Catch: java.lang.Throwable -> L247
            r5.put(r1, r0)     // Catch: java.lang.Throwable -> L247
        L5d:
            r0.add(r2)     // Catch: java.lang.Throwable -> L247
        L60:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L247
            return
        L62:
            java.lang.String r5 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG     // Catch: java.lang.Throwable -> L247
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L247
            r6.<init>()     // Catch: java.lang.Throwable -> L247
            java.lang.String r9 = "saveTempFileStatusMap put id:"
            r6.append(r9)     // Catch: java.lang.Throwable -> L247
            int r9 = r17.getId()     // Catch: java.lang.Throwable -> L247
            r6.append(r9)     // Catch: java.lang.Throwable -> L247
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L247
            com.ss.android.socialbase.downloader.logger.Logger.d(r5, r6)     // Catch: java.lang.Throwable -> L247
            android.util.SparseArray<java.lang.Boolean> r5 = com.ss.android.socialbase.downloader.utils.DownloadUtils.saveTempFileStatusMap     // Catch: java.lang.Throwable -> L247
            int r6 = r17.getId()     // Catch: java.lang.Throwable -> L247
            java.lang.Boolean r9 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L247
            r5.put(r6, r9)     // Catch: java.lang.Throwable -> L247
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L247
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L24a
            java.lang.String r5 = r17.getTempPath()     // Catch: java.lang.Throwable -> L24a
            java.lang.String r6 = r17.getTempName()     // Catch: java.lang.Throwable -> L24a
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L24a
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> L24a
            java.lang.String r6 = r17.getSavePath()     // Catch: java.lang.Throwable -> L24a
            java.lang.String r9 = r17.getName()     // Catch: java.lang.Throwable -> L24a
            r5.<init>(r6, r9)     // Catch: java.lang.Throwable -> L24a
            java.lang.String r6 = r17.getSavePath()     // Catch: java.lang.Throwable -> L24a
            boolean r6 = isSavePathSecurity(r6)     // Catch: java.lang.Throwable -> L24a
            boolean r9 = r5.exists()     // Catch: java.lang.Throwable -> L24a
            r10 = 1005(0x3ed, float:1.408E-42)
            r11 = 3
            r12 = 4
            r13 = 0
            r14 = 2
            if (r9 == 0) goto L16a
            java.lang.String r9 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG     // Catch: java.lang.Throwable -> L24a
            java.lang.String r15 = "targetFile exist"
            com.ss.android.socialbase.downloader.logger.Logger.d(r9, r15)     // Catch: java.lang.Throwable -> L24a
            java.lang.String r9 = r17.getMd5()     // Catch: java.lang.Throwable -> L24a
            int r9 = checkMd5Status(r5, r9)     // Catch: java.lang.Throwable -> L24a
            boolean r15 = isMd5Valid(r9)     // Catch: java.lang.Throwable -> L24a
            if (r15 == 0) goto Le3
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG     // Catch: java.lang.Throwable -> L24a
            java.lang.String r10 = "tempFile not exist , targetFile exists and md5 check valid"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r10)     // Catch: java.lang.Throwable -> L24a
            r1.setTTMd5CheckStatus(r9)     // Catch: java.lang.Throwable -> L24a
            if (r2 == 0) goto Lda
            r19.onSuccess()     // Catch: java.lang.Throwable -> L24a
        Lda:
            int r0 = r17.getId()     // Catch: java.lang.Throwable -> L24a
            handleTempSaveCallback(r0, r7, r13)     // Catch: java.lang.Throwable -> L24a
            goto L1a1
        Le3:
            boolean r15 = r4.exists()     // Catch: java.lang.Throwable -> L24a
            if (r15 != 0) goto L123
            com.ss.android.socialbase.downloader.exception.BaseException r15 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L24a
            java.lang.String r13 = "Can't save the temp downloaded file(%s/%s) to the target file(%s/%s) because tempFile is not exist and target file is exist but md5 verify invalid :%s"
            r3 = 5
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L24a
            java.lang.String r16 = r17.getTempPath()     // Catch: java.lang.Throwable -> L24a
            r3[r8] = r16     // Catch: java.lang.Throwable -> L24a
            java.lang.String r16 = r17.getTempName()     // Catch: java.lang.Throwable -> L24a
            r3[r7] = r16     // Catch: java.lang.Throwable -> L24a
            java.lang.String r16 = r17.getSavePath()     // Catch: java.lang.Throwable -> L24a
            r3[r14] = r16     // Catch: java.lang.Throwable -> L24a
            java.lang.String r16 = r17.getName()     // Catch: java.lang.Throwable -> L24a
            r3[r11] = r16     // Catch: java.lang.Throwable -> L24a
            java.lang.String r16 = getMd5StatusMsg(r9)     // Catch: java.lang.Throwable -> L24a
            r3[r12] = r16     // Catch: java.lang.Throwable -> L24a
            java.lang.String r3 = java.lang.String.format(r13, r3)     // Catch: java.lang.Throwable -> L24a
            r15.<init>(r10, r3)     // Catch: java.lang.Throwable -> L24a
            if (r2 == 0) goto L11a
            r2.onFailed(r15)     // Catch: java.lang.Throwable -> L24a
        L11a:
            int r3 = r17.getId()     // Catch: java.lang.Throwable -> L24a
            handleTempSaveCallback(r3, r8, r15)     // Catch: java.lang.Throwable -> L24a
            r3 = r8
            goto L124
        L123:
            r3 = r7
        L124:
            if (r6 == 0) goto L1a4
            boolean r10 = r5.delete()     // Catch: java.lang.Throwable -> L24a
            if (r10 != 0) goto L1a4
            if (r3 != 0) goto L141
            if (r0 == 0) goto L1a4
            com.ss.android.socialbase.downloader.exception.BaseException r9 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L24a
            java.lang.String r10 = "tempFile is not exist and target file is exist but md5 verify invalid, delete target file failed"
            r13 = 1038(0x40e, float:1.455E-42)
            r9.<init>(r13, r10)     // Catch: java.lang.Throwable -> L24a
            int r10 = r17.getStatus()     // Catch: java.lang.Throwable -> L24a
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r0, r1, r9, r10)     // Catch: java.lang.Throwable -> L24a
            goto L1a4
        L141:
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L24a
            r3 = 1037(0x40d, float:1.453E-42)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L24a
            r10.<init>()     // Catch: java.lang.Throwable -> L24a
            java.lang.String r13 = "delete targetPath file existed with md5 check invalid status:"
            r10.append(r13)     // Catch: java.lang.Throwable -> L24a
            java.lang.String r9 = getMd5StatusMsg(r9)     // Catch: java.lang.Throwable -> L24a
            r10.append(r9)     // Catch: java.lang.Throwable -> L24a
            java.lang.String r9 = r10.toString()     // Catch: java.lang.Throwable -> L24a
            r0.<init>(r3, r9)     // Catch: java.lang.Throwable -> L24a
            if (r2 == 0) goto L162
            r2.onFailed(r0)     // Catch: java.lang.Throwable -> L24a
        L162:
            int r3 = r17.getId()     // Catch: java.lang.Throwable -> L24a
            handleTempSaveCallback(r3, r8, r0)     // Catch: java.lang.Throwable -> L24a
            goto L1a1
        L16a:
            boolean r0 = r4.exists()     // Catch: java.lang.Throwable -> L24a
            if (r0 != 0) goto L1a3
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L24a
            java.lang.String r3 = "Can't save the temp downloaded file(%s/%s) to the target file(%s/%s) because tempFile is not exist"
            java.lang.Object[] r9 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L24a
            java.lang.String r13 = r17.getTempPath()     // Catch: java.lang.Throwable -> L24a
            r9[r8] = r13     // Catch: java.lang.Throwable -> L24a
            java.lang.String r13 = r17.getTempName()     // Catch: java.lang.Throwable -> L24a
            r9[r7] = r13     // Catch: java.lang.Throwable -> L24a
            java.lang.String r13 = r17.getSavePath()     // Catch: java.lang.Throwable -> L24a
            r9[r14] = r13     // Catch: java.lang.Throwable -> L24a
            java.lang.String r13 = r17.getName()     // Catch: java.lang.Throwable -> L24a
            r9[r11] = r13     // Catch: java.lang.Throwable -> L24a
            java.lang.String r3 = java.lang.String.format(r3, r9)     // Catch: java.lang.Throwable -> L24a
            r0.<init>(r10, r3)     // Catch: java.lang.Throwable -> L24a
            if (r2 == 0) goto L19a
            r2.onFailed(r0)     // Catch: java.lang.Throwable -> L24a
        L19a:
            int r3 = r17.getId()     // Catch: java.lang.Throwable -> L24a
            handleTempSaveCallback(r3, r8, r0)     // Catch: java.lang.Throwable -> L24a
        L1a1:
            r3 = r8
            goto L1a4
        L1a3:
            r3 = r7
        L1a4:
            if (r3 == 0) goto L277
            int r0 = r17.getId()     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            java.lang.String r3 = "download_finish_check_ttmd5"
            int r0 = r0.optInt(r3, r14)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            if (r0 <= 0) goto L1e4
            java.lang.String r3 = r17.getMd5()     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            int r3 = checkMd5Status(r4, r3)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            r1.setTTMd5CheckStatus(r3)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            if (r0 < r14) goto L1e4
            boolean r0 = isMd5Valid(r3)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            if (r0 != 0) goto L1e4
            com.ss.android.socialbase.downloader.exception.BaseException r0 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            r4 = 1034(0x40a, float:1.449E-42)
            java.lang.String r3 = getMd5StatusMsg(r3)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            r0.<init>(r4, r3)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            if (r2 == 0) goto L1d9
            r2.onFailed(r0)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
        L1d9:
            int r3 = r17.getId()     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            handleTempSaveCallback(r3, r8, r0)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            deleteAllDownloadFiles(r1, r6)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            return
        L1e4:
            boolean r0 = moveFile(r4, r5)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L1eb java.lang.Throwable -> L24a
            r0 = r0 ^ r7
            r3 = 0
            goto L201
        L1eb:
            r0 = move-exception
            int r3 = r17.getId()     // Catch: java.lang.Throwable -> L24a
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)     // Catch: java.lang.Throwable -> L24a
            java.lang.String r4 = "fix_file_rename_failed"
            boolean r3 = r3.optBugFix(r4)     // Catch: java.lang.Throwable -> L24a
            if (r3 == 0) goto L1ff
            r3 = r0
            r0 = r7
            goto L201
        L1ff:
            r3 = r0
            r0 = r8
        L201:
            if (r0 == 0) goto L239
            if (r3 != 0) goto L22c
            com.ss.android.socialbase.downloader.exception.BaseException r3 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.Throwable -> L24a
            java.lang.String r0 = "Can't save the temp downloaded file(%s/%s) to the target file(%s/%s)"
            java.lang.Object[] r4 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L24a
            java.lang.String r5 = r17.getTempPath()     // Catch: java.lang.Throwable -> L24a
            r4[r8] = r5     // Catch: java.lang.Throwable -> L24a
            java.lang.String r5 = r17.getTempName()     // Catch: java.lang.Throwable -> L24a
            r4[r7] = r5     // Catch: java.lang.Throwable -> L24a
            java.lang.String r5 = r17.getSavePath()     // Catch: java.lang.Throwable -> L24a
            r4[r14] = r5     // Catch: java.lang.Throwable -> L24a
            java.lang.String r5 = r17.getName()     // Catch: java.lang.Throwable -> L24a
            r4[r11] = r5     // Catch: java.lang.Throwable -> L24a
            java.lang.String r0 = java.lang.String.format(r0, r4)     // Catch: java.lang.Throwable -> L24a
            r4 = 1038(0x40e, float:1.455E-42)
            r3.<init>(r4, r0)     // Catch: java.lang.Throwable -> L24a
        L22c:
            if (r2 == 0) goto L231
            r2.onFailed(r3)     // Catch: java.lang.Throwable -> L24a
        L231:
            int r0 = r17.getId()     // Catch: java.lang.Throwable -> L24a
            handleTempSaveCallback(r0, r8, r3)     // Catch: java.lang.Throwable -> L24a
            goto L277
        L239:
            if (r2 == 0) goto L23e
            r19.onSuccess()     // Catch: java.lang.Throwable -> L24a
        L23e:
            int r0 = r17.getId()     // Catch: java.lang.Throwable -> L24a
            r1 = 0
            handleTempSaveCallback(r0, r7, r1)     // Catch: java.lang.Throwable -> L24a
            goto L277
        L247:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L247
            throw r0     // Catch: java.lang.Throwable -> L24a
        L24a:
            r0 = move-exception
            java.lang.String r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.TAG
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "saveFileAsTargetName throwable "
            r3.append(r4)
            java.lang.String r4 = r0.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r1, r3)
            if (r2 == 0) goto L277
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.String r3 = "saveFileAsTargetName"
            java.lang.String r0 = getErrorMsgWithTagPrefix(r0, r3)
            r3 = 1038(0x40e, float:1.455E-42)
            r1.<init>(r3, r0)
            r2.onFailed(r1)
        L277:
            return
    }

    public static <K> void sparseArrayPutAll(android.util.SparseArray<K> r3, java.util.Map<java.lang.Integer, K> r4) {
            if (r4 == 0) goto L27
            if (r3 != 0) goto L5
            goto L27
        L5:
            java.util.Set r0 = r4.keySet()
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            java.lang.Integer r1 = (java.lang.Integer) r1
            if (r1 == 0) goto Ld
            java.lang.Object r2 = r4.get(r1)
            int r1 = r1.intValue()
            r3.put(r1, r2)
            goto Ld
        L27:
            return
    }

    public static <K> java.util.HashMap<java.lang.Integer, K> sparseArrayToHashMap(android.util.SparseArray<K> r5) {
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            int r1 = r5.size()
            r2 = 0
        Le:
            if (r2 >= r1) goto L22
            int r3 = r5.keyAt(r2)
            java.lang.Object r4 = r5.valueAt(r2)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0.put(r3, r4)
            int r2 = r2 + 1
            goto Le
        L22:
            return r0
    }

    public static java.lang.String toHexString(byte[] r2) {
            if (r2 == 0) goto L9
            r0 = 0
            int r1 = r2.length
            java.lang.String r2 = toHexString(r2, r0, r1)
            return r2
        L9:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "bytes is null"
            r2.<init>(r0)
            throw r2
    }

    public static java.lang.String toHexString(byte[] r9, int r10, int r11) {
            if (r9 == 0) goto L39
            if (r10 < 0) goto L33
            int r0 = r10 + r11
            int r1 = r9.length
            if (r0 > r1) goto L33
            int r0 = r11 * 2
            char[] r1 = new char[r0]
            r2 = 0
            r3 = r2
            r4 = r3
        L10:
            if (r3 >= r11) goto L2d
            int r5 = r3 + r10
            r5 = r9[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r6 = r4 + 1
            char[] r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.HEX_CHARS
            int r8 = r5 >> 4
            char r8 = r7[r8]
            r1[r4] = r8
            int r4 = r6 + 1
            r5 = r5 & 15
            char r5 = r7[r5]
            r1[r6] = r5
            int r3 = r3 + 1
            goto L10
        L2d:
            java.lang.String r9 = new java.lang.String
            r9.<init>(r1, r2, r0)
            return r9
        L33:
            java.lang.IndexOutOfBoundsException r9 = new java.lang.IndexOutOfBoundsException
            r9.<init>()
            throw r9
        L39:
            java.lang.NullPointerException r9 = new java.lang.NullPointerException
            java.lang.String r10 = "bytes is null"
            r9.<init>(r10)
            throw r9
    }
}
