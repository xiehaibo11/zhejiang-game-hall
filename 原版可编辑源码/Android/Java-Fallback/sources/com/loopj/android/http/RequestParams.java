package com.loopj.android.http;

public class RequestParams implements java.io.Serializable {
    public static final java.lang.String APPLICATION_JSON = "application/json";
    public static final java.lang.String APPLICATION_OCTET_STREAM = "application/octet-stream";
    protected static final java.lang.String LOG_TAG = "RequestParams";
    protected boolean autoCloseInputStreams;
    protected java.lang.String contentEncoding;
    protected java.lang.String elapsedFieldInJsonStreamer;
    protected final java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.loopj.android.http.RequestParams.FileWrapper>> fileArrayParams;
    protected final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams.FileWrapper> fileParams;
    protected boolean forceMultipartEntity;
    protected boolean isRepeatable;
    protected final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams.StreamWrapper> streamParams;
    protected final java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> urlParams;
    protected final java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> urlParamsWithObjects;
    protected boolean useJsonStreamer;


    public static class FileWrapper implements java.io.Serializable {
        public final java.lang.String contentType;
        public final java.lang.String customFileName;
        public final java.io.File file;

        public FileWrapper(java.io.File r1, java.lang.String r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.file = r1
                r0.contentType = r2
                r0.customFileName = r3
                return
        }
    }

    public static class StreamWrapper {
        public final boolean autoClose;
        public final java.lang.String contentType;
        public final java.io.InputStream inputStream;
        public final java.lang.String name;

        public StreamWrapper(java.io.InputStream r1, java.lang.String r2, java.lang.String r3, boolean r4) {
                r0 = this;
                r0.<init>()
                r0.inputStream = r1
                r0.name = r2
                r0.contentType = r3
                r0.autoClose = r4
                return
        }

        static com.loopj.android.http.RequestParams.StreamWrapper newInstance(java.io.InputStream r1, java.lang.String r2, java.lang.String r3, boolean r4) {
                com.loopj.android.http.RequestParams$StreamWrapper r0 = new com.loopj.android.http.RequestParams$StreamWrapper
                if (r3 != 0) goto L6
                java.lang.String r3 = "application/octet-stream"
            L6:
                r0.<init>(r1, r2, r3, r4)
                return r0
        }
    }

    public RequestParams() {
            r1 = this;
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            r1.<init>(r0)
            return
    }

    public RequestParams(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.loopj.android.http.RequestParams$1 r0 = new com.loopj.android.http.RequestParams$1
            r0.<init>(r2, r3)
            r1.<init>(r0)
            return
    }

    public RequestParams(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.urlParams = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.streamParams = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.fileParams = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.fileArrayParams = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.urlParamsWithObjects = r0
            r0 = 0
            r2.forceMultipartEntity = r0
            java.lang.String r0 = "_elapsed"
            r2.elapsedFieldInJsonStreamer = r0
            java.lang.String r0 = "UTF-8"
            r2.contentEncoding = r0
            if (r3 == 0) goto L57
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L3b:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L57
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.put(r1, r0)
            goto L3b
        L57:
            return
    }

    public RequestParams(java.lang.Object... r5) {
            r4 = this;
            r4.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.urlParams = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.streamParams = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.fileParams = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.fileArrayParams = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.urlParamsWithObjects = r0
            r0 = 0
            r4.forceMultipartEntity = r0
            java.lang.String r1 = "_elapsed"
            r4.elapsedFieldInJsonStreamer = r1
            java.lang.String r1 = "UTF-8"
            r4.contentEncoding = r1
            int r1 = r5.length
            int r2 = r1 % 2
            if (r2 != 0) goto L4d
        L36:
            if (r0 >= r1) goto L4c
            r2 = r5[r0]
            java.lang.String r2 = java.lang.String.valueOf(r2)
            int r3 = r0 + 1
            r3 = r5[r3]
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r4.put(r2, r3)
            int r0 = r0 + 2
            goto L36
        L4c:
            return
        L4d:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Supplied arguments must be even"
            r5.<init>(r0)
            throw r5
    }

    private cz.msebera.android.httpclient.HttpEntity createFormEntity() {
            r4 = this;
            cz.msebera.android.httpclient.client.entity.UrlEncodedFormEntity r0 = new cz.msebera.android.httpclient.client.entity.UrlEncodedFormEntity     // Catch: java.io.UnsupportedEncodingException -> Lc
            java.util.List r1 = r4.getParamsList()     // Catch: java.io.UnsupportedEncodingException -> Lc
            java.lang.String r2 = r4.contentEncoding     // Catch: java.io.UnsupportedEncodingException -> Lc
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            return r0
        Lc:
            r0 = move-exception
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "RequestParams"
            java.lang.String r3 = "createFormEntity failed"
            r1.e(r2, r3, r0)
            r0 = 0
            return r0
    }

    private cz.msebera.android.httpclient.HttpEntity createJsonStreamerEntity(com.loopj.android.http.ResponseHandlerInterface r7) throws java.io.IOException {
            r6 = this;
            com.loopj.android.http.JsonStreamerEntity r0 = new com.loopj.android.http.JsonStreamerEntity
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$FileWrapper> r1 = r6.fileParams
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L15
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$StreamWrapper> r1 = r6.streamParams
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L13
            goto L15
        L13:
            r1 = 0
            goto L16
        L15:
            r1 = 1
        L16:
            java.lang.String r2 = r6.elapsedFieldInJsonStreamer
            r0.<init>(r7, r1, r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r7 = r6.urlParams
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L25:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r7.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            r0.addPart(r2, r1)
            goto L25
        L3f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r7 = r6.urlParamsWithObjects
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L49:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L63
            java.lang.Object r1 = r7.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            r0.addPart(r2, r1)
            goto L49
        L63:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$FileWrapper> r7 = r6.fileParams
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L6d:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L87
            java.lang.Object r1 = r7.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            r0.addPart(r2, r1)
            goto L6d
        L87:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$StreamWrapper> r7 = r6.streamParams
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L91:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto Lbd
            java.lang.Object r1 = r7.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            com.loopj.android.http.RequestParams$StreamWrapper r2 = (com.loopj.android.http.RequestParams.StreamWrapper) r2
            java.io.InputStream r3 = r2.inputStream
            if (r3 == 0) goto L91
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.io.InputStream r3 = r2.inputStream
            java.lang.String r4 = r2.name
            java.lang.String r5 = r2.contentType
            boolean r2 = r2.autoClose
            com.loopj.android.http.RequestParams$StreamWrapper r2 = com.loopj.android.http.RequestParams.StreamWrapper.newInstance(r3, r4, r5, r2)
            r0.addPart(r1, r2)
            goto L91
        Lbd:
            return r0
    }

    private cz.msebera.android.httpclient.HttpEntity createMultipartEntity(com.loopj.android.http.ResponseHandlerInterface r8) throws java.io.IOException {
            r7 = this;
            com.loopj.android.http.SimpleMultipartEntity r0 = new com.loopj.android.http.SimpleMultipartEntity
            r0.<init>(r8)
            boolean r8 = r7.isRepeatable
            r0.setIsRepeatable(r8)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r8 = r7.urlParams
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        L14:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L32
            java.lang.Object r1 = r8.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r3 = r7.contentEncoding
            r0.addPartWithCharset(r2, r1, r3)
            goto L14
        L32:
            r8 = 0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r1 = r7.urlParamsWithObjects
            java.util.List r8 = r7.getParamsList(r8, r1)
            java.util.Iterator r8 = r8.iterator()
        L3d:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L57
            java.lang.Object r1 = r8.next()
            cz.msebera.android.httpclient.message.BasicNameValuePair r1 = (cz.msebera.android.httpclient.message.BasicNameValuePair) r1
            java.lang.String r2 = r1.getName()
            java.lang.String r1 = r1.getValue()
            java.lang.String r3 = r7.contentEncoding
            r0.addPartWithCharset(r2, r1, r3)
            goto L3d
        L57:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$StreamWrapper> r8 = r7.streamParams
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        L61:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L87
            java.lang.Object r1 = r8.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            com.loopj.android.http.RequestParams$StreamWrapper r2 = (com.loopj.android.http.RequestParams.StreamWrapper) r2
            java.io.InputStream r3 = r2.inputStream
            if (r3 == 0) goto L61
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r3 = r2.name
            java.io.InputStream r4 = r2.inputStream
            java.lang.String r2 = r2.contentType
            r0.addPart(r1, r3, r4, r2)
            goto L61
        L87:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$FileWrapper> r8 = r7.fileParams
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        L91:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto Lb3
            java.lang.Object r1 = r8.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            com.loopj.android.http.RequestParams$FileWrapper r2 = (com.loopj.android.http.RequestParams.FileWrapper) r2
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.io.File r3 = r2.file
            java.lang.String r4 = r2.contentType
            java.lang.String r2 = r2.customFileName
            r0.addPart(r1, r3, r4, r2)
            goto L91
        Lb3:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.loopj.android.http.RequestParams$FileWrapper>> r8 = r7.fileArrayParams
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        Lbd:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto Lef
            java.lang.Object r1 = r8.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            java.util.List r2 = (java.util.List) r2
            java.util.Iterator r2 = r2.iterator()
        Ld3:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto Lbd
            java.lang.Object r3 = r2.next()
            com.loopj.android.http.RequestParams$FileWrapper r3 = (com.loopj.android.http.RequestParams.FileWrapper) r3
            java.lang.Object r4 = r1.getKey()
            java.lang.String r4 = (java.lang.String) r4
            java.io.File r5 = r3.file
            java.lang.String r6 = r3.contentType
            java.lang.String r3 = r3.customFileName
            r0.addPart(r4, r5, r6, r3)
            goto Ld3
        Lef:
            return r0
    }

    private java.util.List<cz.msebera.android.httpclient.message.BasicNameValuePair> getParamsList(java.lang.String r11, java.lang.Object r12) {
            r10 = this;
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            boolean r1 = r12 instanceof java.util.Map
            r2 = 2
            r3 = 1
            r4 = 0
            if (r1 == 0) goto L5b
            java.util.Map r12 = (java.util.Map) r12
            java.util.ArrayList r1 = new java.util.ArrayList
            java.util.Set r5 = r12.keySet()
            r1.<init>(r5)
            int r5 = r1.size()
            if (r5 <= 0) goto L28
            java.lang.Object r5 = r1.get(r4)
            boolean r5 = r5 instanceof java.lang.Comparable
            if (r5 == 0) goto L28
            java.util.Collections.sort(r1)
        L28:
            java.util.Iterator r1 = r1.iterator()
        L2c:
            boolean r5 = r1.hasNext()
            if (r5 == 0) goto Ld8
            java.lang.Object r5 = r1.next()
            boolean r6 = r5 instanceof java.lang.String
            if (r6 == 0) goto L2c
            java.lang.Object r6 = r12.get(r5)
            if (r6 == 0) goto L2c
            if (r11 != 0) goto L45
            java.lang.String r5 = (java.lang.String) r5
            goto L53
        L45:
            java.util.Locale r7 = java.util.Locale.US
            java.lang.Object[] r8 = new java.lang.Object[r2]
            r8[r4] = r11
            r8[r3] = r5
            java.lang.String r5 = "%s[%s]"
            java.lang.String r5 = java.lang.String.format(r7, r5, r8)
        L53:
            java.util.List r5 = r10.getParamsList(r5, r6)
            r0.addAll(r5)
            goto L2c
        L5b:
            boolean r1 = r12 instanceof java.util.List
            java.lang.String r5 = "%s[%d]"
            if (r1 == 0) goto L88
            java.util.List r12 = (java.util.List) r12
            int r1 = r12.size()
            r6 = 0
        L68:
            if (r6 >= r1) goto Ld8
            java.util.Locale r7 = java.util.Locale.US
            java.lang.Object[] r8 = new java.lang.Object[r2]
            r8[r4] = r11
            java.lang.Integer r9 = java.lang.Integer.valueOf(r6)
            r8[r3] = r9
            java.lang.String r7 = java.lang.String.format(r7, r5, r8)
            java.lang.Object r8 = r12.get(r6)
            java.util.List r7 = r10.getParamsList(r7, r8)
            r0.addAll(r7)
            int r6 = r6 + 1
            goto L68
        L88:
            boolean r1 = r12 instanceof java.lang.Object[]
            if (r1 == 0) goto Lb0
            java.lang.Object[] r12 = (java.lang.Object[]) r12
            java.lang.Object[] r12 = (java.lang.Object[]) r12
            int r1 = r12.length
            r6 = 0
        L92:
            if (r6 >= r1) goto Ld8
            java.util.Locale r7 = java.util.Locale.US
            java.lang.Object[] r8 = new java.lang.Object[r2]
            r8[r4] = r11
            java.lang.Integer r9 = java.lang.Integer.valueOf(r6)
            r8[r3] = r9
            java.lang.String r7 = java.lang.String.format(r7, r5, r8)
            r8 = r12[r6]
            java.util.List r7 = r10.getParamsList(r7, r8)
            r0.addAll(r7)
            int r6 = r6 + 1
            goto L92
        Lb0:
            boolean r1 = r12 instanceof java.util.Set
            if (r1 == 0) goto Lcc
            java.util.Set r12 = (java.util.Set) r12
            java.util.Iterator r12 = r12.iterator()
        Lba:
            boolean r1 = r12.hasNext()
            if (r1 == 0) goto Ld8
            java.lang.Object r1 = r12.next()
            java.util.List r1 = r10.getParamsList(r11, r1)
            r0.addAll(r1)
            goto Lba
        Lcc:
            cz.msebera.android.httpclient.message.BasicNameValuePair r1 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.lang.String r12 = r12.toString()
            r1.<init>(r11, r12)
            r0.add(r1)
        Ld8:
            return r0
    }

    public void add(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L27
            if (r3 == 0) goto L27
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.urlParamsWithObjects
            java.lang.Object r0 = r0.get(r2)
            if (r0 != 0) goto L14
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.put(r2, r0)
        L14:
            boolean r2 = r0 instanceof java.util.List
            if (r2 == 0) goto L1e
            java.util.List r0 = (java.util.List) r0
            r0.add(r3)
            goto L27
        L1e:
            boolean r2 = r0 instanceof java.util.Set
            if (r2 == 0) goto L27
            java.util.Set r0 = (java.util.Set) r0
            r0.add(r3)
        L27:
            return
    }

    public cz.msebera.android.httpclient.HttpEntity getEntity(com.loopj.android.http.ResponseHandlerInterface r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.useJsonStreamer
            if (r0 == 0) goto L9
            cz.msebera.android.httpclient.HttpEntity r2 = r1.createJsonStreamerEntity(r2)
            return r2
        L9:
            boolean r0 = r1.forceMultipartEntity
            if (r0 != 0) goto L2a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$StreamWrapper> r0 = r1.streamParams
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L2a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$FileWrapper> r0 = r1.fileParams
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L2a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.loopj.android.http.RequestParams$FileWrapper>> r0 = r1.fileArrayParams
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L2a
            cz.msebera.android.httpclient.HttpEntity r2 = r1.createFormEntity()
            return r2
        L2a:
            cz.msebera.android.httpclient.HttpEntity r2 = r1.createMultipartEntity(r2)
            return r2
    }

    protected java.lang.String getParamString() {
            r2 = this;
            java.util.List r0 = r2.getParamsList()
            java.lang.String r1 = r2.contentEncoding
            java.lang.String r0 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.format(r0, r1)
            return r0
    }

    protected java.util.List<cz.msebera.android.httpclient.message.BasicNameValuePair> getParamsList() {
            r5 = this;
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r1 = r5.urlParams
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L30
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            cz.msebera.android.httpclient.message.BasicNameValuePair r3 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            java.lang.Object r4 = r2.getKey()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r3.<init>(r4, r2)
            r0.add(r3)
            goto Lf
        L30:
            r1 = 0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r2 = r5.urlParamsWithObjects
            java.util.List r1 = r5.getParamsList(r1, r2)
            r0.addAll(r1)
            return r0
    }

    public boolean has(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.urlParams
            java.lang.Object r0 = r0.get(r2)
            if (r0 != 0) goto L2b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$StreamWrapper> r0 = r1.streamParams
            java.lang.Object r0 = r0.get(r2)
            if (r0 != 0) goto L2b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$FileWrapper> r0 = r1.fileParams
            java.lang.Object r0 = r0.get(r2)
            if (r0 != 0) goto L2b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.urlParamsWithObjects
            java.lang.Object r0 = r0.get(r2)
            if (r0 != 0) goto L2b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.loopj.android.http.RequestParams$FileWrapper>> r0 = r1.fileArrayParams
            java.lang.Object r2 = r0.get(r2)
            if (r2 == 0) goto L29
            goto L2b
        L29:
            r2 = 0
            goto L2c
        L2b:
            r2 = 1
        L2c:
            return r2
    }

    public void put(java.lang.String r2, int r3) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.urlParams
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r0.put(r2, r3)
        Lb:
            return
    }

    public void put(java.lang.String r2, long r3) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.urlParams
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r0.put(r2, r3)
        Lb:
            return
    }

    public void put(java.lang.String r2, java.io.File r3) throws java.io.FileNotFoundException {
            r1 = this;
            r0 = 0
            r1.put(r2, r3, r0, r0)
            return
    }

    public void put(java.lang.String r2, java.io.File r3, java.lang.String r4) throws java.io.FileNotFoundException {
            r1 = this;
            r0 = 0
            r1.put(r2, r3, r4, r0)
            return
    }

    public void put(java.lang.String r3, java.io.File r4, java.lang.String r5, java.lang.String r6) throws java.io.FileNotFoundException {
            r2 = this;
            if (r4 == 0) goto L15
            boolean r0 = r4.exists()
            if (r0 == 0) goto L15
            if (r3 == 0) goto L14
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$FileWrapper> r0 = r2.fileParams
            com.loopj.android.http.RequestParams$FileWrapper r1 = new com.loopj.android.http.RequestParams$FileWrapper
            r1.<init>(r4, r5, r6)
            r0.put(r3, r1)
        L14:
            return
        L15:
            java.io.FileNotFoundException r3 = new java.io.FileNotFoundException
            r3.<init>()
            throw r3
    }

    public void put(java.lang.String r2, java.io.InputStream r3) {
            r1 = this;
            r0 = 0
            r1.put(r2, r3, r0)
            return
    }

    public void put(java.lang.String r2, java.io.InputStream r3, java.lang.String r4) {
            r1 = this;
            r0 = 0
            r1.put(r2, r3, r4, r0)
            return
    }

    public void put(java.lang.String r7, java.io.InputStream r8, java.lang.String r9, java.lang.String r10) {
            r6 = this;
            boolean r5 = r6.autoCloseInputStreams
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.put(r1, r2, r3, r4, r5)
            return
    }

    public void put(java.lang.String r2, java.io.InputStream r3, java.lang.String r4, java.lang.String r5, boolean r6) {
            r1 = this;
            if (r2 == 0) goto Ld
            if (r3 == 0) goto Ld
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$StreamWrapper> r0 = r1.streamParams
            com.loopj.android.http.RequestParams$StreamWrapper r3 = com.loopj.android.http.RequestParams.StreamWrapper.newInstance(r3, r4, r5, r6)
            r0.put(r2, r3)
        Ld:
            return
    }

    public void put(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            if (r2 == 0) goto L9
            if (r3 == 0) goto L9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.urlParamsWithObjects
            r0.put(r2, r3)
        L9:
            return
    }

    public void put(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L9
            if (r3 == 0) goto L9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.urlParams
            r0.put(r2, r3)
        L9:
            return
    }

    public void put(java.lang.String r2, java.lang.String r3, java.io.File r4) throws java.io.FileNotFoundException {
            r1 = this;
            r0 = 0
            r1.put(r2, r4, r0, r3)
            return
    }

    public void put(java.lang.String r2, java.io.File[] r3) throws java.io.FileNotFoundException {
            r1 = this;
            r0 = 0
            r1.put(r2, r3, r0, r0)
            return
    }

    public void put(java.lang.String r6, java.io.File[] r7, java.lang.String r8, java.lang.String r9) throws java.io.FileNotFoundException {
            r5 = this;
            if (r6 == 0) goto L2b
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r7.length
            r2 = 0
        L9:
            if (r2 >= r1) goto L26
            r3 = r7[r2]
            if (r3 == 0) goto L20
            boolean r4 = r3.exists()
            if (r4 == 0) goto L20
            com.loopj.android.http.RequestParams$FileWrapper r4 = new com.loopj.android.http.RequestParams$FileWrapper
            r4.<init>(r3, r8, r9)
            r0.add(r4)
            int r2 = r2 + 1
            goto L9
        L20:
            java.io.FileNotFoundException r6 = new java.io.FileNotFoundException
            r6.<init>()
            throw r6
        L26:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.loopj.android.http.RequestParams$FileWrapper>> r7 = r5.fileArrayParams
            r7.put(r6, r0)
        L2b:
            return
    }

    public void remove(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.urlParams
            r0.remove(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$StreamWrapper> r0 = r1.streamParams
            r0.remove(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$FileWrapper> r0 = r1.fileParams
            r0.remove(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.urlParamsWithObjects
            r0.remove(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.loopj.android.http.RequestParams$FileWrapper>> r0 = r1.fileArrayParams
            r0.remove(r2)
            return
    }

    public void setAutoCloseInputStreams(boolean r1) {
            r0 = this;
            r0.autoCloseInputStreams = r1
            return
    }

    public void setContentEncoding(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto L5
            r2.contentEncoding = r3
            goto Le
        L5:
            com.loopj.android.http.LogInterface r3 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r0 = "RequestParams"
            java.lang.String r1 = "setContentEncoding called with null attribute"
            r3.d(r0, r1)
        Le:
            return
    }

    public void setElapsedFieldInJsonStreamer(java.lang.String r1) {
            r0 = this;
            r0.elapsedFieldInJsonStreamer = r1
            return
    }

    public void setForceMultipartEntityContentType(boolean r1) {
            r0 = this;
            r0.forceMultipartEntity = r1
            return
    }

    public void setHttpEntityIsRepeatable(boolean r1) {
            r0 = this;
            r0.isRepeatable = r1
            return
    }

    public void setUseJsonStreamer(boolean r1) {
            r0 = this;
            r0.useJsonStreamer = r1
            return
    }

    public java.lang.String toString() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r1 = r6.urlParams
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            java.lang.String r3 = "&"
            java.lang.String r4 = "="
            if (r2 == 0) goto L3e
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            int r5 = r0.length()
            if (r5 <= 0) goto L28
            r0.append(r3)
        L28:
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r0.append(r3)
            r0.append(r4)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            goto Lf
        L3e:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$StreamWrapper> r1 = r6.streamParams
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L48:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L6f
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            int r5 = r0.length()
            if (r5 <= 0) goto L5d
            r0.append(r3)
        L5d:
            java.lang.Object r2 = r2.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = "STREAM"
            r0.append(r2)
            goto L48
        L6f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loopj.android.http.RequestParams$FileWrapper> r1 = r6.fileParams
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L79:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto La0
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            int r5 = r0.length()
            if (r5 <= 0) goto L8e
            r0.append(r3)
        L8e:
            java.lang.Object r2 = r2.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = "FILE"
            r0.append(r2)
            goto L79
        La0:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.loopj.android.http.RequestParams$FileWrapper>> r1 = r6.fileArrayParams
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Laa:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Le3
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            int r5 = r0.length()
            if (r5 <= 0) goto Lbf
            r0.append(r3)
        Lbf:
            java.lang.Object r5 = r2.getKey()
            java.lang.String r5 = (java.lang.String) r5
            r0.append(r5)
            r0.append(r4)
            java.lang.String r5 = "FILES(SIZE="
            r0.append(r5)
            java.lang.Object r2 = r2.getValue()
            java.util.List r2 = (java.util.List) r2
            int r2 = r2.size()
            r0.append(r2)
            java.lang.String r2 = ")"
            r0.append(r2)
            goto Laa
        Le3:
            r1 = 0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r2 = r6.urlParamsWithObjects
            java.util.List r1 = r6.getParamsList(r1, r2)
            java.util.Iterator r1 = r1.iterator()
        Lee:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L115
            java.lang.Object r2 = r1.next()
            cz.msebera.android.httpclient.message.BasicNameValuePair r2 = (cz.msebera.android.httpclient.message.BasicNameValuePair) r2
            int r5 = r0.length()
            if (r5 <= 0) goto L103
            r0.append(r3)
        L103:
            java.lang.String r5 = r2.getName()
            r0.append(r5)
            r0.append(r4)
            java.lang.String r2 = r2.getValue()
            r0.append(r2)
            goto Lee
        L115:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
