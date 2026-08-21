package com.czhj.volley;

import android.os.Handler;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes.dex */
public class ExecutorDelivery implements ResponseDelivery {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Executor f1827a;

    private static class ResponseDeliveryRunnable implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Request f1829a;
        private final Response b;
        private final Runnable c;

        public ResponseDeliveryRunnable(Request request, Response response, Runnable runnable) {
            this.f1829a = request;
            this.b = response;
            this.c = runnable;
        }

        @Override // java.lang.Runnable
        public void run() {
            if (this.f1829a.isCanceled()) {
                this.f1829a.a("canceled-at-delivery");
                return;
            }
            if (this.b.isSuccess()) {
                this.f1829a.deliverResponse(this.b.result);
            } else {
                this.f1829a.deliverError(this.b.error);
            }
            if (this.b.intermediate) {
                this.f1829a.addMarker("intermediate-response");
            } else {
                this.f1829a.a("done");
            }
            Runnable runnable = this.c;
            if (runnable != null) {
                runnable.run();
            }
        }
    }

    public ExecutorDelivery(final Handler handler) {
        this.f1827a = new Executor() { // from class: com.czhj.volley.ExecutorDelivery.1
            @Override // java.util.concurrent.Executor
            public void execute(Runnable runnable) {
                handler.post(runnable);
            }
        };
    }

    public ExecutorDelivery(Executor executor) {
        this.f1827a = executor;
    }

    @Override // com.czhj.volley.ResponseDelivery
    public void postError(Request<?> request, VolleyError volleyError) {
        request.addMarker("post-error");
        this.f1827a.execute(new ResponseDeliveryRunnable(request, Response.error(volleyError), null));
    }

    @Override // com.czhj.volley.ResponseDelivery
    public void postResponse(Request<?> request, Response<?> response) {
        postResponse(request, response, null);
    }

    @Override // com.czhj.volley.ResponseDelivery
    public void postResponse(Request<?> request, Response<?> response, Runnable runnable) {
        request.markDelivered();
        request.addMarker("post-response");
        this.f1827a.execute(new ResponseDeliveryRunnable(request, response, runnable));
    }
}
