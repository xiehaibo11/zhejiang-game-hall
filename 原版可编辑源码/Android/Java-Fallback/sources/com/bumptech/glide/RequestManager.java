package com.bumptech.glide;

public class RequestManager implements com.bumptech.glide.manager.LifecycleListener {
    private final android.content.Context context;
    private final com.bumptech.glide.Glide glide;
    private final com.bumptech.glide.manager.Lifecycle lifecycle;
    private com.bumptech.glide.RequestManager.DefaultOptions options;
    private final com.bumptech.glide.RequestManager.OptionsApplier optionsApplier;
    private final com.bumptech.glide.manager.RequestTracker requestTracker;
    private final com.bumptech.glide.manager.RequestManagerTreeNode treeNode;


    public interface DefaultOptions {
        <T> void apply(com.bumptech.glide.GenericRequestBuilder<T, ?, ?, ?> r1);
    }

    public final class GenericModelRequest<A, T> {
        private final java.lang.Class<T> dataClass;
        private final com.bumptech.glide.load.model.ModelLoader<A, T> modelLoader;
        final com.bumptech.glide.RequestManager this$0;

        public final class GenericTypeRequest {
            private final A model;
            private final java.lang.Class<A> modelClass;
            private final boolean providedModel;
            final com.bumptech.glide.RequestManager.GenericModelRequest this$1;

            GenericTypeRequest(com.bumptech.glide.RequestManager.GenericModelRequest r1, java.lang.Class<A> r2) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.<init>()
                    r1 = 0
                    r0.providedModel = r1
                    r1 = 0
                    r0.model = r1
                    r0.modelClass = r2
                    return
            }

            GenericTypeRequest(com.bumptech.glide.RequestManager.GenericModelRequest r1, A r2) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.<init>()
                    r1 = 1
                    r0.providedModel = r1
                    r0.model = r2
                    java.lang.Class r1 = com.bumptech.glide.RequestManager.access$000(r2)
                    r0.modelClass = r1
                    return
            }

            public <Z> com.bumptech.glide.GenericTranscodeRequest<A, T, Z> as(java.lang.Class<Z> r13) {
                    r12 = this;
                    com.bumptech.glide.RequestManager$GenericModelRequest r0 = r12.this$1
                    com.bumptech.glide.RequestManager r0 = r0.this$0
                    com.bumptech.glide.RequestManager$OptionsApplier r0 = com.bumptech.glide.RequestManager.access$500(r0)
                    com.bumptech.glide.GenericTranscodeRequest r11 = new com.bumptech.glide.GenericTranscodeRequest
                    com.bumptech.glide.RequestManager$GenericModelRequest r1 = r12.this$1
                    com.bumptech.glide.RequestManager r1 = r1.this$0
                    android.content.Context r2 = com.bumptech.glide.RequestManager.access$100(r1)
                    com.bumptech.glide.RequestManager$GenericModelRequest r1 = r12.this$1
                    com.bumptech.glide.RequestManager r1 = r1.this$0
                    com.bumptech.glide.Glide r3 = com.bumptech.glide.RequestManager.access$200(r1)
                    java.lang.Class<A> r4 = r12.modelClass
                    com.bumptech.glide.RequestManager$GenericModelRequest r1 = r12.this$1
                    com.bumptech.glide.load.model.ModelLoader r5 = com.bumptech.glide.RequestManager.GenericModelRequest.access$600(r1)
                    com.bumptech.glide.RequestManager$GenericModelRequest r1 = r12.this$1
                    java.lang.Class r6 = com.bumptech.glide.RequestManager.GenericModelRequest.access$700(r1)
                    com.bumptech.glide.RequestManager$GenericModelRequest r1 = r12.this$1
                    com.bumptech.glide.RequestManager r1 = r1.this$0
                    com.bumptech.glide.manager.RequestTracker r8 = com.bumptech.glide.RequestManager.access$300(r1)
                    com.bumptech.glide.RequestManager$GenericModelRequest r1 = r12.this$1
                    com.bumptech.glide.RequestManager r1 = r1.this$0
                    com.bumptech.glide.manager.Lifecycle r9 = com.bumptech.glide.RequestManager.access$400(r1)
                    com.bumptech.glide.RequestManager$GenericModelRequest r1 = r12.this$1
                    com.bumptech.glide.RequestManager r1 = r1.this$0
                    com.bumptech.glide.RequestManager$OptionsApplier r10 = com.bumptech.glide.RequestManager.access$500(r1)
                    r1 = r11
                    r7 = r13
                    r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)
                    com.bumptech.glide.GenericRequestBuilder r13 = r0.apply(r11)
                    com.bumptech.glide.GenericTranscodeRequest r13 = (com.bumptech.glide.GenericTranscodeRequest) r13
                    boolean r0 = r12.providedModel
                    if (r0 == 0) goto L54
                    A r0 = r12.model
                    r13.load(r0)
                L54:
                    return r13
            }
        }

        GenericModelRequest(com.bumptech.glide.RequestManager r1, com.bumptech.glide.load.model.ModelLoader<A, T> r2, java.lang.Class<T> r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.modelLoader = r2
                r0.dataClass = r3
                return
        }

        static com.bumptech.glide.load.model.ModelLoader access$600(com.bumptech.glide.RequestManager.GenericModelRequest r0) {
                com.bumptech.glide.load.model.ModelLoader<A, T> r0 = r0.modelLoader
                return r0
        }

        static java.lang.Class access$700(com.bumptech.glide.RequestManager.GenericModelRequest r0) {
                java.lang.Class<T> r0 = r0.dataClass
                return r0
        }

        public com.bumptech.glide.RequestManager.GenericModelRequest<A, T>.GenericTypeRequest from(java.lang.Class<A> r2) {
                r1 = this;
                com.bumptech.glide.RequestManager$GenericModelRequest$GenericTypeRequest r0 = new com.bumptech.glide.RequestManager$GenericModelRequest$GenericTypeRequest
                r0.<init>(r1, r2)
                return r0
        }

        public com.bumptech.glide.RequestManager.GenericModelRequest<A, T>.GenericTypeRequest load(A r2) {
                r1 = this;
                com.bumptech.glide.RequestManager$GenericModelRequest$GenericTypeRequest r0 = new com.bumptech.glide.RequestManager$GenericModelRequest$GenericTypeRequest
                r0.<init>(r1, r2)
                return r0
        }
    }

    public final class ImageModelRequest<T> {
        private final com.bumptech.glide.load.model.ModelLoader<T, java.io.InputStream> loader;
        final com.bumptech.glide.RequestManager this$0;

        ImageModelRequest(com.bumptech.glide.RequestManager r1, com.bumptech.glide.load.model.ModelLoader<T, java.io.InputStream> r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.loader = r2
                return
        }

        public com.bumptech.glide.DrawableTypeRequest<T> from(java.lang.Class<T> r12) {
                r11 = this;
                com.bumptech.glide.RequestManager r0 = r11.this$0
                com.bumptech.glide.RequestManager$OptionsApplier r0 = com.bumptech.glide.RequestManager.access$500(r0)
                com.bumptech.glide.DrawableTypeRequest r10 = new com.bumptech.glide.DrawableTypeRequest
                com.bumptech.glide.load.model.ModelLoader<T, java.io.InputStream> r3 = r11.loader
                com.bumptech.glide.RequestManager r1 = r11.this$0
                android.content.Context r5 = com.bumptech.glide.RequestManager.access$100(r1)
                com.bumptech.glide.RequestManager r1 = r11.this$0
                com.bumptech.glide.Glide r6 = com.bumptech.glide.RequestManager.access$200(r1)
                com.bumptech.glide.RequestManager r1 = r11.this$0
                com.bumptech.glide.manager.RequestTracker r7 = com.bumptech.glide.RequestManager.access$300(r1)
                com.bumptech.glide.RequestManager r1 = r11.this$0
                com.bumptech.glide.manager.Lifecycle r8 = com.bumptech.glide.RequestManager.access$400(r1)
                com.bumptech.glide.RequestManager r1 = r11.this$0
                com.bumptech.glide.RequestManager$OptionsApplier r9 = com.bumptech.glide.RequestManager.access$500(r1)
                r4 = 0
                r1 = r10
                r2 = r12
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
                com.bumptech.glide.GenericRequestBuilder r12 = r0.apply(r10)
                com.bumptech.glide.DrawableTypeRequest r12 = (com.bumptech.glide.DrawableTypeRequest) r12
                return r12
        }

        public com.bumptech.glide.DrawableTypeRequest<T> load(T r2) {
                r1 = this;
                java.lang.Class r0 = com.bumptech.glide.RequestManager.access$000(r2)
                com.bumptech.glide.DrawableTypeRequest r0 = r1.from(r0)
                com.bumptech.glide.DrawableRequestBuilder r2 = r0.load(r2)
                com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
                return r2
        }
    }

    class OptionsApplier {
        final com.bumptech.glide.RequestManager this$0;

        OptionsApplier(com.bumptech.glide.RequestManager r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        public <A, X extends com.bumptech.glide.GenericRequestBuilder<A, ?, ?, ?>> X apply(X r2) {
                r1 = this;
                com.bumptech.glide.RequestManager r0 = r1.this$0
                com.bumptech.glide.RequestManager$DefaultOptions r0 = com.bumptech.glide.RequestManager.access$800(r0)
                if (r0 == 0) goto L11
                com.bumptech.glide.RequestManager r0 = r1.this$0
                com.bumptech.glide.RequestManager$DefaultOptions r0 = com.bumptech.glide.RequestManager.access$800(r0)
                r0.apply(r2)
            L11:
                return r2
        }
    }

    private static class RequestManagerConnectivityListener implements com.bumptech.glide.manager.ConnectivityMonitor.ConnectivityListener {
        private final com.bumptech.glide.manager.RequestTracker requestTracker;

        public RequestManagerConnectivityListener(com.bumptech.glide.manager.RequestTracker r1) {
                r0 = this;
                r0.<init>()
                r0.requestTracker = r1
                return
        }

        @Override
        public void onConnectivityChanged(boolean r1) {
                r0 = this;
                if (r1 == 0) goto L7
                com.bumptech.glide.manager.RequestTracker r1 = r0.requestTracker
                r1.restartRequests()
            L7:
                return
        }
    }

    public final class VideoModelRequest<T> {
        private final com.bumptech.glide.load.model.ModelLoader<T, android.os.ParcelFileDescriptor> loader;
        final com.bumptech.glide.RequestManager this$0;

        VideoModelRequest(com.bumptech.glide.RequestManager r1, com.bumptech.glide.load.model.ModelLoader<T, android.os.ParcelFileDescriptor> r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.loader = r2
                return
        }

        public com.bumptech.glide.DrawableTypeRequest<T> load(T r12) {
                r11 = this;
                com.bumptech.glide.RequestManager r0 = r11.this$0
                com.bumptech.glide.RequestManager$OptionsApplier r0 = com.bumptech.glide.RequestManager.access$500(r0)
                com.bumptech.glide.DrawableTypeRequest r10 = new com.bumptech.glide.DrawableTypeRequest
                java.lang.Class r2 = com.bumptech.glide.RequestManager.access$000(r12)
                com.bumptech.glide.load.model.ModelLoader<T, android.os.ParcelFileDescriptor> r4 = r11.loader
                com.bumptech.glide.RequestManager r1 = r11.this$0
                android.content.Context r5 = com.bumptech.glide.RequestManager.access$100(r1)
                com.bumptech.glide.RequestManager r1 = r11.this$0
                com.bumptech.glide.Glide r6 = com.bumptech.glide.RequestManager.access$200(r1)
                com.bumptech.glide.RequestManager r1 = r11.this$0
                com.bumptech.glide.manager.RequestTracker r7 = com.bumptech.glide.RequestManager.access$300(r1)
                com.bumptech.glide.RequestManager r1 = r11.this$0
                com.bumptech.glide.manager.Lifecycle r8 = com.bumptech.glide.RequestManager.access$400(r1)
                com.bumptech.glide.RequestManager r1 = r11.this$0
                com.bumptech.glide.RequestManager$OptionsApplier r9 = com.bumptech.glide.RequestManager.access$500(r1)
                r3 = 0
                r1 = r10
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
                com.bumptech.glide.GenericRequestBuilder r0 = r0.apply(r10)
                com.bumptech.glide.DrawableTypeRequest r0 = (com.bumptech.glide.DrawableTypeRequest) r0
                com.bumptech.glide.DrawableRequestBuilder r12 = r0.load(r12)
                com.bumptech.glide.DrawableTypeRequest r12 = (com.bumptech.glide.DrawableTypeRequest) r12
                return r12
        }
    }

    public RequestManager(android.content.Context r7, com.bumptech.glide.manager.Lifecycle r8, com.bumptech.glide.manager.RequestManagerTreeNode r9) {
            r6 = this;
            com.bumptech.glide.manager.RequestTracker r4 = new com.bumptech.glide.manager.RequestTracker
            r4.<init>()
            com.bumptech.glide.manager.ConnectivityMonitorFactory r5 = new com.bumptech.glide.manager.ConnectivityMonitorFactory
            r5.<init>()
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    RequestManager(android.content.Context r2, com.bumptech.glide.manager.Lifecycle r3, com.bumptech.glide.manager.RequestManagerTreeNode r4, com.bumptech.glide.manager.RequestTracker r5, com.bumptech.glide.manager.ConnectivityMonitorFactory r6) {
            r1 = this;
            r1.<init>()
            android.content.Context r0 = r2.getApplicationContext()
            r1.context = r0
            r1.lifecycle = r3
            r1.treeNode = r4
            r1.requestTracker = r5
            com.bumptech.glide.Glide r4 = com.bumptech.glide.Glide.get(r2)
            r1.glide = r4
            com.bumptech.glide.RequestManager$OptionsApplier r4 = new com.bumptech.glide.RequestManager$OptionsApplier
            r4.<init>(r1)
            r1.optionsApplier = r4
            com.bumptech.glide.RequestManager$RequestManagerConnectivityListener r4 = new com.bumptech.glide.RequestManager$RequestManagerConnectivityListener
            r4.<init>(r5)
            com.bumptech.glide.manager.ConnectivityMonitor r2 = r6.build(r2, r4)
            boolean r4 = com.bumptech.glide.util.Util.isOnBackgroundThread()
            if (r4 == 0) goto L3d
            android.os.Handler r4 = new android.os.Handler
            android.os.Looper r5 = android.os.Looper.getMainLooper()
            r4.<init>(r5)
            com.bumptech.glide.RequestManager$1 r5 = new com.bumptech.glide.RequestManager$1
            r5.<init>(r1, r3)
            r4.post(r5)
            goto L40
        L3d:
            r3.addListener(r1)
        L40:
            r3.addListener(r2)
            return
    }

    static java.lang.Class access$000(java.lang.Object r0) {
            java.lang.Class r0 = getSafeClass(r0)
            return r0
    }

    static android.content.Context access$100(com.bumptech.glide.RequestManager r0) {
            android.content.Context r0 = r0.context
            return r0
    }

    static com.bumptech.glide.Glide access$200(com.bumptech.glide.RequestManager r0) {
            com.bumptech.glide.Glide r0 = r0.glide
            return r0
    }

    static com.bumptech.glide.manager.RequestTracker access$300(com.bumptech.glide.RequestManager r0) {
            com.bumptech.glide.manager.RequestTracker r0 = r0.requestTracker
            return r0
    }

    static com.bumptech.glide.manager.Lifecycle access$400(com.bumptech.glide.RequestManager r0) {
            com.bumptech.glide.manager.Lifecycle r0 = r0.lifecycle
            return r0
    }

    static com.bumptech.glide.RequestManager.OptionsApplier access$500(com.bumptech.glide.RequestManager r0) {
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r0.optionsApplier
            return r0
    }

    static com.bumptech.glide.RequestManager.DefaultOptions access$800(com.bumptech.glide.RequestManager r0) {
            com.bumptech.glide.RequestManager$DefaultOptions r0 = r0.options
            return r0
    }

    private static <T> java.lang.Class<T> getSafeClass(T r0) {
            if (r0 == 0) goto L7
            java.lang.Class r0 = r0.getClass()
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    private <T> com.bumptech.glide.DrawableTypeRequest<T> loadGeneric(java.lang.Class<T> r12) {
            r11 = this;
            android.content.Context r0 = r11.context
            com.bumptech.glide.load.model.ModelLoader r3 = com.bumptech.glide.Glide.buildStreamModelLoader(r12, r0)
            android.content.Context r0 = r11.context
            com.bumptech.glide.load.model.ModelLoader r4 = com.bumptech.glide.Glide.buildFileDescriptorModelLoader(r12, r0)
            if (r12 == 0) goto L39
            if (r3 != 0) goto L39
            if (r4 == 0) goto L13
            goto L39
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown type "
            r1.append(r2)
            r1.append(r12)
            java.lang.String r12 = ". You must provide a Model of a type for"
            r1.append(r12)
            java.lang.String r12 = " which there is a registered ModelLoader, if you are using a custom model, you must first call"
            r1.append(r12)
            java.lang.String r12 = " Glide#register with a ModelLoaderFactory for your custom model class"
            r1.append(r12)
            java.lang.String r12 = r1.toString()
            r0.<init>(r12)
            throw r0
        L39:
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r11.optionsApplier
            com.bumptech.glide.DrawableTypeRequest r10 = new com.bumptech.glide.DrawableTypeRequest
            android.content.Context r5 = r11.context
            com.bumptech.glide.Glide r6 = r11.glide
            com.bumptech.glide.manager.RequestTracker r7 = r11.requestTracker
            com.bumptech.glide.manager.Lifecycle r8 = r11.lifecycle
            com.bumptech.glide.RequestManager$OptionsApplier r9 = r11.optionsApplier
            r1 = r10
            r2 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            com.bumptech.glide.GenericRequestBuilder r12 = r0.apply(r10)
            com.bumptech.glide.DrawableTypeRequest r12 = (com.bumptech.glide.DrawableTypeRequest) r12
            return r12
    }

    public <T> com.bumptech.glide.DrawableTypeRequest<T> from(java.lang.Class<T> r1) {
            r0 = this;
            com.bumptech.glide.DrawableTypeRequest r1 = r0.loadGeneric(r1)
            return r1
    }

    public com.bumptech.glide.DrawableTypeRequest<byte[]> fromBytes() {
            r3 = this;
            java.lang.Class<byte[]> r0 = byte[].class
            com.bumptech.glide.DrawableTypeRequest r0 = r3.loadGeneric(r0)
            com.bumptech.glide.signature.StringSignature r1 = new com.bumptech.glide.signature.StringSignature
            java.util.UUID r2 = java.util.UUID.randomUUID()
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            com.bumptech.glide.DrawableRequestBuilder r0 = r0.signature(r1)
            com.bumptech.glide.load.engine.DiskCacheStrategy r1 = com.bumptech.glide.load.engine.DiskCacheStrategy.NONE
            com.bumptech.glide.DrawableRequestBuilder r0 = r0.diskCacheStrategy(r1)
            r1 = 1
            com.bumptech.glide.DrawableRequestBuilder r0 = r0.skipMemoryCache(r1)
            com.bumptech.glide.DrawableTypeRequest r0 = (com.bumptech.glide.DrawableTypeRequest) r0
            return r0
    }

    public com.bumptech.glide.DrawableTypeRequest<java.io.File> fromFile() {
            r1 = this;
            java.lang.Class<java.io.File> r0 = java.io.File.class
            com.bumptech.glide.DrawableTypeRequest r0 = r1.loadGeneric(r0)
            return r0
    }

    public com.bumptech.glide.DrawableTypeRequest<android.net.Uri> fromMediaStore() {
            r11 = this;
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            android.content.Context r1 = r11.context
            com.bumptech.glide.load.model.ModelLoader r0 = com.bumptech.glide.Glide.buildStreamModelLoader(r0, r1)
            com.bumptech.glide.load.model.stream.MediaStoreStreamLoader r3 = new com.bumptech.glide.load.model.stream.MediaStoreStreamLoader
            android.content.Context r1 = r11.context
            r3.<init>(r1, r0)
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            android.content.Context r1 = r11.context
            com.bumptech.glide.load.model.ModelLoader r4 = com.bumptech.glide.Glide.buildFileDescriptorModelLoader(r0, r1)
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r11.optionsApplier
            com.bumptech.glide.DrawableTypeRequest r10 = new com.bumptech.glide.DrawableTypeRequest
            java.lang.Class<android.net.Uri> r2 = android.net.Uri.class
            android.content.Context r5 = r11.context
            com.bumptech.glide.Glide r6 = r11.glide
            com.bumptech.glide.manager.RequestTracker r7 = r11.requestTracker
            com.bumptech.glide.manager.Lifecycle r8 = r11.lifecycle
            com.bumptech.glide.RequestManager$OptionsApplier r9 = r11.optionsApplier
            r1 = r10
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            com.bumptech.glide.GenericRequestBuilder r0 = r0.apply(r10)
            com.bumptech.glide.DrawableTypeRequest r0 = (com.bumptech.glide.DrawableTypeRequest) r0
            return r0
    }

    public com.bumptech.glide.DrawableTypeRequest<java.lang.Integer> fromResource() {
            r2 = this;
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            com.bumptech.glide.DrawableTypeRequest r0 = r2.loadGeneric(r0)
            android.content.Context r1 = r2.context
            com.bumptech.glide.load.Key r1 = com.bumptech.glide.signature.ApplicationVersionSignature.obtain(r1)
            com.bumptech.glide.DrawableRequestBuilder r0 = r0.signature(r1)
            com.bumptech.glide.DrawableTypeRequest r0 = (com.bumptech.glide.DrawableTypeRequest) r0
            return r0
    }

    public com.bumptech.glide.DrawableTypeRequest<java.lang.String> fromString() {
            r1 = this;
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            com.bumptech.glide.DrawableTypeRequest r0 = r1.loadGeneric(r0)
            return r0
    }

    public com.bumptech.glide.DrawableTypeRequest<android.net.Uri> fromUri() {
            r1 = this;
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            com.bumptech.glide.DrawableTypeRequest r0 = r1.loadGeneric(r0)
            return r0
    }

    @java.lang.Deprecated
    public com.bumptech.glide.DrawableTypeRequest<java.net.URL> fromUrl() {
            r1 = this;
            java.lang.Class<java.net.URL> r0 = java.net.URL.class
            com.bumptech.glide.DrawableTypeRequest r0 = r1.loadGeneric(r0)
            return r0
    }

    public boolean isPaused() {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            com.bumptech.glide.manager.RequestTracker r0 = r1.requestTracker
            boolean r0 = r0.isPaused()
            return r0
    }

    public com.bumptech.glide.DrawableTypeRequest<android.net.Uri> load(android.net.Uri r2) {
            r1 = this;
            com.bumptech.glide.DrawableTypeRequest r0 = r1.fromUri()
            com.bumptech.glide.DrawableRequestBuilder r2 = r0.load(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    public com.bumptech.glide.DrawableTypeRequest<java.io.File> load(java.io.File r2) {
            r1 = this;
            com.bumptech.glide.DrawableTypeRequest r0 = r1.fromFile()
            com.bumptech.glide.DrawableRequestBuilder r2 = r0.load(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    public com.bumptech.glide.DrawableTypeRequest<java.lang.Integer> load(java.lang.Integer r2) {
            r1 = this;
            com.bumptech.glide.DrawableTypeRequest r0 = r1.fromResource()
            com.bumptech.glide.DrawableRequestBuilder r2 = r0.load(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    public <T> com.bumptech.glide.DrawableTypeRequest<T> load(T r2) {
            r1 = this;
            java.lang.Class r0 = getSafeClass(r2)
            com.bumptech.glide.DrawableTypeRequest r0 = r1.loadGeneric(r0)
            com.bumptech.glide.DrawableRequestBuilder r2 = r0.load(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    public com.bumptech.glide.DrawableTypeRequest<java.lang.String> load(java.lang.String r2) {
            r1 = this;
            com.bumptech.glide.DrawableTypeRequest r0 = r1.fromString()
            com.bumptech.glide.DrawableRequestBuilder r2 = r0.load(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    @java.lang.Deprecated
    public com.bumptech.glide.DrawableTypeRequest<java.net.URL> load(java.net.URL r2) {
            r1 = this;
            com.bumptech.glide.DrawableTypeRequest r0 = r1.fromUrl()
            com.bumptech.glide.DrawableRequestBuilder r2 = r0.load(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    public com.bumptech.glide.DrawableTypeRequest<byte[]> load(byte[] r2) {
            r1 = this;
            com.bumptech.glide.DrawableTypeRequest r0 = r1.fromBytes()
            com.bumptech.glide.DrawableRequestBuilder r2 = r0.load(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    @java.lang.Deprecated
    public com.bumptech.glide.DrawableTypeRequest<byte[]> load(byte[] r2, java.lang.String r3) {
            r1 = this;
            com.bumptech.glide.DrawableTypeRequest r2 = r1.load(r2)
            com.bumptech.glide.signature.StringSignature r0 = new com.bumptech.glide.signature.StringSignature
            r0.<init>(r3)
            com.bumptech.glide.DrawableRequestBuilder r2 = r2.signature(r0)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    public com.bumptech.glide.DrawableTypeRequest<android.net.Uri> loadFromMediaStore(android.net.Uri r2) {
            r1 = this;
            com.bumptech.glide.DrawableTypeRequest r0 = r1.fromMediaStore()
            com.bumptech.glide.DrawableRequestBuilder r2 = r0.load(r2)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    @java.lang.Deprecated
    public com.bumptech.glide.DrawableTypeRequest<android.net.Uri> loadFromMediaStore(android.net.Uri r2, java.lang.String r3, long r4, int r6) {
            r1 = this;
            com.bumptech.glide.signature.MediaStoreSignature r0 = new com.bumptech.glide.signature.MediaStoreSignature
            r0.<init>(r3, r4, r6)
            com.bumptech.glide.DrawableTypeRequest r2 = r1.loadFromMediaStore(r2)
            com.bumptech.glide.DrawableRequestBuilder r2 = r2.signature(r0)
            com.bumptech.glide.DrawableTypeRequest r2 = (com.bumptech.glide.DrawableTypeRequest) r2
            return r2
    }

    @Override
    public void onDestroy() {
            r1 = this;
            com.bumptech.glide.manager.RequestTracker r0 = r1.requestTracker
            r0.clearRequests()
            return
    }

    public void onLowMemory() {
            r1 = this;
            com.bumptech.glide.Glide r0 = r1.glide
            r0.clearMemory()
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            r0.resumeRequests()
            return
    }

    @Override
    public void onStop() {
            r0 = this;
            r0.pauseRequests()
            return
    }

    public void onTrimMemory(int r2) {
            r1 = this;
            com.bumptech.glide.Glide r0 = r1.glide
            r0.trimMemory(r2)
            return
    }

    public void pauseRequests() {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            com.bumptech.glide.manager.RequestTracker r0 = r1.requestTracker
            r0.pauseRequests()
            return
    }

    public void pauseRequestsRecursive() {
            r2 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            r2.pauseRequests()
            com.bumptech.glide.manager.RequestManagerTreeNode r0 = r2.treeNode
            java.util.Set r0 = r0.getDescendants()
            java.util.Iterator r0 = r0.iterator()
        L10:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bumptech.glide.RequestManager r1 = (com.bumptech.glide.RequestManager) r1
            r1.pauseRequests()
            goto L10
        L20:
            return
    }

    public void resumeRequests() {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            com.bumptech.glide.manager.RequestTracker r0 = r1.requestTracker
            r0.resumeRequests()
            return
    }

    public void resumeRequestsRecursive() {
            r2 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            r2.resumeRequests()
            com.bumptech.glide.manager.RequestManagerTreeNode r0 = r2.treeNode
            java.util.Set r0 = r0.getDescendants()
            java.util.Iterator r0 = r0.iterator()
        L10:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.bumptech.glide.RequestManager r1 = (com.bumptech.glide.RequestManager) r1
            r1.resumeRequests()
            goto L10
        L20:
            return
    }

    public void setDefaultOptions(com.bumptech.glide.RequestManager.DefaultOptions r1) {
            r0 = this;
            r0.options = r1
            return
    }

    public <A, T> com.bumptech.glide.RequestManager.GenericModelRequest<A, T> using(com.bumptech.glide.load.model.ModelLoader<A, T> r2, java.lang.Class<T> r3) {
            r1 = this;
            com.bumptech.glide.RequestManager$GenericModelRequest r0 = new com.bumptech.glide.RequestManager$GenericModelRequest
            r0.<init>(r1, r2, r3)
            return r0
    }

    public com.bumptech.glide.RequestManager.ImageModelRequest<byte[]> using(com.bumptech.glide.load.model.stream.StreamByteArrayLoader r2) {
            r1 = this;
            com.bumptech.glide.RequestManager$ImageModelRequest r0 = new com.bumptech.glide.RequestManager$ImageModelRequest
            r0.<init>(r1, r2)
            return r0
    }

    public <T> com.bumptech.glide.RequestManager.ImageModelRequest<T> using(com.bumptech.glide.load.model.stream.StreamModelLoader<T> r2) {
            r1 = this;
            com.bumptech.glide.RequestManager$ImageModelRequest r0 = new com.bumptech.glide.RequestManager$ImageModelRequest
            r0.<init>(r1, r2)
            return r0
    }

    public <T> com.bumptech.glide.RequestManager.VideoModelRequest<T> using(com.bumptech.glide.load.model.file_descriptor.FileDescriptorModelLoader<T> r2) {
            r1 = this;
            com.bumptech.glide.RequestManager$VideoModelRequest r0 = new com.bumptech.glide.RequestManager$VideoModelRequest
            r0.<init>(r1, r2)
            return r0
    }
}
