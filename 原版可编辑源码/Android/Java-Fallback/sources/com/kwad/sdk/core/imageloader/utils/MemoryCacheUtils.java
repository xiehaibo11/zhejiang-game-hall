package com.kwad.sdk.core.imageloader.utils;

public final class MemoryCacheUtils {
    private static final java.lang.String URI_AND_SIZE_SEPARATOR = "_";
    private static final java.lang.String WIDTH_AND_HEIGHT_SEPARATOR = "x";


    private MemoryCacheUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.Comparator<java.lang.String> createFuzzyKeyComparator() {
            com.kwad.sdk.core.imageloader.utils.MemoryCacheUtils$1 r0 = new com.kwad.sdk.core.imageloader.utils.MemoryCacheUtils$1
            r0.<init>()
            return r0
    }

    public static java.util.List<java.lang.String> findCacheKeysForImageUri(java.lang.String r3, com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Collection r4 = r4.keys()
            java.util.Iterator r4 = r4.iterator()
        Ld:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r4.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = r1.startsWith(r3)
            if (r2 == 0) goto Ld
            r0.add(r1)
            goto Ld
        L23:
            return r0
    }

    public static java.util.List<com.kwad.sdk.core.imageloader.core.decode.DecodedResult> findCachedBitmapsForImageUri(java.lang.String r4, com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Collection r1 = r5.keys()
            java.util.Iterator r1 = r1.iterator()
        Ld:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = r2.startsWith(r4)
            if (r3 == 0) goto Ld
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = r5.get(r2)
            r0.add(r2)
            goto Ld
        L27:
            return r0
    }

    public static java.lang.String generateKey(java.lang.String r1, com.kwad.sdk.core.imageloader.core.assist.ImageSize r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            int r1 = r2.getWidth()
            r0.append(r1)
            java.lang.String r1 = "x"
            r0.append(r1)
            int r1 = r2.getHeight()
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void removeFromCache(java.lang.String r4, com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Collection r1 = r5.keys()
            java.util.Iterator r1 = r1.iterator()
        Ld:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L23
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = r2.startsWith(r4)
            if (r3 == 0) goto Ld
            r0.add(r2)
            goto Ld
        L23:
            java.util.Iterator r4 = r0.iterator()
        L27:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L37
            java.lang.Object r0 = r4.next()
            java.lang.String r0 = (java.lang.String) r0
            r5.remove(r0)
            goto L27
        L37:
            return
    }
}
