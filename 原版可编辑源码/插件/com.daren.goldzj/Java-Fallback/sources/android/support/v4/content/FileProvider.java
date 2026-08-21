package android.support.v4.content;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.Context;
import android.content.pm.ProviderInfo;
import android.content.res.XmlResourceParser;
import android.database.Cursor;
import android.database.MatrixCursor;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.os.ParcelFileDescriptor;
import android.support.annotation.GuardedBy;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.text.TextUtils;
import android.webkit.MimeTypeMap;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.xmlpull.v1.XmlPullParserException;

public class FileProvider extends ContentProvider {
    private static final String ATTR_NAME = "name";
    private static final String ATTR_PATH = "path";
    private static final String[] COLUMNS = null;
    private static final File DEVICE_ROOT = null;
    private static final String META_DATA_FILE_PROVIDER_PATHS = "android.support.FILE_PROVIDER_PATHS";
    private static final String TAG_CACHE_PATH = "cache-path";
    private static final String TAG_EXTERNAL = "external-path";
    private static final String TAG_EXTERNAL_CACHE = "external-cache-path";
    private static final String TAG_EXTERNAL_FILES = "external-files-path";
    private static final String TAG_EXTERNAL_MEDIA = "external-media-path";
    private static final String TAG_FILES_PATH = "files-path";
    private static final String TAG_ROOT_PATH = "root-path";

    @GuardedBy("sCache")
    private static HashMap<String, PathStrategy> sCache;
    private PathStrategy mStrategy;

    interface PathStrategy {
        File getFileForUri(Uri r1);

        Uri getUriForFile(File r1);
    }

    static class SimplePathStrategy implements PathStrategy {
        private final String mAuthority;
        private final HashMap<String, File> mRoots;

        SimplePathStrategy(String r2) {
            this.mRoots = new HashMap();
            this.mAuthority = r2;
        }

        void addRoot(String r4, File r5) {
            if (TextUtils.isEmpty(r4) == true) goto L11;
            this.mRoots.put(r4, r5.getCanonicalFile());
            return;
        L7:
            e = move-exception;
            throw new IllegalArgumentException("Failed to resolve canonical path for " + r5, e);
        L11:
            throw new IllegalArgumentException("Name must not be empty");
        }

        @Override
        public Uri getUriForFile(File r6) {
            String r62 = r6.getCanonicalPath();     // Catch: IOException -> L21
            Map.Entry<String, File> r0 = null;
            Iterator<Map.Entry<String, File>> r1 = this.mRoots.entrySet().iterator();
        L5:
            if (r1.hasNext() == false) goto L12;
            Map.Entry<String, File> r2 = r1.next();
            String r3 = r2.getValue().getPath();
            if (r62.startsWith(r3) == false) goto L5;
            if (r0 == null) goto L11;
            if (r3.length() <= r0.getValue().getPath().length()) goto L5;
        L11:
            r0 = r2;
            goto L5
        L12:
            if (r0 == null) goto L20;
            String r12 = r0.getValue().getPath();
            if (r12.endsWith("/") == false) goto L16;
            String r63 = r62.substring(r12.length());
        L18:
            return new Uri.Builder().scheme("content").authority(this.mAuthority).encodedPath(Uri.encode(r0.getKey()) + '/' + Uri.encode(r63, "/")).build();
        L16:
            r63 = r62.substring(r12.length() + 1);
            goto L18
        L20:
            throw new IllegalArgumentException("Failed to find configured root that contains " + r62);
        L22:
            throw new IllegalArgumentException("Failed to resolve canonical path for " + r6);
        }

        @Override
        public File getFileForUri(Uri r5) {
            String r0 = r5.getEncodedPath();
            int r2 = r0.indexOf(47, 1);
            String r3 = Uri.decode(r0.substring(1, r2));
            String r02 = Uri.decode(r0.substring(r2 + 1));
            File r1 = this.mRoots.get(r3);
            if (r1 == null) goto L14;
            File r52 = new File(r1, r02);
            File r53 = r52.getCanonicalFile();     // Catch: IOException -> L11
            if (r53.getPath().startsWith(r1.getPath()) == false) goto L10;
            return r53;
        L10:
            throw new SecurityException("Resolved path jumped beyond configured root");
        L12:
            throw new IllegalArgumentException("Failed to resolve canonical path for " + r52);
        L14:
            throw new IllegalArgumentException("Unable to find configured root for " + r5);
        }
    }

    @Override
    public boolean onCreate() {
        return true;
    }

    public FileProvider() {
    }

    static {
        COLUMNS = new String[]{"_display_name", "_size"};
        DEVICE_ROOT = new File("/");
        sCache = new HashMap();
    }

    @Override
    public void attachInfo(@NonNull Context r2, @NonNull ProviderInfo r3) {
        super.attachInfo(r2, r3);
        if (r3.exported == true) goto L11;
        if (r3.grantUriPermissions == false) goto L9;
        this.mStrategy = getPathStrategy(r2, r3.authority);
        return;
    L9:
        throw new SecurityException("Provider must grant uri permissions");
    L11:
        throw new SecurityException("Provider must not be exported");
    }

    public static Uri getUriForFile(@NonNull Context r0, @NonNull String r1, @NonNull File r2) {
        return getPathStrategy(r0, r1).getUriForFile(r2);
    }

    @Override
    public Cursor query(@NonNull Uri r6, @Nullable String[] r7, @Nullable String r8, @Nullable String[] r9, @Nullable String r10) {
        File r62 = this.mStrategy.getFileForUri(r6);
        if (r7 != null) goto L5;
        r7 = COLUMNS;
    L5:
        String[] r82 = new String[r7.length];
        Object[] r92 = new Object[r7.length];
        int r102 = r7.length;
        int r0 = 0;
        int r1 = 0;
    L6:
        if (r0 >= r102) goto L15;
        String r2 = r7[r0];
        if ("_display_name".equals(r2) == false) goto L12;
        r82[r1] = "_display_name";
        int r22 = r1 + 1;
        r92[r1] = r62.getName();
    L10:
        r1 = r22;
    L14:
        r0 = r0 + 1;
        goto L6
    L12:
        if ("_size".equals(r2) == false) goto L14;
        r82[r1] = "_size";
        r22 = r1 + 1;
        r92[r1] = Long.valueOf(r62.length());
        goto L10
    L15:
        String[] r63 = copyOf(r82, r1);
        Object[] r72 = copyOf(r92, r1);
        MatrixCursor r83 = new MatrixCursor(r63, 1);
        r83.addRow(r72);
        return r83;
    }

    @Override
    public String getType(@NonNull Uri r3) {
        File r32 = this.mStrategy.getFileForUri(r3);
        int r0 = r32.getName().lastIndexOf(46);
        if (r0 < 0) goto L7;
        String r33 = r32.getName().substring(r0 + 1);
        String r34 = MimeTypeMap.getSingleton().getMimeTypeFromExtension(r33);
        if (r34 == null) goto L9;
        return r34;
    L9:
        return "application/octet-stream";
    L7:
        return "application/octet-stream";
    }

    @Override
    public Uri insert(@NonNull Uri r1, ContentValues r2) {
        throw new UnsupportedOperationException("No external inserts");
    }

    @Override
    public int update(@NonNull Uri r1, ContentValues r2, @Nullable String r3, @Nullable String[] r4) {
        throw new UnsupportedOperationException("No external updates");
    }

    @Override
    public int delete(@NonNull Uri r1, @Nullable String r2, @Nullable String[] r3) {
        return this.mStrategy.getFileForUri(r1).delete() ? 1 : 0;
    }

    @Override
    public ParcelFileDescriptor openFile(@NonNull Uri r2, @NonNull String r3) throws FileNotFoundException {
        return ParcelFileDescriptor.open(this.mStrategy.getFileForUri(r2), modeToMode(r3));
    }

    private static PathStrategy getPathStrategy(Context r2, String r3) {
        HashMap<String, PathStrategy> r0 = sCache;
        monitor-enter(r0);
        PathStrategy r1 = sCache.get(r3);     // Catch: Throwable -> L16
        if (r1 == null) goto L20;
    L14:
        monitor-exit(r0);     // Catch: Throwable -> L16
        return r1;
    L20:
        r1 = parsePathStrategy(r2, r3);     // Catch: XmlPullParserException -> L8 IOException -> L11 Throwable -> L16
        sCache.put(r3, r1);     // Catch: Throwable -> L16
        goto L14
    L11:
        e = move-exception;
        throw new IllegalArgumentException("Failed to parse android.support.FILE_PROVIDER_PATHS meta-data", e);     // Catch: Throwable -> L16
    L8:
        e = move-exception;
        throw new IllegalArgumentException("Failed to parse android.support.FILE_PROVIDER_PATHS meta-data", e);     // Catch: Throwable -> L16
    L16:
        th = move-exception;
        throw th;
    }

    private static PathStrategy parsePathStrategy(Context r9, String r10) throws IOException, XmlPullParserException {
        SimplePathStrategy r0 = new SimplePathStrategy(r10);
        XmlResourceParser r102 = r9.getPackageManager().resolveContentProvider(r10, 128).loadXmlMetaData(r9.getPackageManager(), META_DATA_FILE_PROVIDER_PATHS);
        if (r102 == null) goto L41;
    L4:
        int r1 = r102.next();
        if (r1 == 1) goto L39;
        if (r1 != 2) goto L4;
        String r12 = r102.getName();
        File r3 = null;
        String r4 = r102.getAttributeValue(null, ATTR_NAME);
        String r5 = r102.getAttributeValue(null, ATTR_PATH);
        if (TAG_ROOT_PATH.equals(r12) == false) goto L12;
        r3 = DEVICE_ROOT;
    L37:
        if (r3 == null) goto L4;
        r0.addRoot(r4, buildPath(r3, new String[]{r5}));
        goto L4
    L12:
        if (TAG_FILES_PATH.equals(r12) == false) goto L15;
        r3 = r9.getFilesDir();
        goto L37
    L15:
        if (TAG_CACHE_PATH.equals(r12) == false) goto L18;
        r3 = r9.getCacheDir();
        goto L37
    L18:
        if (TAG_EXTERNAL.equals(r12) == false) goto L21;
        r3 = Environment.getExternalStorageDirectory();
        goto L37
    L21:
        if (TAG_EXTERNAL_FILES.equals(r12) == false) goto L26;
        File[] r13 = ContextCompat.getExternalFilesDirs(r9, null);
        if (r13.length <= 0) goto L37;
        r3 = r13[0];
        goto L37
    L26:
        if (TAG_EXTERNAL_CACHE.equals(r12) == false) goto L31;
        File[] r14 = ContextCompat.getExternalCacheDirs(r9);
        if (r14.length <= 0) goto L37;
        r3 = r14[0];
        goto L37
    L31:
        if (Build.VERSION.SDK_INT < 21) goto L37;
        if (TAG_EXTERNAL_MEDIA.equals(r12) == false) goto L37;
        File[] r15 = r9.getExternalMediaDirs();
        if (r15.length <= 0) goto L37;
        r3 = r15[0];
        goto L37
    L39:
        return r0;
    L41:
        throw new IllegalArgumentException("Missing android.support.FILE_PROVIDER_PATHS meta-data");
    }

    private static int modeToMode(String r3) {
        if ("r".equals(r3) == false) goto L6;
        return 268435456;
    L6:
        if ("w".equals(r3) == false) goto L8;
    L21:
        return 738197504;
    L8:
        if ("wt".equals(r3) == true) goto L21;
        if ("wa".equals(r3) == false) goto L14;
        return 704643072;
    L14:
        if ("rw".equals(r3) == false) goto L17;
        return 939524096;
    L17:
        if ("rwt".equals(r3) == false) goto L20;
        return 1006632960;
    L20:
        throw new IllegalArgumentException("Invalid mode: " + r3);
    }

    private static File buildPath(File r4, String... r5) {
        int r0 = r5.length;
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L8;
        String r2 = r5[r1];
        if (r2 == null) goto L7;
        r4 = new File(r4, r2);
    L7:
        r1 = r1 + 1;
        goto L3
    L8:
        return r4;
    }

    private static String[] copyOf(String[] r2, int r3) {
        String[] r0 = new String[r3];
        System.arraycopy(r2, 0, r0, 0, r3);
        return r0;
    }

    private static Object[] copyOf(Object[] r2, int r3) {
        Object[] r0 = new Object[r3];
        System.arraycopy(r2, 0, r0, 0, r3);
        return r0;
    }
}
