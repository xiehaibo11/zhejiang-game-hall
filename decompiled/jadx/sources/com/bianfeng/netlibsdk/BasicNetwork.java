package com.bianfeng.netlibsdk;

import android.os.SystemClock;
import com.bianfeng.netlibsdk.utils.NetException;
import com.bianfeng.netlibsdk.utils.NetLogger;
import com.sigmob.sdk.base.mta.PointCategory;
import java.io.IOException;
import java.io.InputStream;
import java.net.MalformedURLException;
import java.net.SocketTimeoutException;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class BasicNetwork implements Network {
    private static final int DEFAULT_POOL_SIZE = 4096;
    private final HttpStack mBaseHttpStack;
    protected final HttpStack mHttpStack;
    protected final ByteArrayPool mPool;

    public BasicNetwork(HttpStack httpStack) {
        this(httpStack, new ByteArrayPool(4096));
    }

    public BasicNetwork(HttpStack httpStack, ByteArrayPool byteArrayPool) {
        this.mHttpStack = httpStack;
        this.mBaseHttpStack = httpStack;
        this.mPool = byteArrayPool;
    }

    @Override // com.bianfeng.netlibsdk.Network
    public NetworkResponse performRequest(Request<?> request) throws NetException {
        List list;
        byte[] bArr;
        HttpResponse httpResponseExecuteRequest;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        while (true) {
            List listEmptyList = Collections.emptyList();
            HttpResponse httpResponse = null;
            try {
                try {
                    httpResponseExecuteRequest = this.mBaseHttpStack.executeRequest(request);
                } catch (IOException e) {
                    e = e;
                    list = listEmptyList;
                    bArr = null;
                }
                try {
                    int statusCode = httpResponseExecuteRequest.getStatusCode();
                    List<Header> headers = httpResponseExecuteRequest.getHeaders();
                    InputStream content = httpResponseExecuteRequest.getContent();
                    byte[] bArrInputStreamToBytes = content != null ? inputStreamToBytes(content, httpResponseExecuteRequest.getContentLength()) : new byte[0];
                    logSlowRequests(SystemClock.elapsedRealtime() - jElapsedRealtime, request, bArrInputStreamToBytes, statusCode);
                    if (statusCode < 200 || statusCode > 299) {
                        throw new IOException();
                    }
                    return new NetworkResponse(statusCode, bArrInputStreamToBytes, false, SystemClock.elapsedRealtime() - jElapsedRealtime, headers);
                } catch (IOException e2) {
                    e = e2;
                    list = listEmptyList;
                    bArr = null;
                    httpResponse = httpResponseExecuteRequest;
                    if (httpResponse != null) {
                        int statusCode2 = httpResponse.getStatusCode();
                        NetLogger.i("Unexpected response code %d for %s" + statusCode2 + request.getUrl());
                        if (bArr != null) {
                            NetworkResponse networkResponse = new NetworkResponse(statusCode2, bArr, false, SystemClock.elapsedRealtime() - jElapsedRealtime, (List<Header>) list);
                            if (statusCode2 == 401 || statusCode2 == 403) {
                                attemptRetryOnException("auth", request, new NetException(networkResponse));
                            } else {
                                if (statusCode2 >= 400 && statusCode2 <= 499) {
                                    throw new NetException(networkResponse);
                                }
                                if (statusCode2 >= 500 && statusCode2 <= 599) {
                                    if (request.shouldRetryServerErrors()) {
                                        attemptRetryOnException("server", request, new NetException(networkResponse));
                                    } else {
                                        throw new NetException(networkResponse);
                                    }
                                } else {
                                    throw new NetException(networkResponse);
                                }
                            }
                        } else {
                            attemptRetryOnException(PointCategory.NETWORK, request, new NetException("responseContents is null"));
                        }
                    } else if (request.shouldRetryConnectionErrors()) {
                        attemptRetryOnException("connection", request, new NetException(e));
                    } else {
                        throw new NetException(e);
                    }
                }
            } catch (MalformedURLException e3) {
                throw new NetException("Bad URL " + request.getUrl(), e3);
            } catch (SocketTimeoutException e4) {
                attemptRetryOnException("socket", request, new NetException(e4));
            }
        }
    }

    private void logSlowRequests(long j, Request<?> request, byte[] bArr, int i) {
        StringBuilder sb = new StringBuilder();
        sb.append("HTTP response for request=<%s> [lifetime=%d], [size=%s],[rc=%d], [retryCount=%s]");
        sb.append(request.toString());
        sb.append(j);
        sb.append(bArr != null ? Integer.valueOf(bArr.length) : "null");
        sb.append(i);
        sb.append(request.getRetryPolicy().getCurrentRetryCount());
        NetLogger.i(sb.toString());
    }

    private static void attemptRetryOnException(String str, Request<?> request, NetException netException) throws NetException {
        RetryPolicy retryPolicy = request.getRetryPolicy();
        int timeoutMs = request.getTimeoutMs();
        try {
            retryPolicy.retry(netException);
            request.addMarker(String.format("%s-retry [timeout=%s]", str, Integer.valueOf(timeoutMs)));
        } catch (NetException e) {
            request.addMarker(String.format("%s-timeout-giveup [timeout=%s]", str, Integer.valueOf(timeoutMs)));
            throw e;
        }
    }

    private byte[] inputStreamToBytes(InputStream inputStream, int i) throws NetException {
        PoolingByteArrayOutputStream poolingByteArrayOutputStream = new PoolingByteArrayOutputStream(this.mPool, i);
        try {
            try {
                if (inputStream == null) {
                    throw new NetException(" InputStream is null");
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
                    } catch (Exception unused) {
                        NetLogger.i("Error occurred when closing InputStream");
                    }
                }
                this.mPool.returnBuf(buf);
                try {
                    poolingByteArrayOutputStream.close();
                } catch (Exception e) {
                    e.printStackTrace();
                }
                return byteArray;
            } catch (Exception e2) {
                throw new NetException(e2);
            }
        } catch (Throwable th) {
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (Exception unused2) {
                    NetLogger.i("Error occurred when closing InputStream");
                }
            }
            this.mPool.returnBuf(null);
            try {
                poolingByteArrayOutputStream.close();
                throw th;
            } catch (Exception e3) {
                e3.printStackTrace();
                throw th;
            }
        }
    }
}
