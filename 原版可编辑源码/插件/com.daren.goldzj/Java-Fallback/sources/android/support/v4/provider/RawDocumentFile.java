package android.support.v4.provider;

import android.net.Uri;
import android.support.annotation.Nullable;
import android.util.Log;
import android.webkit.MimeTypeMap;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;

class RawDocumentFile extends DocumentFile {
    private File mFile;

    @Override
    public boolean isVirtual() {
        return false;
    }

    RawDocumentFile(@Nullable DocumentFile r1, File r2) {
        super(r1);
        this.mFile = r2;
    }

    @Override
    @Nullable
    public DocumentFile createFile(String r2, String r3) {
        String r22 = MimeTypeMap.getSingleton().getExtensionFromMimeType(r2);
        if (r22 == null) goto L5;
        r3 = r3 + "." + r22;
    L5:
        File r23 = new File(this.mFile, r3);
        r23.createNewFile();     // Catch: IOException -> L8
        return new RawDocumentFile(this, r23);
    L8:
        e = move-exception;
        Log.w("DocumentFile", "Failed to createFile: " + e);
        return null;
    }

    @Override
    @Nullable
    public DocumentFile createDirectory(String r3) {
        File r0 = new File(this.mFile, r3);
        if (r0.isDirectory() == true) goto L10;
        if (r0.mkdir() == true) goto L10;
        return null;
    L10:
        return new RawDocumentFile(this, r0);
    }

    @Override
    public Uri getUri() {
        return Uri.fromFile(this.mFile);
    }

    @Override
    public String getName() {
        return this.mFile.getName();
    }

    @Override
    @Nullable
    public String getType() {
        if (this.mFile.isDirectory() == false) goto L7;
        return null;
    L7:
        return getTypeForName(this.mFile.getName());
    }

    @Override
    public boolean isDirectory() {
        return this.mFile.isDirectory();
    }

    @Override
    public boolean isFile() {
        return this.mFile.isFile();
    }

    @Override
    public long lastModified() {
        return this.mFile.lastModified();
    }

    @Override
    public long length() {
        return this.mFile.length();
    }

    @Override
    public boolean canRead() {
        return this.mFile.canRead();
    }

    @Override
    public boolean canWrite() {
        return this.mFile.canWrite();
    }

    @Override
    public boolean delete() {
        deleteContents(this.mFile);
        return this.mFile.delete();
    }

    @Override
    public boolean exists() {
        return this.mFile.exists();
    }

    @Override
    public DocumentFile[] listFiles() {
        ArrayList r0 = new ArrayList();
        File[] r1 = this.mFile.listFiles();
        if (r1 == null) goto L8;
        int r2 = r1.length;
        int r3 = 0;
    L5:
        if (r3 >= r2) goto L8;
        r0.add(new RawDocumentFile(this, r1[r3]));
        r3 = r3 + 1;
    L8:
        return (DocumentFile[]) r0.toArray(new DocumentFile[r0.size()]);
    }

    @Override
    public boolean renameTo(String r3) {
        File r0 = new File(this.mFile.getParentFile(), r3);
        if (this.mFile.renameTo(r0) == false) goto L6;
        this.mFile = r0;
        return true;
    L6:
        return false;
    }

    private static String getTypeForName(String r1) {
        int r0 = r1.lastIndexOf(46);
        if (r0 < 0) goto L7;
        String r12 = r1.substring(r0 + 1).toLowerCase();
        String r13 = MimeTypeMap.getSingleton().getMimeTypeFromExtension(r12);
        if (r13 == null) goto L9;
        return r13;
    L9:
        return "application/octet-stream";
    L7:
        return "application/octet-stream";
    }

    private static boolean deleteContents(File r6) {
        File[] r62 = r6.listFiles();
        if (r62 == null) goto L18;
        int r1 = r62.length;
        int r0 = 0;
        boolean r3 = true;
    L5:
        if (r0 >= r1) goto L14;
        File r4 = r62[r0];
        if (r4.isDirectory() == false) goto L10;
        r3 = r3 & deleteContents(r4);
    L10:
        if (r4.delete() == true) goto L12;
        Log.w("DocumentFile", "Failed to delete " + r4);
        r3 = false;
    L12:
        r0 = r0 + 1;
        goto L5
    L14:
        return r3;
    L18:
        return true;
    }
}
