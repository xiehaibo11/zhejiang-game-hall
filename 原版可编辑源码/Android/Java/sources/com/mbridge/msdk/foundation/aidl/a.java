package com.mbridge.msdk.foundation.aidl;

import android.os.MemoryFile;
import java.io.FileDescriptor;

public final class a {
    public static FileDescriptor a(MemoryFile memoryFile) {
        try {
            Object objA = b.a("android.os.MemoryFile", memoryFile, "getFileDescriptor", new Object[0]);
            if (objA != null) {
                return (FileDescriptor) objA;
            }
        } catch (Throwable unused) {
        }
        return null;
    }
}
