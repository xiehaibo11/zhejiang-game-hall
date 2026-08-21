package com.kwad.sdk.service;

public final class ServiceProvider {
    private static java.util.List<java.lang.Throwable> IQ;
    private static android.content.Context aHD;
    private static android.content.Context aHE;
    private static com.kwad.sdk.api.SdkConfig aHF;
    private static boolean aHG;
    private static android.content.Context mContext;

    enum ServiceProviderDelegate extends java.lang.Enum<com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate> {
        private static final com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate[] $VALUES = null;
        public static final com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate INSTANCE = null;
        private final java.util.Map<java.lang.Class<?>, java.lang.Object> mProviders;

        static {
                com.kwad.sdk.service.ServiceProvider$ServiceProviderDelegate r0 = new com.kwad.sdk.service.ServiceProvider$ServiceProviderDelegate
                r1 = 0
                java.lang.String r2 = "INSTANCE"
                r0.<init>(r2, r1)
                com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate.INSTANCE = r0
                r2 = 1
                com.kwad.sdk.service.ServiceProvider$ServiceProviderDelegate[] r2 = new com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate[r2]
                r2[r1] = r0
                com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate.$VALUES = r2
                return
        }

        ServiceProviderDelegate(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                java.util.HashMap r1 = new java.util.HashMap
                r2 = 32
                r1.<init>(r2)
                r0.mProviders = r1
                return
        }

        public static com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.service.ServiceProvider$ServiceProviderDelegate> r0 = com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.service.ServiceProvider$ServiceProviderDelegate r1 = (com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate) r1
                return r1
        }

        public static com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate[] values() {
                com.kwad.sdk.service.ServiceProvider$ServiceProviderDelegate[] r0 = com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.service.ServiceProvider$ServiceProviderDelegate[] r0 = (com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate[]) r0
                return r0
        }

        public final <T> T get(java.lang.Class<T> r2) {
                r1 = this;
                java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = r1.mProviders
                java.lang.Object r2 = r0.get(r2)
                return r2
        }

        public final <T> void put(java.lang.Class<T> r2, T r3) {
                r1 = this;
                java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = r1.mProviders
                r0.put(r2, r3)
                return
        }
    }

    public static void HC() {
            r0 = 1
            com.kwad.sdk.service.ServiceProvider.aHG = r0
            return
    }

    public static android.content.Context HD() {
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.mContext
            return r0
    }

    public static com.kwad.sdk.api.SdkConfig HE() {
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.aHF
            return r0
    }

    public static void a(com.kwad.sdk.api.SdkConfig r0) {
            com.kwad.sdk.service.ServiceProvider.aHF = r0
            return
    }

    public static void b(java.lang.Throwable r1) {
            java.lang.Class<com.kwad.sdk.service.a.d> r0 = com.kwad.sdk.service.a.d.class
            java.lang.Object r0 = get(r0)
            com.kwad.sdk.service.a.d r0 = (com.kwad.sdk.service.a.d) r0
            if (r0 == 0) goto Le
            r0.gatherException(r1)
            return
        Le:
            c(r1)
            return
    }

    public static void bC(android.content.Context r0) {
            com.kwad.sdk.service.ServiceProvider.aHD = r0
            android.content.Context r0 = com.kwad.sdk.m.l.dx(r0)
            com.kwad.sdk.service.ServiceProvider.mContext = r0
            return
    }

    private static void c(java.lang.Throwable r1) {
            java.util.List<java.lang.Throwable> r0 = com.kwad.sdk.service.ServiceProvider.IQ
            if (r0 != 0) goto Lb
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.sdk.service.ServiceProvider.IQ = r0
        Lb:
            java.util.List<java.lang.Throwable> r0 = com.kwad.sdk.service.ServiceProvider.IQ
            r0.add(r1)
            return
    }

    public static void d(com.kwad.sdk.g.a<java.lang.Throwable> r2) {
            java.util.List<java.lang.Throwable> r0 = com.kwad.sdk.service.ServiceProvider.IQ
            if (r0 != 0) goto L5
            return
        L5:
            java.util.Iterator r0 = r0.iterator()
        L9:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L19
            java.lang.Object r1 = r0.next()
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            r2.accept(r1)
            goto L9
        L19:
            java.util.List<java.lang.Throwable> r2 = com.kwad.sdk.service.ServiceProvider.IQ
            r2.clear()
            r2 = 0
            com.kwad.sdk.service.ServiceProvider.IQ = r2
            return
    }

    public static <T> T get(java.lang.Class<T> r1) {
            com.kwad.sdk.service.ServiceProvider$ServiceProviderDelegate r0 = com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate.INSTANCE
            java.lang.Object r1 = r0.get(r1)
            return r1
    }

    public static android.content.Context getContext() {
            boolean r0 = com.kwad.sdk.service.ServiceProvider.aHG
            if (r0 == 0) goto L9
            android.content.Context r0 = HD()
            return r0
        L9:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.aHE
            if (r0 != 0) goto L15
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.mContext
            android.content.Context r0 = com.kwad.sdk.m.l.wrapContextIfNeed(r0)
            com.kwad.sdk.service.ServiceProvider.aHE = r0
        L15:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.aHE
            return r0
    }

    public static <T> void put(java.lang.Class<T> r1, T r2) {
            com.kwad.sdk.service.ServiceProvider$ServiceProviderDelegate r0 = com.kwad.sdk.service.ServiceProvider.ServiceProviderDelegate.INSTANCE
            r0.put(r1, r2)
            return
    }
}
