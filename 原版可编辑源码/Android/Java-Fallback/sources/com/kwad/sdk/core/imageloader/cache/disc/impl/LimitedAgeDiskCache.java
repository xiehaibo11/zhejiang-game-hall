package com.kwad.sdk.core.imageloader.cache.disc.impl;

public class LimitedAgeDiskCache extends com.kwad.sdk.core.imageloader.cache.disc.impl.BaseDiskCache {
    private final java.util.Map<java.io.File, java.lang.Long> loadingDates;
    private final long maxFileAge;

    public LimitedAgeDiskCache(java.io.File r7, long r8) {
            r6 = this;
            com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r3 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createFileNameGenerator()
            r2 = 0
            r0 = r6
            r1 = r7
            r4 = r8
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public LimitedAgeDiskCache(java.io.File r7, java.io.File r8, long r9) {
            r6 = this;
            com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r3 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createFileNameGenerator()
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public LimitedAgeDiskCache(java.io.File r1, java.io.File r2, com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r3, long r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.util.Map r1 = java.util.Collections.synchronizedMap(r1)
            r0.loadingDates = r1
            r1 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r1
            r0.maxFileAge = r4
            return
    }

    private void rememberUsage(java.lang.String r4) {
            r3 = this;
            java.io.File r4 = r3.getFile(r4)
            long r0 = java.lang.System.currentTimeMillis()
            r4.setLastModified(r0)
            java.util.Map<java.io.File, java.lang.Long> r2 = r3.loadingDates
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r2.put(r4, r0)
            return
    }

    @Override
    public void clear() {
            r1 = this;
            super.clear()
            java.util.Map<java.io.File, java.lang.Long> r0 = r1.loadingDates
            r0.clear()
            return
    }

    @Override
    public java.io.File get(java.lang.String r8) {
            r7 = this;
            java.io.File r8 = super.get(r8)
            if (r8 == 0) goto L43
            boolean r0 = r8.exists()
            if (r0 == 0) goto L43
            java.util.Map<java.io.File, java.lang.Long> r0 = r7.loadingDates
            java.lang.Object r0 = r0.get(r8)
            java.lang.Long r0 = (java.lang.Long) r0
            if (r0 != 0) goto L23
            r0 = 0
            long r1 = r8.lastModified()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r6 = r1
            r1 = r0
            r0 = r6
            goto L24
        L23:
            r1 = 1
        L24:
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r0.longValue()
            long r2 = r2 - r4
            long r4 = r7.maxFileAge
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L3c
            r8.delete()
            java.util.Map<java.io.File, java.lang.Long> r0 = r7.loadingDates
            r0.remove(r8)
            goto L43
        L3c:
            if (r1 != 0) goto L43
            java.util.Map<java.io.File, java.lang.Long> r1 = r7.loadingDates
            r1.put(r8, r0)
        L43:
            return r8
    }

    @Override
    public boolean remove(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.io.File, java.lang.Long> r0 = r2.loadingDates
            java.io.File r1 = r2.getFile(r3)
            r0.remove(r1)
            boolean r3 = super.remove(r3)
            return r3
    }

    @Override
    public boolean save(java.lang.String r1, android.graphics.Bitmap r2) {
            r0 = this;
            boolean r2 = super.save(r1, r2)
            r0.rememberUsage(r1)
            return r2
    }

    @Override
    public boolean save(java.lang.String r1, java.io.InputStream r2, com.kwad.sdk.core.imageloader.utils.IoUtils.CopyListener r3) {
            r0 = this;
            boolean r2 = super.save(r1, r2, r3)
            r0.rememberUsage(r1)
            return r2
    }
}
