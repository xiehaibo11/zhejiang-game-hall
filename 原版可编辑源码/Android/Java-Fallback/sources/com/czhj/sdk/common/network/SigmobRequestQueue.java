package com.czhj.sdk.common.network;

public class SigmobRequestQueue extends com.czhj.volley.RequestQueue {
    private static final int a = 10;
    private final java.util.Map<com.czhj.volley.Request<?>, com.czhj.sdk.common.network.SigmobRequestQueue.DelayedRequestHelper> b;




    class DelayedRequestHelper {
        final int a;
        final android.os.Handler b;
        final java.lang.Runnable c;
        final com.czhj.sdk.common.network.SigmobRequestQueue d;


        DelayedRequestHelper(com.czhj.sdk.common.network.SigmobRequestQueue r2, com.czhj.volley.Request<?> r3, int r4) {
                r1 = this;
                android.os.Handler r0 = new android.os.Handler
                r0.<init>()
                r1.<init>(r2, r3, r4, r0)
                return
        }

        DelayedRequestHelper(com.czhj.sdk.common.network.SigmobRequestQueue r1, com.czhj.volley.Request<?> r2, int r3, android.os.Handler r4) {
                r0 = this;
                r0.d = r1
                r0.<init>()
                r0.a = r3
                r0.b = r4
                com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper$1 r3 = new com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper$1
                r3.<init>(r0, r1, r2)
                r0.c = r3
                return
        }

        void a() {
                r4 = this;
                android.os.Handler r0 = r4.b
                java.lang.Runnable r1 = r4.c
                int r2 = r4.a
                long r2 = (long) r2
                r0.postDelayed(r1, r2)
                return
        }

        void b() {
                r2 = this;
                android.os.Handler r0 = r2.b
                java.lang.Runnable r1 = r2.c
                r0.removeCallbacks(r1)
                return
        }
    }

    SigmobRequestQueue(com.czhj.volley.Network r2) {
            r1 = this;
            r1.<init>(r2)
            java.util.HashMap r2 = new java.util.HashMap
            r0 = 10
            r2.<init>(r0)
            r1.b = r2
            return
    }

    SigmobRequestQueue(com.czhj.volley.Network r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 10
            r1.<init>(r2)
            r0.b = r1
            return
    }

    SigmobRequestQueue(com.czhj.volley.Network r1, int r2, com.czhj.volley.ResponseDelivery r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 10
            r1.<init>(r2)
            r0.b = r1
            return
    }

    static java.util.Map a(com.czhj.sdk.common.network.SigmobRequestQueue r0) {
            java.util.Map<com.czhj.volley.Request<?>, com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper> r0 = r0.b
            return r0
    }

    private void a(com.czhj.volley.Request<?> r2, com.czhj.sdk.common.network.SigmobRequestQueue.DelayedRequestHelper r3) {
            r1 = this;
            java.util.Map<com.czhj.volley.Request<?>, com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper> r0 = r1.b
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto Lb
            r1.b(r2)
        Lb:
            r3.a()
            java.util.Map<com.czhj.volley.Request<?>, com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper> r0 = r1.b
            r0.put(r2, r3)
            return
    }

    private void b(com.czhj.volley.Request<?> r2) {
            r1 = this;
            com.czhj.sdk.common.network.SigmobRequestQueue$3 r0 = new com.czhj.sdk.common.network.SigmobRequestQueue$3
            r0.<init>(r1, r2)
            r1.cancelAll(r0)
            return
    }

    @java.lang.Deprecated
    java.util.Map<com.czhj.volley.Request<?>, com.czhj.sdk.common.network.SigmobRequestQueue.DelayedRequestHelper> a() {
            r1 = this;
            java.util.Map<com.czhj.volley.Request<?>, com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper> r0 = r1.b
            return r0
    }

    public void addDelayedRequest(com.czhj.volley.Request<?> r2, int r3) {
            r1 = this;
            com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper r0 = new com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper
            r0.<init>(r1, r2, r3)
            r1.a(r2, r0)
            return
    }

    public void cancelAll() {
            r1 = this;
            com.czhj.sdk.common.network.SigmobRequestQueue$1 r0 = new com.czhj.sdk.common.network.SigmobRequestQueue$1
            r0.<init>(r1)
            r1.cancelAll(r0)
            return
    }

    @Override
    public void cancelAll(com.czhj.volley.RequestQueue.RequestFilter r4) {
            r3 = this;
            super.cancelAll(r4)
            java.util.Map<com.czhj.volley.Request<?>, com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper> r0 = r3.b
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            com.czhj.volley.Request r2 = (com.czhj.volley.Request) r2
            boolean r2 = r4.apply(r2)
            if (r2 == 0) goto Ld
            java.lang.Object r2 = r1.getKey()
            com.czhj.volley.Request r2 = (com.czhj.volley.Request) r2
            r2.cancel()
            java.lang.Object r1 = r1.getValue()
            com.czhj.sdk.common.network.SigmobRequestQueue$DelayedRequestHelper r1 = (com.czhj.sdk.common.network.SigmobRequestQueue.DelayedRequestHelper) r1
            r1.b()
            r0.remove()
            goto Ld
        L3b:
            return
    }

    @Override
    public void cancelAll(java.lang.Object r2) {
            r1 = this;
            super.cancelAll(r2)
            com.czhj.sdk.common.network.SigmobRequestQueue$2 r0 = new com.czhj.sdk.common.network.SigmobRequestQueue$2
            r0.<init>(r1, r2)
            r1.cancelAll(r0)
            return
    }
}
