package com.sigmob.sdk.archives.utils;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes3.dex */
public final class c {
    private c() {
    }

    public static long a(InputStream inputStream, OutputStream outputStream) throws IOException {
        return a(inputStream, outputStream, 8024);
    }

    public static long a(InputStream inputStream, OutputStream outputStream, int i) throws IOException {
        byte[] bArr = new byte[i];
        long j = 0;
        while (true) {
            int i2 = inputStream.read(bArr);
            if (-1 == i2) {
                return j;
            }
            outputStream.write(bArr, 0, i2);
            j += (long) i2;
        }
    }
}
