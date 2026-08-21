package okhttp3;

@kotlin.Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\u0018\u0000 \u001c2\u00020\u0001:\u0002\u001b\u001cB#\b\u0000\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0002\u0010\u0006J\b\u0010\n\u001a\u00020\u000bH\u0016J\b\u0010\f\u001a\u00020\rH\u0016J\u000e\u0010\u000e\u001a\u00020\u00042\u0006\u0010\u000f\u001a\u00020\bJ\u000e\u0010\u0010\u001a\u00020\u00042\u0006\u0010\u000f\u001a\u00020\bJ\u000e\u0010\u0011\u001a\u00020\u00042\u0006\u0010\u000f\u001a\u00020\bJ\r\u0010\u0007\u001a\u00020\bH\u0007¢\u0006\u0002\b\u0012J\u000e\u0010\u0013\u001a\u00020\u00042\u0006\u0010\u000f\u001a\u00020\bJ\u001a\u0010\u0014\u001a\u00020\u000b2\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0017\u001a\u00020\u0018H\u0002J\u0010\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u0015\u001a\u00020\u0016H\u0016R\u0014\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\u0007\u001a\u00020\b8G¢\u0006\u0006\u001a\u0004\b\u0007\u0010\t¨\u0006\u001d"}, d2 = {"Lokhttp3/FormBody;", "Lokhttp3/RequestBody;", "encodedNames", "", "", "encodedValues", "(Ljava/util/List;Ljava/util/List;)V", "size", "", "()I", "contentLength", "", "contentType", "Lokhttp3/MediaType;", "encodedName", "index", "encodedValue", "name", "-deprecated_size", "value", "writeOrCountBytes", "sink", "Lokio/BufferedSink;", "countBytes", "", "writeTo", "", "Builder", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class FormBody extends okhttp3.RequestBody {
    private static final okhttp3.MediaType CONTENT_TYPE = null;
    public static final okhttp3.FormBody.Companion Companion = null;
    private final java.util.List<java.lang.String> encodedNames;
    private final java.util.List<java.lang.String> encodedValues;

    @kotlin.Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010!\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0013\b\u0007\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0002\u0010\u0004J\u0016\u0010\t\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\u0007J\u0016\u0010\f\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\u0007J\u0006\u0010\r\u001a\u00020\u000eR\u0010\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lokhttp3/FormBody$Builder;", "", "charset", "Ljava/nio/charset/Charset;", "(Ljava/nio/charset/Charset;)V", "names", "", "", "values", "add", "name", "value", "addEncoded", "build", "Lokhttp3/FormBody;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Builder {
        private final java.nio.charset.Charset charset;
        private final java.util.List<java.lang.String> names;
        private final java.util.List<java.lang.String> values;

        public Builder() {
                r2 = this;
                r0 = 0
                r1 = 1
                r2.<init>(r0, r1, r0)
                return
        }

        public Builder(java.nio.charset.Charset r1) {
                r0 = this;
                r0.<init>()
                r0.charset = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                java.util.List r1 = (java.util.List) r1
                r0.names = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                java.util.List r1 = (java.util.List) r1
                r0.values = r1
                return
        }

        public Builder(java.nio.charset.Charset r1, int r2, kotlin.jvm.internal.DefaultConstructorMarker r3) {
                r0 = this;
                r2 = r2 & 1
                if (r2 == 0) goto L5
                r1 = 0
            L5:
                r0.<init>(r1)
                return
        }

        public final okhttp3.FormBody.Builder add(java.lang.String r16, java.lang.String r17) {
                r15 = this;
                java.lang.String r0 = "name"
                r2 = r16
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "value"
                r13 = r17
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
                r0 = r15
                okhttp3.FormBody$Builder r0 = (okhttp3.FormBody.Builder) r0
                java.util.List<java.lang.String> r1 = r0.names
                r14 = r1
                java.util.Collection r14 = (java.util.Collection) r14
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.nio.charset.Charset r10 = r0.charset
                r3 = 0
                r4 = 0
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r6 = 0
                r7 = 0
                r8 = 1
                r9 = 0
                r11 = 91
                r12 = 0
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r14.add(r1)
                java.util.List<java.lang.String> r1 = r0.values
                r14 = r1
                java.util.Collection r14 = (java.util.Collection) r14
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.nio.charset.Charset r10 = r0.charset
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r2 = r17
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r14.add(r1)
                return r0
        }

        public final okhttp3.FormBody.Builder addEncoded(java.lang.String r16, java.lang.String r17) {
                r15 = this;
                java.lang.String r0 = "name"
                r2 = r16
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "value"
                r13 = r17
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
                r0 = r15
                okhttp3.FormBody$Builder r0 = (okhttp3.FormBody.Builder) r0
                java.util.List<java.lang.String> r1 = r0.names
                r14 = r1
                java.util.Collection r14 = (java.util.Collection) r14
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.nio.charset.Charset r10 = r0.charset
                r3 = 0
                r4 = 0
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r6 = 1
                r7 = 0
                r8 = 1
                r9 = 0
                r11 = 83
                r12 = 0
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r14.add(r1)
                java.util.List<java.lang.String> r1 = r0.values
                r14 = r1
                java.util.Collection r14 = (java.util.Collection) r14
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.nio.charset.Charset r10 = r0.charset
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#&!$(),~"
                r2 = r17
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r14.add(r1)
                return r0
        }

        public final okhttp3.FormBody build() {
                r3 = this;
                okhttp3.FormBody r0 = new okhttp3.FormBody
                java.util.List<java.lang.String> r1 = r3.names
                java.util.List<java.lang.String> r2 = r3.values
                r0.<init>(r1, r2)
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0005"}, d2 = {"Lokhttp3/FormBody$Companion;", "", "()V", "CONTENT_TYPE", "Lokhttp3/MediaType;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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
    }

    static {
            okhttp3.FormBody$Companion r0 = new okhttp3.FormBody$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.FormBody.Companion = r0
            okhttp3.MediaType$Companion r0 = okhttp3.MediaType.Companion
            java.lang.String r1 = "application/x-www-form-urlencoded"
            okhttp3.MediaType r0 = r0.get(r1)
            okhttp3.FormBody.CONTENT_TYPE = r0
            return
    }

    public FormBody(java.util.List<java.lang.String> r2, java.util.List<java.lang.String> r3) {
            r1 = this;
            java.lang.String r0 = "encodedNames"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "encodedValues"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            java.util.List r2 = okhttp3.internal.Util.toImmutableList(r2)
            r1.encodedNames = r2
            java.util.List r2 = okhttp3.internal.Util.toImmutableList(r3)
            r1.encodedValues = r2
            return
    }

    private final long writeOrCountBytes(okio.BufferedSink r5, boolean r6) {
            r4 = this;
            if (r6 == 0) goto L8
            okio.Buffer r5 = new okio.Buffer
            r5.<init>()
            goto Lf
        L8:
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            okio.Buffer r5 = r5.getBuffer()
        Lf:
            r0 = 0
            java.util.List<java.lang.String> r1 = r4.encodedNames
            int r1 = r1.size()
        L16:
            if (r0 >= r1) goto L3e
            int r2 = r0 + 1
            if (r0 <= 0) goto L21
            r3 = 38
            r5.writeByte(r3)
        L21:
            java.util.List<java.lang.String> r3 = r4.encodedNames
            java.lang.Object r3 = r3.get(r0)
            java.lang.String r3 = (java.lang.String) r3
            r5.writeUtf8(r3)
            r3 = 61
            r5.writeByte(r3)
            java.util.List<java.lang.String> r3 = r4.encodedValues
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r5.writeUtf8(r0)
            r0 = r2
            goto L16
        L3e:
            if (r6 == 0) goto L48
            long r0 = r5.size()
            r5.clear()
            goto L4a
        L48:
            r0 = 0
        L4a:
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "size", imports = {}))
    public final int -deprecated_size() {
            r1 = this;
            int r0 = r1.size()
            return r0
    }

    @Override
    public long contentLength() {
            r2 = this;
            r0 = 0
            r1 = 1
            long r0 = r2.writeOrCountBytes(r0, r1)
            return r0
    }

    @Override
    public okhttp3.MediaType contentType() {
            r1 = this;
            okhttp3.MediaType r0 = okhttp3.FormBody.CONTENT_TYPE
            return r0
    }

    public final java.lang.String encodedName(int r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.encodedNames
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public final java.lang.String encodedValue(int r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.encodedValues
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public final java.lang.String name(int r8) {
            r7 = this;
            okhttp3.HttpUrl$Companion r0 = okhttp3.HttpUrl.Companion
            java.lang.String r1 = r7.encodedName(r8)
            r2 = 0
            r3 = 0
            r4 = 1
            r5 = 3
            r6 = 0
            java.lang.String r8 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r0, r1, r2, r3, r4, r5, r6)
            return r8
    }

    public final int size() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.encodedNames
            int r0 = r0.size()
            return r0
    }

    public final java.lang.String value(int r8) {
            r7 = this;
            okhttp3.HttpUrl$Companion r0 = okhttp3.HttpUrl.Companion
            java.lang.String r1 = r7.encodedValue(r8)
            r2 = 0
            r3 = 0
            r4 = 1
            r5 = 3
            r6 = 0
            java.lang.String r8 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r0, r1, r2, r3, r4, r5, r6)
            return r8
    }

    @Override
    public void writeTo(okio.BufferedSink r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 0
            r1.writeOrCountBytes(r2, r0)
            return
    }
}
