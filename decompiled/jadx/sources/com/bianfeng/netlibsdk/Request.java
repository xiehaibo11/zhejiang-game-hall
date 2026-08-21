package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetException;
import com.bianfeng.netlibsdk.utils.NetLogger;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.io.UnsupportedEncodingException;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes.dex */
public abstract class Request<T> implements Comparable<Request<T>> {
    private RequestQueue mRequestQueue;
    private RetryPolicy mRetryPolicy;
    private Integer mSequence;
    private Object mTag;
    protected Map<String, String> headersMap = new TreeMap();
    private final Object mLock = new Object();
    private boolean mCanceled = false;
    private boolean mResponseDelivered = false;
    private boolean mShouldRetryConnectionErrors = false;
    private boolean mShouldRetryServerErrors = false;

    public interface Method {
        public static final int GET = 0;
        public static final int POST = 1;
    }

    public enum Priority {
        LOW,
        NORMAL,
        HIGH,
        IMMEDIATE
    }

    public abstract Map<String, String> addHeaders();

    public abstract void deliverError(NetException netException);

    protected abstract void deliverResponse(T t);

    public abstract int getMethod();

    public abstract String getRequestBody();

    public abstract String getUrl();

    protected NetException parseNetworkError(NetException netException) {
        return netException;
    }

    protected abstract Response<T> parseNetworkResponse(NetworkResponse networkResponse) throws NetException;

    protected Map<String, String> getHeaders() {
        Map<String, String> mapAddHeaders = addHeaders();
        if (mapAddHeaders != null) {
            this.headersMap.putAll(mapAddHeaders);
        }
        return this.headersMap;
    }

    protected void addHeader(String str, String str2) {
        this.headersMap.put(str, str2);
    }

    public Request() {
        setRetryPolicy(new DefaultRetryPolicy());
    }

    public byte[] getBody() throws UnsupportedEncodingException {
        return getRequestBody().getBytes("utf-8");
    }

    public void setRequestQueue(RequestQueue requestQueue) {
        this.mRequestQueue = requestQueue;
    }

    public void addMarker(String str) {
        NetLogger.i(str + "---" + Thread.currentThread().getId());
    }

    /* JADX WARN: Multi-variable type inference failed */
    public Request<?> setTag(Object obj) {
        this.mTag = obj;
        return this;
    }

    public Object getTag() {
        return this.mTag;
    }

    public boolean isCanceled() {
        boolean z;
        synchronized (this.mLock) {
            z = this.mCanceled;
        }
        return z;
    }

    public void markDelivered() {
        synchronized (this.mLock) {
            this.mResponseDelivered = true;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public Request<?> setRetryPolicy(RetryPolicy retryPolicy) {
        this.mRetryPolicy = retryPolicy;
        return this;
    }

    void finish(String str) {
        RequestQueue requestQueue = this.mRequestQueue;
        if (requestQueue != null) {
            requestQueue.finish(this);
        }
        this.headersMap.clear();
        NetLogger.i(str + ";threadId=" + Thread.currentThread().getId());
        NetLogger.i(toString());
    }

    public void cancel() {
        synchronized (this.mLock) {
            this.mCanceled = true;
            this.headersMap.clear();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final Request<?> setSequence(int i) {
        this.mSequence = Integer.valueOf(i);
        return this;
    }

    public final int getSequence() {
        Integer num = this.mSequence;
        if (num == null) {
            throw new IllegalStateException("getSequence called before setSequence");
        }
        return num.intValue();
    }

    public boolean hasHadResponseDelivered() {
        boolean z;
        synchronized (this.mLock) {
            z = this.mResponseDelivered;
        }
        return z;
    }

    public Priority getPriority() {
        return Priority.NORMAL;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final Request<?> setShouldRetryServerErrors(boolean z) {
        this.mShouldRetryServerErrors = z;
        return this;
    }

    public final boolean shouldRetryServerErrors() {
        return this.mShouldRetryServerErrors;
    }

    @Override // java.lang.Comparable
    public int compareTo(Request<T> request) {
        Priority priority = getPriority();
        Priority priority2 = request.getPriority();
        return priority == priority2 ? this.mSequence.intValue() - request.mSequence.intValue() : priority2.ordinal() - priority.ordinal();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final Request<?> setShouldRetryConnectionErrors(boolean z) {
        this.mShouldRetryConnectionErrors = z;
        return this;
    }

    public final int getTimeoutMs() {
        return getRetryPolicy().getCurrentTimeout();
    }

    public RetryPolicy getRetryPolicy() {
        return this.mRetryPolicy;
    }

    public final boolean shouldRetryConnectionErrors() {
        return this.mShouldRetryConnectionErrors;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(isCanceled() ? "[X] " : "[测试] ");
        sb.append("url: ");
        sb.append(getUrl());
        sb.append("；请求策略：");
        sb.append(getPriority());
        sb.append(" header: ");
        sb.append(UtilsSdk.getGsonUtils().toJson(this.headersMap));
        sb.append(" body: ");
        sb.append(getRequestBody());
        sb.append("；序列号： ");
        sb.append(this.mSequence);
        return sb.toString();
    }
}
