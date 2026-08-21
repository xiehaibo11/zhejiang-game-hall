package com.mbridge.msdk.optimize;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.net.URLConnection;

public final class a {
    /* JADX WARN: Can't wrap try/catch for region: R(15:76|63|3|(1:5)|(1:7)|8|9|65|10|11|(5:78|12|(3:14|(3:(1:19)|20|81)(1:82)|21)(1:80)|75|59)|(1:24)|67|25|(3:30|75|59)(1:86)) */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x0075, code lost:
    
        r11 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0076, code lost:
    
        r11.printStackTrace();
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(File file, String str, String str2, b bVar) {
        InputStream inputStream;
        File file2;
        int contentLength;
        double d;
        byte[] bArr;
        FileOutputStream fileOutputStream;
        int i;
        int i2;
        FileOutputStream fileOutputStream2 = null;
        try {
            try {
                file2 = new File(file, str + com.tkay.china.common.a.a.g);
                if (file2.exists()) {
                    file2.delete();
                }
                if (bVar != null) {
                    bVar.a();
                }
                URLConnection uRLConnectionOpenConnection = new URL(str2).openConnection();
                uRLConnectionOpenConnection.setConnectTimeout(8000);
                contentLength = uRLConnectionOpenConnection.getContentLength();
                d = 100.0d / ((double) contentLength);
                inputStream = uRLConnectionOpenConnection.getInputStream();
                try {
                    bArr = new byte[1024];
                    fileOutputStream = new FileOutputStream(file2, true);
                    i = 0;
                    i2 = 0;
                } catch (Throwable unused) {
                }
            } catch (Throwable unused2) {
                inputStream = null;
            }
            while (true) {
                try {
                    int i3 = inputStream.read(bArr);
                    if (i3 == -1) {
                        break;
                    }
                    fileOutputStream.write(bArr, 0, i3);
                    i += i3;
                    int i4 = (int) (((double) i) * d);
                    if (i2 >= 512 || i4 == 100) {
                        if (bVar != null) {
                            bVar.a(i4);
                        }
                        i2 = 0;
                    }
                    i2++;
                } catch (Throwable unused3) {
                    fileOutputStream2 = fileOutputStream;
                    if (bVar != null) {
                        try {
                            bVar.b();
                        } finally {
                        }
                    }
                    if (fileOutputStream2 != null) {
                        try {
                            fileOutputStream2.close();
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    }
                    if (inputStream == null) {
                        return;
                    } else {
                        inputStream.close();
                    }
                }
            }
            if (i == contentLength && bVar != null) {
                bVar.a(file2);
            }
            fileOutputStream.close();
            if (inputStream != null) {
                inputStream.close();
            }
        } catch (IOException e2) {
            e2.printStackTrace();
        }
    }
}
