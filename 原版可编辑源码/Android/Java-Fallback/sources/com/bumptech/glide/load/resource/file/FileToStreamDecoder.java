package com.bumptech.glide.load.resource.file;

public class FileToStreamDecoder<T> implements com.bumptech.glide.load.ResourceDecoder<java.io.File, T> {
    private static final com.bumptech.glide.load.resource.file.FileToStreamDecoder.FileOpener DEFAULT_FILE_OPENER = null;
    private final com.bumptech.glide.load.resource.file.FileToStreamDecoder.FileOpener fileOpener;
    private com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, T> streamDecoder;

    static class FileOpener {
        FileOpener() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.io.InputStream open(java.io.File r2) throws java.io.FileNotFoundException {
                r1 = this;
                java.io.FileInputStream r0 = new java.io.FileInputStream
                r0.<init>(r2)
                return r0
        }
    }

    static {
            com.bumptech.glide.load.resource.file.FileToStreamDecoder$FileOpener r0 = new com.bumptech.glide.load.resource.file.FileToStreamDecoder$FileOpener
            r0.<init>()
            com.bumptech.glide.load.resource.file.FileToStreamDecoder.DEFAULT_FILE_OPENER = r0
            return
    }

    public FileToStreamDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, T> r2) {
            r1 = this;
            com.bumptech.glide.load.resource.file.FileToStreamDecoder$FileOpener r0 = com.bumptech.glide.load.resource.file.FileToStreamDecoder.DEFAULT_FILE_OPENER
            r1.<init>(r2, r0)
            return
    }

    FileToStreamDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, T> r1, com.bumptech.glide.load.resource.file.FileToStreamDecoder.FileOpener r2) {
            r0 = this;
            r0.<init>()
            r0.streamDecoder = r1
            r0.fileOpener = r2
            return
    }

    public com.bumptech.glide.load.engine.Resource<T> decode(java.io.File r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            r0 = 0
            com.bumptech.glide.load.resource.file.FileToStreamDecoder$FileOpener r1 = r2.fileOpener     // Catch: java.lang.Throwable -> L13
            java.io.InputStream r0 = r1.open(r3)     // Catch: java.lang.Throwable -> L13
            com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, T> r3 = r2.streamDecoder     // Catch: java.lang.Throwable -> L13
            com.bumptech.glide.load.engine.Resource r3 = r3.decode(r0, r4, r5)     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L12
            r0.close()     // Catch: java.io.IOException -> L12
        L12:
            return r3
        L13:
            r3 = move-exception
            if (r0 == 0) goto L19
            r0.close()     // Catch: java.io.IOException -> L19
        L19:
            throw r3
    }

    @Override
    public com.bumptech.glide.load.engine.Resource decode(java.io.File r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            java.io.File r1 = (java.io.File) r1
            com.bumptech.glide.load.engine.Resource r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }
}
