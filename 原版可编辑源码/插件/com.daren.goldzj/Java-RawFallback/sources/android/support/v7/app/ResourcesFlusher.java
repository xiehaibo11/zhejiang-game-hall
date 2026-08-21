package android.support.v7.app;

class ResourcesFlusher {
    private static final java.lang.String TAG = "ResourcesFlusher";
    private static java.lang.reflect.Field sDrawableCacheField;
    private static boolean sDrawableCacheFieldFetched;
    private static java.lang.reflect.Field sResourcesImplField;
    private static boolean sResourcesImplFieldFetched;
    private static java.lang.Class sThemedResourceCacheClazz;
    private static boolean sThemedResourceCacheClazzFetched;
    private static java.lang.reflect.Field sThemedResourceCache_mUnthemedEntriesField;
    private static boolean sThemedResourceCache_mUnthemedEntriesFieldFetched;

    private ResourcesFlusher() {
            r0 = this;
            r0.<init>()
            return
    }

    static void flush(@android.support.annotation.NonNull android.content.res.Resources r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L7
            return
        L7:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L11
            flushNougats(r2)
            goto L24
        L11:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L1b
            flushMarshmallows(r2)
            goto L24
        L1b:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L24
            flushLollipops(r2)
        L24:
            return
    }

    @android.support.annotation.RequiresApi(21)
    private static void flushLollipops(@android.support.annotation.NonNull android.content.res.Resources r4) {
            boolean r0 = android.support.v7.app.ResourcesFlusher.sDrawableCacheFieldFetched
            java.lang.String r1 = "ResourcesFlusher"
            if (r0 != 0) goto L1f
            r0 = 1
            java.lang.Class<android.content.res.Resources> r2 = android.content.res.Resources.class
            java.lang.String r3 = "mDrawableCache"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> L17
            android.support.v7.app.ResourcesFlusher.sDrawableCacheField = r2     // Catch: java.lang.NoSuchFieldException -> L17
            java.lang.reflect.Field r2 = android.support.v7.app.ResourcesFlusher.sDrawableCacheField     // Catch: java.lang.NoSuchFieldException -> L17
            r2.setAccessible(r0)     // Catch: java.lang.NoSuchFieldException -> L17
            goto L1d
        L17:
            r2 = move-exception
            java.lang.String r3 = "Could not retrieve Resources#mDrawableCache field"
            android.util.Log.e(r1, r3, r2)
        L1d:
            android.support.v7.app.ResourcesFlusher.sDrawableCacheFieldFetched = r0
        L1f:
            java.lang.reflect.Field r0 = android.support.v7.app.ResourcesFlusher.sDrawableCacheField
            if (r0 == 0) goto L37
            r2 = 0
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.IllegalAccessException -> L2b
            java.util.Map r4 = (java.util.Map) r4     // Catch: java.lang.IllegalAccessException -> L2b
            goto L32
        L2b:
            r4 = move-exception
            java.lang.String r0 = "Could not retrieve value from Resources#mDrawableCache"
            android.util.Log.e(r1, r0, r4)
            r4 = r2
        L32:
            if (r4 == 0) goto L37
            r4.clear()
        L37:
            return
    }

    @android.support.annotation.RequiresApi(23)
    private static void flushMarshmallows(@android.support.annotation.NonNull android.content.res.Resources r4) {
            boolean r0 = android.support.v7.app.ResourcesFlusher.sDrawableCacheFieldFetched
            java.lang.String r1 = "ResourcesFlusher"
            if (r0 != 0) goto L1f
            r0 = 1
            java.lang.Class<android.content.res.Resources> r2 = android.content.res.Resources.class
            java.lang.String r3 = "mDrawableCache"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> L17
            android.support.v7.app.ResourcesFlusher.sDrawableCacheField = r2     // Catch: java.lang.NoSuchFieldException -> L17
            java.lang.reflect.Field r2 = android.support.v7.app.ResourcesFlusher.sDrawableCacheField     // Catch: java.lang.NoSuchFieldException -> L17
            r2.setAccessible(r0)     // Catch: java.lang.NoSuchFieldException -> L17
            goto L1d
        L17:
            r2 = move-exception
            java.lang.String r3 = "Could not retrieve Resources#mDrawableCache field"
            android.util.Log.e(r1, r3, r2)
        L1d:
            android.support.v7.app.ResourcesFlusher.sDrawableCacheFieldFetched = r0
        L1f:
            r0 = 0
            java.lang.reflect.Field r2 = android.support.v7.app.ResourcesFlusher.sDrawableCacheField
            if (r2 == 0) goto L2f
            java.lang.Object r0 = r2.get(r4)     // Catch: java.lang.IllegalAccessException -> L29
            goto L2f
        L29:
            r4 = move-exception
            java.lang.String r2 = "Could not retrieve value from Resources#mDrawableCache"
            android.util.Log.e(r1, r2, r4)
        L2f:
            if (r0 != 0) goto L32
            return
        L32:
            flushThemedResourcesCache(r0)
            return
    }

    @android.support.annotation.RequiresApi(24)
    private static void flushNougats(@android.support.annotation.NonNull android.content.res.Resources r5) {
            boolean r0 = android.support.v7.app.ResourcesFlusher.sResourcesImplFieldFetched
            r1 = 1
            java.lang.String r2 = "ResourcesFlusher"
            if (r0 != 0) goto L1f
            java.lang.Class<android.content.res.Resources> r0 = android.content.res.Resources.class
            java.lang.String r3 = "mResourcesImpl"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> L17
            android.support.v7.app.ResourcesFlusher.sResourcesImplField = r0     // Catch: java.lang.NoSuchFieldException -> L17
            java.lang.reflect.Field r0 = android.support.v7.app.ResourcesFlusher.sResourcesImplField     // Catch: java.lang.NoSuchFieldException -> L17
            r0.setAccessible(r1)     // Catch: java.lang.NoSuchFieldException -> L17
            goto L1d
        L17:
            r0 = move-exception
            java.lang.String r3 = "Could not retrieve Resources#mResourcesImpl field"
            android.util.Log.e(r2, r3, r0)
        L1d:
            android.support.v7.app.ResourcesFlusher.sResourcesImplFieldFetched = r1
        L1f:
            java.lang.reflect.Field r0 = android.support.v7.app.ResourcesFlusher.sResourcesImplField
            if (r0 != 0) goto L24
            return
        L24:
            r3 = 0
            java.lang.Object r5 = r0.get(r5)     // Catch: java.lang.IllegalAccessException -> L2a
            goto L31
        L2a:
            r5 = move-exception
            java.lang.String r0 = "Could not retrieve value from Resources#mResourcesImpl"
            android.util.Log.e(r2, r0, r5)
            r5 = r3
        L31:
            if (r5 != 0) goto L34
            return
        L34:
            boolean r0 = android.support.v7.app.ResourcesFlusher.sDrawableCacheFieldFetched
            if (r0 != 0) goto L52
            java.lang.Class r0 = r5.getClass()     // Catch: java.lang.NoSuchFieldException -> L4a
            java.lang.String r4 = "mDrawableCache"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> L4a
            android.support.v7.app.ResourcesFlusher.sDrawableCacheField = r0     // Catch: java.lang.NoSuchFieldException -> L4a
            java.lang.reflect.Field r0 = android.support.v7.app.ResourcesFlusher.sDrawableCacheField     // Catch: java.lang.NoSuchFieldException -> L4a
            r0.setAccessible(r1)     // Catch: java.lang.NoSuchFieldException -> L4a
            goto L50
        L4a:
            r0 = move-exception
            java.lang.String r4 = "Could not retrieve ResourcesImpl#mDrawableCache field"
            android.util.Log.e(r2, r4, r0)
        L50:
            android.support.v7.app.ResourcesFlusher.sDrawableCacheFieldFetched = r1
        L52:
            java.lang.reflect.Field r0 = android.support.v7.app.ResourcesFlusher.sDrawableCacheField
            if (r0 == 0) goto L61
            java.lang.Object r3 = r0.get(r5)     // Catch: java.lang.IllegalAccessException -> L5b
            goto L61
        L5b:
            r5 = move-exception
            java.lang.String r0 = "Could not retrieve value from ResourcesImpl#mDrawableCache"
            android.util.Log.e(r2, r0, r5)
        L61:
            if (r3 == 0) goto L66
            flushThemedResourcesCache(r3)
        L66:
            return
    }

    @android.support.annotation.RequiresApi(16)
    private static void flushThemedResourcesCache(@android.support.annotation.NonNull java.lang.Object r4) {
            boolean r0 = android.support.v7.app.ResourcesFlusher.sThemedResourceCacheClazzFetched
            r1 = 1
            java.lang.String r2 = "ResourcesFlusher"
            if (r0 != 0) goto L18
            java.lang.String r0 = "android.content.res.ThemedResourceCache"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L10
            android.support.v7.app.ResourcesFlusher.sThemedResourceCacheClazz = r0     // Catch: java.lang.ClassNotFoundException -> L10
            goto L16
        L10:
            r0 = move-exception
            java.lang.String r3 = "Could not find ThemedResourceCache class"
            android.util.Log.e(r2, r3, r0)
        L16:
            android.support.v7.app.ResourcesFlusher.sThemedResourceCacheClazzFetched = r1
        L18:
            java.lang.Class r0 = android.support.v7.app.ResourcesFlusher.sThemedResourceCacheClazz
            if (r0 != 0) goto L1d
            return
        L1d:
            boolean r3 = android.support.v7.app.ResourcesFlusher.sThemedResourceCache_mUnthemedEntriesFieldFetched
            if (r3 != 0) goto L37
            java.lang.String r3 = "mUnthemedEntries"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> L2f
            android.support.v7.app.ResourcesFlusher.sThemedResourceCache_mUnthemedEntriesField = r0     // Catch: java.lang.NoSuchFieldException -> L2f
            java.lang.reflect.Field r0 = android.support.v7.app.ResourcesFlusher.sThemedResourceCache_mUnthemedEntriesField     // Catch: java.lang.NoSuchFieldException -> L2f
            r0.setAccessible(r1)     // Catch: java.lang.NoSuchFieldException -> L2f
            goto L35
        L2f:
            r0 = move-exception
            java.lang.String r3 = "Could not retrieve ThemedResourceCache#mUnthemedEntries field"
            android.util.Log.e(r2, r3, r0)
        L35:
            android.support.v7.app.ResourcesFlusher.sThemedResourceCache_mUnthemedEntriesFieldFetched = r1
        L37:
            java.lang.reflect.Field r0 = android.support.v7.app.ResourcesFlusher.sThemedResourceCache_mUnthemedEntriesField
            if (r0 != 0) goto L3c
            return
        L3c:
            r1 = 0
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.IllegalAccessException -> L44
            android.util.LongSparseArray r4 = (android.util.LongSparseArray) r4     // Catch: java.lang.IllegalAccessException -> L44
            goto L4b
        L44:
            r4 = move-exception
            java.lang.String r0 = "Could not retrieve value from ThemedResourceCache#mUnthemedEntries"
            android.util.Log.e(r2, r0, r4)
            r4 = r1
        L4b:
            if (r4 == 0) goto L50
            r4.clear()
        L50:
            return
    }
}
