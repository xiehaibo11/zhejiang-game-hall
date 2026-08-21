package com.czhj.volley;

import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public class RequestQueue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f1834a = 4;
    private final AtomicInteger b;
    private final Set<Request<?>> c;
    private LinkedBlockingDeque<Runnable> d;
    private final Network e;
    private final ResponseDelivery f;
    private final List<RequestFinishedListener> g;
    private ThreadPoolExecutor h;

    public interface RequestFilter {
        boolean apply(Request<?> request);
    }

    public interface RequestFinishedListener<T> {
        void onRequestFinished(Request<T> request);
    }

    public RequestQueue(Network network) {
        this(network, 4);
    }

    public RequestQueue(Network network, int i) {
        this(network, i, new ExecutorDelivery(new Handler(Looper.getMainLooper())));
    }

    public RequestQueue(Network network, int i, ResponseDelivery responseDelivery) {
        this.b = new AtomicInteger();
        this.c = new HashSet();
        this.d = new LinkedBlockingDeque<>(1);
        this.g = new ArrayList();
        this.h = null;
        this.e = network;
        this.f = responseDelivery;
        if (0 == 0) {
            ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(i, Integer.MAX_VALUE, 60L, TimeUnit.SECONDS, this.d);
            this.h = threadPoolExecutor;
            threadPoolExecutor.allowCoreThreadTimeOut(true);
        }
    }

    <T> void a(Request<T> request) {
        synchronized (this.c) {
            this.c.remove(request);
        }
        synchronized (this.g) {
            Iterator<RequestFinishedListener> it = this.g.iterator();
            while (it.hasNext()) {
                it.next().onRequestFinished(request);
            }
        }
    }

    public <T> Request<T> add(Request<T> request) {
        if (request == null || TextUtils.isEmpty(request.getUrl())) {
            return null;
        }
        this.h.submit(new NetworkDispatcher(this.e, request, this.f));
        return request;
    }

    public <T> void addRequestFinishedListener(RequestFinishedListener<T> requestFinishedListener) {
        synchronized (this.g) {
            this.g.add(requestFinishedListener);
        }
    }

    public void cancelAll(RequestFilter requestFilter) {
        synchronized (this.c) {
            for (Request<?> request : this.c) {
                if (requestFilter.apply(request)) {
                    request.cancel();
                }
            }
        }
    }

    public void cancelAll(final Object obj) {
        if (obj == null) {
            throw new IllegalArgumentException("Cannot cancelAll with a null tag");
        }
        cancelAll(new RequestFilter() { // from class: com.czhj.volley.RequestQueue.1
            @Override // com.czhj.volley.RequestQueue.RequestFilter
            public boolean apply(Request<?> request) {
                return request.getTag() == obj;
            }
        });
    }

    public int getSequenceNumber() {
        return this.b.incrementAndGet();
    }

    public <T> void removeRequestFinishedListener(RequestFinishedListener<T> requestFinishedListener) {
        synchronized (this.g) {
            this.g.remove(requestFinishedListener);
        }
    }

    public void start() {
        stop();
    }

    public void stop() {
    }
}
