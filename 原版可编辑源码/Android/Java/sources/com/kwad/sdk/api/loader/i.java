package com.kwad.sdk.api.loader;

import com.kwad.sdk.api.core.TLSConnectionUtils;
import cz.msebera.android.httpclient.HttpHeaders;
import java.io.BufferedInputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;

public final class i {
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0053  */
    /* JADX WARN: Type inference failed for: r1v0 */
    /* JADX WARN: Type inference failed for: r1v1, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r1v7 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void b(String str, File file) throws Throwable {
        BufferedInputStream bufferedInputStream;
        ?? r1;
        FileOutputStream fileOutputStream;
        HttpURLConnection httpURLConnection;
        FileOutputStream fileOutputStream2 = null;
        try {
            if (file.exists()) {
                h.j(file);
            }
            FileOutputStream fileOutputStream3 = new FileOutputStream(file, false);
            try {
                HttpURLConnection httpURLConnectionBW = bW(str);
                try {
                    bufferedInputStream = new BufferedInputStream(httpURLConnectionBW.getInputStream());
                    try {
                        byte[] bArr = new byte[com.sigmob.sdk.archives.tar.d.b];
                        while (true) {
                            int i = bufferedInputStream.read(bArr);
                            if (i == -1) {
                                break;
                            } else {
                                fileOutputStream3.write(bArr, 0, i);
                            }
                        }
                        closeQuietly(fileOutputStream3);
                        closeQuietly(bufferedInputStream);
                        if (httpURLConnectionBW != null) {
                            httpURLConnectionBW.disconnect();
                        }
                    } catch (Throwable th) {
                        fileOutputStream = fileOutputStream3;
                        httpURLConnection = httpURLConnectionBW;
                        th = th;
                        fileOutputStream2 = fileOutputStream;
                        r1 = httpURLConnection;
                        closeQuietly(fileOutputStream2);
                        closeQuietly(bufferedInputStream);
                        if (r1 != 0) {
                        }
                        throw th;
                    }
                } catch (Throwable th2) {
                    fileOutputStream = fileOutputStream3;
                    httpURLConnection = httpURLConnectionBW;
                    th = th2;
                    bufferedInputStream = null;
                }
            } catch (Throwable th3) {
                th = th3;
                bufferedInputStream = null;
                fileOutputStream2 = fileOutputStream3;
                r1 = bufferedInputStream;
                closeQuietly(fileOutputStream2);
                closeQuietly(bufferedInputStream);
                if (r1 != 0) {
                    r1.disconnect();
                }
                throw th;
            }
        } catch (Throwable th4) {
            th = th4;
            bufferedInputStream = null;
        }
    }

    private static HttpURLConnection bW(String str) {
        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
        TLSConnectionUtils.wrapHttpURLConnection(httpURLConnection);
        httpURLConnection.setRequestProperty(HttpHeaders.ACCEPT_LANGUAGE, "zh-CN");
        httpURLConnection.setConnectTimeout(10000);
        httpURLConnection.setReadTimeout(120000);
        httpURLConnection.setUseCaches(false);
        httpURLConnection.setDoInput(true);
        httpURLConnection.setRequestProperty("Connection", "keep-alive");
        httpURLConnection.setRequestProperty("Charset", "UTF-8");
        return httpURLConnection;
    }

    private static void closeQuietly(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException unused) {
            }
        }
    }
}
