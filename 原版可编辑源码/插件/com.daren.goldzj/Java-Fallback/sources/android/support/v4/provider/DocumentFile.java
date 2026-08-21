package android.support.v4.provider;

import android.content.Context;
import android.net.Uri;
import android.os.Build;
import android.provider.DocumentsContract;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import java.io.File;

public abstract class DocumentFile {
    static final String TAG = "DocumentFile";

    @Nullable
    private final DocumentFile mParent;

    public abstract boolean canRead();

    public abstract boolean canWrite();

    @Nullable
    public abstract DocumentFile createDirectory(@NonNull String r1);

    @Nullable
    public abstract DocumentFile createFile(@NonNull String r1, @NonNull String r2);

    public abstract boolean delete();

    public abstract boolean exists();

    @Nullable
    public abstract String getName();

    @Nullable
    public abstract String getType();

    @NonNull
    public abstract Uri getUri();

    public abstract boolean isDirectory();

    public abstract boolean isFile();

    public abstract boolean isVirtual();

    public abstract long lastModified();

    public abstract long length();

    @NonNull
    public abstract DocumentFile[] listFiles();

    public abstract boolean renameTo(@NonNull String r1);

    DocumentFile(@Nullable DocumentFile r1) {
        this.mParent = r1;
    }

    @NonNull
    public static DocumentFile fromFile(@NonNull File r2) {
        return new RawDocumentFile(null, r2);
    }

    @Nullable
    public static DocumentFile fromSingleUri(@NonNull Context r3, @NonNull Uri r4) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return null;
    L5:
        return new SingleDocumentFile(null, r3, r4);
    }

    @Nullable
    public static DocumentFile fromTreeUri(@NonNull Context r3, @NonNull Uri r4) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return new TreeDocumentFile(null, r3, DocumentsContract.buildDocumentUriUsingTree(r4, DocumentsContract.getTreeDocumentId(r4)));
    }

    public static boolean isDocumentUri(@NonNull Context r2, @Nullable Uri r3) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return false;
    L5:
        return DocumentsContract.isDocumentUri(r2, r3);
    }

    @Nullable
    public DocumentFile getParentFile() {
        return this.mParent;
    }

    @Nullable
    public DocumentFile findFile(@NonNull String r6) {
        DocumentFile[] r0 = listFiles();
        int r1 = r0.length;
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L8;
        DocumentFile r3 = r0[r2];
        if (r6.equals(r3.getName()) == true) goto L6;
        r2 = r2 + 1;
        goto L3
    L6:
        return r3;
    L8:
        return null;
    }
}
