package com.bumptech.glide.load.model;

public class ImageVideoModelLoader<A> implements com.bumptech.glide.load.model.ModelLoader<A, com.bumptech.glide.load.model.ImageVideoWrapper> {
    private static final java.lang.String TAG = "IVML";
    private final com.bumptech.glide.load.model.ModelLoader<A, android.os.ParcelFileDescriptor> fileDescriptorLoader;
    private final com.bumptech.glide.load.model.ModelLoader<A, java.io.InputStream> streamLoader;

    static class ImageVideoFetcher implements com.bumptech.glide.load.data.DataFetcher<com.bumptech.glide.load.model.ImageVideoWrapper> {
        private final com.bumptech.glide.load.data.DataFetcher<android.os.ParcelFileDescriptor> fileDescriptorFetcher;
        private final com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> streamFetcher;

        public ImageVideoFetcher(com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> r1, com.bumptech.glide.load.data.DataFetcher<android.os.ParcelFileDescriptor> r2) {
                r0 = this;
                r0.<init>()
                r0.streamFetcher = r1
                r0.fileDescriptorFetcher = r2
                return
        }

        @Override
        public void cancel() {
                r1 = this;
                com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> r0 = r1.streamFetcher
                if (r0 == 0) goto L7
                r0.cancel()
            L7:
                com.bumptech.glide.load.data.DataFetcher<android.os.ParcelFileDescriptor> r0 = r1.fileDescriptorFetcher
                if (r0 == 0) goto Le
                r0.cancel()
            Le:
                return
        }

        @Override
        public void cleanup() {
                r1 = this;
                com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> r0 = r1.streamFetcher
                if (r0 == 0) goto L7
                r0.cleanup()
            L7:
                com.bumptech.glide.load.data.DataFetcher<android.os.ParcelFileDescriptor> r0 = r1.fileDescriptorFetcher
                if (r0 == 0) goto Le
                r0.cleanup()
            Le:
                return
        }

        @Override
        public java.lang.String getId() {
                r1 = this;
                com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> r0 = r1.streamFetcher
                if (r0 == 0) goto L9
                java.lang.String r0 = r0.getId()
                return r0
            L9:
                com.bumptech.glide.load.data.DataFetcher<android.os.ParcelFileDescriptor> r0 = r1.fileDescriptorFetcher
                java.lang.String r0 = r0.getId()
                return r0
        }

        @Override
        public com.bumptech.glide.load.model.ImageVideoWrapper loadData(com.bumptech.glide.Priority r6) throws java.lang.Exception {
                r5 = this;
                com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> r0 = r5.streamFetcher
                r1 = 2
                r2 = 0
                java.lang.String r3 = "IVML"
                if (r0 == 0) goto L21
                java.lang.Object r0 = r0.loadData(r6)     // Catch: java.lang.Exception -> Lf
                java.io.InputStream r0 = (java.io.InputStream) r0     // Catch: java.lang.Exception -> Lf
                goto L22
            Lf:
                r0 = move-exception
                boolean r4 = android.util.Log.isLoggable(r3, r1)
                if (r4 == 0) goto L1b
                java.lang.String r4 = "Exception fetching input stream, trying ParcelFileDescriptor"
                android.util.Log.v(r3, r4, r0)
            L1b:
                com.bumptech.glide.load.data.DataFetcher<android.os.ParcelFileDescriptor> r4 = r5.fileDescriptorFetcher
                if (r4 == 0) goto L20
                goto L21
            L20:
                throw r0
            L21:
                r0 = r2
            L22:
                com.bumptech.glide.load.data.DataFetcher<android.os.ParcelFileDescriptor> r4 = r5.fileDescriptorFetcher
                if (r4 == 0) goto L3e
                java.lang.Object r6 = r4.loadData(r6)     // Catch: java.lang.Exception -> L2e
                android.os.ParcelFileDescriptor r6 = (android.os.ParcelFileDescriptor) r6     // Catch: java.lang.Exception -> L2e
                r2 = r6
                goto L3e
            L2e:
                r6 = move-exception
                boolean r1 = android.util.Log.isLoggable(r3, r1)
                if (r1 == 0) goto L3a
                java.lang.String r1 = "Exception fetching ParcelFileDescriptor"
                android.util.Log.v(r3, r1, r6)
            L3a:
                if (r0 == 0) goto L3d
                goto L3e
            L3d:
                throw r6
            L3e:
                com.bumptech.glide.load.model.ImageVideoWrapper r6 = new com.bumptech.glide.load.model.ImageVideoWrapper
                r6.<init>(r0, r2)
                return r6
        }

        @Override
        public com.bumptech.glide.load.model.ImageVideoWrapper loadData(com.bumptech.glide.Priority r1) throws java.lang.Exception {
                r0 = this;
                com.bumptech.glide.load.model.ImageVideoWrapper r1 = r0.loadData(r1)
                return r1
        }
    }

    public ImageVideoModelLoader(com.bumptech.glide.load.model.ModelLoader<A, java.io.InputStream> r1, com.bumptech.glide.load.model.ModelLoader<A, android.os.ParcelFileDescriptor> r2) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto L10
            if (r2 == 0) goto L8
            goto L10
        L8:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "At least one of streamLoader and fileDescriptorLoader must be non null"
            r1.<init>(r2)
            throw r1
        L10:
            r0.streamLoader = r1
            r0.fileDescriptorLoader = r2
            return
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher<com.bumptech.glide.load.model.ImageVideoWrapper> getResourceFetcher(A r4, int r5, int r6) {
            r3 = this;
            com.bumptech.glide.load.model.ModelLoader<A, java.io.InputStream> r0 = r3.streamLoader
            r1 = 0
            if (r0 == 0) goto La
            com.bumptech.glide.load.data.DataFetcher r0 = r0.getResourceFetcher(r4, r5, r6)
            goto Lb
        La:
            r0 = r1
        Lb:
            com.bumptech.glide.load.model.ModelLoader<A, android.os.ParcelFileDescriptor> r2 = r3.fileDescriptorLoader
            if (r2 == 0) goto L14
            com.bumptech.glide.load.data.DataFetcher r4 = r2.getResourceFetcher(r4, r5, r6)
            goto L15
        L14:
            r4 = r1
        L15:
            if (r0 != 0) goto L1b
            if (r4 == 0) goto L1a
            goto L1b
        L1a:
            return r1
        L1b:
            com.bumptech.glide.load.model.ImageVideoModelLoader$ImageVideoFetcher r5 = new com.bumptech.glide.load.model.ImageVideoModelLoader$ImageVideoFetcher
            r5.<init>(r0, r4)
            return r5
    }
}
