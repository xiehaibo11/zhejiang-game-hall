package com.czhj.volley;

import android.os.Process;
import com.czhj.volley.Cache;
import com.czhj.volley.Request;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.BlockingQueue;

public class CacheDispatcher extends Thread {
    private static final boolean a = VolleyLog.DEBUG;
    private final BlockingQueue<Request<?>> b;
    private final BlockingQueue<Request<?>> c;
    private final Cache d;
    private final ResponseDelivery e;
    private volatile boolean g = false;
    private final WaitingRequestManager f = new WaitingRequestManager(this);

    private static class WaitingRequestManager implements Request.NetworkRequestCompleteListener {
        private final Map<String, List<Request<?>>> a = new HashMap();
        private final CacheDispatcher b;

        WaitingRequestManager(CacheDispatcher cacheDispatcher) {
            this.b = cacheDispatcher;
        }

        private synchronized boolean a(Request<?> request) {
            String cacheKey = request.getCacheKey();
            if (!this.a.containsKey(cacheKey)) {
                this.a.put(cacheKey, null);
                request.a(this);
                if (VolleyLog.DEBUG) {
                    VolleyLog.d("new request, sending to network %s", cacheKey);
                }
                return false;
            }
            List<Request<?>> arrayList = this.a.get(cacheKey);
            if (arrayList == null) {
                arrayList = new ArrayList<>();
            }
            request.addMarker("waiting-for-response");
            arrayList.add(request);
            this.a.put(cacheKey, arrayList);
            if (VolleyLog.DEBUG) {
                VolleyLog.d("Request for cacheKey=%s is in flight, putting on hold.", cacheKey);
            }
            return true;
        }

        @Override
        public synchronized void onNoUsableResponseReceived(Request<?> request) {
            String cacheKey = request.getCacheKey();
            List<Request<?>> listRemove = this.a.remove(cacheKey);
            if (listRemove != null && !listRemove.isEmpty()) {
                if (VolleyLog.DEBUG) {
                    VolleyLog.v("%d waiting requests for cacheKey=%s; resend to network", Integer.valueOf(listRemove.size()), cacheKey);
                }
                Request<?> requestRemove = listRemove.remove(0);
                this.a.put(cacheKey, listRemove);
                requestRemove.a(this);
                try {
                    this.b.c.put(requestRemove);
                } catch (InterruptedException e) {
                    VolleyLog.e("Couldn't add request to queue. %s", e.toString());
                    Thread.currentThread().interrupt();
                    this.b.quit();
                }
            }
        }

        @Override
        public void onResponseReceived(Request<?> request, Response<?> response) {
            List<Request<?>> listRemove;
            if (response.cacheEntry == null || response.cacheEntry.isExpired()) {
                onNoUsableResponseReceived(request);
                return;
            }
            String cacheKey = request.getCacheKey();
            synchronized (this) {
                listRemove = this.a.remove(cacheKey);
            }
            if (listRemove != null) {
                if (VolleyLog.DEBUG) {
                    VolleyLog.v("Releasing %d waiting requests for cacheKey=%s.", Integer.valueOf(listRemove.size()), cacheKey);
                }
                Iterator<Request<?>> it = listRemove.iterator();
                while (it.hasNext()) {
                    this.b.e.postResponse(it.next(), response);
                }
            }
        }
    }

    public CacheDispatcher(BlockingQueue<Request<?>> blockingQueue, BlockingQueue<Request<?>> blockingQueue2, Cache cache, ResponseDelivery responseDelivery) {
        this.b = blockingQueue;
        this.c = blockingQueue2;
        this.d = cache;
        this.e = responseDelivery;
    }

    private void a() throws InterruptedException {
        processRequest(this.b.take());
    }

    public void processRequest(final Request<?> request) throws InterruptedException {
        request.addMarker("cache-queue-take");
        if (request.isCanceled()) {
            request.a("cache-discard-canceled");
            return;
        }
        Cache.Entry entry = this.d.get(request.getCacheKey());
        if (entry == null) {
            request.addMarker("cache-miss");
            if (this.f.a(request)) {
                return;
            }
            this.c.put(request);
            return;
        }
        if (entry.isExpired()) {
            request.addMarker("cache-hit-expired");
            request.setCacheEntry(entry);
            if (this.f.a(request)) {
                return;
            }
            this.c.put(request);
            return;
        }
        request.addMarker("cache-hit");
        Response<?> networkResponse = request.parseNetworkResponse(new NetworkResponse(entry.data, entry.responseHeaders));
        request.addMarker("cache-hit-parsed");
        if (entry.refreshNeeded()) {
            request.addMarker("cache-hit-refresh-needed");
            request.setCacheEntry(entry);
            networkResponse.intermediate = true;
            if (!this.f.a(request)) {
                this.e.postResponse(request, networkResponse, new Runnable() {
                    @Override
                    public void run() {
                        try {
                            CacheDispatcher.this.c.put(request);
                        } catch (InterruptedException unused) {
                            Thread.currentThread().interrupt();
                        }
                    }
                });
                return;
            }
        }
        this.e.postResponse(request, networkResponse);
    }

    public void quit() {
        this.g = true;
        interrupt();
    }

    @Override
    public void run() {
        if (a) {
            VolleyLog.v("start new dispatcher", new Object[0]);
        }
        Process.setThreadPriority(10);
        this.d.initialize();
        while (true) {
            try {
                a();
            } catch (InterruptedException unused) {
                if (this.g) {
                    Thread.currentThread().interrupt();
                    return;
                }
                VolleyLog.e("Ignoring spurious interrupt of CacheDispatcher thread; use quit() to terminate it", new Object[0]);
            }
        }
    }
}
