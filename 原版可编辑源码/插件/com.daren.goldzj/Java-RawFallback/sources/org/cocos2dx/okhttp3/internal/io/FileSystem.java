package org.cocos2dx.okhttp3.internal.io;

public interface FileSystem {
    public static final org.cocos2dx.okhttp3.internal.io.FileSystem SYSTEM = null;


    static {
            org.cocos2dx.okhttp3.internal.io.FileSystem$1 r0 = new org.cocos2dx.okhttp3.internal.io.FileSystem$1
            r0.<init>()
            org.cocos2dx.okhttp3.internal.io.FileSystem.SYSTEM = r0
            return
    }

    org.cocos2dx.okio.Sink appendingSink(java.io.File r1) throws java.io.FileNotFoundException;

    void delete(java.io.File r1) throws java.io.IOException;

    void deleteContents(java.io.File r1) throws java.io.IOException;

    boolean exists(java.io.File r1);

    void rename(java.io.File r1, java.io.File r2) throws java.io.IOException;

    org.cocos2dx.okio.Sink sink(java.io.File r1) throws java.io.FileNotFoundException;

    long size(java.io.File r1);

    org.cocos2dx.okio.Source source(java.io.File r1) throws java.io.FileNotFoundException;
}
