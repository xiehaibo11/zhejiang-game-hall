package okhttp3;

@kotlin.Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b&\u0018\u0000 \u000e2\u00020\u0001:\u0001\u000eB\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\u0003\u001a\u00020\u0004H\u0016J\n\u0010\u0005\u001a\u0004\u0018\u00010\u0006H&J\b\u0010\u0007\u001a\u00020\bH\u0016J\b\u0010\t\u001a\u00020\bH\u0016J\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH&¨\u0006\u000f"}, d2 = {"Lokhttp3/RequestBody;", "", "()V", "contentLength", "", "contentType", "Lokhttp3/MediaType;", "isDuplex", "", "isOneShot", "writeTo", "", "sink", "Lokio/BufferedSink;", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class RequestBody {
    public static final okhttp3.RequestBody.Companion Companion = null;

    class 1 extends okhttp3.RequestBody {
        final okio.ByteString val$content;
        final okhttp3.MediaType val$contentType;

        1(okhttp3.MediaType r1, okio.ByteString r2) {
                r0 = this;
                r0.val$contentType = r1
                r0.val$content = r2
                r0.<init>()
                return
        }

        @Override
        public long contentLength() throws java.io.IOException {
                r2 = this;
                okio.ByteString r0 = r2.val$content
                int r0 = r0.size()
                long r0 = (long) r0
                return r0
        }

        @Override
        @javax.annotation.Nullable
        public okhttp3.MediaType contentType() {
                r1 = this;
                okhttp3.MediaType r0 = r1.val$contentType
                return r0
        }

        @Override
        public void writeTo(okio.BufferedSink r2) throws java.io.IOException {
                r1 = this;
                okio.ByteString r0 = r1.val$content
                r2.write(r0)
                return
        }
    }

    class 2 extends okhttp3.RequestBody {
        final int val$byteCount;
        final byte[] val$content;
        final okhttp3.MediaType val$contentType;
        final int val$offset;

        2(okhttp3.MediaType r1, int r2, byte[] r3, int r4) {
                r0 = this;
                r0.val$contentType = r1
                r0.val$byteCount = r2
                r0.val$content = r3
                r0.val$offset = r4
                r0.<init>()
                return
        }

        @Override
        public long contentLength() {
                r2 = this;
                int r0 = r2.val$byteCount
                long r0 = (long) r0
                return r0
        }

        @Override
        @javax.annotation.Nullable
        public okhttp3.MediaType contentType() {
                r1 = this;
                okhttp3.MediaType r0 = r1.val$contentType
                return r0
        }

        @Override
        public void writeTo(okio.BufferedSink r4) throws java.io.IOException {
                r3 = this;
                byte[] r0 = r3.val$content
                int r1 = r3.val$offset
                int r2 = r3.val$byteCount
                r4.write(r0, r1, r2)
                return
        }
    }

    class 3 extends okhttp3.RequestBody {
        final okhttp3.MediaType val$contentType;
        final java.io.File val$file;

        3(okhttp3.MediaType r1, java.io.File r2) {
                r0 = this;
                r0.val$contentType = r1
                r0.val$file = r2
                r0.<init>()
                return
        }

        @Override
        public long contentLength() {
                r2 = this;
                java.io.File r0 = r2.val$file
                long r0 = r0.length()
                return r0
        }

        @Override
        @javax.annotation.Nullable
        public okhttp3.MediaType contentType() {
                r1 = this;
                okhttp3.MediaType r0 = r1.val$contentType
                return r0
        }

        @Override
        public void writeTo(okio.BufferedSink r3) throws java.io.IOException {
                r2 = this;
                r0 = 0
                java.io.File r1 = r2.val$file     // Catch: java.lang.Throwable -> Le
                okio.Source r0 = okio.Okio.source(r1)     // Catch: java.lang.Throwable -> Le
                r3.writeAll(r0)     // Catch: java.lang.Throwable -> Le
                okhttp3.internal.Util.closeQuietly(r0)
                return
            Le:
                r3 = move-exception
                okhttp3.internal.Util.closeQuietly(r0)
                throw r3
        }
    }

    @kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u001a\u0010\u0003\u001a\u00020\u00042\b\u0010\u0005\u001a\u0004\u0018\u00010\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0007J.\u0010\u0003\u001a\u00020\u00042\b\u0010\u0005\u001a\u0004\u0018\u00010\u00062\u0006\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\f2\b\b\u0002\u0010\r\u001a\u00020\fH\u0007J\u001a\u0010\u0003\u001a\u00020\u00042\b\u0010\u0005\u001a\u0004\u0018\u00010\u00062\u0006\u0010\t\u001a\u00020\u000eH\u0007J\u001a\u0010\u0003\u001a\u00020\u00042\b\u0010\u0005\u001a\u0004\u0018\u00010\u00062\u0006\u0010\t\u001a\u00020\u000fH\u0007J\u001d\u0010\u0010\u001a\u00020\u0004*\u00020\b2\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006H\u0007¢\u0006\u0002\b\u0003J1\u0010\u0011\u001a\u00020\u0004*\u00020\n2\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\b\b\u0002\u0010\u000b\u001a\u00020\f2\b\b\u0002\u0010\r\u001a\u00020\fH\u0007¢\u0006\u0002\b\u0003J\u001d\u0010\u0011\u001a\u00020\u0004*\u00020\u000e2\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006H\u0007¢\u0006\u0002\b\u0003J\u001d\u0010\u0011\u001a\u00020\u0004*\u00020\u000f2\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006H\u0007¢\u0006\u0002\b\u0003¨\u0006\u0012"}, d2 = {"Lokhttp3/RequestBody$Companion;", "", "()V", "create", "Lokhttp3/RequestBody;", "contentType", "Lokhttp3/MediaType;", "file", "Ljava/io/File;", "content", "", "offset", "", "byteCount", "", "Lokio/ByteString;", "asRequestBody", "toRequestBody", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public static okhttp3.RequestBody create$default(okhttp3.RequestBody.Companion r0, java.io.File r1, okhttp3.MediaType r2, int r3, java.lang.Object r4) {
                r3 = r3 & 1
                if (r3 == 0) goto L5
                r2 = 0
            L5:
                okhttp3.RequestBody r0 = r0.create(r1, r2)
                return r0
        }

        public static okhttp3.RequestBody create$default(okhttp3.RequestBody.Companion r0, java.lang.String r1, okhttp3.MediaType r2, int r3, java.lang.Object r4) {
                r3 = r3 & 1
                if (r3 == 0) goto L5
                r2 = 0
            L5:
                okhttp3.RequestBody r0 = r0.create(r1, r2)
                return r0
        }

        public static okhttp3.RequestBody create$default(okhttp3.RequestBody.Companion r0, okhttp3.MediaType r1, byte[] r2, int r3, int r4, int r5, java.lang.Object r6) {
                r6 = r5 & 4
                if (r6 == 0) goto L5
                r3 = 0
            L5:
                r5 = r5 & 8
                if (r5 == 0) goto La
                int r4 = r2.length
            La:
                okhttp3.RequestBody r0 = r0.create(r1, r2, r3, r4)
                return r0
        }

        public static okhttp3.RequestBody create$default(okhttp3.RequestBody.Companion r0, okio.ByteString r1, okhttp3.MediaType r2, int r3, java.lang.Object r4) {
                r3 = r3 & 1
                if (r3 == 0) goto L5
                r2 = 0
            L5:
                okhttp3.RequestBody r0 = r0.create(r1, r2)
                return r0
        }

        public static okhttp3.RequestBody create$default(okhttp3.RequestBody.Companion r0, byte[] r1, okhttp3.MediaType r2, int r3, int r4, int r5, java.lang.Object r6) {
                r6 = r5 & 1
                if (r6 == 0) goto L5
                r2 = 0
            L5:
                r6 = r5 & 2
                if (r6 == 0) goto La
                r3 = 0
            La:
                r5 = r5 & 4
                if (r5 == 0) goto Lf
                int r4 = r1.length
            Lf:
                okhttp3.RequestBody r0 = r0.create(r1, r2, r3, r4)
                return r0
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(java.io.File r2, okhttp3.MediaType r3) {
                r1 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.RequestBody$Companion$asRequestBody$1 r0 = new okhttp3.RequestBody$Companion$asRequestBody$1
                r0.<init>(r3, r2)
                okhttp3.RequestBody r0 = (okhttp3.RequestBody) r0
                return r0
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(java.lang.String r4, okhttp3.MediaType r5) {
                r3 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                java.nio.charset.Charset r0 = kotlin.text.Charsets.UTF_8
                if (r5 == 0) goto L2a
                r0 = 1
                r1 = 0
                java.nio.charset.Charset r0 = okhttp3.MediaType.charset$default(r5, r1, r0, r1)
                if (r0 != 0) goto L2a
                java.nio.charset.Charset r0 = kotlin.text.Charsets.UTF_8
                okhttp3.MediaType$Companion r1 = okhttp3.MediaType.Companion
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r5)
                java.lang.String r5 = "; charset=utf-8"
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                okhttp3.MediaType r5 = r1.parse(r5)
            L2a:
                byte[] r4 = r4.getBytes(r0)
                java.lang.String r0 = "this as java.lang.String).getBytes(charset)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r0)
                r0 = 0
                int r1 = r4.length
                okhttp3.RequestBody r4 = r3.create(r4, r5, r0, r1)
                return r4
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'file' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "file.asRequestBody(contentType)", imports = {"okhttp3.RequestBody.Companion.asRequestBody"}))
        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(okhttp3.MediaType r2, java.io.File r3) {
                r1 = this;
                java.lang.String r0 = "file"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                okhttp3.RequestBody r2 = r1.create(r3, r2)
                return r2
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(okhttp3.MediaType r2, java.lang.String r3) {
                r1 = this;
                java.lang.String r0 = "content"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                okhttp3.RequestBody r2 = r1.create(r3, r2)
                return r2
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(okhttp3.MediaType r2, okio.ByteString r3) {
                r1 = this;
                java.lang.String r0 = "content"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                okhttp3.RequestBody r2 = r1.create(r3, r2)
                return r2
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType, offset, byteCount)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(okhttp3.MediaType r9, byte[] r10) {
                r8 = this;
                java.lang.String r0 = "content"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
                r4 = 0
                r5 = 0
                r6 = 12
                r7 = 0
                r1 = r8
                r2 = r9
                r3 = r10
                okhttp3.RequestBody r9 = create$default(r1, r2, r3, r4, r5, r6, r7)
                return r9
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType, offset, byteCount)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(okhttp3.MediaType r9, byte[] r10, int r11) {
                r8 = this;
                java.lang.String r0 = "content"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
                r5 = 0
                r6 = 8
                r7 = 0
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                okhttp3.RequestBody r9 = create$default(r1, r2, r3, r4, r5, r6, r7)
                return r9
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType, offset, byteCount)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(okhttp3.MediaType r2, byte[] r3, int r4, int r5) {
                r1 = this;
                java.lang.String r0 = "content"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                okhttp3.RequestBody r2 = r1.create(r3, r2, r4, r5)
                return r2
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(okio.ByteString r2, okhttp3.MediaType r3) {
                r1 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.RequestBody$Companion$toRequestBody$1 r0 = new okhttp3.RequestBody$Companion$toRequestBody$1
                r0.<init>(r3, r2)
                okhttp3.RequestBody r0 = (okhttp3.RequestBody) r0
                return r0
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(byte[] r9) {
                r8 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                r3 = 0
                r4 = 0
                r5 = 0
                r6 = 7
                r7 = 0
                r1 = r8
                r2 = r9
                okhttp3.RequestBody r9 = create$default(r1, r2, r3, r4, r5, r6, r7)
                return r9
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(byte[] r9, okhttp3.MediaType r10) {
                r8 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                r4 = 0
                r5 = 0
                r6 = 6
                r7 = 0
                r1 = r8
                r2 = r9
                r3 = r10
                okhttp3.RequestBody r9 = create$default(r1, r2, r3, r4, r5, r6, r7)
                return r9
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(byte[] r9, okhttp3.MediaType r10, int r11) {
                r8 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                r5 = 0
                r6 = 4
                r7 = 0
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                okhttp3.RequestBody r9 = create$default(r1, r2, r3, r4, r5, r6, r7)
                return r9
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.RequestBody create(byte[] r8, okhttp3.MediaType r9, int r10, int r11) {
                r7 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                int r0 = r8.length
                long r1 = (long) r0
                long r3 = (long) r10
                long r5 = (long) r11
                okhttp3.internal.Util.checkOffsetAndCount(r1, r3, r5)
                okhttp3.RequestBody$Companion$toRequestBody$2 r0 = new okhttp3.RequestBody$Companion$toRequestBody$2
                r0.<init>(r9, r11, r8, r10)
                okhttp3.RequestBody r0 = (okhttp3.RequestBody) r0
                return r0
        }
    }

    static {
            okhttp3.RequestBody$Companion r0 = new okhttp3.RequestBody$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.RequestBody.Companion = r0
            return
    }

    public RequestBody() {
            r0 = this;
            r0.<init>()
            return
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(java.io.File r1, okhttp3.MediaType r2) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(java.lang.String r1, okhttp3.MediaType r2) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'file' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "file.asRequestBody(contentType)", imports = {"okhttp3.RequestBody.Companion.asRequestBody"}))
    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(okhttp3.MediaType r1, java.io.File r2) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(okhttp3.MediaType r1, java.lang.String r2) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(okhttp3.MediaType r1, okio.ByteString r2) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType, offset, byteCount)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(okhttp3.MediaType r1, byte[] r2) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType, offset, byteCount)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(okhttp3.MediaType r1, byte[] r2, int r3) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2, r3)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.WARNING, message = "Moved to extension function. Put the 'content' argument first to fix Java", replaceWith = @kotlin.ReplaceWith(expression = "content.toRequestBody(contentType, offset, byteCount)", imports = {"okhttp3.RequestBody.Companion.toRequestBody"}))
    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(okhttp3.MediaType r1, byte[] r2, int r3, int r4) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2, r3, r4)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(okio.ByteString r1, okhttp3.MediaType r2) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(byte[] r1) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(byte[] r1, okhttp3.MediaType r2) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(byte[] r1, okhttp3.MediaType r2, int r3) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2, r3)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.RequestBody create(byte[] r1, okhttp3.MediaType r2, int r3, int r4) {
            okhttp3.RequestBody$Companion r0 = okhttp3.RequestBody.Companion
            okhttp3.RequestBody r1 = r0.create(r1, r2, r3, r4)
            return r1
    }

    public long contentLength() throws java.io.IOException {
            r2 = this;
            r0 = -1
            return r0
    }

    public abstract okhttp3.MediaType contentType();

    public boolean isDuplex() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isOneShot() {
            r1 = this;
            r0 = 0
            return r0
    }

    public abstract void writeTo(okio.BufferedSink r1) throws java.io.IOException;
}
