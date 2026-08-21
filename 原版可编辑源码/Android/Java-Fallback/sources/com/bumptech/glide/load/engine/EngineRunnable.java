package com.bumptech.glide.load.engine;

class EngineRunnable implements java.lang.Runnable, com.bumptech.glide.load.engine.executor.Prioritized {
    private static final java.lang.String TAG = "EngineRunnable";
    private final com.bumptech.glide.load.engine.DecodeJob<?, ?, ?> decodeJob;
    private volatile boolean isCancelled;
    private final com.bumptech.glide.load.engine.EngineRunnable.EngineRunnableManager manager;
    private final com.bumptech.glide.Priority priority;
    private com.bumptech.glide.load.engine.EngineRunnable.Stage stage;

    interface EngineRunnableManager extends com.bumptech.glide.request.ResourceCallback {
        void submitForSource(com.bumptech.glide.load.engine.EngineRunnable r1);
    }

    private enum Stage extends java.lang.Enum<com.bumptech.glide.load.engine.EngineRunnable.Stage> {
        private static final com.bumptech.glide.load.engine.EngineRunnable.Stage[] $VALUES = null;
        public static final com.bumptech.glide.load.engine.EngineRunnable.Stage CACHE = null;
        public static final com.bumptech.glide.load.engine.EngineRunnable.Stage SOURCE = null;

        static {
                com.bumptech.glide.load.engine.EngineRunnable$Stage r0 = new com.bumptech.glide.load.engine.EngineRunnable$Stage
                java.lang.String r1 = "CACHE"
                r2 = 0
                r0.<init>(r1, r2)
                com.bumptech.glide.load.engine.EngineRunnable.Stage.CACHE = r0
                com.bumptech.glide.load.engine.EngineRunnable$Stage r0 = new com.bumptech.glide.load.engine.EngineRunnable$Stage
                java.lang.String r1 = "SOURCE"
                r3 = 1
                r0.<init>(r1, r3)
                com.bumptech.glide.load.engine.EngineRunnable.Stage.SOURCE = r0
                r1 = 2
                com.bumptech.glide.load.engine.EngineRunnable$Stage[] r1 = new com.bumptech.glide.load.engine.EngineRunnable.Stage[r1]
                com.bumptech.glide.load.engine.EngineRunnable$Stage r4 = com.bumptech.glide.load.engine.EngineRunnable.Stage.CACHE
                r1[r2] = r4
                r1[r3] = r0
                com.bumptech.glide.load.engine.EngineRunnable.Stage.$VALUES = r1
                return
        }

        Stage(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.bumptech.glide.load.engine.EngineRunnable.Stage valueOf(java.lang.String r1) {
                java.lang.Class<com.bumptech.glide.load.engine.EngineRunnable$Stage> r0 = com.bumptech.glide.load.engine.EngineRunnable.Stage.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bumptech.glide.load.engine.EngineRunnable$Stage r1 = (com.bumptech.glide.load.engine.EngineRunnable.Stage) r1
                return r1
        }

        public static com.bumptech.glide.load.engine.EngineRunnable.Stage[] values() {
                com.bumptech.glide.load.engine.EngineRunnable$Stage[] r0 = com.bumptech.glide.load.engine.EngineRunnable.Stage.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bumptech.glide.load.engine.EngineRunnable$Stage[] r0 = (com.bumptech.glide.load.engine.EngineRunnable.Stage[]) r0
                return r0
        }
    }

    public EngineRunnable(com.bumptech.glide.load.engine.EngineRunnable.EngineRunnableManager r1, com.bumptech.glide.load.engine.DecodeJob<?, ?, ?> r2, com.bumptech.glide.Priority r3) {
            r0 = this;
            r0.<init>()
            r0.manager = r1
            r0.decodeJob = r2
            com.bumptech.glide.load.engine.EngineRunnable$Stage r1 = com.bumptech.glide.load.engine.EngineRunnable.Stage.CACHE
            r0.stage = r1
            r0.priority = r3
            return
    }

    private com.bumptech.glide.load.engine.Resource<?> decode() throws java.lang.Exception {
            r1 = this;
            boolean r0 = r1.isDecodingFromCache()
            if (r0 == 0) goto Lb
            com.bumptech.glide.load.engine.Resource r0 = r1.decodeFromCache()
            return r0
        Lb:
            com.bumptech.glide.load.engine.Resource r0 = r1.decodeFromSource()
            return r0
    }

    private com.bumptech.glide.load.engine.Resource<?> decodeFromCache() throws java.lang.Exception {
            r4 = this;
            com.bumptech.glide.load.engine.DecodeJob<?, ?, ?> r0 = r4.decodeJob     // Catch: java.lang.Exception -> L7
            com.bumptech.glide.load.engine.Resource r0 = r0.decodeResultFromCache()     // Catch: java.lang.Exception -> L7
            goto L26
        L7:
            r0 = move-exception
            r1 = 3
            java.lang.String r2 = "EngineRunnable"
            boolean r1 = android.util.Log.isLoggable(r2, r1)
            if (r1 == 0) goto L25
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Exception decoding result from cache: "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            android.util.Log.d(r2, r0)
        L25:
            r0 = 0
        L26:
            if (r0 != 0) goto L2e
            com.bumptech.glide.load.engine.DecodeJob<?, ?, ?> r0 = r4.decodeJob
            com.bumptech.glide.load.engine.Resource r0 = r0.decodeSourceFromCache()
        L2e:
            return r0
    }

    private com.bumptech.glide.load.engine.Resource<?> decodeFromSource() throws java.lang.Exception {
            r1 = this;
            com.bumptech.glide.load.engine.DecodeJob<?, ?, ?> r0 = r1.decodeJob
            com.bumptech.glide.load.engine.Resource r0 = r0.decodeFromSource()
            return r0
    }

    private boolean isDecodingFromCache() {
            r2 = this;
            com.bumptech.glide.load.engine.EngineRunnable$Stage r0 = r2.stage
            com.bumptech.glide.load.engine.EngineRunnable$Stage r1 = com.bumptech.glide.load.engine.EngineRunnable.Stage.CACHE
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private void onLoadComplete(com.bumptech.glide.load.engine.Resource r2) {
            r1 = this;
            com.bumptech.glide.load.engine.EngineRunnable$EngineRunnableManager r0 = r1.manager
            r0.onResourceReady(r2)
            return
    }

    private void onLoadFailed(java.lang.Exception r2) {
            r1 = this;
            boolean r0 = r1.isDecodingFromCache()
            if (r0 == 0) goto L10
            com.bumptech.glide.load.engine.EngineRunnable$Stage r2 = com.bumptech.glide.load.engine.EngineRunnable.Stage.SOURCE
            r1.stage = r2
            com.bumptech.glide.load.engine.EngineRunnable$EngineRunnableManager r2 = r1.manager
            r2.submitForSource(r1)
            goto L15
        L10:
            com.bumptech.glide.load.engine.EngineRunnable$EngineRunnableManager r0 = r1.manager
            r0.onException(r2)
        L15:
            return
    }

    public void cancel() {
            r1 = this;
            r0 = 1
            r1.isCancelled = r0
            com.bumptech.glide.load.engine.DecodeJob<?, ?, ?> r0 = r1.decodeJob
            r0.cancel()
            return
    }

    @Override
    public int getPriority() {
            r1 = this;
            com.bumptech.glide.Priority r0 = r1.priority
            int r0 = r0.ordinal()
            return r0
    }

    @Override
    public void run() {
            r5 = this;
            boolean r0 = r5.isCancelled
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            com.bumptech.glide.load.engine.Resource r1 = r5.decode()     // Catch: java.lang.Exception -> Le
            r4 = r1
            r1 = r0
            r0 = r4
            goto L1d
        Le:
            r1 = move-exception
            r2 = 2
            java.lang.String r3 = "EngineRunnable"
            boolean r2 = android.util.Log.isLoggable(r3, r2)
            if (r2 == 0) goto L1d
            java.lang.String r2 = "Exception decoding"
            android.util.Log.v(r3, r2, r1)
        L1d:
            boolean r2 = r5.isCancelled
            if (r2 == 0) goto L27
            if (r0 == 0) goto L26
            r0.recycle()
        L26:
            return
        L27:
            if (r0 != 0) goto L2d
            r5.onLoadFailed(r1)
            goto L30
        L2d:
            r5.onLoadComplete(r0)
        L30:
            return
    }
}
