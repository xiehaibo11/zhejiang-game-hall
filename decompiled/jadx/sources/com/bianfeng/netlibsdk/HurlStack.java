package com.bianfeng.netlibsdk;

import java.io.DataOutputStream;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSocketFactory;

/* JADX INFO: loaded from: classes.dex */
public class HurlStack implements HttpStack {
    private static final int HTTP_CONTINUE = 100;
    private final SSLSocketFactory mSslSocketFactory;

    private static boolean hasResponseBody(int i, int i2) {
        return ((100 <= i2 && i2 < 200) || i2 == 204 || i2 == 304) ? false : true;
    }

    public HurlStack() {
        this(null);
    }

    public HurlStack(SSLSocketFactory sSLSocketFactory) {
        this.mSslSocketFactory = sSLSocketFactory;
    }

    @Override // com.bianfeng.netlibsdk.HttpStack
    public HttpResponse executeRequest(Request<?> request) throws IOException {
        HashMap map = new HashMap();
        map.putAll(request.getHeaders());
        HttpURLConnection httpURLConnection = null;
        try {
            HttpURLConnection httpURLConnectionOpenConnection = openConnection(new URL(request.getUrl()), request);
            for (Map.Entry entry : map.entrySet()) {
                httpURLConnectionOpenConnection.setRequestProperty((String) entry.getKey(), (String) entry.getValue());
            }
            setConnectionParametersForRequest(httpURLConnectionOpenConnection, request);
            int responseCode = httpURLConnectionOpenConnection.getResponseCode();
            if (responseCode == -1) {
                throw new IOException("Could not retrieve response code from HttpUrlConnection.");
            }
            if (!hasResponseBody(request.getMethod(), responseCode)) {
                HttpResponse httpResponse = new HttpResponse(responseCode, convertHeaders(httpURLConnectionOpenConnection.getHeaderFields()));
                if (httpURLConnectionOpenConnection != null) {
                    try {
                        httpURLConnectionOpenConnection.disconnect();
                    } catch (Exception unused) {
                    }
                }
                return httpResponse;
            }
            return new HttpResponse(responseCode, convertHeaders(httpURLConnectionOpenConnection.getHeaderFields()), httpURLConnectionOpenConnection.getContentLength(), createInputStream(request, httpURLConnectionOpenConnection));
        } catch (Throwable th) {
            if (0 == 0 && 0 != 0) {
                try {
                    httpURLConnection.disconnect();
                } catch (Exception unused2) {
                }
            }
            throw th;
        }
    }

    static List<Header> convertHeaders(Map<String, List<String>> map) {
        ArrayList arrayList = new ArrayList(map.size());
        for (Map.Entry<String, List<String>> entry : map.entrySet()) {
            if (entry.getKey() != null) {
                Iterator<String> it = entry.getValue().iterator();
                while (it.hasNext()) {
                    arrayList.add(new Header(entry.getKey(), it.next()));
                }
            }
        }
        return arrayList;
    }

    static class UrlConnectionInputStream extends FilterInputStream {
        private final HttpURLConnection mConnection;

        UrlConnectionInputStream(HttpURLConnection httpURLConnection) {
            super(HurlStack.inputStreamFromConnection(httpURLConnection));
            this.mConnection = httpURLConnection;
        }

        @Override // java.io.FilterInputStream, java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
        public void close() throws IOException {
            super.close();
            this.mConnection.disconnect();
        }
    }

    protected InputStream createInputStream(Request<?> request, HttpURLConnection httpURLConnection) {
        return new UrlConnectionInputStream(httpURLConnection);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static InputStream inputStreamFromConnection(HttpURLConnection httpURLConnection) {
        try {
            return httpURLConnection.getInputStream();
        } catch (IOException unused) {
            return httpURLConnection.getErrorStream();
        }
    }

    protected HttpURLConnection createConnection(URL url) throws IOException {
        HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
        httpURLConnection.setInstanceFollowRedirects(HttpURLConnection.getFollowRedirects());
        return httpURLConnection;
    }

    private HttpURLConnection openConnection(URL url, Request<?> request) throws IOException {
        SSLSocketFactory sSLSocketFactory;
        HttpURLConnection httpURLConnectionCreateConnection = createConnection(url);
        int timeoutMs = request.getTimeoutMs();
        httpURLConnectionCreateConnection.setConnectTimeout(timeoutMs);
        httpURLConnectionCreateConnection.setReadTimeout(timeoutMs);
        httpURLConnectionCreateConnection.setUseCaches(false);
        httpURLConnectionCreateConnection.setDoInput(true);
        if ("https".equals(url.getProtocol()) && (sSLSocketFactory = this.mSslSocketFactory) != null) {
            ((HttpsURLConnection) httpURLConnectionCreateConnection).setSSLSocketFactory(sSLSocketFactory);
        }
        return httpURLConnectionCreateConnection;
    }

    void setConnectionParametersForRequest(HttpURLConnection httpURLConnection, Request<?> request) throws IOException {
        int method = request.getMethod();
        if (method == 0) {
            httpURLConnection.setRequestMethod("GET");
        } else {
            if (method == 1) {
                httpURLConnection.setRequestMethod("POST");
                addBodyIfExists(httpURLConnection, request);
                return;
            }
            throw new IllegalStateException("Unknown method type.");
        }
    }

    private void addBodyIfExists(HttpURLConnection httpURLConnection, Request<?> request) throws IOException {
        byte[] body = request.getBody();
        if (body != null) {
            addBody(httpURLConnection, request, body);
        }
    }

    private void addBody(HttpURLConnection httpURLConnection, Request<?> request, byte[] bArr) throws IOException {
        httpURLConnection.setDoOutput(true);
        DataOutputStream dataOutputStream = new DataOutputStream(createOutputStream(request, httpURLConnection, bArr.length));
        dataOutputStream.write(bArr);
        dataOutputStream.close();
    }

    protected OutputStream createOutputStream(Request<?> request, HttpURLConnection httpURLConnection, int i) throws IOException {
        return httpURLConnection.getOutputStream();
    }
}
