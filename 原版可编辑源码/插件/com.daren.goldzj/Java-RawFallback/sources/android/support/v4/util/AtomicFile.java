package android.support.v4.util;

public class AtomicFile {
    private final java.io.File mBackupName;
    private final java.io.File mBaseName;

    public AtomicFile(@android.support.annotation.NonNull java.io.File r3) {
            r2 = this;
            r2.<init>()
            r2.mBaseName = r3
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r3.getPath()
            r1.append(r3)
            java.lang.String r3 = ".bak"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            r2.mBackupName = r0
            return
    }

    private static boolean sync(@android.support.annotation.NonNull java.io.FileOutputStream r0) {
            java.io.FileDescriptor r0 = r0.getFD()     // Catch: java.io.IOException -> L9
            r0.sync()     // Catch: java.io.IOException -> L9
            r0 = 1
            return r0
        L9:
            r0 = 0
            return r0
    }

    public void delete() {
            r1 = this;
            java.io.File r0 = r1.mBaseName
            r0.delete()
            java.io.File r0 = r1.mBackupName
            r0.delete()
            return
    }

    public void failWrite(@android.support.annotation.Nullable java.io.FileOutputStream r3) {
            r2 = this;
            if (r3 == 0) goto L1d
            sync(r3)
            r3.close()     // Catch: java.io.IOException -> L15
            java.io.File r3 = r2.mBaseName     // Catch: java.io.IOException -> L15
            r3.delete()     // Catch: java.io.IOException -> L15
            java.io.File r3 = r2.mBackupName     // Catch: java.io.IOException -> L15
            java.io.File r0 = r2.mBaseName     // Catch: java.io.IOException -> L15
            r3.renameTo(r0)     // Catch: java.io.IOException -> L15
            goto L1d
        L15:
            r3 = move-exception
            java.lang.String r0 = "AtomicFile"
            java.lang.String r1 = "failWrite: Got exception:"
            android.util.Log.w(r0, r1, r3)
        L1d:
            return
    }

    public void finishWrite(@android.support.annotation.Nullable java.io.FileOutputStream r3) {
            r2 = this;
            if (r3 == 0) goto L16
            sync(r3)
            r3.close()     // Catch: java.io.IOException -> Le
            java.io.File r3 = r2.mBackupName     // Catch: java.io.IOException -> Le
            r3.delete()     // Catch: java.io.IOException -> Le
            goto L16
        Le:
            r3 = move-exception
            java.lang.String r0 = "AtomicFile"
            java.lang.String r1 = "finishWrite: Got exception:"
            android.util.Log.w(r0, r1, r3)
        L16:
            return
    }

    @android.support.annotation.NonNull
    public java.io.File getBaseFile() {
            r1 = this;
            java.io.File r0 = r1.mBaseName
            return r0
    }

    @android.support.annotation.NonNull
    public java.io.FileInputStream openRead() throws java.io.FileNotFoundException {
            r2 = this;
            java.io.File r0 = r2.mBackupName
            boolean r0 = r0.exists()
            if (r0 == 0) goto L14
            java.io.File r0 = r2.mBaseName
            r0.delete()
            java.io.File r0 = r2.mBackupName
            java.io.File r1 = r2.mBaseName
            r0.renameTo(r1)
        L14:
            java.io.FileInputStream r0 = new java.io.FileInputStream
            java.io.File r1 = r2.mBaseName
            r0.<init>(r1)
            return r0
    }

    @android.support.annotation.NonNull
    public byte[] readFully() throws java.io.IOException {
            r6 = this;
            java.io.FileInputStream r0 = r6.openRead()
            int r1 = r0.available()     // Catch: java.lang.Throwable -> L29
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L29
            r2 = 0
            r3 = 0
        Lc:
            int r4 = r1.length     // Catch: java.lang.Throwable -> L29
            int r4 = r4 - r3
            int r4 = r0.read(r1, r3, r4)     // Catch: java.lang.Throwable -> L29
            if (r4 > 0) goto L18
            r0.close()
            return r1
        L18:
            int r3 = r3 + r4
            int r4 = r0.available()     // Catch: java.lang.Throwable -> L29
            int r5 = r1.length     // Catch: java.lang.Throwable -> L29
            int r5 = r5 - r3
            if (r4 <= r5) goto Lc
            int r4 = r4 + r3
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L29
            java.lang.System.arraycopy(r1, r2, r4, r2, r3)     // Catch: java.lang.Throwable -> L29
            r1 = r4
            goto Lc
        L29:
            r1 = move-exception
            r0.close()
            throw r1
    }

    @android.support.annotation.NonNull
    public java.io.FileOutputStream startWrite() throws java.io.IOException {
            r3 = this;
            java.io.File r0 = r3.mBaseName
            boolean r0 = r0.exists()
            if (r0 == 0) goto L42
            java.io.File r0 = r3.mBackupName
            boolean r0 = r0.exists()
            if (r0 != 0) goto L3d
            java.io.File r0 = r3.mBaseName
            java.io.File r1 = r3.mBackupName
            boolean r0 = r0.renameTo(r1)
            if (r0 != 0) goto L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Couldn't rename file "
            r0.append(r1)
            java.io.File r1 = r3.mBaseName
            r0.append(r1)
            java.lang.String r1 = " to backup file "
            r0.append(r1)
            java.io.File r1 = r3.mBackupName
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AtomicFile"
            android.util.Log.w(r1, r0)
            goto L42
        L3d:
            java.io.File r0 = r3.mBaseName
            r0.delete()
        L42:
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.io.FileNotFoundException -> L4a
            java.io.File r1 = r3.mBaseName     // Catch: java.io.FileNotFoundException -> L4a
            r0.<init>(r1)     // Catch: java.io.FileNotFoundException -> L4a
            goto L5e
        L4a:
            java.io.File r0 = r3.mBaseName
            java.io.File r0 = r0.getParentFile()
            boolean r0 = r0.mkdirs()
            if (r0 == 0) goto L78
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.io.FileNotFoundException -> L5f
            java.io.File r1 = r3.mBaseName     // Catch: java.io.FileNotFoundException -> L5f
            r0.<init>(r1)     // Catch: java.io.FileNotFoundException -> L5f
        L5e:
            return r0
        L5f:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Couldn't create "
            r1.append(r2)
            java.io.File r2 = r3.mBaseName
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L78:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Couldn't create directory "
            r1.append(r2)
            java.io.File r2 = r3.mBaseName
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }
}
