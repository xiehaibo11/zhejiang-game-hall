package com.czhj.volley;

public class ExecutorDelivery implements com.czhj.volley.ResponseDelivery {
    private final java.util.concurrent.Executor a;


    private static class ResponseDeliveryRunnable implements java.lang.Runnable {
        private final com.czhj.volley.Request a;
        private final com.czhj.volley.Response b;
        private final java.lang.Runnable c;

        public ResponseDeliveryRunnable(com.czhj.volley.Request r1, com.czhj.volley.Response r2, java.lang.Runnable r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.czhj.volley.Request r0 = r2.a
                boolean r0 = r0.isCanceled()
                if (r0 == 0) goto L10
                com.czhj.volley.Request r0 = r2.a
                java.lang.String r1 = "canceled-at-delivery"
                r0.a(r1)
                return
            L10:
                com.czhj.volley.Response r0 = r2.b
                boolean r0 = r0.isSuccess()
                if (r0 == 0) goto L22
                com.czhj.volley.Request r0 = r2.a
                com.czhj.volley.Response r1 = r2.b
                T r1 = r1.result
                r0.deliverResponse(r1)
                goto L2b
            L22:
                com.czhj.volley.Request r0 = r2.a
                com.czhj.volley.Response r1 = r2.b
                com.czhj.volley.VolleyError r1 = r1.error
                r0.deliverError(r1)
            L2b:
                com.czhj.volley.Response r0 = r2.b
                boolean r0 = r0.intermediate
                if (r0 == 0) goto L39
                com.czhj.volley.Request r0 = r2.a
                java.lang.String r1 = "intermediate-response"
                r0.addMarker(r1)
                goto L40
            L39:
                com.czhj.volley.Request r0 = r2.a
                java.lang.String r1 = "done"
                r0.a(r1)
            L40:
                java.lang.Runnable r0 = r2.c
                if (r0 == 0) goto L47
                r0.run()
            L47:
                return
        }
    }

    public ExecutorDelivery(android.os.Handler r2) {
            r1 = this;
            r1.<init>()
            com.czhj.volley.ExecutorDelivery$1 r0 = new com.czhj.volley.ExecutorDelivery$1
            r0.<init>(r1, r2)
            r1.a = r0
            return
    }

    public ExecutorDelivery(java.util.concurrent.Executor r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public void postError(com.czhj.volley.Request<?> r4, com.czhj.volley.VolleyError r5) {
            r3 = this;
            java.lang.String r0 = "post-error"
            r4.addMarker(r0)
            com.czhj.volley.Response r5 = com.czhj.volley.Response.error(r5)
            java.util.concurrent.Executor r0 = r3.a
            com.czhj.volley.ExecutorDelivery$ResponseDeliveryRunnable r1 = new com.czhj.volley.ExecutorDelivery$ResponseDeliveryRunnable
            r2 = 0
            r1.<init>(r4, r5, r2)
            r0.execute(r1)
            return
    }

    @Override
    public void postResponse(com.czhj.volley.Request<?> r2, com.czhj.volley.Response<?> r3) {
            r1 = this;
            r0 = 0
            r1.postResponse(r2, r3, r0)
            return
    }

    @Override
    public void postResponse(com.czhj.volley.Request<?> r3, com.czhj.volley.Response<?> r4, java.lang.Runnable r5) {
            r2 = this;
            r3.markDelivered()
            java.lang.String r0 = "post-response"
            r3.addMarker(r0)
            java.util.concurrent.Executor r0 = r2.a
            com.czhj.volley.ExecutorDelivery$ResponseDeliveryRunnable r1 = new com.czhj.volley.ExecutorDelivery$ResponseDeliveryRunnable
            r1.<init>(r3, r4, r5)
            r0.execute(r1)
            return
    }
}
