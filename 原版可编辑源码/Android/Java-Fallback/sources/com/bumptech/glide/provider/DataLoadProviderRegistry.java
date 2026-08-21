package com.bumptech.glide.provider;

public class DataLoadProviderRegistry {
    private static final com.bumptech.glide.util.MultiClassKey GET_KEY = null;
    private final java.util.Map<com.bumptech.glide.util.MultiClassKey, com.bumptech.glide.provider.DataLoadProvider<?, ?>> providers;

    static {
            com.bumptech.glide.util.MultiClassKey r0 = new com.bumptech.glide.util.MultiClassKey
            r0.<init>()
            com.bumptech.glide.provider.DataLoadProviderRegistry.GET_KEY = r0
            return
    }

    public DataLoadProviderRegistry() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.providers = r0
            return
    }

    public <T, Z> com.bumptech.glide.provider.DataLoadProvider<T, Z> get(java.lang.Class<T> r3, java.lang.Class<Z> r4) {
            r2 = this;
            com.bumptech.glide.util.MultiClassKey r0 = com.bumptech.glide.provider.DataLoadProviderRegistry.GET_KEY
            monitor-enter(r0)
            com.bumptech.glide.util.MultiClassKey r1 = com.bumptech.glide.provider.DataLoadProviderRegistry.GET_KEY     // Catch: java.lang.Throwable -> L1a
            r1.set(r3, r4)     // Catch: java.lang.Throwable -> L1a
            java.util.Map<com.bumptech.glide.util.MultiClassKey, com.bumptech.glide.provider.DataLoadProvider<?, ?>> r3 = r2.providers     // Catch: java.lang.Throwable -> L1a
            com.bumptech.glide.util.MultiClassKey r4 = com.bumptech.glide.provider.DataLoadProviderRegistry.GET_KEY     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L1a
            com.bumptech.glide.provider.DataLoadProvider r3 = (com.bumptech.glide.provider.DataLoadProvider) r3     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            if (r3 != 0) goto L19
            com.bumptech.glide.provider.DataLoadProvider r3 = com.bumptech.glide.provider.EmptyDataLoadProvider.get()
        L19:
            return r3
        L1a:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r3
    }

    public <T, Z> void register(java.lang.Class<T> r3, java.lang.Class<Z> r4, com.bumptech.glide.provider.DataLoadProvider<T, Z> r5) {
            r2 = this;
            java.util.Map<com.bumptech.glide.util.MultiClassKey, com.bumptech.glide.provider.DataLoadProvider<?, ?>> r0 = r2.providers
            com.bumptech.glide.util.MultiClassKey r1 = new com.bumptech.glide.util.MultiClassKey
            r1.<init>(r3, r4)
            r0.put(r1, r5)
            return
    }
}
