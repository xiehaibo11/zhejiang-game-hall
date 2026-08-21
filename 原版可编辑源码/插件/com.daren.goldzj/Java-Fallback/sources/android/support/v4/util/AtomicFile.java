package android.support.v4.util;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.util.Log;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class AtomicFile {
    private final File mBackupName;
    private final File mBaseName;

    public AtomicFile(@NonNull File r3) {
        this.mBaseName = r3;
        this.mBackupName = new File(r3.getPath() + ".bak");
    }

    @NonNull
    public File getBaseFile() {
        return this.mBaseName;
    }

    public void delete() {
        this.mBaseName.delete();
        this.mBackupName.delete();
    }

    @NonNull
    public FileOutputStream startWrite() throws IOException {
        if (this.mBaseName.exists() == true) goto L5;
    L22:
        return new FileOutputStream(this.mBaseName);
    L13:
        if (this.mBaseName.getParentFile().mkdirs() == false) goto L19;
        return new FileOutputStream(this.mBaseName);
    L17:
        throw new IOException("Couldn't create " + this.mBaseName);
    L19:
        throw new IOException("Couldn't create directory " + this.mBaseName);
    L5:
        if (this.mBackupName.exists() == false) goto L7;
        this.mBaseName.delete();
        goto L22
    L7:
        if (this.mBaseName.renameTo(this.mBackupName) == true) goto L22;
        Log.w("AtomicFile", "Couldn't rename file " + this.mBaseName + " to backup file " + this.mBackupName);
        goto L22
    }

    public void finishWrite(@Nullable FileOutputStream r3) {
        if (r3 == null) goto L11;
        sync(r3);
        r3.close();     // Catch: IOException -> L6
        this.mBackupName.delete();     // Catch: IOException -> L6
        return;
    L6:
        e = move-exception;
        Log.w("AtomicFile", "finishWrite: Got exception:", e);
        return;
    }

    public void failWrite(@Nullable FileOutputStream r3) {
        if (r3 == null) goto L11;
        sync(r3);
        r3.close();     // Catch: IOException -> L6
        this.mBaseName.delete();     // Catch: IOException -> L6
        this.mBackupName.renameTo(this.mBaseName);     // Catch: IOException -> L6
        return;
    L6:
        e = move-exception;
        Log.w("AtomicFile", "failWrite: Got exception:", e);
        return;
    }

    @NonNull
    public FileInputStream openRead() throws FileNotFoundException {
        if (this.mBackupName.exists() == false) goto L6;
        this.mBaseName.delete();
        this.mBackupName.renameTo(this.mBaseName);
    L6:
        return new FileInputStream(this.mBaseName);
    }

    @NonNull
    public byte[] readFully() throws IOException {
        FileInputStream r0 = openRead();
        byte[] r1 = new byte[r0.available()];     // Catch: Throwable -> L13
        int r3 = 0;
    L4:
        int r4 = r0.read(r1, r3, r1.length - r3);     // Catch: Throwable -> L13
        if (r4 <= 0) goto L6;
        r3 = r3 + r4;
        int r42 = r0.available();     // Catch: Throwable -> L13
        if (r42 <= (r1.length - r3)) goto L4;
        byte[] r43 = new byte[r42 + r3];     // Catch: Throwable -> L13
        System.arraycopy(r1, 0, r43, 0, r3);     // Catch: Throwable -> L13
        r1 = r43;
        goto L4
    L6:
        r0.close();
        return r1;
    L13:
        th = move-exception;
        r0.close();
        throw th;
    }

    private static boolean sync(@NonNull FileOutputStream r0) {
        r0.getFD().sync();     // Catch: IOException -> L5
        return true;
    L5:
        return false;
    }
}
