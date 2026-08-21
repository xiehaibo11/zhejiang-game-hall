package com.bumptech.glide.load.model;

public final class LazyHeaders implements com.bumptech.glide.load.model.Headers {
    private volatile java.util.Map<java.lang.String, java.lang.String> combinedHeaders;
    private final java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> headers;

    public static final class Builder {
        private static final java.lang.String DEFAULT_ENCODING = "identity";
        private static final java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> DEFAULT_HEADERS = null;
        private static final java.lang.String DEFAULT_USER_AGENT = null;
        private static final java.lang.String ENCODING_HEADER = "Accept-Encoding";
        private static final java.lang.String USER_AGENT_HEADER = "User-Agent";
        private boolean copyOnModify;
        private java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> headers;
        private boolean isEncodingDefault;
        private boolean isUserAgentDefault;

        static {
                java.lang.String r0 = "http.agent"
                java.lang.String r0 = java.lang.System.getProperty(r0)
                com.bumptech.glide.load.model.LazyHeaders.Builder.DEFAULT_USER_AGENT = r0
                java.util.HashMap r0 = new java.util.HashMap
                r1 = 2
                r0.<init>(r1)
                java.lang.String r1 = com.bumptech.glide.load.model.LazyHeaders.Builder.DEFAULT_USER_AGENT
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L26
                com.bumptech.glide.load.model.LazyHeaders$StringHeaderFactory r1 = new com.bumptech.glide.load.model.LazyHeaders$StringHeaderFactory
                java.lang.String r2 = com.bumptech.glide.load.model.LazyHeaders.Builder.DEFAULT_USER_AGENT
                r1.<init>(r2)
                java.util.List r1 = java.util.Collections.singletonList(r1)
                java.lang.String r2 = "User-Agent"
                r0.put(r2, r1)
            L26:
                com.bumptech.glide.load.model.LazyHeaders$StringHeaderFactory r1 = new com.bumptech.glide.load.model.LazyHeaders$StringHeaderFactory
                java.lang.String r2 = "identity"
                r1.<init>(r2)
                java.util.List r1 = java.util.Collections.singletonList(r1)
                java.lang.String r2 = "Accept-Encoding"
                r0.put(r2, r1)
                java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)
                com.bumptech.glide.load.model.LazyHeaders.Builder.DEFAULT_HEADERS = r0
                return
        }

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 1
                r2.copyOnModify = r0
                java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r1 = com.bumptech.glide.load.model.LazyHeaders.Builder.DEFAULT_HEADERS
                r2.headers = r1
                r2.isEncodingDefault = r0
                r2.isUserAgentDefault = r0
                return
        }

        private java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> copyHeaders() {
                r5 = this;
                java.util.HashMap r0 = new java.util.HashMap
                java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r1 = r5.headers
                int r1 = r1.size()
                r0.<init>(r1)
                java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r1 = r5.headers
                java.util.Set r1 = r1.entrySet()
                java.util.Iterator r1 = r1.iterator()
            L15:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L34
                java.lang.Object r2 = r1.next()
                java.util.Map$Entry r2 = (java.util.Map.Entry) r2
                java.lang.Object r3 = r2.getKey()
                java.util.ArrayList r4 = new java.util.ArrayList
                java.lang.Object r2 = r2.getValue()
                java.util.Collection r2 = (java.util.Collection) r2
                r4.<init>(r2)
                r0.put(r3, r4)
                goto L15
            L34:
                return r0
        }

        private void copyIfNecessary() {
                r1 = this;
                boolean r0 = r1.copyOnModify
                if (r0 == 0) goto Ld
                r0 = 0
                r1.copyOnModify = r0
                java.util.Map r0 = r1.copyHeaders()
                r1.headers = r0
            Ld:
                return
        }

        private java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory> getFactories(java.lang.String r3) {
                r2 = this;
                java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r0 = r2.headers
                java.lang.Object r0 = r0.get(r3)
                java.util.List r0 = (java.util.List) r0
                if (r0 != 0) goto L14
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r1 = r2.headers
                r1.put(r3, r0)
            L14:
                return r0
        }

        public com.bumptech.glide.load.model.LazyHeaders.Builder addHeader(java.lang.String r2, com.bumptech.glide.load.model.LazyHeaderFactory r3) {
                r1 = this;
                boolean r0 = r1.isEncodingDefault
                if (r0 == 0) goto Lc
                java.lang.String r0 = "Accept-Encoding"
                boolean r0 = r0.equalsIgnoreCase(r2)
                if (r0 != 0) goto L18
            Lc:
                boolean r0 = r1.isUserAgentDefault
                if (r0 == 0) goto L1d
                java.lang.String r0 = "User-Agent"
                boolean r0 = r0.equalsIgnoreCase(r2)
                if (r0 == 0) goto L1d
            L18:
                com.bumptech.glide.load.model.LazyHeaders$Builder r2 = r1.setHeader(r2, r3)
                return r2
            L1d:
                r1.copyIfNecessary()
                java.util.List r2 = r1.getFactories(r2)
                r2.add(r3)
                return r1
        }

        public com.bumptech.glide.load.model.LazyHeaders.Builder addHeader(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.bumptech.glide.load.model.LazyHeaders$StringHeaderFactory r0 = new com.bumptech.glide.load.model.LazyHeaders$StringHeaderFactory
                r0.<init>(r3)
                com.bumptech.glide.load.model.LazyHeaders$Builder r2 = r1.addHeader(r2, r0)
                return r2
        }

        public com.bumptech.glide.load.model.LazyHeaders build() {
                r2 = this;
                r0 = 1
                r2.copyOnModify = r0
                com.bumptech.glide.load.model.LazyHeaders r0 = new com.bumptech.glide.load.model.LazyHeaders
                java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r1 = r2.headers
                r0.<init>(r1)
                return r0
        }

        public com.bumptech.glide.load.model.LazyHeaders.Builder setHeader(java.lang.String r2, com.bumptech.glide.load.model.LazyHeaderFactory r3) {
                r1 = this;
                r1.copyIfNecessary()
                if (r3 != 0) goto Lb
                java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r3 = r1.headers
                r3.remove(r2)
                goto L15
            Lb:
                java.util.List r0 = r1.getFactories(r2)
                r0.clear()
                r0.add(r3)
            L15:
                boolean r3 = r1.isEncodingDefault
                r0 = 0
                if (r3 == 0) goto L24
                java.lang.String r3 = "Accept-Encoding"
                boolean r3 = r3.equalsIgnoreCase(r2)
                if (r3 == 0) goto L24
                r1.isEncodingDefault = r0
            L24:
                boolean r3 = r1.isUserAgentDefault
                if (r3 == 0) goto L32
                java.lang.String r3 = "User-Agent"
                boolean r2 = r3.equalsIgnoreCase(r2)
                if (r2 == 0) goto L32
                r1.isUserAgentDefault = r0
            L32:
                return r1
        }

        public com.bumptech.glide.load.model.LazyHeaders.Builder setHeader(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                if (r3 != 0) goto L4
                r3 = 0
                goto La
            L4:
                com.bumptech.glide.load.model.LazyHeaders$StringHeaderFactory r0 = new com.bumptech.glide.load.model.LazyHeaders$StringHeaderFactory
                r0.<init>(r3)
                r3 = r0
            La:
                com.bumptech.glide.load.model.LazyHeaders$Builder r2 = r1.setHeader(r2, r3)
                return r2
        }
    }

    static final class StringHeaderFactory implements com.bumptech.glide.load.model.LazyHeaderFactory {
        private final java.lang.String value;

        StringHeaderFactory(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.value = r1
                return
        }

        @Override
        public java.lang.String buildHeader() {
                r1 = this;
                java.lang.String r0 = r1.value
                return r0
        }

        public boolean equals(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof com.bumptech.glide.load.model.LazyHeaders.StringHeaderFactory
                if (r0 == 0) goto Lf
                com.bumptech.glide.load.model.LazyHeaders$StringHeaderFactory r2 = (com.bumptech.glide.load.model.LazyHeaders.StringHeaderFactory) r2
                java.lang.String r0 = r1.value
                java.lang.String r2 = r2.value
                boolean r2 = r0.equals(r2)
                return r2
            Lf:
                r2 = 0
                return r2
        }

        public int hashCode() {
                r1 = this;
                java.lang.String r0 = r1.value
                int r0 = r0.hashCode()
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "StringHeaderFactory{value='"
                r0.append(r1)
                java.lang.String r1 = r2.value
                r0.append(r1)
                r1 = 39
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    LazyHeaders(java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r1) {
            r0 = this;
            r0.<init>()
            java.util.Map r1 = java.util.Collections.unmodifiableMap(r1)
            r0.headers = r1
            return
    }

    private java.util.Map<java.lang.String, java.lang.String> generateHeaders() {
            r7 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r1 = r7.headers
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L56
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r4 = r2.getValue()
            java.util.List r4 = (java.util.List) r4
            r5 = 0
        L27:
            int r6 = r4.size()
            if (r5 >= r6) goto L4a
            java.lang.Object r6 = r4.get(r5)
            com.bumptech.glide.load.model.LazyHeaderFactory r6 = (com.bumptech.glide.load.model.LazyHeaderFactory) r6
            java.lang.String r6 = r6.buildHeader()
            r3.append(r6)
            int r6 = r4.size()
            int r6 = r6 + (-1)
            if (r5 == r6) goto L47
            r6 = 44
            r3.append(r6)
        L47:
            int r5 = r5 + 1
            goto L27
        L4a:
            java.lang.Object r2 = r2.getKey()
            java.lang.String r3 = r3.toString()
            r0.put(r2, r3)
            goto Lf
        L56:
            return r0
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.bumptech.glide.load.model.LazyHeaders
            if (r0 == 0) goto Lf
            com.bumptech.glide.load.model.LazyHeaders r2 = (com.bumptech.glide.load.model.LazyHeaders) r2
            java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r0 = r1.headers
            java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r2 = r2.headers
            boolean r2 = r0.equals(r2)
            return r2
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.combinedHeaders
            if (r0 != 0) goto L18
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.combinedHeaders     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto L13
            java.util.Map r0 = r1.generateHeaders()     // Catch: java.lang.Throwable -> L15
            java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)     // Catch: java.lang.Throwable -> L15
            r1.combinedHeaders = r0     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L15
            throw r0
        L18:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.combinedHeaders
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r0 = r1.headers
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "LazyHeaders{headers="
            r0.append(r1)
            java.util.Map<java.lang.String, java.util.List<com.bumptech.glide.load.model.LazyHeaderFactory>> r1 = r2.headers
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
