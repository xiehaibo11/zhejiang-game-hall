package com.czhj.volley;

import android.os.Handler;
import java.util.concurrent.Executor;

public class ExecutorDelivery implements ResponseDelivery {
    private final Executor a;

    private static class ResponseDeliveryRunnable implements Runnable {
        private final Request a;
        private final Response b;
        private final Runnable c;

        public ResponseDeliveryRunnable(Request request, Response response, Runnable runnable) {
            this.a = request;
            this.b = response;
            this.c = runnable;
        }

        @Override
        public void run() {
            if (this.a.isCanceled()) {
                this.a.a("canceled-at-delivery");
                return;
            }
            if (this.b.isSuccess()) {
                this.a.deliverResponse(this.b.result);
            } else {
                this.a.deliverError(this.b.error);
            }
            if (this.b.intermediate) {
                this.a.addMarker("intermediate-response");
            } else {
                this.a.a("done");
            }
            Runnable runnable = this.c;
            if (runnable != null) {
                runnable.run();
            }
        }
    }

    public ExecutorDelivery(final Handler handler) {
        this.a = new Executor() {
            @Override
            public void execute(Runnable runnable) {
                handler.post(runnable);
            }
        };
    }

    public ExecutorDelivery(Executor executor) {
        this.a = executor;
    }

    @Override
    public void postError(Request<?> request, VolleyError volleyError) {
        request.addMarker("post-error");
        this.a.execute(new ResponseDeliveryRunnable(request, Response.error(volleyError), null));
    }

    @Override
    public void postResponse(Request<?> request, Response<?> response) {
        postResponse(request, response, null);
    }

    @Override
    public void postResponse(Request<?> request, Response<?> response, Runnable runnable) {
        request.markDelivered();
        request.addMarker("post-response");
        this.a.execute(new ResponseDeliveryRunnable(request, response, runnable));
    }
}
