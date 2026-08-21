package com.kwad.sdk.core.download;

import android.content.Context;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.webkit.URLUtil;
import com.kwad.sdk.DownloadTask;
import com.kwad.sdk.core.network.s;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ad;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.av;
import com.kwad.sdk.utils.v;
import com.kwad.sdk.utils.w;
import cz.msebera.android.httpclient.HttpHeaders;
import java.io.Closeable;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.zip.GZIPInputStream;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static Context mContext;
    private static volatile boolean mHasInit;

    /* JADX INFO: renamed from: com.kwad.sdk.core.download.a$a, reason: collision with other inner class name */
    public static class C0208a implements c {
        final OutputStream anC;

        public C0208a(File file, boolean z) {
            this.anC = new FileOutputStream(file, z);
        }

        @Override // java.io.Closeable, java.lang.AutoCloseable
        public final void close() throws IOException {
            this.anC.close();
        }

        @Override // com.kwad.sdk.core.download.a.c
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
        C0208a c0208a;
        C0208a c0208a2 = null;
        try {
            c0208a = new C0208a(file, false);
        } catch (Throwable th) {
            th = th;
        }
        try {
            boolean zA = a(str, (String) null, c0208a, (b) null, 0);
            com.kwad.sdk.crash.utils.b.closeQuietly(c0208a);
            return zA;
        } catch (Throwable th2) {
            th = th2;
            c0208a2 = c0208a;
            com.kwad.sdk.crash.utils.b.closeQuietly(c0208a2);
            throw th;
        }
    }

    public static boolean a(String str, File file, b bVar, int i, boolean z) throws Throwable {
        C0208a c0208a = null;
        try {
            C0208a c0208a2 = new C0208a(file, true);
            try {
                boolean zA = a(str, (String) null, (c) c0208a2, (b) null, -1, file.length(), -1L, true);
                com.kwad.sdk.crash.utils.b.closeQuietly(c0208a2);
                return zA;
            } catch (Throwable th) {
                th = th;
                c0208a = c0208a2;
                com.kwad.sdk.crash.utils.b.closeQuietly(c0208a);
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
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean a(java.net.HttpURLConnection r14, java.lang.String r15, com.kwad.sdk.core.download.a.c r16, com.kwad.sdk.core.download.a.b r17, int r18, long r19, long r21, boolean r23) throws java.io.IOException {
        /*
            Method dump skipped, instruction units count: 376
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.core.download.a.a(java.net.HttpURLConnection, java.lang.String, com.kwad.sdk.core.download.a$c, com.kwad.sdk.core.download.a$b, int, long, long, boolean):boolean");
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
