package com.bumptech.glide.load.resource.gif;

class GifFrameModelLoader implements com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.gifdecoder.GifDecoder, com.bumptech.glide.gifdecoder.GifDecoder> {

    private static class GifFrameDataFetcher implements com.bumptech.glide.load.data.DataFetcher<com.bumptech.glide.gifdecoder.GifDecoder> {
        private final com.bumptech.glide.gifdecoder.GifDecoder decoder;

        public GifFrameDataFetcher(com.bumptech.glide.gifdecoder.GifDecoder r1) {
                r0 = this;
                r0.<init>()
                r0.decoder = r1
                return
        }

        @Override
        public void cancel() {
                r0 = this;
                return
        }

        @Override
        public void cleanup() {
                r0 = this;
                return
        }

        @Override
        public java.lang.String getId() {
                r1 = this;
                com.bumptech.glide.gifdecoder.GifDecoder r0 = r1.decoder
                int r0 = r0.getCurrentFrameIndex()
                java.lang.String r0 = java.lang.String.valueOf(r0)
                return r0
        }

        @Override
        public com.bumptech.glide.gifdecoder.GifDecoder loadData(com.bumptech.glide.Priority r1) {
                r0 = this;
                com.bumptech.glide.gifdecoder.GifDecoder r1 = r0.decoder
                return r1
        }

        @Override
        public com.bumptech.glide.gifdecoder.GifDecoder loadData(com.bumptech.glide.Priority r1) throws java.lang.Exception {
                r0 = this;
                com.bumptech.glide.gifdecoder.GifDecoder r1 = r0.loadData(r1)
                return r1
        }
    }

    GifFrameModelLoader() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.bumptech.glide.load.data.DataFetcher<com.bumptech.glide.gifdecoder.GifDecoder> getResourceFetcher(com.bumptech.glide.gifdecoder.GifDecoder r1, int r2, int r3) {
            r0 = this;
            com.bumptech.glide.load.resource.gif.GifFrameModelLoader$GifFrameDataFetcher r2 = new com.bumptech.glide.load.resource.gif.GifFrameModelLoader$GifFrameDataFetcher
            r2.<init>(r1)
            return r2
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher<com.bumptech.glide.gifdecoder.GifDecoder> getResourceFetcher(com.bumptech.glide.gifdecoder.GifDecoder r1, int r2, int r3) {
            r0 = this;
            com.bumptech.glide.gifdecoder.GifDecoder r1 = (com.bumptech.glide.gifdecoder.GifDecoder) r1
            com.bumptech.glide.load.data.DataFetcher r1 = r0.getResourceFetcher(r1, r2, r3)
            return r1
    }
}
