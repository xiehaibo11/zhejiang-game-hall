package com.tkay.expressad.foundation.g.f.e;

import android.text.TextUtils;
import com.tkay.expressad.foundation.g.f.c.c;
import com.tkay.expressad.foundation.g.f.d.f;
import com.tkay.expressad.foundation.g.f.i;
import cz.msebera.android.httpclient.client.methods.HttpPatch;
import java.io.DataOutputStream;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.ProtocolException;
import java.net.Proxy;
import java.net.URL;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSocketFactory;

/* JADX INFO: loaded from: classes3.dex */
public final class b implements com.tkay.expressad.foundation.g.f.e.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f6909a = 100;
    private com.tkay.expressad.foundation.g.f.c.a b;
    private SSLSocketFactory c;

    private static boolean a(int i, int i2) {
        if (i != 4) {
            return ((100 <= i2 && i2 < 200) || i2 == 204 || i2 == 304) ? false : true;
        }
        return false;
    }

    public b(SSLSocketFactory sSLSocketFactory, com.tkay.expressad.foundation.g.f.c.a aVar) {
        this.c = sSLSocketFactory;
        this.b = aVar;
    }

    @Override // com.tkay.expressad.foundation.g.f.e.a
    public final com.tkay.expressad.foundation.g.f.f.b a(i<?> iVar) throws Throwable {
        HttpURLConnection httpURLConnection;
        SSLSocketFactory sSLSocketFactory;
        URL url = new URL(iVar.d());
        com.tkay.expressad.foundation.g.f.c.a aVar = this.b;
        if (aVar != null && !TextUtils.isEmpty(aVar.b) && !TextUtils.isEmpty(this.b.c)) {
            httpURLConnection = (HttpURLConnection) url.openConnection(new Proxy(Proxy.Type.HTTP, new InetSocketAddress(this.b.b, Integer.valueOf(this.b.c).intValue())));
        } else {
            httpURLConnection = (HttpURLConnection) url.openConnection();
        }
        boolean z = false;
        httpURLConnection.setInstanceFollowRedirects(false);
        int iK = iVar.k();
        httpURLConnection.setConnectTimeout(iK);
        httpURLConnection.setReadTimeout(iK);
        httpURLConnection.setUseCaches(false);
        httpURLConnection.setDoInput(true);
        if ("https".equals(url.getProtocol()) && (sSLSocketFactory = this.c) != null) {
            ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(sSLSocketFactory);
        }
        try {
            for (Map.Entry<String, String> entry : iVar.g().entrySet()) {
                httpURLConnection.setRequestProperty(entry.getKey(), entry.getValue());
            }
            switch (iVar.a()) {
                case 0:
                    httpURLConnection.setRequestMethod("GET");
                    break;
                case 1:
                    httpURLConnection.setRequestMethod("POST");
                    b(httpURLConnection, iVar);
                    break;
                case 2:
                    httpURLConnection.setRequestMethod("PUT");
                    b(httpURLConnection, iVar);
                    break;
                case 3:
                    httpURLConnection.setRequestMethod("DELETE");
                    break;
                case 4:
                    httpURLConnection.setRequestMethod("HEAD");
                    break;
                case 5:
                    httpURLConnection.setRequestMethod("OPTIONS");
                    break;
                case 6:
                    httpURLConnection.setRequestMethod("TRACE");
                    break;
                case 7:
                    b(httpURLConnection, iVar);
                    httpURLConnection.setRequestMethod(HttpPatch.METHOD_NAME);
                    break;
                default:
                    throw new IllegalStateException("Unknown method type.");
            }
            int responseCode = httpURLConnection.getResponseCode();
            if (responseCode == -1) {
                throw new IOException("Could not retrieve response code from HttpUrlConnection.");
            }
            if (!((iVar.a() == 4 || (100 <= responseCode && responseCode < 200) || responseCode == 204 || responseCode == 304) ? false : true)) {
                com.tkay.expressad.foundation.g.f.f.b bVar = new com.tkay.expressad.foundation.g.f.f.b(responseCode, a(httpURLConnection.getHeaderFields()));
                httpURLConnection.disconnect();
                return bVar;
            }
            try {
                return new com.tkay.expressad.foundation.g.f.f.b(responseCode, a(httpURLConnection.getHeaderFields()), new a(httpURLConnection));
            } catch (Throwable th) {
                th = th;
                z = true;
                if (!z) {
                    httpURLConnection.disconnect();
                }
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private static List<c> a(Map<String, List<String>> map) {
        ArrayList arrayList = new ArrayList(map.size());
        for (Map.Entry<String, List<String>> entry : map.entrySet()) {
            if (entry.getKey() != null) {
                Iterator<String> it = entry.getValue().iterator();
                while (it.hasNext()) {
                    arrayList.add(new c(entry.getKey(), it.next()));
                }
            }
        }
        return arrayList;
    }

    static class a extends FilterInputStream {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final HttpURLConnection f6910a;

        a(HttpURLConnection httpURLConnection) {
            super(b.b(httpURLConnection));
            this.f6910a = httpURLConnection;
        }

        @Override // java.io.FilterInputStream, java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
        public final void close() throws IOException {
            super.close();
            this.f6910a.disconnect();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static InputStream b(HttpURLConnection httpURLConnection) {
        try {
            return httpURLConnection.getInputStream();
        } catch (IOException unused) {
            return httpURLConnection.getErrorStream();
        }
    }

    private HttpURLConnection a(URL url) {
        HttpURLConnection httpURLConnection;
        com.tkay.expressad.foundation.g.f.c.a aVar = this.b;
        if (aVar != null && !TextUtils.isEmpty(aVar.b) && !TextUtils.isEmpty(this.b.c)) {
            httpURLConnection = (HttpURLConnection) url.openConnection(new Proxy(Proxy.Type.HTTP, new InetSocketAddress(this.b.b, Integer.valueOf(this.b.c).intValue())));
        } else {
            httpURLConnection = (HttpURLConnection) url.openConnection();
        }
        httpURLConnection.setInstanceFollowRedirects(false);
        return httpURLConnection;
    }

    private static void a(HttpURLConnection httpURLConnection, i<?> iVar) throws ProtocolException {
        switch (iVar.a()) {
            case 0:
                httpURLConnection.setRequestMethod("GET");
                return;
            case 1:
                httpURLConnection.setRequestMethod("POST");
                b(httpURLConnection, iVar);
                return;
            case 2:
                httpURLConnection.setRequestMethod("PUT");
                b(httpURLConnection, iVar);
                return;
            case 3:
                httpURLConnection.setRequestMethod("DELETE");
                return;
            case 4:
                httpURLConnection.setRequestMethod("HEAD");
                return;
            case 5:
                httpURLConnection.setRequestMethod("OPTIONS");
                return;
            case 6:
                httpURLConnection.setRequestMethod("TRACE");
                return;
            case 7:
                b(httpURLConnection, iVar);
                httpURLConnection.setRequestMethod(HttpPatch.METHOD_NAME);
                return;
            default:
                throw new IllegalStateException("Unknown method type.");
        }
    }

    private static void b(HttpURLConnection httpURLConnection, i<?> iVar) {
        byte[] bArrH = iVar.h();
        if (bArrH != null) {
            boolean z = iVar instanceof f;
            if (z) {
                httpURLConnection.setChunkedStreamingMode(2048);
            }
            httpURLConnection.setDoOutput(true);
            DataOutputStream dataOutputStream = new DataOutputStream(httpURLConnection.getOutputStream());
            dataOutputStream.write(bArrH);
            if (z) {
                iVar.a((OutputStream) dataOutputStream);
            }
            dataOutputStream.close();
        }
    }

    private HttpURLConnection a(URL url, i<?> iVar) {
        HttpURLConnection httpURLConnection;
        SSLSocketFactory sSLSocketFactory;
        com.tkay.expressad.foundation.g.f.c.a aVar = this.b;
        if (aVar != null && !TextUtils.isEmpty(aVar.b) && !TextUtils.isEmpty(this.b.c)) {
            httpURLConnection = (HttpURLConnection) url.openConnection(new Proxy(Proxy.Type.HTTP, new InetSocketAddress(this.b.b, Integer.valueOf(this.b.c).intValue())));
        } else {
            httpURLConnection = (HttpURLConnection) url.openConnection();
        }
        httpURLConnection.setInstanceFollowRedirects(false);
        int iK = iVar.k();
        httpURLConnection.setConnectTimeout(iK);
        httpURLConnection.setReadTimeout(iK);
        httpURLConnection.setUseCaches(false);
        httpURLConnection.setDoInput(true);
        if ("https".equals(url.getProtocol()) && (sSLSocketFactory = this.c) != null) {
            ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(sSLSocketFactory);
        }
        return httpURLConnection;
    }
}
