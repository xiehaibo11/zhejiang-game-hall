package com.bumptech.glide.load.engine;

class ResourceRecycler {
    private final android.os.Handler handler;
    private boolean isRecycling;

    static class 1 {
    }

    private static class ResourceRecyclerCallback implements android.os.Handler.Callback {
        public static final int RECYCLE_RESOURCE = 1;

        private ResourceRecyclerCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        ResourceRecyclerCallback(com.bumptech.glide.load.engine.ResourceRecycler.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean handleMessage(android.os.Message r3) {
                r2 = this;
                int r0 = r3.what
                r1 = 1
                if (r0 != r1) goto Ld
                java.lang.Object r3 = r3.obj
                com.bumptech.glide.load.engine.Resource r3 = (com.bumptech.glide.load.engine.Resource) r3
                r3.recycle()
                return r1
            Ld:
                r3 = 0
                return r3
        }
    }

    ResourceRecycler() {
            r4 = this;
            r4.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            com.bumptech.glide.load.engine.ResourceRecycler$ResourceRecyclerCallback r2 = new com.bumptech.glide.load.engine.ResourceRecycler$ResourceRecyclerCallback
            r3 = 0
            r2.<init>(r3)
            r0.<init>(r1, r2)
            r4.handler = r0
            return
    }

    public void recycle(com.bumptech.glide.load.engine.Resource<?> r3) {
            r2 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            boolean r0 = r2.isRecycling
            r1 = 1
            if (r0 == 0) goto L12
            android.os.Handler r0 = r2.handler
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r3.sendToTarget()
            goto L1a
        L12:
            r2.isRecycling = r1
            r3.recycle()
            r3 = 0
            r2.isRecycling = r3
        L1a:
            return
    }
}
