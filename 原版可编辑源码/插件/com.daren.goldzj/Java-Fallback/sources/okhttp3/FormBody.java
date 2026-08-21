package okhttp3;

import java.io.IOException;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.List;
import javax.annotation.Nullable;
import okhttp3.internal.Util;
import okio.Buffer;
import okio.BufferedSink;

public final class FormBody extends RequestBody {
    private static final MediaType CONTENT_TYPE = null;
    private final List<String> encodedNames;
    private final List<String> encodedValues;

    public static final class Builder {
        private final Charset charset;
        private final List<String> names;
        private final List<String> values;

        public Builder() {
            this(null);
        }

        public Builder(Charset r2) {
            this.names = new ArrayList();
            this.values = new ArrayList();
            this.charset = r2;
        }

        public Builder add(String r9, String r10) {
            if (r9 == null) goto L9;
            if (r10 == null) goto L7;
            this.names.add(HttpUrl.canonicalize(r9, " \"':;<=>@[]^`{}|/\\?#&!$(),~", false, false, true, true, this.charset));
            this.values.add(HttpUrl.canonicalize(r10, " \"':;<=>@[]^`{}|/\\?#&!$(),~", false, false, true, true, this.charset));
            return this;
        L7:
            throw new NullPointerException("value == null");
        L9:
            throw new NullPointerException("name == null");
        }

        public Builder addEncoded(String r9, String r10) {
            if (r9 == null) goto L9;
            if (r10 == null) goto L7;
            this.names.add(HttpUrl.canonicalize(r9, " \"':;<=>@[]^`{}|/\\?#&!$(),~", true, false, true, true, this.charset));
            this.values.add(HttpUrl.canonicalize(r10, " \"':;<=>@[]^`{}|/\\?#&!$(),~", true, false, true, true, this.charset));
            return this;
        L7:
            throw new NullPointerException("value == null");
        L9:
            throw new NullPointerException("name == null");
        }

        public FormBody build() {
            return new FormBody(this.names, this.values);
        }
    }

    static {
        CONTENT_TYPE = MediaType.get("application/x-www-form-urlencoded");
    }

    FormBody(List<String> r1, List<String> r2) {
        this.encodedNames = Util.immutableList(r1);
        this.encodedValues = Util.immutableList(r2);
    }

    public int size() {
        return this.encodedNames.size();
    }

    public String encodedName(int r2) {
        return this.encodedNames.get(r2);
    }

    public String name(int r2) {
        return HttpUrl.percentDecode(encodedName(r2), true);
    }

    public String encodedValue(int r2) {
        return this.encodedValues.get(r2);
    }

    public String value(int r2) {
        return HttpUrl.percentDecode(encodedValue(r2), true);
    }

    @Override
    public MediaType contentType() {
        return CONTENT_TYPE;
    }

    @Override
    public long contentLength() {
        return writeOrCountBytes(null, true);
    }

    @Override
    public void writeTo(BufferedSink r2) throws IOException {
        writeOrCountBytes(r2, false);
    }

    private long writeOrCountBytes(@Nullable BufferedSink r4, boolean r5) {
        if (r5 == false) goto L4;
        Buffer r42 = new Buffer();
    L5:
        int r0 = 0;
        int r1 = this.encodedNames.size();
    L6:
        if (r0 >= r1) goto L10;
        if (r0 <= 0) goto L9;
        r42.writeByte(38);
    L9:
        r42.writeUtf8(this.encodedNames.get(r0));
        r42.writeByte(61);
        r42.writeUtf8(this.encodedValues.get(r0));
        r0 = r0 + 1;
        goto L6
    L10:
        if (r5 == false) goto L12;
        long r02 = r42.size();
        r42.clear();
        return r02;
    L12:
        return 0;
    L4:
        r42 = r4.buffer();
        goto L5
    }
}
