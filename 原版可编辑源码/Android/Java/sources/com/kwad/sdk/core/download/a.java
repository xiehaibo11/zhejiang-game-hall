package com.kwad.sdk.core.download;

import android.content.Context;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.webkit.URLUtil;
import com.kuaishou.weapon.p0.bh;
import com.kwad.sdk.DownloadTask;
import com.kwad.sdk.core.network.q;
import com.kwad.sdk.core.network.s;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ad;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.av;
import com.kwad.sdk.utils.v;
import com.kwad.sdk.utils.w;
import com.xiaomi.mipush.sdk.Constants;
import cz.msebera.android.httpclient.HttpHeaders;
import java.io.BufferedInputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.zip.GZIPInputStream;

public final class a {
    private static Context mContext;
    private static volatile boolean mHasInit;

    public static class a implements c {
        final OutputStream anC;

        public a(File file, boolean z) {
            this.anC = new FileOutputStream(file, z);
        }

        @Override
        public final void close() throws IOException {
            this.anC.close();
        }

        @Override
        public final void write(byte[] bArr, int i, int i2) throws IOException {
            this.anC.write(bArr, 0, i2);
        }
    }

    public interface b {
    }

    public interface c extends Closeable {
        void write(byte[] bArr, int i, int i2);
    }

    public static String B(AdInfo adInfo) {
        if (mContext == null) {
            return "";
        }
        DownloadParams downloadParamsTransform = DownloadParams.transform(adInfo);
        if (TextUtils.isEmpty(downloadParamsTransform.mFileUrl)) {
            return null;
        }
        return av.cK(mContext) + File.separator + cG(downloadParamsTransform.mFileUrl);
    }

    public static void C(AdInfo adInfo) {
        a(adInfo, false);
    }

    private static InputStream a(Map<String, List<String>> map, InputStream inputStream) {
        List<String> value;
        for (Map.Entry<String, List<String>> entry : map.entrySet()) {
            if ("Content-Encoding".equalsIgnoreCase(entry.getKey()) && (value = entry.getValue()) != null && !value.isEmpty()) {
                boolean z = false;
                Iterator<String> it = value.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    if ("gzip".equalsIgnoreCase(it.next())) {
                        z = true;
                        break;
                    }
                }
                if (z) {
                    try {
                        return new GZIPInputStream(inputStream);
                    } catch (IOException unused) {
                        continue;
                    }
                } else {
                    continue;
                }
            }
        }
        return inputStream;
    }

    private static URLConnection a(String str, int i, int i2, boolean z) throws IOException {
        try {
            URLConnection uRLConnectionOpenConnection = new URL(str).openConnection();
            s.wrapHttpURLConnection(uRLConnectionOpenConnection);
            uRLConnectionOpenConnection.setRequestProperty(HttpHeaders.ACCEPT_LANGUAGE, "zh-CN");
            uRLConnectionOpenConnection.setConnectTimeout(10000);
            if (i2 > 0) {
                uRLConnectionOpenConnection.setReadTimeout(i2);
            }
            uRLConnectionOpenConnection.setUseCaches(false);
            uRLConnectionOpenConnection.setDoInput(true);
            uRLConnectionOpenConnection.setRequestProperty("Connection", "keep-alive");
            uRLConnectionOpenConnection.setRequestProperty("Charset", "UTF-8");
            return uRLConnectionOpenConnection;
        } catch (MalformedURLException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return null;
        }
    }

    private static void a(AdInfo adInfo, boolean z) {
        Context context = mContext;
        if (context == null) {
            return;
        }
        if (!ag.isNetworkConnected(context)) {
            Context context2 = mContext;
            v.L(context2, w.bW(context2));
            return;
        }
        DownloadParams downloadParamsTransform = DownloadParams.transform(adInfo);
        int i = 0;
        downloadParamsTransform.requestInstallPermission = false;
        String str = downloadParamsTransform.mFileUrl;
        if (TextUtils.isEmpty(str) || !URLUtil.isNetworkUrl(str)) {
            return;
        }
        DownloadTask.DownloadRequest downloadRequest = new DownloadTask.DownloadRequest(downloadParamsTransform.mFileUrl);
        downloadRequest.setDestinationFileName(cG(str));
        downloadRequest.setTag(downloadParamsTransform);
        downloadRequest.setDownloadEnablePause(downloadParamsTransform.downloadEnablePause);
        if (ServiceProvider.HE().showNotification && aU(mContext)) {
            i = 3;
        }
        downloadRequest.setNotificationVisibility(i);
        com.kwad.sdk.e.a.a(mContext, downloadParamsTransform.mDownloadid, downloadRequest);
    }

    private static boolean a(String str, File file, b bVar, int i) throws Throwable {
        a aVar;
        a aVar2 = null;
        try {
            aVar = new a(file, false);
        } catch (Throwable th) {
            th = th;
        }
        try {
            boolean zA = a(str, (String) null, aVar, (b) null, 0);
            com.kwad.sdk.crash.utils.b.closeQuietly(aVar);
            return zA;
        } catch (Throwable th2) {
            th = th2;
            aVar2 = aVar;
            com.kwad.sdk.crash.utils.b.closeQuietly(aVar2);
            throw th;
        }
    }

    public static boolean a(String str, File file, b bVar, int i, boolean z) throws Throwable {
        a aVar = null;
        try {
            a aVar2 = new a(file, true);
            try {
                boolean zA = a(str, (String) null, (c) aVar2, (b) null, -1, file.length(), -1L, true);
                com.kwad.sdk.crash.utils.b.closeQuietly(aVar2);
                return zA;
            } catch (Throwable th) {
                th = th;
                aVar = aVar2;
                com.kwad.sdk.crash.utils.b.closeQuietly(aVar);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private static boolean a(String str, String str2, c cVar, b bVar, int i) {
        return a(str, (String) null, cVar, bVar, i, -1L, -1L, false);
    }

    private static boolean a(String str, String str2, c cVar, b bVar, int i, long j, long j2, boolean z) throws Throwable {
        HttpURLConnection httpURLConnection;
        HttpURLConnection httpURLConnection2 = null;
        try {
            httpURLConnection = (HttpURLConnection) a(str, 10000, i > 0 ? i : 120000, false);
        } catch (Throwable th) {
            th = th;
        }
        try {
            if (httpURLConnection == null) {
                throw new IOException("Fail to createUrlConnection");
            }
            boolean zA = a(httpURLConnection, str2, cVar, bVar, i, j, -1L, z);
            com.kwad.sdk.crash.utils.b.closeQuietly(cVar);
            if (httpURLConnection != null) {
                httpURLConnection.disconnect();
            }
            return zA;
        } catch (Throwable th2) {
            th = th2;
            httpURLConnection2 = httpURLConnection;
            com.kwad.sdk.crash.utils.b.closeQuietly(cVar);
            if (httpURLConnection2 != null) {
                httpURLConnection2.disconnect();
            }
            throw th;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0041 A[Catch: all -> 0x0132, TryCatch #0 {all -> 0x0132, blocks: (B:5:0x0010, B:7:0x0021, B:9:0x0028, B:10:0x0031, B:12:0x0041, B:14:0x0052, B:20:0x006d), top: B:76:0x0010 }] */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0080 A[Catch: all -> 0x012d, TryCatch #6 {all -> 0x012d, blocks: (B:21:0x0076, B:23:0x0080, B:25:0x008f, B:29:0x00a1, B:24:0x0086), top: B:87:0x0076 }] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0086 A[Catch: all -> 0x012d, TryCatch #6 {all -> 0x012d, blocks: (B:21:0x0076, B:23:0x0080, B:25:0x008f, B:29:0x00a1, B:24:0x0086), top: B:87:0x0076 }] */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00a1 A[Catch: all -> 0x012d, TRY_ENTER, TRY_LEAVE, TryCatch #6 {all -> 0x012d, blocks: (B:21:0x0076, B:23:0x0080, B:25:0x008f, B:29:0x00a1, B:24:0x0086), top: B:87:0x0076 }] */
    /* JADX WARN: Removed duplicated region for block: B:41:0x0100  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x010e A[Catch: all -> 0x0126, LOOP:1: B:43:0x0108->B:45:0x010e, LOOP_END, TRY_LEAVE, TryCatch #2 {all -> 0x0126, blocks: (B:36:0x00ed, B:42:0x0103, B:43:0x0108, B:45:0x010e), top: B:79:0x00ed }] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x011a A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0122 A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0139 A[Catch: all -> 0x0163, TryCatch #1 {all -> 0x0163, blocks: (B:63:0x0135, B:65:0x0139, B:67:0x0162, B:66:0x013c), top: B:77:0x0135 }] */
    /* JADX WARN: Removed duplicated region for block: B:66:0x013c A[Catch: all -> 0x0163, TryCatch #1 {all -> 0x0163, blocks: (B:63:0x0135, B:65:0x0139, B:67:0x0162, B:66:0x013c), top: B:77:0x0135 }] */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0112 A[EDGE_INSN: B:90:0x0112->B:47:0x0112 BREAK  A[LOOP:1: B:43:0x0108->B:45:0x010e], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean a(HttpURLConnection httpURLConnection, String str, c cVar, b bVar, int i, long j, long j2, boolean z) throws IOException {
        InputStream bufferedInputStream;
        FileOutputStream fileOutputStream;
        File file;
        int contentLength;
        HashMap map;
        BufferedInputStream bufferedInputStream2;
        byte[] bArr;
        int i2;
        InputStream bufferedInputStream3 = null;
        if (j <= 0 || !z) {
            q.b(httpURLConnection);
            httpURLConnection.setRequestProperty("Accept-Encoding", "gzip");
            if (!TextUtils.isEmpty(str)) {
                httpURLConnection.setRequestProperty("Host", str);
                httpURLConnection.setInstanceFollowRedirects(false);
                if (httpURLConnection.getResponseCode() == 302) {
                    boolean zA = a(httpURLConnection.getHeaderField("Location"), (String) null, cVar, bVar, i);
                    com.kwad.sdk.crash.utils.b.closeQuietly(cVar);
                    com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) null);
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) null);
                    return zA;
                }
            }
            bufferedInputStream = new BufferedInputStream(httpURLConnection.getInputStream());
            try {
                contentLength = httpURLConnection.getContentLength();
                map = httpURLConnection.getHeaderFields() != null ? new HashMap() : new HashMap(httpURLConnection.getHeaderFields());
                bufferedInputStream2 = new BufferedInputStream(httpURLConnection.getInputStream());
                try {
                    bufferedInputStream = a(map, bufferedInputStream2);
                    if (contentLength > 0) {
                        Random random = new Random(System.currentTimeMillis());
                        file = new File(av.cL(mContext), random.nextInt() + bh.k);
                        try {
                            fileOutputStream = new FileOutputStream(file);
                            try {
                                byte[] bArr2 = new byte[8192];
                                int i3 = 0;
                                while (true) {
                                    int i4 = bufferedInputStream.read(bArr2);
                                    if (i4 == -1) {
                                        break;
                                    }
                                    i3 += i4;
                                    fileOutputStream.write(bArr2, 0, i4);
                                }
                                com.kwad.sdk.crash.utils.b.closeQuietly(bufferedInputStream);
                                com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream);
                                bufferedInputStream3 = new BufferedInputStream(new FileInputStream(file));
                                try {
                                    map.put("Content-Length", Collections.singletonList(String.valueOf(i3)));
                                } catch (Throwable th) {
                                    th = th;
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                bufferedInputStream3 = bufferedInputStream;
                                if (!(th instanceof IOException)) {
                                }
                            }
                        } catch (Throwable th3) {
                            th = th3;
                            fileOutputStream = null;
                        }
                    } else {
                        fileOutputStream = null;
                        file = null;
                        bufferedInputStream3 = bufferedInputStream;
                    }
                    httpURLConnection.getResponseCode();
                    bArr = new byte[8192];
                    while (true) {
                        i2 = bufferedInputStream3.read(bArr);
                        if (i2 != -1) {
                            break;
                        }
                        cVar.write(bArr, 0, i2);
                    }
                    return true;
                } catch (Throwable th4) {
                    th = th4;
                    fileOutputStream = null;
                    file = null;
                    bufferedInputStream3 = bufferedInputStream2;
                }
            } catch (Throwable th5) {
                th = th5;
                fileOutputStream = null;
                file = null;
            }
        } else {
            try {
                Object[] objArr = new Object[2];
                objArr[0] = Long.valueOf(j);
                objArr[1] = j2 > 0 ? Long.valueOf(j2) : "";
                httpURLConnection.setRequestProperty("Range", String.format("bytes=%s-%s", objArr));
                q.b(httpURLConnection);
                httpURLConnection.setRequestProperty("Accept-Encoding", "gzip");
                if (!TextUtils.isEmpty(str)) {
                }
                bufferedInputStream = new BufferedInputStream(httpURLConnection.getInputStream());
                contentLength = httpURLConnection.getContentLength();
                if (httpURLConnection.getHeaderFields() != null) {
                }
                bufferedInputStream2 = new BufferedInputStream(httpURLConnection.getInputStream());
                bufferedInputStream = a(map, bufferedInputStream2);
                if (contentLength > 0) {
                }
                httpURLConnection.getResponseCode();
                bArr = new byte[8192];
                while (true) {
                    i2 = bufferedInputStream3.read(bArr);
                    if (i2 != -1) {
                    }
                    cVar.write(bArr, 0, i2);
                }
                return true;
            } catch (Throwable th6) {
                th = th6;
                fileOutputStream = null;
                file = null;
            }
        }
        try {
            if (!(th instanceof IOException)) {
                throw th;
            }
            throw new IOException(th.getClass().getName() + Constants.COLON_SEPARATOR + th.getMessage(), th);
        } finally {
            com.kwad.sdk.crash.utils.b.closeQuietly(cVar);
            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedInputStream3);
            if (httpURLConnection != null) {
                httpURLConnection.disconnect();
            }
            com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream);
            if (file != null) {
                file.delete();
            }
        }
    }

    public static synchronized void aT(Context context) {
        if (context != null) {
            if (!mHasInit) {
                mContext = context;
                com.kwad.sdk.c.wP().init(context);
                com.kwad.sdk.core.download.c.Aw().init(context);
                mHasInit = true;
            }
        }
    }

    private static boolean aU(Context context) {
        try {
            new NotificationCompat.Builder(context, "");
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static void c(int i, AdTemplate adTemplate) {
        com.kwad.sdk.core.download.b bVar = (com.kwad.sdk.core.download.b) ServiceProvider.get(com.kwad.sdk.core.download.b.class);
        if (bVar != null) {
            bVar.b(1, adTemplate);
        }
    }

    public static boolean c(String str, File file) {
        try {
            return a(str, file, (b) null, 0);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            return false;
        }
    }

    private static String cG(String str) {
        return ad.bp(str) + com.tkay.china.common.a.a.g;
    }

    public static void cH(String str) {
        if (mContext == null || TextUtils.isEmpty(str)) {
            return;
        }
        com.kwad.sdk.e.a.z(mContext, str);
    }
}
