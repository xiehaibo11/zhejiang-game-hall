package com.mbridge.msdk.thrid.okhttp.internal.io;

public interface FileSystem {
    public static final com.mbridge.msdk.thrid.okhttp.internal.io.FileSystem SYSTEM = null;


    static {
            com.mbridge.msdk.thrid.okhttp.internal.io.FileSystem$1 r0 = new com.mbridge.msdk.thrid.okhttp.internal.io.FileSystem$1
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.internal.io.FileSystem.SYSTEM = r0
            return
    }

    com.mbridge.msdk.thrid.okio.Sink appendingSink(java.io.File r1) throws java.io.FileNotFoundException;

    void delete(java.io.File r1) throws java.io.IOException;

    void deleteContents(java.io.File r1) throws java.io.IOException;

    boolean exists(java.io.File r1);

    void rename(java.io.File r1, java.io.File r2) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.Sink sink(java.io.File r1) throws java.io.FileNotFoundException;

    long size(java.io.File r1);

    com.mbridge.msdk.thrid.okio.Source source(java.io.File r1) throws java.io.FileNotFoundException;
}
