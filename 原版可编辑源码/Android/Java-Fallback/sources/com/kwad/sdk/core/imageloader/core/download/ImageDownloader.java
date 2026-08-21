package com.kwad.sdk.core.imageloader.core.download;

public interface ImageDownloader {

    public enum Scheme extends java.lang.Enum<com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme> {
        private static final com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme[] $VALUES = null;
        public static final com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme ASSETS = null;
        public static final com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme CONTENT = null;
        public static final com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme DRAWABLE = null;
        public static final com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme FILE = null;
        public static final com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme HTTP = null;
        public static final com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme HTTPS = null;
        public static final com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme UNKNOWN = null;
        private java.lang.String scheme;
        private java.lang.String uriPrefix;

        static {
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r0 = new com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme
                r1 = 0
                java.lang.String r2 = "HTTP"
                java.lang.String r3 = "http"
                r0.<init>(r2, r1, r3)
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.HTTP = r0
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r0 = new com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme
                r2 = 1
                java.lang.String r3 = "HTTPS"
                java.lang.String r4 = "https"
                r0.<init>(r3, r2, r4)
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.HTTPS = r0
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r0 = new com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme
                r3 = 2
                java.lang.String r4 = "FILE"
                java.lang.String r5 = "file"
                r0.<init>(r4, r3, r5)
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.FILE = r0
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r0 = new com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme
                r4 = 3
                java.lang.String r5 = "CONTENT"
                java.lang.String r6 = "content"
                r0.<init>(r5, r4, r6)
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.CONTENT = r0
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r0 = new com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme
                r5 = 4
                java.lang.String r6 = "ASSETS"
                java.lang.String r7 = "assets"
                r0.<init>(r6, r5, r7)
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.ASSETS = r0
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r0 = new com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme
                r6 = 5
                java.lang.String r7 = "DRAWABLE"
                java.lang.String r8 = "drawable"
                r0.<init>(r7, r6, r8)
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.DRAWABLE = r0
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r0 = new com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme
                r7 = 6
                java.lang.String r8 = "UNKNOWN"
                java.lang.String r9 = ""
                r0.<init>(r8, r7, r9)
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.UNKNOWN = r0
                r8 = 7
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme[] r8 = new com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme[r8]
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r9 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.HTTP
                r8[r1] = r9
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.HTTPS
                r8[r2] = r1
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.FILE
                r8[r3] = r1
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.CONTENT
                r8[r4] = r1
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.ASSETS
                r8[r5] = r1
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.DRAWABLE
                r8[r6] = r1
                r8[r7] = r0
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.$VALUES = r8
                return
        }

        Scheme(java.lang.String r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.scheme = r3
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                java.lang.String r2 = "://"
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.uriPrefix = r1
                return
        }

        private boolean belongsTo(java.lang.String r2) {
                r1 = this;
                java.util.Locale r0 = java.util.Locale.US
                java.lang.String r2 = r2.toLowerCase(r0)
                java.lang.String r0 = r1.uriPrefix
                boolean r2 = r2.startsWith(r0)
                return r2
        }

        public static com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme ofUri(java.lang.String r5) {
                if (r5 == 0) goto L16
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme[] r0 = values()
                int r1 = r0.length
                r2 = 0
            L8:
                if (r2 >= r1) goto L16
                r3 = r0[r2]
                boolean r4 = r3.belongsTo(r5)
                if (r4 == 0) goto L13
                return r3
            L13:
                int r2 = r2 + 1
                goto L8
            L16:
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r5 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.UNKNOWN
                return r5
        }

        public static com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme> r0 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = (com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme) r1
                return r1
        }

        public static com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme[] values() {
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme[] r0 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme[] r0 = (com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme[]) r0
                return r0
        }

        public final java.lang.String crop(java.lang.String r4) {
                r3 = this;
                boolean r0 = r3.belongsTo(r4)
                if (r0 == 0) goto L11
                java.lang.String r0 = r3.uriPrefix
                int r0 = r0.length()
                java.lang.String r4 = r4.substring(r0)
                return r4
            L11:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                r1 = 2
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                r1[r2] = r4
                r4 = 1
                java.lang.String r2 = r3.scheme
                r1[r4] = r2
                java.lang.String r4 = "URI [%1$s] doesn't have expected scheme [%2$s]"
                java.lang.String r4 = java.lang.String.format(r4, r1)
                r0.<init>(r4)
                throw r0
        }

        public final java.lang.String wrap(java.lang.String r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r2.uriPrefix
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                return r3
        }
    }

    java.io.InputStream getStream(java.lang.String r1, java.lang.Object r2);
}
