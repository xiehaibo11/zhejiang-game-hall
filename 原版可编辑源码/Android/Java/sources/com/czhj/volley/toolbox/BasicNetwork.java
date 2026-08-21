package com.czhj.volley.toolbox;

import android.os.SystemClock;
import com.czhj.volley.AuthFailureError;
import com.czhj.volley.Cache;
import com.czhj.volley.Header;
import com.czhj.volley.Network;
import com.czhj.volley.NetworkError;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.NoConnectionError;
import com.czhj.volley.Request;
import com.czhj.volley.RetryPolicy;
import com.czhj.volley.ServerError;
import com.czhj.volley.TimeoutError;
import com.czhj.volley.VolleyError;
import com.czhj.volley.VolleyLog;
import com.sigmob.sdk.base.mta.PointCategory;
import java.io.IOException;
import java.io.InputStream;
import java.net.MalformedURLException;
import java.net.SocketTimeoutException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import java.util.TreeSet;

public class BasicNetwork implements Network {
    protected static final boolean DEBUG = VolleyLog.DEBUG;
    private static final int a = 3000;
    private static final int b = 4096;
    private final BaseHttpStack c;
    protected final ByteArrayPool mPool;

    public BasicNetwork(BaseHttpStack baseHttpStack) {
        this(baseHttpStack, new ByteArrayPool(4096));
    }

    public BasicNetwork(BaseHttpStack baseHttpStack, ByteArrayPool byteArrayPool) {
        this.c = baseHttpStack;
        this.mPool = byteArrayPool;
    }

    private static List<Header> a(List<Header> list, Cache.Entry entry) {
        TreeSet treeSet = new TreeSet(String.CASE_INSENSITIVE_ORDER);
        if (!list.isEmpty()) {
            Iterator<Header> it = list.iterator();
            while (it.hasNext()) {
                treeSet.add(it.next().getName());
            }
        }
        ArrayList arrayList = new ArrayList(list);
        if (entry.allResponseHeaders != null) {
            if (!entry.allResponseHeaders.isEmpty()) {
                for (Header header : entry.allResponseHeaders) {
                    if (!treeSet.contains(header.getName())) {
                        arrayList.add(header);
                    }
                }
            }
        } else if (!entry.responseHeaders.isEmpty()) {
            for (Map.Entry<String, String> entry2 : entry.responseHeaders.entrySet()) {
                if (!treeSet.contains(entry2.getKey())) {
                    arrayList.add(new Header(entry2.getKey(), entry2.getValue()));
                }
            }
        }
        return arrayList;
    }

    private Map<String, String> a(Cache.Entry entry) {
        if (entry == null) {
            return Collections.emptyMap();
        }
        HashMap map = new HashMap();
        if (entry.etag != null) {
            map.put("If-None-Match", entry.etag);
        }
        if (entry.lastModified > 0) {
            map.put("If-Modified-Since", HttpHeaderParser.a(entry.lastModified));
        }
        return map;
    }

    private void a(long j, Request<?> request, byte[] bArr, int i) {
        if (DEBUG || j > 3000) {
            Object[] objArr = new Object[5];
            objArr[0] = request;
            objArr[1] = Long.valueOf(j);
            objArr[2] = bArr != null ? Integer.valueOf(bArr.length) : "null";
            objArr[3] = Integer.valueOf(i);
            objArr[4] = Integer.valueOf(request.getRetryPolicy().getCurrentRetryCount());
            VolleyLog.d("HTTP response for request=<%s> [lifetime=%d], [size=%s], [rc=%d], [retryCount=%s]", objArr);
        }
    }

    private static void a(String str, Request<?> request) {
        request.addMarker(String.format("%s-Redirect [timeout=%s]", str, Integer.valueOf(request.getTimeoutMs())));
    }

    private static void a(String str, Request<?> request, VolleyError volleyError) throws VolleyError {
        RetryPolicy retryPolicy = request.getRetryPolicy();
        int timeoutMs = request.getTimeoutMs();
        try {
            retryPolicy.retry(volleyError);
            request.addMarker(String.format("%s-retry [timeout=%s]", str, Integer.valueOf(timeoutMs)));
        } catch (VolleyError e) {
            request.addMarker(String.format("%s-timeout-giveup [timeout=%s]", str, Integer.valueOf(timeoutMs)));
            throw e;
        }
    }

    private byte[] a(InputStream inputStream, int i) throws IOException {
        byte[] byteArray;
        PoolingByteArrayOutputStream poolingByteArrayOutputStream = new PoolingByteArrayOutputStream(this.mPool, i);
        int i2 = 1024;
        if (i > 0 && i < 1024) {
            i2 = i;
        }
        byte[] buf = null;
        try {
            buf = this.mPool.getBuf(i2);
            long j = 0;
            while (true) {
                int i3 = inputStream.read(buf, 0, i2);
                if (i3 == -1 || (i >= 1 && j >= i)) {
                    break;
                }
                poolingByteArrayOutputStream.write(buf, 0, i3);
                j += (long) i3;
            }
            byteArray = poolingByteArrayOutputStream.toByteArray();
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (IOException unused) {
                    VolleyLog.v("Error occurred when closing InputStream", new Object[0]);
                }
            }
            this.mPool.returnBuf(buf);
        } catch (Throwable th) {
            try {
                VolleyLog.e("readError", th.getMessage());
                byteArray = poolingByteArrayOutputStream.toByteArray();
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (IOException unused2) {
                        VolleyLog.v("Error occurred when closing InputStream", new Object[0]);
                    }
                }
                this.mPool.returnBuf(buf);
            } catch (Throwable th2) {
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (IOException unused3) {
                        VolleyLog.v("Error occurred when closing InputStream", new Object[0]);
                    }
                }
                this.mPool.returnBuf(buf);
                poolingByteArrayOutputStream.close();
                throw th2;
            }
        }
        poolingByteArrayOutputStream.close();
        return byteArray;
    }

    protected static Map<String, String> convertHeaders(List<Header> list) {
        TreeMap treeMap = new TreeMap(String.CASE_INSENSITIVE_ORDER);
        for (int i = 0; i < list.size(); i++) {
            Header header = list.get(i);
            treeMap.put(header.getName(), header.getValue());
        }
        return treeMap;
    }

    protected void logError(String str, String str2, long j) {
        VolleyLog.v("HTTP ERROR(%s) %d ms to fetch %s", str, Long.valueOf(SystemClock.elapsedRealtime() - j), str2);
    }

    /* JADX WARN: Removed duplicated region for block: B:175:0x0221 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:81:0x015f A[Catch: all -> 0x0154, TRY_ENTER, TryCatch #12 {all -> 0x0154, blocks: (B:4:0x0012, B:81:0x015f, B:83:0x017a, B:96:0x01a2, B:98:0x01a8, B:99:0x01ad, B:100:0x01b1, B:101:0x01b6, B:105:0x01bf, B:107:0x01c5, B:108:0x01cb, B:109:0x01d0, B:111:0x01d3, B:113:0x01d9, B:114:0x01df, B:115:0x01e4, B:116:0x01e5, B:117:0x01ea, B:118:0x01eb, B:119:0x01f2, B:120:0x01f6, B:121:0x01fc, B:130:0x0221, B:131:0x0226, B:133:0x0228, B:134:0x0242, B:135:0x0243), top: B:166:0x0012 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public NetworkResponse performRequest(Request<?> request) throws Throwable {
        List<Header> list;
        byte[] bArr;
        Throwable th;
        String str;
        VolleyError networkError;
        ServerError serverError;
        HttpResponse httpResponseExecuteRequest;
        List<Header> list2;
        byte[] bArrA;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        while (true) {
            List<Header> listEmptyList = Collections.emptyList();
            HttpResponse httpResponse = null;
            try {
                try {
                    httpResponseExecuteRequest = this.c.executeRequest(request, a(request.getCacheEntry()));
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (MalformedURLException e) {
                e = e;
            } catch (SocketTimeoutException unused) {
            } catch (IOException e2) {
                e = e2;
                list = listEmptyList;
                bArr = null;
            }
            try {
                try {
                    int statusCode = httpResponseExecuteRequest.getStatusCode();
                    List<Header> headers = httpResponseExecuteRequest.getHeaders();
                    try {
                        if (statusCode == 304) {
                            Cache.Entry cacheEntry = request.getCacheEntry();
                            if (cacheEntry == null) {
                                NetworkResponse networkResponse = new NetworkResponse(304, (byte[]) null, true, SystemClock.elapsedRealtime() - jElapsedRealtime, headers);
                                if (httpResponseExecuteRequest != null && httpResponseExecuteRequest.getContent() != null) {
                                    try {
                                        httpResponseExecuteRequest.getContent().close();
                                    } catch (IOException e3) {
                                        VolleyLog.e(e3.getMessage(), new Object[0]);
                                    }
                                }
                                return networkResponse;
                            }
                            NetworkResponse networkResponse2 = new NetworkResponse(304, cacheEntry.data, true, SystemClock.elapsedRealtime() - jElapsedRealtime, a(headers, cacheEntry));
                            if (httpResponseExecuteRequest != null && httpResponseExecuteRequest.getContent() != null) {
                                try {
                                    httpResponseExecuteRequest.getContent().close();
                                } catch (IOException e4) {
                                    VolleyLog.e(e4.getMessage(), new Object[0]);
                                }
                            }
                            return networkResponse2;
                        }
                        if (statusCode == 301 || statusCode == 302) {
                            try {
                                String str2 = convertHeaders(headers).get("Location");
                                request.setRedirectURL(str2);
                                request.addMarker("redirectURL: " + str2);
                            } catch (IOException e5) {
                                e = e5;
                                list2 = headers;
                                bArr = null;
                                httpResponse = httpResponseExecuteRequest;
                                list = list2;
                                if (httpResponse == null) {
                                    throw new NoConnectionError(e);
                                }
                                int statusCode2 = httpResponse.getStatusCode();
                                VolleyLog.e("Unexpected response code %d for %s", Integer.valueOf(statusCode2), request.getUrl());
                                if (bArr != null) {
                                    NetworkResponse networkResponse3 = new NetworkResponse(statusCode2, bArr, false, SystemClock.elapsedRealtime() - jElapsedRealtime, list);
                                    if (statusCode2 == 301 || statusCode2 == 302) {
                                        a("redirect", request);
                                    } else if (statusCode2 == 401 || statusCode2 == 403) {
                                        str = "auth";
                                        networkError = new AuthFailureError(networkResponse3);
                                    } else {
                                        if (statusCode2 < 400 || statusCode2 > 499) {
                                            if (statusCode2 < 500 || statusCode2 > 599) {
                                                if (statusCode2 <= 599) {
                                                    throw new ServerError(networkResponse3);
                                                }
                                                if (!request.shouldRetryServerErrors()) {
                                                    throw new ServerError(networkResponse3);
                                                }
                                                serverError = new ServerError(networkResponse3);
                                            } else {
                                                if (!request.shouldRetryServerErrors()) {
                                                    throw new ServerError(networkResponse3);
                                                }
                                                serverError = new ServerError(networkResponse3);
                                            }
                                        } else {
                                            if (!request.shouldRetryServerErrors()) {
                                                throw new ServerError(networkResponse3);
                                            }
                                            serverError = new ServerError(networkResponse3);
                                        }
                                        a("server", request, serverError);
                                    }
                                    if (httpResponse == null && httpResponse.getContent() != null) {
                                        try {
                                            httpResponse.getContent().close();
                                        } catch (IOException e6) {
                                            VolleyLog.e(e6.getMessage(), new Object[0]);
                                        }
                                    }
                                } else {
                                    str = PointCategory.NETWORK;
                                    networkError = new NetworkError(e);
                                }
                                a(str, request, networkError);
                                if (httpResponse == null) {
                                }
                            }
                        }
                        InputStream content = httpResponseExecuteRequest.getContent();
                        if (content != null) {
                            int contentLength = httpResponseExecuteRequest.getContentLength();
                            if (request.getMaxLength() >= 0) {
                                contentLength = request.getMaxLength();
                            }
                            bArrA = a(content, contentLength);
                        } else {
                            bArrA = new byte[0];
                        }
                        byte[] bArr2 = bArrA;
                        try {
                            list2 = headers;
                        } catch (IOException e7) {
                            e = e7;
                            list2 = headers;
                        }
                        try {
                            a(SystemClock.elapsedRealtime() - jElapsedRealtime, request, bArr2, statusCode);
                            if (statusCode < 200 || statusCode > 299) {
                                throw new IOException();
                            }
                            NetworkResponse networkResponse4 = new NetworkResponse(statusCode, bArr2, false, SystemClock.elapsedRealtime() - jElapsedRealtime, list2);
                            if (httpResponseExecuteRequest != null && httpResponseExecuteRequest.getContent() != null) {
                                try {
                                    httpResponseExecuteRequest.getContent().close();
                                } catch (IOException e8) {
                                    VolleyLog.e(e8.getMessage(), new Object[0]);
                                }
                            }
                            return networkResponse4;
                        } catch (IOException e9) {
                            e = e9;
                            httpResponse = httpResponseExecuteRequest;
                            bArr = bArr2;
                            list = list2;
                            if (httpResponse == null) {
                            }
                        }
                    } catch (IOException e10) {
                        e = e10;
                        bArr = null;
                        list = headers;
                        httpResponse = httpResponseExecuteRequest;
                        if (httpResponse == null) {
                        }
                    }
                } catch (IOException e11) {
                    e = e11;
                    list = listEmptyList;
                    bArr = null;
                }
            } catch (MalformedURLException e12) {
                e = e12;
                throw new RuntimeException("Bad URL " + request.getUrl(), e);
            } catch (SocketTimeoutException unused2) {
                httpResponse = httpResponseExecuteRequest;
                a("socket", request, new TimeoutError());
                if (httpResponse != null && httpResponse.getContent() != null) {
                    try {
                        httpResponse.getContent().close();
                    } catch (IOException e13) {
                        VolleyLog.e(e13.getMessage(), new Object[0]);
                    }
                }
            } catch (Throwable th3) {
                th = th3;
                httpResponse = httpResponseExecuteRequest;
                if (httpResponse == null || httpResponse.getContent() == null) {
                    throw th;
                }
                try {
                    httpResponse.getContent().close();
                    throw th;
                } catch (IOException e14) {
                    VolleyLog.e(e14.getMessage(), new Object[0]);
                    throw th;
                }
            }
        }
    }
}
