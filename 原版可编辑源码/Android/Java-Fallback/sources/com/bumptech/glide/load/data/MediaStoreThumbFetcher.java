package com.bumptech.glide.load.data;

public class MediaStoreThumbFetcher implements com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> {
    private static final com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailStreamOpenerFactory DEFAULT_FACTORY = null;
    private static final int MINI_HEIGHT = 384;
    private static final int MINI_WIDTH = 512;
    private static final java.lang.String TAG = "MediaStoreThumbFetcher";
    private final android.content.Context context;
    private final com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> defaultFetcher;
    private final com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailStreamOpenerFactory factory;
    private final int height;
    private java.io.InputStream inputStream;
    private final android.net.Uri mediaStoreUri;
    private final int width;

    static class FileService {
        FileService() {
                r0 = this;
                r0.<init>()
                return
        }

        public boolean exists(java.io.File r1) {
                r0 = this;
                boolean r1 = r1.exists()
                return r1
        }

        public java.io.File get(java.lang.String r2) {
                r1 = this;
                java.io.File r0 = new java.io.File
                r0.<init>(r2)
                return r0
        }

        public long length(java.io.File r3) {
                r2 = this;
                long r0 = r3.length()
                return r0
        }
    }

    static class ImageThumbnailQuery implements com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailQuery {
        private static final java.lang.String[] PATH_PROJECTION = null;
        private static final java.lang.String PATH_SELECTION = "kind = 1 AND image_id = ?";

        static {
                r0 = 1
                java.lang.String[] r0 = new java.lang.String[r0]
                r1 = 0
                java.lang.String r2 = "_data"
                r0[r1] = r2
                com.bumptech.glide.load.data.MediaStoreThumbFetcher.ImageThumbnailQuery.PATH_PROJECTION = r0
                return
        }

        ImageThumbnailQuery() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public android.database.Cursor queryPath(android.content.Context r7, android.net.Uri r8) {
                r6 = this;
                java.lang.String r8 = r8.getLastPathSegment()
                android.content.ContentResolver r0 = r7.getContentResolver()
                android.net.Uri r1 = android.provider.MediaStore.Images.Thumbnails.EXTERNAL_CONTENT_URI
                java.lang.String[] r2 = com.bumptech.glide.load.data.MediaStoreThumbFetcher.ImageThumbnailQuery.PATH_PROJECTION
                r7 = 1
                java.lang.String[] r4 = new java.lang.String[r7]
                r7 = 0
                r4[r7] = r8
                java.lang.String r3 = "kind = 1 AND image_id = ?"
                r5 = 0
                android.database.Cursor r7 = r0.query(r1, r2, r3, r4, r5)
                return r7
        }
    }

    interface ThumbnailQuery {
        android.database.Cursor queryPath(android.content.Context r1, android.net.Uri r2);
    }

    static class ThumbnailStreamOpener {
        private static final com.bumptech.glide.load.data.MediaStoreThumbFetcher.FileService DEFAULT_SERVICE = null;
        private com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailQuery query;
        private final com.bumptech.glide.load.data.MediaStoreThumbFetcher.FileService service;

        static {
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$FileService r0 = new com.bumptech.glide.load.data.MediaStoreThumbFetcher$FileService
                r0.<init>()
                com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailStreamOpener.DEFAULT_SERVICE = r0
                return
        }

        public ThumbnailStreamOpener(com.bumptech.glide.load.data.MediaStoreThumbFetcher.FileService r1, com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailQuery r2) {
                r0 = this;
                r0.<init>()
                r0.service = r1
                r0.query = r2
                return
        }

        public ThumbnailStreamOpener(com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailQuery r2) {
                r1 = this;
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$FileService r0 = com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailStreamOpener.DEFAULT_SERVICE
                r1.<init>(r0, r2)
                return
        }

        private android.net.Uri parseThumbUri(android.database.Cursor r6) {
                r5 = this;
                r0 = 0
                java.lang.String r6 = r6.getString(r0)
                boolean r0 = android.text.TextUtils.isEmpty(r6)
                if (r0 != 0) goto L2a
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$FileService r0 = r5.service
                java.io.File r6 = r0.get(r6)
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$FileService r0 = r5.service
                boolean r0 = r0.exists(r6)
                if (r0 == 0) goto L2a
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$FileService r0 = r5.service
                long r0 = r0.length(r6)
                r2 = 0
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 <= 0) goto L2a
                android.net.Uri r6 = android.net.Uri.fromFile(r6)
                goto L2b
            L2a:
                r6 = 0
            L2b:
                return r6
        }

        public int getOrientation(android.content.Context r5, android.net.Uri r6) {
                r4 = this;
                java.lang.String r0 = "MediaStoreThumbFetcher"
                r1 = 0
                android.content.ContentResolver r5 = r5.getContentResolver()     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                java.io.InputStream r1 = r5.openInputStream(r6)     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser r5 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                r5.<init>(r1)     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                int r5 = r5.getOrientation()     // Catch: java.lang.Throwable -> L1a java.io.IOException -> L1c
                if (r1 == 0) goto L3e
                r1.close()     // Catch: java.io.IOException -> L3e
                goto L3e
            L1a:
                r5 = move-exception
                goto L3f
            L1c:
                r5 = move-exception
                r2 = 3
                boolean r2 = android.util.Log.isLoggable(r0, r2)     // Catch: java.lang.Throwable -> L1a
                if (r2 == 0) goto L38
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a
                r2.<init>()     // Catch: java.lang.Throwable -> L1a
                java.lang.String r3 = "Failed to open uri: "
                r2.append(r3)     // Catch: java.lang.Throwable -> L1a
                r2.append(r6)     // Catch: java.lang.Throwable -> L1a
                java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L1a
                android.util.Log.d(r0, r6, r5)     // Catch: java.lang.Throwable -> L1a
            L38:
                if (r1 == 0) goto L3d
                r1.close()     // Catch: java.io.IOException -> L3d
            L3d:
                r5 = -1
            L3e:
                return r5
            L3f:
                if (r1 == 0) goto L44
                r1.close()     // Catch: java.io.IOException -> L44
            L44:
                throw r5
        }

        public java.io.InputStream open(android.content.Context r3, android.net.Uri r4) throws java.io.FileNotFoundException {
                r2 = this;
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailQuery r0 = r2.query
                android.database.Cursor r4 = r0.queryPath(r3, r4)
                r0 = 0
                if (r4 == 0) goto L1b
                boolean r1 = r4.moveToFirst()     // Catch: java.lang.Throwable -> L14
                if (r1 == 0) goto L1b
                android.net.Uri r1 = r2.parseThumbUri(r4)     // Catch: java.lang.Throwable -> L14
                goto L1c
            L14:
                r3 = move-exception
                if (r4 == 0) goto L1a
                r4.close()
            L1a:
                throw r3
            L1b:
                r1 = r0
            L1c:
                if (r4 == 0) goto L21
                r4.close()
            L21:
                if (r1 == 0) goto L2b
                android.content.ContentResolver r3 = r3.getContentResolver()
                java.io.InputStream r0 = r3.openInputStream(r1)
            L2b:
                return r0
        }
    }

    static class ThumbnailStreamOpenerFactory {
        ThumbnailStreamOpenerFactory() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailStreamOpener build(android.net.Uri r2, int r3, int r4) {
                r1 = this;
                boolean r0 = com.bumptech.glide.load.data.MediaStoreThumbFetcher.access$000(r2)
                if (r0 == 0) goto L2b
                r0 = 512(0x200, float:7.17E-43)
                if (r3 > r0) goto L2b
                r3 = 384(0x180, float:5.38E-43)
                if (r4 <= r3) goto Lf
                goto L2b
            Lf:
                boolean r2 = com.bumptech.glide.load.data.MediaStoreThumbFetcher.access$100(r2)
                if (r2 == 0) goto L20
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailStreamOpener r2 = new com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailStreamOpener
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$VideoThumbnailQuery r3 = new com.bumptech.glide.load.data.MediaStoreThumbFetcher$VideoThumbnailQuery
                r3.<init>()
                r2.<init>(r3)
                return r2
            L20:
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailStreamOpener r2 = new com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailStreamOpener
                com.bumptech.glide.load.data.MediaStoreThumbFetcher$ImageThumbnailQuery r3 = new com.bumptech.glide.load.data.MediaStoreThumbFetcher$ImageThumbnailQuery
                r3.<init>()
                r2.<init>(r3)
                return r2
            L2b:
                r2 = 0
                return r2
        }
    }

    static class VideoThumbnailQuery implements com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailQuery {
        private static final java.lang.String[] PATH_PROJECTION = null;
        private static final java.lang.String PATH_SELECTION = "kind = 1 AND video_id = ?";

        static {
                r0 = 1
                java.lang.String[] r0 = new java.lang.String[r0]
                r1 = 0
                java.lang.String r2 = "_data"
                r0[r1] = r2
                com.bumptech.glide.load.data.MediaStoreThumbFetcher.VideoThumbnailQuery.PATH_PROJECTION = r0
                return
        }

        VideoThumbnailQuery() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public android.database.Cursor queryPath(android.content.Context r7, android.net.Uri r8) {
                r6 = this;
                java.lang.String r8 = r8.getLastPathSegment()
                android.content.ContentResolver r0 = r7.getContentResolver()
                android.net.Uri r1 = android.provider.MediaStore.Video.Thumbnails.EXTERNAL_CONTENT_URI
                java.lang.String[] r2 = com.bumptech.glide.load.data.MediaStoreThumbFetcher.VideoThumbnailQuery.PATH_PROJECTION
                r7 = 1
                java.lang.String[] r4 = new java.lang.String[r7]
                r7 = 0
                r4[r7] = r8
                java.lang.String r3 = "kind = 1 AND video_id = ?"
                r5 = 0
                android.database.Cursor r7 = r0.query(r1, r2, r3, r4, r5)
                return r7
        }
    }

    static {
            com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailStreamOpenerFactory r0 = new com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailStreamOpenerFactory
            r0.<init>()
            com.bumptech.glide.load.data.MediaStoreThumbFetcher.DEFAULT_FACTORY = r0
            return
    }

    public MediaStoreThumbFetcher(android.content.Context r8, android.net.Uri r9, com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> r10, int r11, int r12) {
            r7 = this;
            com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailStreamOpenerFactory r6 = com.bumptech.glide.load.data.MediaStoreThumbFetcher.DEFAULT_FACTORY
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    MediaStoreThumbFetcher(android.content.Context r1, android.net.Uri r2, com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> r3, int r4, int r5, com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailStreamOpenerFactory r6) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            r0.mediaStoreUri = r2
            r0.defaultFetcher = r3
            r0.width = r4
            r0.height = r5
            r0.factory = r6
            return
    }

    static boolean access$000(android.net.Uri r0) {
            boolean r0 = isMediaStoreUri(r0)
            return r0
    }

    static boolean access$100(android.net.Uri r0) {
            boolean r0 = isMediaStoreVideo(r0)
            return r0
    }

    private static boolean isMediaStoreUri(android.net.Uri r2) {
            if (r2 == 0) goto L1c
            java.lang.String r0 = r2.getScheme()
            java.lang.String r1 = "content"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1c
            java.lang.String r2 = r2.getAuthority()
            java.lang.String r0 = "media"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L1c
            r2 = 1
            goto L1d
        L1c:
            r2 = 0
        L1d:
            return r2
    }

    private static boolean isMediaStoreVideo(android.net.Uri r1) {
            boolean r0 = isMediaStoreUri(r1)
            if (r0 == 0) goto L14
            java.util.List r1 = r1.getPathSegments()
            java.lang.String r0 = "video"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L14
            r1 = 1
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    private java.io.InputStream openThumbInputStream(com.bumptech.glide.load.data.MediaStoreThumbFetcher.ThumbnailStreamOpener r5) {
            r4 = this;
            android.content.Context r0 = r4.context     // Catch: java.io.FileNotFoundException -> L9
            android.net.Uri r1 = r4.mediaStoreUri     // Catch: java.io.FileNotFoundException -> L9
            java.io.InputStream r0 = r5.open(r0, r1)     // Catch: java.io.FileNotFoundException -> L9
            goto L19
        L9:
            r0 = move-exception
            r1 = 3
            java.lang.String r2 = "MediaStoreThumbFetcher"
            boolean r1 = android.util.Log.isLoggable(r2, r1)
            if (r1 == 0) goto L18
            java.lang.String r1 = "Failed to find thumbnail file"
            android.util.Log.d(r2, r1, r0)
        L18:
            r0 = 0
        L19:
            r1 = -1
            if (r0 == 0) goto L25
            android.content.Context r2 = r4.context
            android.net.Uri r3 = r4.mediaStoreUri
            int r5 = r5.getOrientation(r2, r3)
            goto L26
        L25:
            r5 = -1
        L26:
            if (r5 == r1) goto L2e
            com.bumptech.glide.load.data.ExifOrientationStream r1 = new com.bumptech.glide.load.data.ExifOrientationStream
            r1.<init>(r0, r5)
            r0 = r1
        L2e:
            return r0
    }

    @Override
    public void cancel() {
            r0 = this;
            return
    }

    @Override
    public void cleanup() {
            r1 = this;
            java.io.InputStream r0 = r1.inputStream
            if (r0 == 0) goto L7
            r0.close()     // Catch: java.io.IOException -> L7
        L7:
            com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> r0 = r1.defaultFetcher
            r0.cleanup()
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            android.net.Uri r0 = r1.mediaStoreUri
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public java.io.InputStream loadData(com.bumptech.glide.Priority r5) throws java.lang.Exception {
            r4 = this;
            com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailStreamOpenerFactory r0 = r4.factory
            android.net.Uri r1 = r4.mediaStoreUri
            int r2 = r4.width
            int r3 = r4.height
            com.bumptech.glide.load.data.MediaStoreThumbFetcher$ThumbnailStreamOpener r0 = r0.build(r1, r2, r3)
            if (r0 == 0) goto L14
            java.io.InputStream r0 = r4.openThumbInputStream(r0)
            r4.inputStream = r0
        L14:
            java.io.InputStream r0 = r4.inputStream
            if (r0 != 0) goto L22
            com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> r0 = r4.defaultFetcher
            java.lang.Object r5 = r0.loadData(r5)
            java.io.InputStream r5 = (java.io.InputStream) r5
            r4.inputStream = r5
        L22:
            java.io.InputStream r5 = r4.inputStream
            return r5
    }

    @Override
    public java.io.InputStream loadData(com.bumptech.glide.Priority r1) throws java.lang.Exception {
            r0 = this;
            java.io.InputStream r1 = r0.loadData(r1)
            return r1
    }
}
