package android.support.v4.provider;

public abstract class DocumentFile {
    static final java.lang.String TAG = "DocumentFile";

    @android.support.annotation.Nullable
    private final android.support.v4.provider.DocumentFile mParent;

    DocumentFile(@android.support.annotation.Nullable android.support.v4.provider.DocumentFile r1) {
            r0 = this;
            r0.<init>()
            r0.mParent = r1
            return
    }

    @android.support.annotation.NonNull
    public static android.support.v4.provider.DocumentFile fromFile(@android.support.annotation.NonNull java.io.File r2) {
            android.support.v4.provider.RawDocumentFile r0 = new android.support.v4.provider.RawDocumentFile
            r1 = 0
            r0.<init>(r1, r2)
            return r0
    }

    @android.support.annotation.Nullable
    public static android.support.v4.provider.DocumentFile fromSingleUri(@android.support.annotation.NonNull android.content.Context r3, @android.support.annotation.NonNull android.net.Uri r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 19
            if (r0 < r2) goto Ld
            android.support.v4.provider.SingleDocumentFile r0 = new android.support.v4.provider.SingleDocumentFile
            r0.<init>(r1, r3, r4)
            return r0
        Ld:
            return r1
    }

    @android.support.annotation.Nullable
    public static android.support.v4.provider.DocumentFile fromTreeUri(@android.support.annotation.NonNull android.content.Context r3, @android.support.annotation.NonNull android.net.Uri r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 21
            if (r0 < r2) goto L15
            android.support.v4.provider.TreeDocumentFile r0 = new android.support.v4.provider.TreeDocumentFile
            java.lang.String r2 = android.provider.DocumentsContract.getTreeDocumentId(r4)
            android.net.Uri r4 = android.provider.DocumentsContract.buildDocumentUriUsingTree(r4, r2)
            r0.<init>(r1, r3, r4)
            return r0
        L15:
            return r1
    }

    public static boolean isDocumentUri(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.Nullable android.net.Uri r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r2 = android.provider.DocumentsContract.isDocumentUri(r2, r3)
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public abstract boolean canRead();

    public abstract boolean canWrite();

    @android.support.annotation.Nullable
    public abstract android.support.v4.provider.DocumentFile createDirectory(@android.support.annotation.NonNull java.lang.String r1);

    @android.support.annotation.Nullable
    public abstract android.support.v4.provider.DocumentFile createFile(@android.support.annotation.NonNull java.lang.String r1, @android.support.annotation.NonNull java.lang.String r2);

    public abstract boolean delete();

    public abstract boolean exists();

    @android.support.annotation.Nullable
    public android.support.v4.provider.DocumentFile findFile(@android.support.annotation.NonNull java.lang.String r6) {
            r5 = this;
            android.support.v4.provider.DocumentFile[] r0 = r5.listFiles()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L18
            r3 = r0[r2]
            java.lang.String r4 = r3.getName()
            boolean r4 = r6.equals(r4)
            if (r4 == 0) goto L15
            return r3
        L15:
            int r2 = r2 + 1
            goto L6
        L18:
            r6 = 0
            return r6
    }

    @android.support.annotation.Nullable
    public abstract java.lang.String getName();

    @android.support.annotation.Nullable
    public android.support.v4.provider.DocumentFile getParentFile() {
            r1 = this;
            android.support.v4.provider.DocumentFile r0 = r1.mParent
            return r0
    }

    @android.support.annotation.Nullable
    public abstract java.lang.String getType();

    @android.support.annotation.NonNull
    public abstract android.net.Uri getUri();

    public abstract boolean isDirectory();

    public abstract boolean isFile();

    public abstract boolean isVirtual();

    public abstract long lastModified();

    public abstract long length();

    @android.support.annotation.NonNull
    public abstract android.support.v4.provider.DocumentFile[] listFiles();

    public abstract boolean renameTo(@android.support.annotation.NonNull java.lang.String r1);
}
