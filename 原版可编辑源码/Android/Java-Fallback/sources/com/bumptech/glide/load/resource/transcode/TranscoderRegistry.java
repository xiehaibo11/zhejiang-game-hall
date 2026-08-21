package com.bumptech.glide.load.resource.transcode;

public class TranscoderRegistry {
    private static final com.bumptech.glide.util.MultiClassKey GET_KEY = null;
    private final java.util.Map<com.bumptech.glide.util.MultiClassKey, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<?, ?>> factories;

    static {
            com.bumptech.glide.util.MultiClassKey r0 = new com.bumptech.glide.util.MultiClassKey
            r0.<init>()
            com.bumptech.glide.load.resource.transcode.TranscoderRegistry.GET_KEY = r0
            return
    }

    public TranscoderRegistry() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.factories = r0
            return
    }

    public <Z, R> com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> get(java.lang.Class<Z> r4, java.lang.Class<R> r5) {
            r3 = this;
            boolean r0 = r4.equals(r5)
            if (r0 == 0) goto Lb
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r4 = com.bumptech.glide.load.resource.transcode.UnitTranscoder.get()
            return r4
        Lb:
            com.bumptech.glide.util.MultiClassKey r0 = com.bumptech.glide.load.resource.transcode.TranscoderRegistry.GET_KEY
            monitor-enter(r0)
            com.bumptech.glide.util.MultiClassKey r1 = com.bumptech.glide.load.resource.transcode.TranscoderRegistry.GET_KEY     // Catch: java.lang.Throwable -> L40
            r1.set(r4, r5)     // Catch: java.lang.Throwable -> L40
            java.util.Map<com.bumptech.glide.util.MultiClassKey, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<?, ?>> r1 = r3.factories     // Catch: java.lang.Throwable -> L40
            com.bumptech.glide.util.MultiClassKey r2 = com.bumptech.glide.load.resource.transcode.TranscoderRegistry.GET_KEY     // Catch: java.lang.Throwable -> L40
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L40
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r1 = (com.bumptech.glide.load.resource.transcode.ResourceTranscoder) r1     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            if (r1 == 0) goto L21
            return r1
        L21:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "No transcoder registered for "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " and "
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L40:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            throw r4
    }

    public <Z, R> void register(java.lang.Class<Z> r3, java.lang.Class<R> r4, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> r5) {
            r2 = this;
            java.util.Map<com.bumptech.glide.util.MultiClassKey, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<?, ?>> r0 = r2.factories
            com.bumptech.glide.util.MultiClassKey r1 = new com.bumptech.glide.util.MultiClassKey
            r1.<init>(r3, r4)
            r0.put(r1, r5)
            return
    }
}
