package com.bianfeng.netlibsdk;

public class ExecutorDelivery implements com.bianfeng.netlibsdk.ResponseDelivery {
    private final java.util.concurrent.Executor mResponsePoster;


    private static class ResponseDeliveryRunnable implements java.lang.Runnable {
        private final com.bianfeng.netlibsdk.Request mRequest;
        private final com.bianfeng.netlibsdk.Response mResponse;
        private final java.lang.Runnable mRunnable;

        public ResponseDeliveryRunnable(com.bianfeng.netlibsdk.Request r1, com.bianfeng.netlibsdk.Response r2, java.lang.Runnable r3) {
                r0 = this;
                r0.<init>()
                r0.mRequest = r1
                r0.mResponse = r2
                r0.mRunnable = r3
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.bianfeng.netlibsdk.Request r0 = r2.mRequest
                boolean r0 = r0.isCanceled()
                if (r0 == 0) goto L10
                com.bianfeng.netlibsdk.Request r0 = r2.mRequest
                java.lang.String r1 = "canceled-at-delivery"
                r0.finish(r1)
                return
            L10:
                com.bianfeng.netlibsdk.Response r0 = r2.mResponse
                boolean r0 = r0.isSuccess()
                if (r0 == 0) goto L22
                com.bianfeng.netlibsdk.Request r0 = r2.mRequest
                com.bianfeng.netlibsdk.Response r1 = r2.mResponse
                T r1 = r1.result
                r0.deliverResponse(r1)
                goto L2b
            L22:
                com.bianfeng.netlibsdk.Request r0 = r2.mRequest
                com.bianfeng.netlibsdk.Response r1 = r2.mResponse
                com.bianfeng.netlibsdk.utils.NetException r1 = r1.error
                r0.deliverError(r1)
            L2b:
                com.bianfeng.netlibsdk.Response r0 = r2.mResponse
                boolean r0 = r0.intermediate
                if (r0 == 0) goto L39
                com.bianfeng.netlibsdk.Request r0 = r2.mRequest
                java.lang.String r1 = "intermediate-response"
                r0.addMarker(r1)
                goto L40
            L39:
                com.bianfeng.netlibsdk.Request r0 = r2.mRequest
                java.lang.String r1 = "done"
                r0.finish(r1)
            L40:
                java.lang.Runnable r0 = r2.mRunnable
                if (r0 == 0) goto L47
                r0.run()
            L47:
                return
        }
    }

    public ExecutorDelivery(android.os.Handler r2) {
            r1 = this;
            r1.<init>()
            com.bianfeng.netlibsdk.ExecutorDelivery$1 r0 = new com.bianfeng.netlibsdk.ExecutorDelivery$1
            r0.<init>(r1, r2)
            r1.mResponsePoster = r0
            return
    }

    @Override
    public void postError(com.bianfeng.netlibsdk.Request<?> r4, com.bianfeng.netlibsdk.utils.NetException r5) {
            r3 = this;
            java.lang.String r0 = "post-error"
            r4.addMarker(r0)
            com.bianfeng.netlibsdk.Response r5 = com.bianfeng.netlibsdk.Response.error(r5)
            java.util.concurrent.Executor r0 = r3.mResponsePoster
            com.bianfeng.netlibsdk.ExecutorDelivery$ResponseDeliveryRunnable r1 = new com.bianfeng.netlibsdk.ExecutorDelivery$ResponseDeliveryRunnable
            r2 = 0
            r1.<init>(r4, r5, r2)
            r0.execute(r1)
            return
    }

    @Override
    public void postResponse(com.bianfeng.netlibsdk.Request<?> r2, com.bianfeng.netlibsdk.Response<?> r3) {
            r1 = this;
            r0 = 0
            r1.postResponse(r2, r3, r0)
            return
    }

    @Override
    public void postResponse(com.bianfeng.netlibsdk.Request<?> r3, com.bianfeng.netlibsdk.Response<?> r4, java.lang.Runnable r5) {
            r2 = this;
            r3.markDelivered()
            java.lang.String r0 = "post-response"
            r3.addMarker(r0)
            java.util.concurrent.Executor r0 = r2.mResponsePoster
            com.bianfeng.netlibsdk.ExecutorDelivery$ResponseDeliveryRunnable r1 = new com.bianfeng.netlibsdk.ExecutorDelivery$ResponseDeliveryRunnable
            r1.<init>(r3, r4, r5)
            r0.execute(r1)
            return
    }
}
