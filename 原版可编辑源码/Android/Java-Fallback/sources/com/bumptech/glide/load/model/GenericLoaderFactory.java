package com.bumptech.glide.load.model;

public class GenericLoaderFactory {
    private static final com.bumptech.glide.load.model.ModelLoader NULL_MODEL_LOADER = null;
    private final java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoader>> cachedModelLoaders;
    private final android.content.Context context;
    private final java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoaderFactory>> modelClassToResourceFactories;


    static {
            com.bumptech.glide.load.model.GenericLoaderFactory$1 r0 = new com.bumptech.glide.load.model.GenericLoaderFactory$1
            r0.<init>()
            com.bumptech.glide.load.model.GenericLoaderFactory.NULL_MODEL_LOADER = r0
            return
    }

    public GenericLoaderFactory(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.modelClassToResourceFactories = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.cachedModelLoaders = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.context = r2
            return
    }

    private <T, Y> void cacheModelLoader(java.lang.Class<T> r3, java.lang.Class<Y> r4, com.bumptech.glide.load.model.ModelLoader<T, Y> r5) {
            r2 = this;
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoader>> r0 = r2.cachedModelLoaders
            java.lang.Object r0 = r0.get(r3)
            java.util.Map r0 = (java.util.Map) r0
            if (r0 != 0) goto L14
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoader>> r1 = r2.cachedModelLoaders
            r1.put(r3, r0)
        L14:
            r0.put(r4, r5)
            return
    }

    private <T, Y> void cacheNullLoader(java.lang.Class<T> r2, java.lang.Class<Y> r3) {
            r1 = this;
            com.bumptech.glide.load.model.ModelLoader r0 = com.bumptech.glide.load.model.GenericLoaderFactory.NULL_MODEL_LOADER
            r1.cacheModelLoader(r2, r3, r0)
            return
    }

    private <T, Y> com.bumptech.glide.load.model.ModelLoader<T, Y> getCachedLoader(java.lang.Class<T> r2, java.lang.Class<Y> r3) {
            r1 = this;
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoader>> r0 = r1.cachedModelLoaders
            java.lang.Object r2 = r0.get(r2)
            java.util.Map r2 = (java.util.Map) r2
            if (r2 == 0) goto L11
            java.lang.Object r2 = r2.get(r3)
            com.bumptech.glide.load.model.ModelLoader r2 = (com.bumptech.glide.load.model.ModelLoader) r2
            goto L12
        L11:
            r2 = 0
        L12:
            return r2
    }

    private <T, Y> com.bumptech.glide.load.model.ModelLoaderFactory<T, Y> getFactory(java.lang.Class<T> r5, java.lang.Class<Y> r6) {
            r4 = this;
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoaderFactory>> r0 = r4.modelClassToResourceFactories
            java.lang.Object r0 = r0.get(r5)
            java.util.Map r0 = (java.util.Map) r0
            if (r0 == 0) goto L11
            java.lang.Object r0 = r0.get(r6)
            com.bumptech.glide.load.model.ModelLoaderFactory r0 = (com.bumptech.glide.load.model.ModelLoaderFactory) r0
            goto L12
        L11:
            r0 = 0
        L12:
            if (r0 != 0) goto L42
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoaderFactory>> r1 = r4.modelClassToResourceFactories
            java.util.Set r1 = r1.keySet()
            java.util.Iterator r1 = r1.iterator()
        L1e:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L42
            java.lang.Object r2 = r1.next()
            java.lang.Class r2 = (java.lang.Class) r2
            boolean r3 = r2.isAssignableFrom(r5)
            if (r3 == 0) goto L1e
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoaderFactory>> r3 = r4.modelClassToResourceFactories
            java.lang.Object r2 = r3.get(r2)
            java.util.Map r2 = (java.util.Map) r2
            if (r2 == 0) goto L1e
            java.lang.Object r0 = r2.get(r6)
            com.bumptech.glide.load.model.ModelLoaderFactory r0 = (com.bumptech.glide.load.model.ModelLoaderFactory) r0
            if (r0 == 0) goto L1e
        L42:
            return r0
    }

    public synchronized <T, Y> com.bumptech.glide.load.model.ModelLoader<T, Y> buildModelLoader(java.lang.Class<T> r3, java.lang.Class<Y> r4) {
            r2 = this;
            monitor-enter(r2)
            com.bumptech.glide.load.model.ModelLoader r0 = r2.getCachedLoader(r3, r4)     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L14
            com.bumptech.glide.load.model.ModelLoader r3 = com.bumptech.glide.load.model.GenericLoaderFactory.NULL_MODEL_LOADER     // Catch: java.lang.Throwable -> L29
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Throwable -> L29
            if (r3 == 0) goto L12
            r3 = 0
            monitor-exit(r2)
            return r3
        L12:
            monitor-exit(r2)
            return r0
        L14:
            com.bumptech.glide.load.model.ModelLoaderFactory r1 = r2.getFactory(r3, r4)     // Catch: java.lang.Throwable -> L29
            if (r1 == 0) goto L24
            android.content.Context r0 = r2.context     // Catch: java.lang.Throwable -> L29
            com.bumptech.glide.load.model.ModelLoader r0 = r1.build(r0, r2)     // Catch: java.lang.Throwable -> L29
            r2.cacheModelLoader(r3, r4, r0)     // Catch: java.lang.Throwable -> L29
            goto L27
        L24:
            r2.cacheNullLoader(r3, r4)     // Catch: java.lang.Throwable -> L29
        L27:
            monitor-exit(r2)
            return r0
        L29:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @java.lang.Deprecated
    public synchronized <T, Y> com.bumptech.glide.load.model.ModelLoader<T, Y> buildModelLoader(java.lang.Class<T> r1, java.lang.Class<Y> r2, android.content.Context r3) {
            r0 = this;
            monitor-enter(r0)
            com.bumptech.glide.load.model.ModelLoader r1 = r0.buildModelLoader(r1, r2)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized <T, Y> com.bumptech.glide.load.model.ModelLoaderFactory<T, Y> register(java.lang.Class<T> r3, java.lang.Class<Y> r4, com.bumptech.glide.load.model.ModelLoaderFactory<T, Y> r5) {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoader>> r0 = r2.cachedModelLoaders     // Catch: java.lang.Throwable -> L41
            r0.clear()     // Catch: java.lang.Throwable -> L41
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoaderFactory>> r0 = r2.modelClassToResourceFactories     // Catch: java.lang.Throwable -> L41
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L41
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Throwable -> L41
            if (r0 != 0) goto L1a
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoaderFactory>> r1 = r2.modelClassToResourceFactories     // Catch: java.lang.Throwable -> L41
            r1.put(r3, r0)     // Catch: java.lang.Throwable -> L41
        L1a:
            java.lang.Object r3 = r0.put(r4, r5)     // Catch: java.lang.Throwable -> L41
            com.bumptech.glide.load.model.ModelLoaderFactory r3 = (com.bumptech.glide.load.model.ModelLoaderFactory) r3     // Catch: java.lang.Throwable -> L41
            if (r3 == 0) goto L3f
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoaderFactory>> r4 = r2.modelClassToResourceFactories     // Catch: java.lang.Throwable -> L41
            java.util.Collection r4 = r4.values()     // Catch: java.lang.Throwable -> L41
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L41
        L2c:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L41
            if (r5 == 0) goto L3f
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L41
            java.util.Map r5 = (java.util.Map) r5     // Catch: java.lang.Throwable -> L41
            boolean r5 = r5.containsValue(r3)     // Catch: java.lang.Throwable -> L41
            if (r5 == 0) goto L2c
            r3 = 0
        L3f:
            monitor-exit(r2)
            return r3
        L41:
            r3 = move-exception
            monitor-exit(r2)
            goto L45
        L44:
            throw r3
        L45:
            goto L44
    }

    public synchronized <T, Y> com.bumptech.glide.load.model.ModelLoaderFactory<T, Y> unregister(java.lang.Class<T> r3, java.lang.Class<Y> r4) {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoader>> r0 = r2.cachedModelLoaders     // Catch: java.lang.Throwable -> L1a
            r0.clear()     // Catch: java.lang.Throwable -> L1a
            r0 = 0
            java.util.Map<java.lang.Class, java.util.Map<java.lang.Class, com.bumptech.glide.load.model.ModelLoaderFactory>> r1 = r2.modelClassToResourceFactories     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L1a
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Throwable -> L1a
            if (r3 == 0) goto L18
            java.lang.Object r3 = r3.remove(r4)     // Catch: java.lang.Throwable -> L1a
            r0 = r3
            com.bumptech.glide.load.model.ModelLoaderFactory r0 = (com.bumptech.glide.load.model.ModelLoaderFactory) r0     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r2)
            return r0
        L1a:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
