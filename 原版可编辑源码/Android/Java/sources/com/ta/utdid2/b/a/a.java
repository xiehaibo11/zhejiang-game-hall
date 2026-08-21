package com.ta.utdid2.b.a;

import cz.msebera.android.httpclient.message.TokenParser;
import java.io.IOException;
import java.io.OutputStream;
import java.io.UnsupportedEncodingException;
import java.io.Writer;
import java.nio.ByteBuffer;
import java.nio.CharBuffer;
import java.nio.charset.Charset;
import java.nio.charset.CharsetEncoder;
import java.nio.charset.CoderResult;
import java.nio.charset.IllegalCharsetNameException;
import java.nio.charset.UnsupportedCharsetException;
import kotlin.text.Typography;
import org.xmlpull.v1.XmlSerializer;

class a implements XmlSerializer {
    private static final String[] a = {null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, "&quot;", null, null, null, "&amp;", null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, "&lt;", null, "&gt;", null};
    private OutputStream a;
    private Writer a;
    private CharsetEncoder a;
    private boolean b;
    private int mPos;
    private final char[] a = new char[8192];
    private ByteBuffer a = ByteBuffer.allocate(8192);

    a() {
    }

    private void append(char c) throws IOException {
        int i = this.mPos;
        if (i >= 8191) {
            flush();
            i = this.mPos;
        }
        this.a[i] = c;
        this.mPos = i + 1;
    }

    private void a(String str, int i, int i2) throws IOException {
        if (i2 > 8192) {
            int i3 = i2 + i;
            while (i < i3) {
                int i4 = i + 8192;
                a(str, i, i4 < i3 ? 8192 : i3 - i);
                i = i4;
            }
            return;
        }
        int i5 = this.mPos;
        if (i5 + i2 > 8192) {
            flush();
            i5 = this.mPos;
        }
        str.getChars(i, i + i2, this.a, i5);
        this.mPos = i5 + i2;
    }

    private void append(char[] cArr, int i, int i2) throws IOException {
        if (i2 > 8192) {
            int i3 = i2 + i;
            while (i < i3) {
                int i4 = i + 8192;
                append(cArr, i, i4 < i3 ? 8192 : i3 - i);
                i = i4;
            }
            return;
        }
        int i5 = this.mPos;
        if (i5 + i2 > 8192) {
            flush();
            i5 = this.mPos;
        }
        System.arraycopy(cArr, i, this.a, i5, i2);
        this.mPos = i5 + i2;
    }

    private void append(String str) throws IOException {
        a(str, 0, str.length());
    }

    private void a(String str) throws IOException {
        String str2;
        int length = str.length();
        String[] strArr = a;
        char length2 = (char) strArr.length;
        int i = 0;
        int i2 = 0;
        while (i < length) {
            char cCharAt = str.charAt(i);
            if (cCharAt < length2 && (str2 = strArr[cCharAt]) != null) {
                if (i2 < i) {
                    a(str, i2, i - i2);
                }
                i2 = i + 1;
                append(str2);
            }
            i++;
        }
        if (i2 < i) {
            a(str, i2, i - i2);
        }
    }

    private void a(char[] cArr, int i, int i2) throws IOException {
        String str;
        String[] strArr = a;
        char length = (char) strArr.length;
        int i3 = i2 + i;
        int i4 = i;
        while (i < i3) {
            char c = cArr[i];
            if (c < length && (str = strArr[c]) != null) {
                if (i4 < i) {
                    append(cArr, i4, i - i4);
                }
                i4 = i + 1;
                append(str);
            }
            i++;
        }
        if (i4 < i) {
            append(cArr, i4, i - i4);
        }
    }

    @Override
    public XmlSerializer attribute(String str, String str2, String str3) throws IllegalStateException, IOException, IllegalArgumentException {
        append(TokenParser.SP);
        if (str != null) {
            append(str);
            append(':');
        }
        append(str2);
        append("=\"");
        a(str3);
        append('\"');
        return this;
    }

    @Override
    public void cdsect(String str) throws IllegalStateException, IOException, IllegalArgumentException {
        throw new UnsupportedOperationException();
    }

    @Override
    public void comment(String str) throws IllegalStateException, IOException, IllegalArgumentException {
        throw new UnsupportedOperationException();
    }

    @Override
    public void docdecl(String str) throws IllegalStateException, IOException, IllegalArgumentException {
        throw new UnsupportedOperationException();
    }

    @Override
    public void endDocument() throws IllegalStateException, IOException, IllegalArgumentException {
        flush();
    }

    @Override
    public XmlSerializer endTag(String str, String str2) throws IllegalStateException, IOException, IllegalArgumentException {
        if (this.b) {
            append(" />\n");
        } else {
            append("</");
            if (str != null) {
                append(str);
                append(':');
            }
            append(str2);
            append(">\n");
        }
        this.b = false;
        return this;
    }

    @Override
    public void entityRef(String str) throws IllegalStateException, IOException, IllegalArgumentException {
        throw new UnsupportedOperationException();
    }

    private void a() throws IOException {
        int iPosition = this.a.position();
        if (iPosition > 0) {
            this.a.flip();
            this.a.write(this.a.array(), 0, iPosition);
            this.a.clear();
        }
    }

    @Override
    public void flush() throws IOException {
        int i = this.mPos;
        if (i > 0) {
            if (this.a != null) {
                CharBuffer charBufferWrap = CharBuffer.wrap(this.a, 0, i);
                CoderResult coderResultEncode = this.a.encode(charBufferWrap, this.a, true);
                while (!coderResultEncode.isError()) {
                    if (coderResultEncode.isOverflow()) {
                        a();
                        coderResultEncode = this.a.encode(charBufferWrap, this.a, true);
                    } else {
                        a();
                        this.a.flush();
                    }
                }
                throw new IOException(coderResultEncode.toString());
            }
            this.a.write(this.a, 0, i);
            this.a.flush();
            this.mPos = 0;
        }
    }

    @Override
    public int getDepth() {
        throw new UnsupportedOperationException();
    }

    @Override
    public boolean getFeature(String str) {
        throw new UnsupportedOperationException();
    }

    @Override
    public String getName() {
        throw new UnsupportedOperationException();
    }

    @Override
    public String getNamespace() {
        throw new UnsupportedOperationException();
    }

    @Override
    public String getPrefix(String str, boolean z) throws IllegalArgumentException {
        throw new UnsupportedOperationException();
    }

    @Override
    public Object getProperty(String str) {
        throw new UnsupportedOperationException();
    }

    @Override
    public void ignorableWhitespace(String str) throws IllegalStateException, IOException, IllegalArgumentException {
        throw new UnsupportedOperationException();
    }

    @Override
    public void processingInstruction(String str) throws IllegalStateException, IOException, IllegalArgumentException {
        throw new UnsupportedOperationException();
    }

    @Override
    public void setFeature(String str, boolean z) throws IllegalStateException, IllegalArgumentException {
        if (!str.equals("http://xmlpull.org/v1/doc/features.html#indent-output")) {
            throw new UnsupportedOperationException();
        }
    }

    @Override
    public void setOutput(OutputStream outputStream, String str) throws IllegalStateException, IOException, IllegalArgumentException {
        if (outputStream == null) {
            throw new IllegalArgumentException();
        }
        try {
            this.a = Charset.forName(str).newEncoder();
            this.a = outputStream;
        } catch (IllegalCharsetNameException e) {
            throw ((UnsupportedEncodingException) new UnsupportedEncodingException(str).initCause(e));
        } catch (UnsupportedCharsetException e2) {
            throw ((UnsupportedEncodingException) new UnsupportedEncodingException(str).initCause(e2));
        }
    }

    @Override
    public void setOutput(Writer writer) throws IllegalStateException, IOException, IllegalArgumentException {
        this.a = writer;
    }

    @Override
    public void setPrefix(String str, String str2) throws IllegalStateException, IOException, IllegalArgumentException {
        throw new UnsupportedOperationException();
    }

    @Override
    public void setProperty(String str, Object obj) throws IllegalStateException, IllegalArgumentException {
        throw new UnsupportedOperationException();
    }

    @Override
    public void startDocument(String str, Boolean bool) throws IllegalStateException, IOException, IllegalArgumentException {
        StringBuilder sb = new StringBuilder();
        sb.append("<?xml version='1.0' encoding='utf-8' standalone='");
        sb.append(bool.booleanValue() ? "yes" : "no");
        sb.append("' ?>\n");
        append(sb.toString());
    }

    @Override
    public XmlSerializer startTag(String str, String str2) throws IllegalStateException, IOException, IllegalArgumentException {
        if (this.b) {
            append(">\n");
        }
        append(Typography.less);
        if (str != null) {
            append(str);
            append(':');
        }
        append(str2);
        this.b = true;
        return this;
    }

    @Override
    public XmlSerializer text(char[] cArr, int i, int i2) throws IllegalStateException, IOException, IllegalArgumentException {
        if (this.b) {
            append(">");
            this.b = false;
        }
        a(cArr, i, i2);
        return this;
    }

    @Override
    public XmlSerializer text(String str) throws IllegalStateException, IOException, IllegalArgumentException {
        if (this.b) {
            append(">");
            this.b = false;
        }
        a(str);
        return this;
    }
}
