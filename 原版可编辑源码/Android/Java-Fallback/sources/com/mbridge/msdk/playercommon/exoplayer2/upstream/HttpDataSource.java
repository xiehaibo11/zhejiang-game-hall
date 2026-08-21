package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public interface HttpDataSource extends com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    public static final com.mbridge.msdk.playercommon.exoplayer2.util.Predicate<java.lang.String> REJECT_PAYWALL_TYPES = null;


    public static abstract class BaseFactory implements com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.Factory {
        private final com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.RequestProperties defaultRequestProperties;

        public BaseFactory() {
                r1 = this;
                r1.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties
                r0.<init>()
                r1.defaultRequestProperties = r0
                return
        }

        @Override
        public final void clearAllDefaultRequestProperties() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r1.defaultRequestProperties
                r0.clear()
                return
        }

        @Override
        public final void clearDefaultRequestProperty(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r1.defaultRequestProperties
                r0.remove(r2)
                return
        }

        @Override
        public com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource createDataSource() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource r0 = r1.createDataSource()
                return r0
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource createDataSource() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r1.defaultRequestProperties
                com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource r0 = r1.createDataSourceInternal(r0)
                return r0
        }

        protected abstract com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource createDataSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.RequestProperties r1);

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.RequestProperties getDefaultRequestProperties() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r1.defaultRequestProperties
                return r0
        }

        @Override
        public final void setDefaultRequestProperty(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r1.defaultRequestProperties
                r0.set(r2, r3)
                return
        }
    }

    public interface Factory extends com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory {
        void clearAllDefaultRequestProperties();

        void clearDefaultRequestProperty(java.lang.String r1);

        @Override
        com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource createDataSource();

        com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.RequestProperties getDefaultRequestProperties();

        void setDefaultRequestProperty(java.lang.String r1, java.lang.String r2);
    }

    public static class HttpDataSourceException extends java.io.IOException {
        public static final int TYPE_CLOSE = 3;
        public static final int TYPE_OPEN = 1;
        public static final int TYPE_READ = 2;
        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
        public final int type;

        public @interface Type {
        }

        public HttpDataSourceException(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.dataSpec = r1
                r0.type = r2
                return
        }

        public HttpDataSourceException(java.io.IOException r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2, int r3) {
                r0 = this;
                r0.<init>(r1)
                r0.dataSpec = r2
                r0.type = r3
                return
        }

        public HttpDataSourceException(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2, int r3) {
                r0 = this;
                r0.<init>(r1)
                r0.dataSpec = r2
                r0.type = r3
                return
        }

        public HttpDataSourceException(java.lang.String r1, java.io.IOException r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3, int r4) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.dataSpec = r3
                r0.type = r4
                return
        }
    }

    public static final class InvalidContentTypeException extends com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.HttpDataSourceException {
        public final java.lang.String contentType;

        public InvalidContentTypeException(java.lang.String r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Invalid content type: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                r1 = 1
                r2.<init>(r0, r4, r1)
                r2.contentType = r3
                return
        }
    }

    public static final class InvalidResponseCodeException extends com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.HttpDataSourceException {
        public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> headerFields;
        public final int responseCode;

        public InvalidResponseCodeException(int r3, java.util.Map<java.lang.String, java.util.List<java.lang.String>> r4, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r5) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Response code: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                r1 = 1
                r2.<init>(r0, r5, r1)
                r2.responseCode = r3
                r2.headerFields = r4
                return
        }
    }

    public static final class RequestProperties {
        private final java.util.Map<java.lang.String, java.lang.String> requestProperties;
        private java.util.Map<java.lang.String, java.lang.String> requestPropertiesSnapshot;

        public RequestProperties() {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.requestProperties = r0
                return
        }

        public final synchronized void clear() {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.requestPropertiesSnapshot = r0     // Catch: java.lang.Throwable -> Lb
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.requestProperties     // Catch: java.lang.Throwable -> Lb
                r0.clear()     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        public final synchronized void clearAndSet(java.util.Map<java.lang.String, java.lang.String> r2) {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.requestPropertiesSnapshot = r0     // Catch: java.lang.Throwable -> L10
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.requestProperties     // Catch: java.lang.Throwable -> L10
                r0.clear()     // Catch: java.lang.Throwable -> L10
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.requestProperties     // Catch: java.lang.Throwable -> L10
                r0.putAll(r2)     // Catch: java.lang.Throwable -> L10
                monitor-exit(r1)
                return
            L10:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        public final synchronized java.util.Map<java.lang.String, java.lang.String> getSnapshot() {
                r2 = this;
                monitor-enter(r2)
                java.util.Map<java.lang.String, java.lang.String> r0 = r2.requestPropertiesSnapshot     // Catch: java.lang.Throwable -> L16
                if (r0 != 0) goto L12
                java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L16
                java.util.Map<java.lang.String, java.lang.String> r1 = r2.requestProperties     // Catch: java.lang.Throwable -> L16
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L16
                java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)     // Catch: java.lang.Throwable -> L16
                r2.requestPropertiesSnapshot = r0     // Catch: java.lang.Throwable -> L16
            L12:
                java.util.Map<java.lang.String, java.lang.String> r0 = r2.requestPropertiesSnapshot     // Catch: java.lang.Throwable -> L16
                monitor-exit(r2)
                return r0
            L16:
                r0 = move-exception
                monitor-exit(r2)
                throw r0
        }

        public final synchronized void remove(java.lang.String r2) {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.requestPropertiesSnapshot = r0     // Catch: java.lang.Throwable -> Lb
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.requestProperties     // Catch: java.lang.Throwable -> Lb
                r0.remove(r2)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        public final synchronized void set(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.requestPropertiesSnapshot = r0     // Catch: java.lang.Throwable -> Lb
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.requestProperties     // Catch: java.lang.Throwable -> Lb
                r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        public final synchronized void set(java.util.Map<java.lang.String, java.lang.String> r2) {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.requestPropertiesSnapshot = r0     // Catch: java.lang.Throwable -> Lb
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.requestProperties     // Catch: java.lang.Throwable -> Lb
                r0.putAll(r2)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.REJECT_PAYWALL_TYPES = r0
            return
    }

    void clearAllRequestProperties();

    void clearRequestProperty(java.lang.String r1);

    @Override
    void close() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.HttpDataSourceException;

    java.util.Map<java.lang.String, java.util.List<java.lang.String>> getResponseHeaders();

    @Override
    long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.HttpDataSourceException;

    @Override
    int read(byte[] r1, int r2, int r3) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.HttpDataSourceException;

    void setRequestProperty(java.lang.String r1, java.lang.String r2);
}
