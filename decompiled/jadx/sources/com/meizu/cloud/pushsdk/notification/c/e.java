package com.meizu.cloud.pushsdk.notification.c;

import com.meizu.cloud.pushinternal.DebugLogger;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes3.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final File f4624a;
    private final File b;
    private final String c;

    public e(String str, String str2) {
        this.f4624a = new File(str);
        File file = new File(str2);
        this.b = file;
        this.c = file.getAbsolutePath();
        DebugLogger.i("ZipExtractTask", "Extract mInput file = " + this.f4624a.toString());
        DebugLogger.i("ZipExtractTask", "Extract mOutput file = " + this.b.toString());
    }

    private int a(InputStream inputStream, OutputStream outputStream) {
        StringBuilder sb;
        byte[] bArr = new byte[8192];
        BufferedInputStream bufferedInputStream = new BufferedInputStream(inputStream, 8192);
        BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(outputStream, 8192);
        int i = 0;
        while (true) {
            try {
                try {
                    int i2 = bufferedInputStream.read(bArr, 0, 8192);
                    if (i2 == -1) {
                        break;
                    }
                    bufferedOutputStream.write(bArr, 0, i2);
                    i += i2;
                } catch (IOException e) {
                    DebugLogger.e("ZipExtractTask", "Extracted IOException:" + e.toString());
                    try {
                        bufferedOutputStream.close();
                    } catch (IOException e2) {
                        DebugLogger.e("ZipExtractTask", "out.close() IOException e=" + e2.toString());
                    }
                    try {
                        bufferedInputStream.close();
                    } catch (IOException e3) {
                        e = e3;
                        sb = new StringBuilder();
                        sb.append("in.close() IOException e=");
                        sb.append(e.toString());
                        DebugLogger.e("ZipExtractTask", sb.toString());
                    }
                }
            } catch (Throwable th) {
                try {
                    bufferedOutputStream.close();
                } catch (IOException e4) {
                    DebugLogger.e("ZipExtractTask", "out.close() IOException e=" + e4.toString());
                }
                try {
                    bufferedInputStream.close();
                    throw th;
                } catch (IOException e5) {
                    DebugLogger.e("ZipExtractTask", "in.close() IOException e=" + e5.toString());
                    throw th;
                }
            }
        }
        bufferedOutputStream.flush();
        try {
            bufferedOutputStream.close();
        } catch (IOException e6) {
            DebugLogger.e("ZipExtractTask", "out.close() IOException e=" + e6.toString());
        }
        try {
            bufferedInputStream.close();
        } catch (IOException e7) {
            e = e7;
            sb = new StringBuilder();
            sb.append("in.close() IOException e=");
            sb.append(e.toString());
            DebugLogger.e("ZipExtractTask", sb.toString());
        }
        return i;
    }

    private void b() {
        StringBuilder sb;
        String str;
        File file = this.f4624a;
        if (file == null || !file.exists()) {
            return;
        }
        if (this.f4624a.delete()) {
            sb = new StringBuilder();
            str = "Delete file:";
        } else {
            sb = new StringBuilder();
            str = "Can't delete file:";
        }
        sb.append(str);
        sb.append(this.f4624a.toString());
        sb.append(" after extracted.");
        DebugLogger.i("ZipExtractTask", sb.toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:75:0x01e6  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private long c() throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 544
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.meizu.cloud.pushsdk.notification.c.e.c():long");
    }

    public boolean a() {
        return c() > 0;
    }
}
