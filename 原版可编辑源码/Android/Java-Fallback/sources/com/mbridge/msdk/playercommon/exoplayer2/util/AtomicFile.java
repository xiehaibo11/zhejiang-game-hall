package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class AtomicFile {
    private static final java.lang.String TAG = "AtomicFile";
    private final java.io.File backupName;
    private final java.io.File baseName;

    private static final class AtomicFileOutputStream extends java.io.OutputStream {
        private boolean closed;
        private final java.io.FileOutputStream fileOutputStream;

        public AtomicFileOutputStream(java.io.File r2) throws java.io.FileNotFoundException {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.closed = r0
                java.io.FileOutputStream r0 = new java.io.FileOutputStream
                r0.<init>(r2)
                r1.fileOutputStream = r0
                return
        }

        @Override
        public final void close() throws java.io.IOException {
                r3 = this;
                boolean r0 = r3.closed
                if (r0 == 0) goto L5
                return
            L5:
                r0 = 1
                r3.closed = r0
                r3.flush()
                java.io.FileOutputStream r0 = r3.fileOutputStream     // Catch: java.io.IOException -> L15
                java.io.FileDescriptor r0 = r0.getFD()     // Catch: java.io.IOException -> L15
                r0.sync()     // Catch: java.io.IOException -> L15
                goto L1d
            L15:
                r0 = move-exception
                java.lang.String r1 = "AtomicFile"
                java.lang.String r2 = "Failed to sync file descriptor:"
                android.util.Log.w(r1, r2, r0)
            L1d:
                java.io.FileOutputStream r0 = r3.fileOutputStream
                r0.close()
                return
        }

        @Override
        public final void flush() throws java.io.IOException {
                r1 = this;
                java.io.FileOutputStream r0 = r1.fileOutputStream
                r0.flush()
                return
        }

        @Override
        public final void write(int r2) throws java.io.IOException {
                r1 = this;
                java.io.FileOutputStream r0 = r1.fileOutputStream
                r0.write(r2)
                return
        }

        @Override
        public final void write(byte[] r2) throws java.io.IOException {
                r1 = this;
                java.io.FileOutputStream r0 = r1.fileOutputStream
                r0.write(r2)
                return
        }

        @Override
        public final void write(byte[] r2, int r3, int r4) throws java.io.IOException {
                r1 = this;
                java.io.FileOutputStream r0 = r1.fileOutputStream
                r0.write(r2, r3, r4)
                return
        }
    }

    public AtomicFile(java.io.File r3) {
            r2 = this;
            r2.<init>()
            r2.baseName = r3
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r3.getPath()
            r1.append(r3)
            java.lang.String r3 = ".bak"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            r2.backupName = r0
            return
    }

    private void restoreBackup() {
            r2 = this;
            java.io.File r0 = r2.backupName
            boolean r0 = r0.exists()
            if (r0 == 0) goto L14
            java.io.File r0 = r2.baseName
            r0.delete()
            java.io.File r0 = r2.backupName
            java.io.File r1 = r2.baseName
            r0.renameTo(r1)
        L14:
            return
    }

    public final void delete() {
            r1 = this;
            java.io.File r0 = r1.baseName
            r0.delete()
            java.io.File r0 = r1.backupName
            r0.delete()
            return
    }

    public final void endWrite(java.io.OutputStream r1) throws java.io.IOException {
            r0 = this;
            r1.close()
            java.io.File r1 = r0.backupName
            r1.delete()
            return
    }

    public final java.io.InputStream openRead() throws java.io.FileNotFoundException {
            r2 = this;
            r2.restoreBackup()
            java.io.FileInputStream r0 = new java.io.FileInputStream
            java.io.File r1 = r2.baseName
            r0.<init>(r1)
            return r0
    }

    public final java.io.OutputStream startWrite() throws java.io.IOException {
            r4 = this;
            java.io.File r0 = r4.baseName
            boolean r0 = r0.exists()
            if (r0 == 0) goto L42
            java.io.File r0 = r4.backupName
            boolean r0 = r0.exists()
            if (r0 != 0) goto L3d
            java.io.File r0 = r4.baseName
            java.io.File r1 = r4.backupName
            boolean r0 = r0.renameTo(r1)
            if (r0 != 0) goto L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Couldn't rename file "
            r0.append(r1)
            java.io.File r1 = r4.baseName
            r0.append(r1)
            java.lang.String r1 = " to backup file "
            r0.append(r1)
            java.io.File r1 = r4.backupName
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AtomicFile"
            android.util.Log.w(r1, r0)
            goto L42
        L3d:
            java.io.File r0 = r4.baseName
            r0.delete()
        L42:
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile$AtomicFileOutputStream r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile$AtomicFileOutputStream     // Catch: java.io.FileNotFoundException -> L4a
            java.io.File r1 = r4.baseName     // Catch: java.io.FileNotFoundException -> L4a
            r0.<init>(r1)     // Catch: java.io.FileNotFoundException -> L4a
            goto L5e
        L4a:
            r0 = move-exception
            java.io.File r1 = r4.baseName
            java.io.File r1 = r1.getParentFile()
            boolean r1 = r1.mkdirs()
            if (r1 == 0) goto L79
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile$AtomicFileOutputStream r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile$AtomicFileOutputStream     // Catch: java.io.FileNotFoundException -> L5f
            java.io.File r1 = r4.baseName     // Catch: java.io.FileNotFoundException -> L5f
            r0.<init>(r1)     // Catch: java.io.FileNotFoundException -> L5f
        L5e:
            return r0
        L5f:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Couldn't create "
            r2.append(r3)
            java.io.File r3 = r4.baseName
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
        L79:
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Couldn't create directory "
            r2.append(r3)
            java.io.File r3 = r4.baseName
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
    }
}
