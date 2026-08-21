package com.czhj.volley;

import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.alipay.sdk.m.n.a;
import com.czhj.volley.Cache;
import com.czhj.volley.Response;
import com.czhj.volley.VolleyLog;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.Collections;
import java.util.Map;
import kotlin.text.Typography;

/* JADX INFO: loaded from: classes.dex */
public abstract class Request<T> implements Comparable<Request<T>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1832a = "UTF-8";
    private final VolleyLog.MarkerLog b;
    private final int c;
    private final String d;
    private final int e;
    private Response.ErrorListener f;
    private Integer g;
    private RequestQueue h;
    private boolean i;
    private boolean j;
    private boolean k;
    private boolean l;
    private RetryPolicy m;
    protected final Object mLock;
    private Cache.Entry n;
    private Object o;
    private NetworkRequestCompleteListener p;
    private String q;

    public interface Method {
        public static final int DELETE = 3;
        public static final int DEPRECATED_GET_OR_POST = -1;
        public static final int GET = 0;
        public static final int HEAD = 4;
        public static final int OPTIONS = 5;
        public static final int PATCH = 7;
        public static final int POST = 1;
        public static final int PUT = 2;
        public static final int TRACE = 6;
    }

    interface NetworkRequestCompleteListener {
        void onNoUsableResponseReceived(Request<?> request);

        void onResponseReceived(Request<?> request, Response<?> response);
    }

    public enum Priority {
        LOW,
        NORMAL,
        HIGH,
        IMMEDIATE
    }

    public Request(int i, String str, Response.ErrorListener errorListener) {
        this.b = VolleyLog.MarkerLog.ENABLED ? new VolleyLog.MarkerLog() : null;
        this.mLock = new Object();
        this.i = true;
        this.j = false;
        this.k = false;
        this.l = false;
        this.n = null;
        this.c = i;
        this.d = str;
        this.f = errorListener;
        setRetryPolicy(new DefaultRetryPolicy());
        this.e = b(str);
    }

    @Deprecated
    public Request(String str, Response.ErrorListener errorListener) {
        this(-1, str, errorListener);
    }

    private byte[] a(Map<String, String> map, String str) {
        StringBuilder sb = new StringBuilder();
        try {
            for (Map.Entry<String, String> entry : map.entrySet()) {
                sb.append(URLEncoder.encode(entry.getKey(), str));
                sb.append(a.h);
                sb.append(URLEncoder.encode(entry.getValue(), str));
                sb.append(Typography.amp);
            }
            return sb.toString().getBytes(str);
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException("Encoding not supported: " + str, e);
        }
    }

    private static int b(String str) {
        Uri uri;
        String host;
        if (TextUtils.isEmpty(str) || (uri = Uri.parse(str)) == null || (host = uri.getHost()) == null) {
            return 0;
        }
        return host.hashCode();
    }

    void a(NetworkRequestCompleteListener networkRequestCompleteListener) {
        synchronized (this.mLock) {
            this.p = networkRequestCompleteListener;
        }
    }

    void a(final String str) {
        RequestQueue requestQueue = this.h;
        if (requestQueue != null) {
            requestQueue.a(this);
        }
        if (VolleyLog.MarkerLog.ENABLED) {
            final long id = Thread.currentThread().getId();
            if (Looper.myLooper() != Looper.getMainLooper()) {
                new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.czhj.volley.Request.1
                    @Override // java.lang.Runnable
                    public void run() {
                        Request.this.b.add(str, id);
                        Request.this.b.finish(Request.this.toString());
                    }
                });
            } else {
                this.b.add(str, id);
                this.b.finish(toString());
            }
        }
    }

    public void addMarker(String str) {
        if (VolleyLog.MarkerLog.ENABLED) {
            this.b.add(str, Thread.currentThread().getId());
        }
    }

    public void cancel() {
        synchronized (this.mLock) {
            this.j = true;
            this.f = null;
        }
    }

    @Override // java.lang.Comparable
    public int compareTo(Request<T> request) {
        Priority priority = getPriority();
        Priority priority2 = request.getPriority();
        return priority == priority2 ? this.g.intValue() - request.g.intValue() : priority2.ordinal() - priority.ordinal();
    }

    public void deliverError(VolleyError volleyError) {
        Response.ErrorListener errorListener;
        synchronized (this.mLock) {
            errorListener = this.f;
        }
        if (errorListener != null) {
            errorListener.onErrorResponse(volleyError);
        }
    }

    protected abstract void deliverResponse(T t);

    public byte[] getBody() {
        Map<String, String> params = getParams();
        if (params == null || params.size() <= 0) {
            return null;
        }
        return a(params, getParamsEncoding());
    }

    public String getBodyContentType() {
        return "application/x-www-form-urlencoded; charset=" + getParamsEncoding();
    }

    public Cache.Entry getCacheEntry() {
        return this.n;
    }

    public String getCacheKey() {
        String url = getUrl();
        int method = getMethod();
        if (method == 0 || method == -1) {
            return url;
        }
        return Integer.toString(method) + '-' + url;
    }

    public final int getConnectTimeoutMs() {
        return getRetryPolicy().getCurrentConnectTimeoutMs();
    }

    public Response.ErrorListener getErrorListener() {
        Response.ErrorListener errorListener;
        synchronized (this.mLock) {
            errorListener = this.f;
        }
        return errorListener;
    }

    public Map<String, String> getHeaders() {
        return Collections.emptyMap();
    }

    public int getMaxLength() {
        return Integer.MIN_VALUE;
    }

    public int getMethod() {
        return this.c;
    }

    protected Map<String, String> getParams() {
        return null;
    }

    protected String getParamsEncoding() {
        return "UTF-8";
    }

    public Priority getPriority() {
        return Priority.NORMAL;
    }

    public RetryPolicy getRetryPolicy() {
        return this.m;
    }

    public final int getSequence() {
        Integer num = this.g;
        if (num != null) {
            return num.intValue();
        }
        throw new IllegalStateException("getSequence called before setSequence");
    }

    public Object getTag() {
        return this.o;
    }

    public final int getTimeoutMs() {
        return getRetryPolicy().getCurrentTimeout();
    }

    public int getTrafficStatsTag() {
        return this.e;
    }

    public String getUrl() {
        String str = this.q;
        return str == null ? this.d : str;
    }

    public boolean hasHadResponseDelivered() {
        boolean z;
        synchronized (this.mLock) {
            z = this.k;
        }
        return z;
    }

    public boolean isCanceled() {
        boolean z;
        synchronized (this.mLock) {
            z = this.j;
        }
        return z;
    }

    public void markDelivered() {
        synchronized (this.mLock) {
            this.k = true;
        }
    }

    public void notifyListenerResponseNotUsable() {
        NetworkRequestCompleteListener networkRequestCompleteListener;
        synchronized (this.mLock) {
            networkRequestCompleteListener = this.p;
        }
        if (networkRequestCompleteListener != null) {
            networkRequestCompleteListener.onNoUsableResponseReceived(this);
        }
    }

    public void notifyListenerResponseReceived(Response<?> response) {
        NetworkRequestCompleteListener networkRequestCompleteListener;
        synchronized (this.mLock) {
            networkRequestCompleteListener = this.p;
        }
        if (networkRequestCompleteListener != null) {
            networkRequestCompleteListener.onResponseReceived(this, response);
        }
    }

    protected VolleyError parseNetworkError(VolleyError volleyError) {
        return volleyError;
    }

    protected abstract Response<T> parseNetworkResponse(NetworkResponse networkResponse);

    /* JADX WARN: Multi-variable type inference failed */
    public Request<?> setCacheEntry(Cache.Entry entry) {
        this.n = entry;
        return this;
    }

    public void setRedirectURL(String str) {
        this.q = str;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public Request<?> setRequestQueue(RequestQueue requestQueue) {
        this.h = requestQueue;
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public Request<?> setRetryPolicy(RetryPolicy retryPolicy) {
        this.m = retryPolicy;
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final Request<?> setSequence(int i) {
        this.g = Integer.valueOf(i);
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final Request<?> setShouldCache(boolean z) {
        this.i = z;
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final Request<?> setShouldRetryServerErrors(boolean z) {
        this.l = z;
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public Request<?> setTag(Object obj) {
        this.o = obj;
        return this;
    }

    public final boolean shouldCache() {
        return this.i;
    }

    public final boolean shouldRetryServerErrors() {
        return this.l;
    }

    public String toString() {
        String str = "0x" + Integer.toHexString(getTrafficStatsTag());
        StringBuilder sb = new StringBuilder();
        sb.append(isCanceled() ? "[X] " : "[ ] ");
        sb.append(getUrl());
        sb.append(" ");
        sb.append(str);
        sb.append(" ");
        sb.append(getPriority());
        sb.append(" ");
        sb.append(this.g);
        return sb.toString();
    }
}
