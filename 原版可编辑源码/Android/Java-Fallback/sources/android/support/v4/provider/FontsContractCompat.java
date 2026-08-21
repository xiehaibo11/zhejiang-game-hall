package android.support.v4.provider;

public class FontsContractCompat {
    private static final int BACKGROUND_THREAD_KEEP_ALIVE_DURATION_MS = 10000;
    public static final java.lang.String PARCEL_FONT_RESULTS = "font_results";
    static final int RESULT_CODE_PROVIDER_NOT_FOUND = -1;
    static final int RESULT_CODE_WRONG_CERTIFICATES = -2;
    private static final java.lang.String TAG = "FontsContractCompat";
    private static final android.support.v4.provider.SelfDestructiveThread sBackgroundThread = null;
    private static final java.util.Comparator<byte[]> sByteArrayComparator = null;
    static final java.lang.Object sLock = null;
    static final android.support.v4.util.SimpleArrayMap<java.lang.String, java.util.ArrayList<android.support.v4.provider.SelfDestructiveThread.ReplyCallback<android.support.v4.provider.FontsContractCompat.TypefaceResult>>> sPendingReplies = null;
    static final android.support.v4.util.LruCache<java.lang.String, android.graphics.Typeface> sTypefaceCache = null;






    public static final class Columns implements android.provider.BaseColumns {
        public static final java.lang.String FILE_ID = "file_id";
        public static final java.lang.String ITALIC = "font_italic";
        public static final java.lang.String RESULT_CODE = "result_code";
        public static final int RESULT_CODE_FONT_NOT_FOUND = 1;
        public static final int RESULT_CODE_FONT_UNAVAILABLE = 2;
        public static final int RESULT_CODE_MALFORMED_QUERY = 3;
        public static final int RESULT_CODE_OK = 0;
        public static final java.lang.String TTC_INDEX = "font_ttc_index";
        public static final java.lang.String VARIATION_SETTINGS = "font_variation_settings";
        public static final java.lang.String WEIGHT = "font_weight";

        public Columns() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class FontFamilyResult {
        public static final int STATUS_OK = 0;
        public static final int STATUS_UNEXPECTED_DATA_PROVIDED = 2;
        public static final int STATUS_WRONG_CERTIFICATES = 1;
        private final android.support.v4.provider.FontsContractCompat.FontInfo[] mFonts;
        private final int mStatusCode;

        public FontFamilyResult(int r1, android.support.v4.provider.FontsContractCompat.FontInfo[] r2) {
                r0 = this;
                r0.<init>()
                r0.mStatusCode = r1
                r0.mFonts = r2
                return
        }

        public android.support.v4.provider.FontsContractCompat.FontInfo[] getFonts() {
                r1 = this;
                android.support.v4.provider.FontsContractCompat$FontInfo[] r0 = r1.mFonts
                return r0
        }

        public int getStatusCode() {
                r1 = this;
                int r0 = r1.mStatusCode
                return r0
        }
    }

    public static class FontInfo {
        private final boolean mItalic;
        private final int mResultCode;
        private final int mTtcIndex;
        private final android.net.Uri mUri;
        private final int mWeight;

        public FontInfo(android.net.Uri r1, int r2, int r3, boolean r4, int r5) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = android.support.v4.util.Preconditions.checkNotNull(r1)
                android.net.Uri r1 = (android.net.Uri) r1
                r0.mUri = r1
                r0.mTtcIndex = r2
                r0.mWeight = r3
                r0.mItalic = r4
                r0.mResultCode = r5
                return
        }

        public int getResultCode() {
                r1 = this;
                int r0 = r1.mResultCode
                return r0
        }

        public int getTtcIndex() {
                r1 = this;
                int r0 = r1.mTtcIndex
                return r0
        }

        public android.net.Uri getUri() {
                r1 = this;
                android.net.Uri r0 = r1.mUri
                return r0
        }

        public int getWeight() {
                r1 = this;
                int r0 = r1.mWeight
                return r0
        }

        public boolean isItalic() {
                r1 = this;
                boolean r0 = r1.mItalic
                return r0
        }
    }

    public static class FontRequestCallback {
        public static final int FAIL_REASON_FONT_LOAD_ERROR = -3;
        public static final int FAIL_REASON_FONT_NOT_FOUND = 1;
        public static final int FAIL_REASON_FONT_UNAVAILABLE = 2;
        public static final int FAIL_REASON_MALFORMED_QUERY = 3;
        public static final int FAIL_REASON_PROVIDER_NOT_FOUND = -1;
        public static final int FAIL_REASON_SECURITY_VIOLATION = -4;
        public static final int FAIL_REASON_WRONG_CERTIFICATES = -2;
        public static final int RESULT_OK = 0;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface FontRequestFailReason {
        }

        public FontRequestCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onTypefaceRequestFailed(int r1) {
                r0 = this;
                return
        }

        public void onTypefaceRetrieved(android.graphics.Typeface r1) {
                r0 = this;
                return
        }
    }

    private static final class TypefaceResult {
        final int mResult;
        final android.graphics.Typeface mTypeface;

        TypefaceResult(android.graphics.Typeface r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.mTypeface = r1
                r0.mResult = r2
                return
        }
    }

    static {
            android.support.v4.util.LruCache r0 = new android.support.v4.util.LruCache
            r1 = 16
            r0.<init>(r1)
            android.support.v4.provider.FontsContractCompat.sTypefaceCache = r0
            android.support.v4.provider.SelfDestructiveThread r0 = new android.support.v4.provider.SelfDestructiveThread
            java.lang.String r1 = "fonts"
            r2 = 10
            r3 = 10000(0x2710, float:1.4013E-41)
            r0.<init>(r1, r2, r3)
            android.support.v4.provider.FontsContractCompat.sBackgroundThread = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.provider.FontsContractCompat.sLock = r0
            android.support.v4.util.SimpleArrayMap r0 = new android.support.v4.util.SimpleArrayMap
            r0.<init>()
            android.support.v4.provider.FontsContractCompat.sPendingReplies = r0
            android.support.v4.provider.FontsContractCompat$5 r0 = new android.support.v4.provider.FontsContractCompat$5
            r0.<init>()
            android.support.v4.provider.FontsContractCompat.sByteArrayComparator = r0
            return
    }

    private FontsContractCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.graphics.Typeface buildTypeface(android.content.Context r1, android.os.CancellationSignal r2, android.support.v4.provider.FontsContractCompat.FontInfo[] r3) {
            r0 = 0
            android.graphics.Typeface r1 = android.support.v4.graphics.TypefaceCompat.createFromFontInfo(r1, r2, r3, r0)
            return r1
    }

    private static java.util.List<byte[]> convertToByteArrayList(android.content.pm.Signature[] r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r3.length
            if (r1 >= r2) goto L15
            r2 = r3[r1]
            byte[] r2 = r2.toByteArray()
            r0.add(r2)
            int r1 = r1 + 1
            goto L6
        L15:
            return r0
    }

    private static boolean equalsByteArrayList(java.util.List<byte[]> r4, java.util.List<byte[]> r5) {
            int r0 = r4.size()
            int r1 = r5.size()
            r2 = 0
            if (r0 == r1) goto Lc
            return r2
        Lc:
            r0 = r2
        Ld:
            int r1 = r4.size()
            if (r0 >= r1) goto L29
            java.lang.Object r1 = r4.get(r0)
            byte[] r1 = (byte[]) r1
            java.lang.Object r3 = r5.get(r0)
            byte[] r3 = (byte[]) r3
            boolean r1 = java.util.Arrays.equals(r1, r3)
            if (r1 != 0) goto L26
            return r2
        L26:
            int r0 = r0 + 1
            goto Ld
        L29:
            r4 = 1
            return r4
    }

    public static android.support.v4.provider.FontsContractCompat.FontFamilyResult fetchFonts(android.content.Context r2, android.os.CancellationSignal r3, android.support.v4.provider.FontRequest r4) throws android.content.pm.PackageManager.NameNotFoundException {
            android.content.pm.PackageManager r0 = r2.getPackageManager()
            android.content.res.Resources r1 = r2.getResources()
            android.content.pm.ProviderInfo r0 = getProvider(r0, r4, r1)
            if (r0 != 0) goto L16
            android.support.v4.provider.FontsContractCompat$FontFamilyResult r2 = new android.support.v4.provider.FontsContractCompat$FontFamilyResult
            r3 = 1
            r4 = 0
            r2.<init>(r3, r4)
            return r2
        L16:
            java.lang.String r0 = r0.authority
            android.support.v4.provider.FontsContractCompat$FontInfo[] r2 = getFontFromProvider(r2, r4, r0, r3)
            android.support.v4.provider.FontsContractCompat$FontFamilyResult r3 = new android.support.v4.provider.FontsContractCompat$FontFamilyResult
            r4 = 0
            r3.<init>(r4, r2)
            return r3
    }

    private static java.util.List<java.util.List<byte[]>> getCertificates(android.support.v4.provider.FontRequest r1, android.content.res.Resources r2) {
            java.util.List r0 = r1.getCertificates()
            if (r0 == 0) goto Lb
            java.util.List r1 = r1.getCertificates()
            return r1
        Lb:
            int r1 = r1.getCertificatesArrayResId()
            java.util.List r1 = android.support.v4.content.res.FontResourcesParserCompat.readCerts(r2, r1)
            return r1
    }

    static android.support.v4.provider.FontsContractCompat.FontInfo[] getFontFromProvider(android.content.Context r20, android.support.v4.provider.FontRequest r21, java.lang.String r22, android.os.CancellationSignal r23) {
            r0 = r22
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            android.net.Uri$Builder r2 = new android.net.Uri$Builder
            r2.<init>()
            java.lang.String r3 = "content"
            android.net.Uri$Builder r2 = r2.scheme(r3)
            android.net.Uri$Builder r2 = r2.authority(r0)
            android.net.Uri r2 = r2.build()
            android.net.Uri$Builder r4 = new android.net.Uri$Builder
            r4.<init>()
            android.net.Uri$Builder r3 = r4.scheme(r3)
            android.net.Uri$Builder r0 = r3.authority(r0)
            java.lang.String r3 = "file"
            android.net.Uri$Builder r0 = r0.appendPath(r3)
            android.net.Uri r0 = r0.build()
            r3 = 0
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L11c
            r5 = 16
            r11 = 1
            r12 = 0
            if (r4 <= r5) goto L63
            android.content.ContentResolver r4 = r20.getContentResolver()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r13 = "_id"
            java.lang.String r14 = "file_id"
            java.lang.String r15 = "font_ttc_index"
            java.lang.String r16 = "font_variation_settings"
            java.lang.String r17 = "font_weight"
            java.lang.String r18 = "font_italic"
            java.lang.String r19 = "result_code"
            java.lang.String[] r6 = new java.lang.String[]{r13, r14, r15, r16, r17, r18, r19}     // Catch: java.lang.Throwable -> L11c
            java.lang.String r7 = "query = ?"
            java.lang.String[] r8 = new java.lang.String[r11]     // Catch: java.lang.Throwable -> L11c
            java.lang.String r5 = r21.getQuery()     // Catch: java.lang.Throwable -> L11c
            r8[r12] = r5     // Catch: java.lang.Throwable -> L11c
            r9 = 0
            r5 = r2
            r10 = r23
            android.database.Cursor r3 = r4.query(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L11c
            goto L89
        L63:
            android.content.ContentResolver r4 = r20.getContentResolver()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r13 = "_id"
            java.lang.String r14 = "file_id"
            java.lang.String r15 = "font_ttc_index"
            java.lang.String r16 = "font_variation_settings"
            java.lang.String r17 = "font_weight"
            java.lang.String r18 = "font_italic"
            java.lang.String r19 = "result_code"
            java.lang.String[] r6 = new java.lang.String[]{r13, r14, r15, r16, r17, r18, r19}     // Catch: java.lang.Throwable -> L11c
            java.lang.String r7 = "query = ?"
            java.lang.String[] r8 = new java.lang.String[r11]     // Catch: java.lang.Throwable -> L11c
            java.lang.String r5 = r21.getQuery()     // Catch: java.lang.Throwable -> L11c
            r8[r12] = r5     // Catch: java.lang.Throwable -> L11c
            r9 = 0
            r5 = r2
            android.database.Cursor r3 = r4.query(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L11c
        L89:
            if (r3 == 0) goto L10e
            int r4 = r3.getCount()     // Catch: java.lang.Throwable -> L11c
            if (r4 <= 0) goto L10e
            java.lang.String r1 = "result_code"
            int r1 = r3.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L11c
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L11c
            r4.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r5 = "_id"
            int r5 = r3.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r6 = "file_id"
            int r6 = r3.getColumnIndex(r6)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r7 = "font_ttc_index"
            int r7 = r3.getColumnIndex(r7)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r8 = "font_weight"
            int r8 = r3.getColumnIndex(r8)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r9 = "font_italic"
            int r9 = r3.getColumnIndex(r9)     // Catch: java.lang.Throwable -> L11c
        Lba:
            boolean r10 = r3.moveToNext()     // Catch: java.lang.Throwable -> L11c
            if (r10 == 0) goto L10d
            r10 = -1
            if (r1 == r10) goto Lca
            int r13 = r3.getInt(r1)     // Catch: java.lang.Throwable -> L11c
            r19 = r13
            goto Lcc
        Lca:
            r19 = r12
        Lcc:
            if (r7 == r10) goto Ld5
            int r13 = r3.getInt(r7)     // Catch: java.lang.Throwable -> L11c
            r16 = r13
            goto Ld7
        Ld5:
            r16 = r12
        Ld7:
            if (r6 != r10) goto Le2
            long r13 = r3.getLong(r5)     // Catch: java.lang.Throwable -> L11c
            android.net.Uri r13 = android.content.ContentUris.withAppendedId(r2, r13)     // Catch: java.lang.Throwable -> L11c
            goto Lea
        Le2:
            long r13 = r3.getLong(r6)     // Catch: java.lang.Throwable -> L11c
            android.net.Uri r13 = android.content.ContentUris.withAppendedId(r0, r13)     // Catch: java.lang.Throwable -> L11c
        Lea:
            r15 = r13
            if (r8 == r10) goto Lf2
            int r13 = r3.getInt(r8)     // Catch: java.lang.Throwable -> L11c
            goto Lf4
        Lf2:
            r13 = 400(0x190, float:5.6E-43)
        Lf4:
            r17 = r13
            if (r9 == r10) goto L101
            int r10 = r3.getInt(r9)     // Catch: java.lang.Throwable -> L11c
            if (r10 != r11) goto L101
            r18 = r11
            goto L103
        L101:
            r18 = r12
        L103:
            android.support.v4.provider.FontsContractCompat$FontInfo r10 = new android.support.v4.provider.FontsContractCompat$FontInfo     // Catch: java.lang.Throwable -> L11c
            r14 = r10
            r14.<init>(r15, r16, r17, r18, r19)     // Catch: java.lang.Throwable -> L11c
            r4.add(r10)     // Catch: java.lang.Throwable -> L11c
            goto Lba
        L10d:
            r1 = r4
        L10e:
            if (r3 == 0) goto L113
            r3.close()
        L113:
            android.support.v4.provider.FontsContractCompat$FontInfo[] r0 = new android.support.v4.provider.FontsContractCompat.FontInfo[r12]
            java.lang.Object[] r0 = r1.toArray(r0)
            android.support.v4.provider.FontsContractCompat$FontInfo[] r0 = (android.support.v4.provider.FontsContractCompat.FontInfo[]) r0
            return r0
        L11c:
            r0 = move-exception
            if (r3 == 0) goto L122
            r3.close()
        L122:
            throw r0
    }

    static android.support.v4.provider.FontsContractCompat.TypefaceResult getFontInternal(android.content.Context r3, android.support.v4.provider.FontRequest r4, int r5) {
            r0 = 0
            android.support.v4.provider.FontsContractCompat$FontFamilyResult r4 = fetchFonts(r3, r0, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2b
            int r1 = r4.getStatusCode()
            r2 = -3
            if (r1 != 0) goto L1d
            android.support.v4.provider.FontsContractCompat$FontInfo[] r4 = r4.getFonts()
            android.graphics.Typeface r3 = android.support.v4.graphics.TypefaceCompat.createFromFontInfo(r3, r0, r4, r5)
            android.support.v4.provider.FontsContractCompat$TypefaceResult r4 = new android.support.v4.provider.FontsContractCompat$TypefaceResult
            if (r3 == 0) goto L19
            r2 = 0
        L19:
            r4.<init>(r3, r2)
            return r4
        L1d:
            int r3 = r4.getStatusCode()
            r4 = 1
            if (r3 != r4) goto L25
            r2 = -2
        L25:
            android.support.v4.provider.FontsContractCompat$TypefaceResult r3 = new android.support.v4.provider.FontsContractCompat$TypefaceResult
            r3.<init>(r0, r2)
            return r3
        L2b:
            android.support.v4.provider.FontsContractCompat$TypefaceResult r3 = new android.support.v4.provider.FontsContractCompat$TypefaceResult
            r4 = -1
            r3.<init>(r0, r4)
            return r3
    }

    public static android.graphics.Typeface getFontSync(android.content.Context r2, android.support.v4.provider.FontRequest r3, android.support.v4.content.res.ResourcesCompat.FontCallback r4, android.os.Handler r5, boolean r6, int r7, int r8) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.getIdentifier()
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            android.support.v4.util.LruCache<java.lang.String, android.graphics.Typeface> r1 = android.support.v4.provider.FontsContractCompat.sTypefaceCache
            java.lang.Object r1 = r1.get(r0)
            android.graphics.Typeface r1 = (android.graphics.Typeface) r1
            if (r1 == 0) goto L28
            if (r4 == 0) goto L27
            r4.onFontRetrieved(r1)
        L27:
            return r1
        L28:
            if (r6 == 0) goto L45
            r1 = -1
            if (r7 != r1) goto L45
            android.support.v4.provider.FontsContractCompat$TypefaceResult r2 = getFontInternal(r2, r3, r8)
            if (r4 == 0) goto L42
            int r3 = r2.mResult
            if (r3 != 0) goto L3d
            android.graphics.Typeface r3 = r2.mTypeface
            r4.callbackSuccessAsync(r3, r5)
            goto L42
        L3d:
            int r3 = r2.mResult
            r4.callbackFailAsync(r3, r5)
        L42:
            android.graphics.Typeface r2 = r2.mTypeface
            return r2
        L45:
            android.support.v4.provider.FontsContractCompat$1 r1 = new android.support.v4.provider.FontsContractCompat$1
            r1.<init>(r2, r3, r8, r0)
            r2 = 0
            if (r6 == 0) goto L58
            android.support.v4.provider.SelfDestructiveThread r3 = android.support.v4.provider.FontsContractCompat.sBackgroundThread     // Catch: java.lang.InterruptedException -> L57
            java.lang.Object r3 = r3.postAndWait(r1, r7)     // Catch: java.lang.InterruptedException -> L57
            android.support.v4.provider.FontsContractCompat$TypefaceResult r3 = (android.support.v4.provider.FontsContractCompat.TypefaceResult) r3     // Catch: java.lang.InterruptedException -> L57
            android.graphics.Typeface r2 = r3.mTypeface     // Catch: java.lang.InterruptedException -> L57
        L57:
            return r2
        L58:
            if (r4 != 0) goto L5c
            r3 = r2
            goto L61
        L5c:
            android.support.v4.provider.FontsContractCompat$2 r3 = new android.support.v4.provider.FontsContractCompat$2
            r3.<init>(r4, r5)
        L61:
            java.lang.Object r4 = android.support.v4.provider.FontsContractCompat.sLock
            monitor-enter(r4)
            android.support.v4.util.SimpleArrayMap<java.lang.String, java.util.ArrayList<android.support.v4.provider.SelfDestructiveThread$ReplyCallback<android.support.v4.provider.FontsContractCompat$TypefaceResult>>> r5 = android.support.v4.provider.FontsContractCompat.sPendingReplies     // Catch: java.lang.Throwable -> L96
            boolean r5 = r5.containsKey(r0)     // Catch: java.lang.Throwable -> L96
            if (r5 == 0) goto L7b
            if (r3 == 0) goto L79
            android.support.v4.util.SimpleArrayMap<java.lang.String, java.util.ArrayList<android.support.v4.provider.SelfDestructiveThread$ReplyCallback<android.support.v4.provider.FontsContractCompat$TypefaceResult>>> r5 = android.support.v4.provider.FontsContractCompat.sPendingReplies     // Catch: java.lang.Throwable -> L96
            java.lang.Object r5 = r5.get(r0)     // Catch: java.lang.Throwable -> L96
            java.util.ArrayList r5 = (java.util.ArrayList) r5     // Catch: java.lang.Throwable -> L96
            r5.add(r3)     // Catch: java.lang.Throwable -> L96
        L79:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L96
            return r2
        L7b:
            if (r3 == 0) goto L8a
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L96
            r5.<init>()     // Catch: java.lang.Throwable -> L96
            r5.add(r3)     // Catch: java.lang.Throwable -> L96
            android.support.v4.util.SimpleArrayMap<java.lang.String, java.util.ArrayList<android.support.v4.provider.SelfDestructiveThread$ReplyCallback<android.support.v4.provider.FontsContractCompat$TypefaceResult>>> r3 = android.support.v4.provider.FontsContractCompat.sPendingReplies     // Catch: java.lang.Throwable -> L96
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> L96
        L8a:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L96
            android.support.v4.provider.SelfDestructiveThread r3 = android.support.v4.provider.FontsContractCompat.sBackgroundThread
            android.support.v4.provider.FontsContractCompat$3 r4 = new android.support.v4.provider.FontsContractCompat$3
            r4.<init>(r0)
            r3.postAndReply(r1, r4)
            return r2
        L96:
            r2 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L96
            throw r2
    }

    public static android.content.pm.ProviderInfo getProvider(android.content.pm.PackageManager r5, android.support.v4.provider.FontRequest r6, android.content.res.Resources r7) throws android.content.pm.PackageManager.NameNotFoundException {
            java.lang.String r0 = r6.getProviderAuthority()
            r1 = 0
            android.content.pm.ProviderInfo r2 = r5.resolveContentProvider(r0, r1)
            if (r2 == 0) goto L73
            java.lang.String r3 = r2.packageName
            java.lang.String r4 = r6.getProviderPackage()
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L50
            java.lang.String r0 = r2.packageName
            r3 = 64
            android.content.pm.PackageInfo r5 = r5.getPackageInfo(r0, r3)
            android.content.pm.Signature[] r5 = r5.signatures
            java.util.List r5 = convertToByteArrayList(r5)
            java.util.Comparator<byte[]> r0 = android.support.v4.provider.FontsContractCompat.sByteArrayComparator
            java.util.Collections.sort(r5, r0)
            java.util.List r6 = getCertificates(r6, r7)
        L2e:
            int r7 = r6.size()
            if (r1 >= r7) goto L4e
            java.util.ArrayList r7 = new java.util.ArrayList
            java.lang.Object r0 = r6.get(r1)
            java.util.Collection r0 = (java.util.Collection) r0
            r7.<init>(r0)
            java.util.Comparator<byte[]> r0 = android.support.v4.provider.FontsContractCompat.sByteArrayComparator
            java.util.Collections.sort(r7, r0)
            boolean r7 = equalsByteArrayList(r5, r7)
            if (r7 == 0) goto L4b
            return r2
        L4b:
            int r1 = r1 + 1
            goto L2e
        L4e:
            r5 = 0
            return r5
        L50:
            android.content.pm.PackageManager$NameNotFoundException r5 = new android.content.pm.PackageManager$NameNotFoundException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "Found content provider "
            r7.append(r1)
            r7.append(r0)
            java.lang.String r0 = ", but package was not "
            r7.append(r0)
            java.lang.String r6 = r6.getProviderPackage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            r5.<init>(r6)
            throw r5
        L73:
            android.content.pm.PackageManager$NameNotFoundException r5 = new android.content.pm.PackageManager$NameNotFoundException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "No package found for authority: "
            r6.append(r7)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
    }

    public static java.util.Map<android.net.Uri, java.nio.ByteBuffer> prepareFontData(android.content.Context r5, android.support.v4.provider.FontsContractCompat.FontInfo[] r6, android.os.CancellationSignal r7) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            int r1 = r6.length
            r2 = 0
        L7:
            if (r2 >= r1) goto L27
            r3 = r6[r2]
            int r4 = r3.getResultCode()
            if (r4 == 0) goto L12
            goto L24
        L12:
            android.net.Uri r3 = r3.getUri()
            boolean r4 = r0.containsKey(r3)
            if (r4 == 0) goto L1d
            goto L24
        L1d:
            java.nio.ByteBuffer r4 = android.support.v4.graphics.TypefaceCompatUtil.mmap(r5, r7, r3)
            r0.put(r3, r4)
        L24:
            int r2 = r2 + 1
            goto L7
        L27:
            java.util.Map r5 = java.util.Collections.unmodifiableMap(r0)
            return r5
    }

    public static void requestFont(android.content.Context r2, android.support.v4.provider.FontRequest r3, android.support.v4.provider.FontsContractCompat.FontRequestCallback r4, android.os.Handler r5) {
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            android.support.v4.provider.FontsContractCompat$4 r1 = new android.support.v4.provider.FontsContractCompat$4
            r1.<init>(r2, r3, r0, r4)
            r5.post(r1)
            return
    }

    public static void resetCache() {
            android.support.v4.util.LruCache<java.lang.String, android.graphics.Typeface> r0 = android.support.v4.provider.FontsContractCompat.sTypefaceCache
            r0.evictAll()
            return
    }
}
