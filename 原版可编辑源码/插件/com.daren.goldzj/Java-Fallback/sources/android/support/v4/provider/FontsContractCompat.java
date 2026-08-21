package android.support.v4.provider;

import android.content.ContentUris;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.pm.Signature;
import android.content.res.Resources;
import android.database.Cursor;
import android.graphics.Typeface;
import android.net.Uri;
import android.os.Build;
import android.os.CancellationSignal;
import android.os.Handler;
import android.provider.BaseColumns;
import android.support.annotation.GuardedBy;
import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.annotation.VisibleForTesting;
import android.support.v4.content.res.FontResourcesParserCompat;
import android.support.v4.content.res.ResourcesCompat;
import android.support.v4.graphics.TypefaceCompat;
import android.support.v4.graphics.TypefaceCompatUtil;
import android.support.v4.provider.SelfDestructiveThread;
import android.support.v4.util.LruCache;
import android.support.v4.util.Preconditions;
import android.support.v4.util.SimpleArrayMap;
import com.android.vending.expansion.zipfile.APEZProvider;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.loader.p.PluginProviderClient;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Callable;

public class FontsContractCompat {
    private static final int BACKGROUND_THREAD_KEEP_ALIVE_DURATION_MS = 10000;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static final String PARCEL_FONT_RESULTS = "font_results";

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    static final int RESULT_CODE_PROVIDER_NOT_FOUND = -1;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    static final int RESULT_CODE_WRONG_CERTIFICATES = -2;
    private static final String TAG = "FontsContractCompat";
    private static final SelfDestructiveThread sBackgroundThread = null;
    private static final Comparator<byte[]> sByteArrayComparator = null;
    static final Object sLock = null;

    @GuardedBy("sLock")
    static final SimpleArrayMap<String, ArrayList<SelfDestructiveThread.ReplyCallback<TypefaceResult>>> sPendingReplies = null;
    static final LruCache<String, Typeface> sTypefaceCache = null;

    public static final class Columns implements BaseColumns {
        public static final String FILE_ID = "file_id";
        public static final String ITALIC = "font_italic";
        public static final String RESULT_CODE = "result_code";
        public static final int RESULT_CODE_FONT_NOT_FOUND = 1;
        public static final int RESULT_CODE_FONT_UNAVAILABLE = 2;
        public static final int RESULT_CODE_MALFORMED_QUERY = 3;
        public static final int RESULT_CODE_OK = 0;
        public static final String TTC_INDEX = "font_ttc_index";
        public static final String VARIATION_SETTINGS = "font_variation_settings";
        public static final String WEIGHT = "font_weight";

        public Columns() {
        }
    }

    public static class FontFamilyResult {
        public static final int STATUS_OK = 0;
        public static final int STATUS_UNEXPECTED_DATA_PROVIDED = 2;
        public static final int STATUS_WRONG_CERTIFICATES = 1;
        private final FontInfo[] mFonts;
        private final int mStatusCode;

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public FontFamilyResult(int r1, @Nullable FontInfo[] r2) {
            this.mStatusCode = r1;
            this.mFonts = r2;
        }

        public int getStatusCode() {
            return this.mStatusCode;
        }

        public FontInfo[] getFonts() {
            return this.mFonts;
        }
    }

    public static class FontInfo {
        private final boolean mItalic;
        private final int mResultCode;
        private final int mTtcIndex;
        private final Uri mUri;
        private final int mWeight;

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public FontInfo(@NonNull Uri r1, @IntRange(from = 0) int r2, @IntRange(from = 1, to = 1000) int r3, boolean r4, int r5) {
            this.mUri = (Uri) Preconditions.checkNotNull(r1);
            this.mTtcIndex = r2;
            this.mWeight = r3;
            this.mItalic = r4;
            this.mResultCode = r5;
        }

        @NonNull
        public Uri getUri() {
            return this.mUri;
        }

        @IntRange(from = 0)
        public int getTtcIndex() {
            return this.mTtcIndex;
        }

        @IntRange(from = 1, to = 1000)
        public int getWeight() {
            return this.mWeight;
        }

        public boolean isItalic() {
            return this.mItalic;
        }

        public int getResultCode() {
            return this.mResultCode;
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

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public static final int RESULT_OK = 0;

        @Retention(RetentionPolicy.SOURCE)
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public @interface FontRequestFailReason {
        }

        public void onTypefaceRequestFailed(int r1) {
        }

        public void onTypefaceRetrieved(Typeface r1) {
        }

        public FontRequestCallback() {
        }
    }

    private static final class TypefaceResult {
        final int mResult;
        final Typeface mTypeface;

        TypefaceResult(@Nullable Typeface r1, int r2) {
            this.mTypeface = r1;
            this.mResult = r2;
        }
    }

    private FontsContractCompat() {
    }

    static {
        sTypefaceCache = new LruCache(16);
        sBackgroundThread = new SelfDestructiveThread("fonts", 10, BACKGROUND_THREAD_KEEP_ALIVE_DURATION_MS);
        sLock = new Object();
        sPendingReplies = new SimpleArrayMap();
        sByteArrayComparator = new 5();
    }

    @NonNull
    static TypefaceResult getFontInternal(Context r3, FontRequest r4, int r5) {
        FontFamilyResult r42 = fetchFonts(r3, null, r4);     // Catch: PackageManager.NameNotFoundException -> L16
        int r2 = -3;
        if (r42.getStatusCode() != 0) goto L12;
        Typeface r32 = TypefaceCompat.createFromFontInfo(r3, null, r42.getFonts(), r5);
        if (r32 == null) goto L10;
        r2 = 0;
    L10:
        return new TypefaceResult(r32, r2);
    L12:
        if (r42.getStatusCode() != 1) goto L15;
        r2 = -2;
    L15:
        return new TypefaceResult(null, r2);
    L17:
        return new TypefaceResult(null, -1);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static void resetCache() {
        sTypefaceCache.evictAll();
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static Typeface getFontSync(final Context r2, final FontRequest r3, @Nullable final ResourcesCompat.FontCallback r4, @Nullable final Handler r5, boolean r6, int r7, final int r8) {
        final String r0 = r3.getIdentifier() + "-" + r8;
        Typeface r1 = sTypefaceCache.get(r0);
        if (r1 == null) goto L7;
        if (r4 == null) goto L6;
        r4.onFontRetrieved(r1);
    L6:
        return r1;
    L7:
        if (r6 == true) goto L9;
    L18:
        Callable<TypefaceResult> r12 = new 1(r2, r3, r8, r0);
        if (r6 == true) goto L43;
        if (r4 != null) goto L24;
        SelfDestructiveThread.ReplyCallback<TypefaceResult> r32 = null;
    L25:
        Object r42 = sLock;
        monitor-enter(r42);
    L38:
        th = move-exception;
        throw th;
    L28:
        if (sPendingReplies.containsKey(r0) == false) goto L33;
        if (r32 == null) goto L31;
        sPendingReplies.get(r0).add(r32);     // Catch: Throwable -> L38
    L31:
        monitor-exit(r42);     // Catch: Throwable -> L38
        return null;
    L33:
        if (r32 == null) goto L35;
        ArrayList<SelfDestructiveThread.ReplyCallback<TypefaceResult>> r52 = new ArrayList();     // Catch: Throwable -> L38
        r52.add(r32);     // Catch: Throwable -> L38
        sPendingReplies.put(r0, r52);     // Catch: Throwable -> L38
    L35:
        monitor-exit(r42);     // Catch: Throwable -> L38
        sBackgroundThread.postAndReply(r12, new 3(r0));
        return null;
    L24:
        r32 = new 2(r4, r5);
        goto L25
    L43:
        return ((TypefaceResult) sBackgroundThread.postAndWait(r12, r7)).mTypeface;
    L45:
        return null;
    L9:
        if (r7 != (-1)) goto L18;
        TypefaceResult r22 = getFontInternal(r2, r3, r8);
        if (r4 == null) goto L17;
        if (r22.mResult != 0) goto L15;
        r4.callbackSuccessAsync(r22.mTypeface, r5);
        goto L17
    L15:
        r4.callbackFailAsync(r22.mResult, r5);
    L17:
        return r22.mTypeface;
    }

    public static void requestFont(@NonNull final Context r2, @NonNull final FontRequest r3, @NonNull final FontRequestCallback r4, @NonNull Handler r5) {
        final Handler r0 = new Handler();
        r5.post(new 4(r2, r3, r0, r4));
    }

    @Nullable
    public static Typeface buildTypeface(@NonNull Context r1, @Nullable CancellationSignal r2, @NonNull FontInfo[] r3) {
        return TypefaceCompat.createFromFontInfo(r1, r2, r3, 0);
    }

    @RequiresApi(19)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static Map<Uri, ByteBuffer> prepareFontData(Context r5, FontInfo[] r6, CancellationSignal r7) {
        HashMap r0 = new HashMap();
        int r1 = r6.length;
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L13;
        FontInfo r3 = r6[r2];
        if (r3.getResultCode() != 0) goto L11;
        Uri r32 = r3.getUri();
        if (r0.containsKey(r32) == true) goto L11;
        r0.put(r32, TypefaceCompatUtil.mmap(r5, r7, r32));
    L11:
        r2 = r2 + 1;
        goto L3
    L13:
        return Collections.unmodifiableMap(r0);
    }

    @NonNull
    public static FontFamilyResult fetchFonts(@NonNull Context r2, @Nullable CancellationSignal r3, @NonNull FontRequest r4) throws PackageManager.NameNotFoundException {
        ProviderInfo r0 = getProvider(r2.getPackageManager(), r4, r2.getResources());
        if (r0 != null) goto L7;
        return new FontFamilyResult(1, null);
    L7:
        return new FontFamilyResult(0, getFontFromProvider(r2, r4, r0.authority, r3));
    }

    @VisibleForTesting
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static ProviderInfo getProvider(@NonNull PackageManager r5, @NonNull FontRequest r6, @Nullable Resources r7) throws PackageManager.NameNotFoundException {
        String r0 = r6.getProviderAuthority();
        int r1 = 0;
        ProviderInfo r2 = r5.resolveContentProvider(r0, 0);
        if (r2 == null) goto L18;
        if (r2.packageName.equals(r6.getProviderPackage()) == false) goto L16;
        List<byte[]> r52 = convertToByteArrayList(r5.getPackageInfo(r2.packageName, 64).signatures);
        Collections.sort(r52, sByteArrayComparator);
        List<List<byte[]>> r62 = getCertificates(r6, r7);
    L8:
        if (r1 >= r62.size()) goto L13;
        ArrayList r72 = new ArrayList(r62.get(r1));
        Collections.sort(r72, sByteArrayComparator);
        if (equalsByteArrayList(r52, r72) == true) goto L11;
        r1 = r1 + 1;
        goto L8
    L11:
        return r2;
    L13:
        return null;
    L16:
        throw new PackageManager.NameNotFoundException("Found content provider " + r0 + ", but package was not " + r6.getProviderPackage());
    L18:
        throw new PackageManager.NameNotFoundException("No package found for authority: " + r0);
    }

    private static List<List<byte[]>> getCertificates(FontRequest r1, Resources r2) {
        if (r1.getCertificates() == null) goto L7;
        return r1.getCertificates();
    L7:
        return FontResourcesParserCompat.readCerts(r2, r1.getCertificatesArrayResId());
    }

    private static boolean equalsByteArrayList(List<byte[]> r4, List<byte[]> r5) {
        if (r4.size() == r5.size()) goto L5;
        return false;
    L5:
        int r0 = 0;
    L7:
        if (r0 >= r4.size()) goto L12;
        if (Arrays.equals(r4.get(r0), r5.get(r0)) == false) goto L10;
        r0 = r0 + 1;
        goto L7
    L10:
        return false;
    L12:
        return true;
    }

    private static List<byte[]> convertToByteArrayList(Signature[] r3) {
        ArrayList r0 = new ArrayList();
        int r1 = 0;
    L4:
        if (r1 >= r3.length) goto L6;
        r0.add(r3[r1].toByteArray());
        r1 = r1 + 1;
        goto L4
    L6:
        return r0;
    }

    @VisibleForTesting
    @NonNull
    static FontInfo[] getFontFromProvider(Context r20, FontRequest r21, String r22, CancellationSignal r23) {
        ArrayList r1 = new ArrayList();
        Uri r2 = new Uri.Builder().scheme("content").authority(r22).build();
        Uri r0 = new Uri.Builder().scheme("content").authority(r22).appendPath("file").build();
        Cursor r3 = null;
    L39:
        th = move-exception;
        if (r3 == null) goto L42;
        r3.close();
    L42:
        throw th;
    L4:
        if (Build.VERSION.SDK_INT <= 16) goto L6;
        r20.getContentResolver();     // Catch: Throwable -> L39
        r3 = PluginProviderClient.query(RePlugin.getPluginContext(), r2, new String[]{APEZProvider.FILEID, Columns.FILE_ID, Columns.TTC_INDEX, Columns.VARIATION_SETTINGS, Columns.WEIGHT, Columns.ITALIC, Columns.RESULT_CODE}, "query = ?", new String[]{r21.getQuery()}, null, r23);     // Catch: Throwable -> L39
    L7:
        if (r3 != null) goto L9;
    L35:
        if (r3 == null) goto L38;
        r3.close();
    L38:
        return (FontInfo[]) r1.toArray(new FontInfo[0]);
    L9:
        if (r3.getCount() <= 0) goto L35;
        int r12 = r3.getColumnIndex(Columns.RESULT_CODE);     // Catch: Throwable -> L39
        ArrayList r4 = new ArrayList();     // Catch: Throwable -> L39
        int r5 = r3.getColumnIndex(APEZProvider.FILEID);     // Catch: Throwable -> L39
        int r6 = r3.getColumnIndex(Columns.FILE_ID);     // Catch: Throwable -> L39
        int r7 = r3.getColumnIndex(Columns.TTC_INDEX);     // Catch: Throwable -> L39
        int r8 = r3.getColumnIndex(Columns.WEIGHT);     // Catch: Throwable -> L39
        int r9 = r3.getColumnIndex(Columns.ITALIC);     // Catch: Throwable -> L39
    L11:
        if (r3.moveToNext() == false) goto L34;
        if (r12 == (-1)) goto L16;
        int r19 = r3.getInt(r12);     // Catch: Throwable -> L39
    L17:
        if (r7 == (-1)) goto L19;
        int r16 = r3.getInt(r7);     // Catch: Throwable -> L39
    L20:
        if (r6 != (-1)) goto L22;
        Uri r13 = ContentUris.withAppendedId(r2, r3.getLong(r5));     // Catch: Throwable -> L39
    L23:
        Uri r15 = r13;
        if (r8 == (-1)) goto L26;
        int r17 = r3.getInt(r8);     // Catch: Throwable -> L39
    L27:
        if (r9 != (-1)) goto L29;
    L31:
        boolean r18 = false;
    L32:
        r4.add(new FontInfo(r15, r16, r17, r18, r19));     // Catch: Throwable -> L39
        goto L11
    L29:
        if (r3.getInt(r9) != 1) goto L31;
        r18 = true;
        goto L32
    L26:
        r17 = 400;
        goto L27
    L22:
        r13 = ContentUris.withAppendedId(r0, r3.getLong(r6));     // Catch: Throwable -> L39
        goto L23
    L19:
        r16 = 0;
        goto L20
    L16:
        r19 = 0;
        goto L17
    L34:
        r1 = r4;
        goto L35
    L6:
        r20.getContentResolver();     // Catch: Throwable -> L39
        r3 = PluginProviderClient.query(RePlugin.getPluginContext(), r2, new String[]{APEZProvider.FILEID, Columns.FILE_ID, Columns.TTC_INDEX, Columns.VARIATION_SETTINGS, Columns.WEIGHT, Columns.ITALIC, Columns.RESULT_CODE}, "query = ?", new String[]{r21.getQuery()}, null);     // Catch: Throwable -> L39
        goto L7
    }
}
