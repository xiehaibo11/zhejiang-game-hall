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

public class FileDownloadNetwork implements Network {
    protected static final boolean DEBUG = VolleyLog.DEBUG;
    private static final int a = 3000;
    private static final int b = 4096;
    private final BaseHttpStack c;
    protected final ByteArrayPool mPool;

    public FileDownloadNetwork(BaseHttpStack baseHttpStack) {
        this(baseHttpStack, new ByteArrayPool(4096));
    }

    public FileDownloadNetwork(BaseHttpStack baseHttpStack, ByteArrayPool byteArrayPool) {
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

    private byte[] a(InputStream inputStream, int i) throws IOException, ServerError {
        PoolingByteArrayOutputStream poolingByteArrayOutputStream = new PoolingByteArrayOutputStream(this.mPool, i);
        try {
            if (inputStream == null) {
                throw new ServerError();
            }
            byte[] buf = this.mPool.getBuf(1024);
            while (true) {
                int i2 = inputStream.read(buf);
                if (i2 == -1) {
                    break;
                }
                poolingByteArrayOutputStream.write(buf, 0, i2);
            }
            byte[] byteArray = poolingByteArrayOutputStream.toByteArray();
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (IOException unused) {
                    VolleyLog.v("Error occurred when closing InputStream", new Object[0]);
                }
            }
            this.mPool.returnBuf(buf);
            poolingByteArrayOutputStream.close();
            return byteArray;
        } catch (Throwable th) {
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (IOException unused2) {
                    VolleyLog.v("Error occurred when closing InputStream", new Object[0]);
                }
            }
            this.mPool.returnBuf(null);
            poolingByteArrayOutputStream.close();
            throw th;
        }
    }

    public static void attemptRetryOnException(String str, Request<?> request, VolleyError volleyError) throws VolleyError {
        RetryPolicy retryPolicy = request.getRetryPolicy();
        int timeoutMs = request.getTimeoutMs();
        try {
            retryPolicy.retry(volleyError);
            request.addMarker(String.format("%s-retry [RetryCount %s]  [timeout=%s]", str, Integer.valueOf(retryPolicy.getCurrentRetryCount()), Integer.valueOf(timeoutMs)));
        } catch (VolleyError e) {
            request.addMarker(String.format("%s-timeout-giveup [RetryCount %s] [timeout=%s]", str, Integer.valueOf(retryPolicy.getCurrentRetryCount()), Integer.valueOf(timeoutMs)));
            throw e;
        }
    }

    public static Map<String, String> convertHeaders(List<Header> list) {
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

    /* JADX WARN: Removed duplicated region for block: B:100:0x0182 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00f1  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public NetworkResponse performRequest(Request<?> request) throws VolleyError {
        List<Header> list;
        byte[] bArr;
        VolleyError networkError;
        String str;
        AuthFailureError authFailureError;
        List<Header> list2;
        byte[] bArr2;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        while (true) {
            VolleyLog.d("download start %s", request.getUrl());
            List<Header> listEmptyList = Collections.emptyList();
            HttpResponse httpResponse = null;
            byte[] bArrHandleRawResponse = null;
            try {
                try {
                    HttpResponse httpResponseExecuteRequest = this.c.executeRequest(request, a(request.getCacheEntry()));
                    try {
                        int statusCode = httpResponseExecuteRequest.getStatusCode();
                        VolleyLog.d("download getStatus %s StatusCode: %s", request.getUrl(), Integer.valueOf(statusCode));
                        List<Header> headers = httpResponseExecuteRequest.getHeaders();
                        if (statusCode == 304) {
                            Cache.Entry cacheEntry = request.getCacheEntry();
                            return cacheEntry == null ? new NetworkResponse(304, (byte[]) null, true, SystemClock.elapsedRealtime() - jElapsedRealtime, headers) : new NetworkResponse(304, cacheEntry.data, true, SystemClock.elapsedRealtime() - jElapsedRealtime, a(headers, cacheEntry));
                        }
                        try {
                            if (httpResponseExecuteRequest.getContent() != null) {
                                try {
                                    if (request instanceof FileDownloadRequest) {
                                        bArrHandleRawResponse = ((FileDownloadRequest) request).handleRawResponse(httpResponseExecuteRequest);
                                    }
                                } catch (IOException e) {
                                    e = e;
                                    bArr = null;
                                    list = headers;
                                    httpResponse = httpResponseExecuteRequest;
                                    if (httpResponse != null) {
                                    }
                                }
                            } else {
                                bArrHandleRawResponse = new byte[0];
                            }
                            bArr2 = bArrHandleRawResponse;
                            try {
                                list2 = headers;
                            } catch (IOException e2) {
                                e = e2;
                                list2 = headers;
                            }
                        } catch (IOException e3) {
                            e = e3;
                            list2 = headers;
                            bArr = null;
                            httpResponse = httpResponseExecuteRequest;
                        }
                        try {
                            a(SystemClock.elapsedRealtime() - jElapsedRealtime, request, bArr2, statusCode);
                            if (statusCode < 200 || statusCode > 299) {
                                throw new IOException();
                            }
                            return new NetworkResponse(statusCode, bArr2, false, SystemClock.elapsedRealtime() - jElapsedRealtime, list2);
                        } catch (IOException e4) {
                            e = e4;
                            httpResponse = httpResponseExecuteRequest;
                            bArr = bArr2;
                            list = list2;
                            if (httpResponse != null) {
                                throw new NoConnectionError(e);
                            }
                            int statusCode2 = httpResponse.getStatusCode();
                            VolleyLog.e("%s Unexpected response code %d for %s", e.getMessage(), Integer.valueOf(statusCode2), request.getUrl());
                            if (bArr != null) {
                                NetworkResponse networkResponse = new NetworkResponse(statusCode2, bArr, false, SystemClock.elapsedRealtime() - jElapsedRealtime, list);
                                if (statusCode2 == 401 || statusCode2 == 403) {
                                    authFailureError = new AuthFailureError(networkResponse);
                                    attemptRetryOnException("auth", request, authFailureError);
                                } else if (statusCode2 == 301 || statusCode2 == 302) {
                                    authFailureError = new AuthFailureError(networkResponse);
                                    attemptRetryOnException("auth", request, authFailureError);
                                } else {
                                    if (statusCode2 >= 400 && statusCode2 <= 499) {
                                        throw new ServerError(networkResponse);
                                    }
                                    if (statusCode2 < 500 || statusCode2 > 599) {
                                        throw new ServerError(networkResponse);
                                    }
                                    if (!request.shouldRetryServerErrors()) {
                                        throw new ServerError(networkResponse);
                                    }
                                    networkError = new ServerError(networkResponse);
                                    str = "server";
                                }
                            } else {
                                networkError = new NetworkError(e);
                                str = PointCategory.NETWORK;
                            }
                            attemptRetryOnException(str, request, networkError);
                        }
                    } catch (IOException e5) {
                        e = e5;
                        list = listEmptyList;
                        bArr = null;
                    }
                } catch (IOException e6) {
                    e = e6;
                    list = listEmptyList;
                    bArr = null;
                }
            } catch (MalformedURLException e7) {
                throw new RuntimeException("Bad URL " + request.getUrl(), e7);
            } catch (SocketTimeoutException unused) {
                attemptRetryOnException("socket", request, new TimeoutError());
            }
        }
    }
}
