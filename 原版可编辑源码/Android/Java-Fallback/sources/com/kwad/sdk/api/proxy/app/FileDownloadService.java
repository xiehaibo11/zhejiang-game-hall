package com.kwad.sdk.api.proxy.app;

public class FileDownloadService {

    public static class SeparateProcessService extends com.kwad.sdk.api.proxy.BaseProxyService {
        public SeparateProcessService() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.kwad.sdk.api.proxy.IServiceProxy getDelegate(android.content.Context r3) {
                r2 = this;
                com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
                java.lang.Class<com.kwad.sdk.api.proxy.app.FileDownloadService$SeparateProcessService> r1 = com.kwad.sdk.api.proxy.app.FileDownloadService.SeparateProcessService.class
                com.kwad.sdk.api.proxy.IComponentProxy r3 = r0.newComponentProxy(r3, r1, r2)
                com.kwad.sdk.api.proxy.IServiceProxy r3 = (com.kwad.sdk.api.proxy.IServiceProxy) r3
                return r3
        }
    }

    public static class SharedMainProcessService extends com.kwad.sdk.api.proxy.BaseProxyService {
        public SharedMainProcessService() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.kwad.sdk.api.proxy.IServiceProxy getDelegate(android.content.Context r3) {
                r2 = this;
                com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
                java.lang.Class<com.kwad.sdk.api.proxy.app.FileDownloadService$SharedMainProcessService> r1 = com.kwad.sdk.api.proxy.app.FileDownloadService.SharedMainProcessService.class
                com.kwad.sdk.api.proxy.IComponentProxy r3 = r0.newComponentProxy(r3, r1, r2)
                com.kwad.sdk.api.proxy.IServiceProxy r3 = (com.kwad.sdk.api.proxy.IServiceProxy) r3
                return r3
        }
    }

    public FileDownloadService() {
            r0 = this;
            r0.<init>()
            return
    }
}
