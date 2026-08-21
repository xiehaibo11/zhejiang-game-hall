package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicHeaderElementIterator implements cz.msebera.android.httpclient.HeaderElementIterator {
    private cz.msebera.android.httpclient.util.CharArrayBuffer buffer;
    private cz.msebera.android.httpclient.HeaderElement currentElement;
    private cz.msebera.android.httpclient.message.ParserCursor cursor;
    private final cz.msebera.android.httpclient.HeaderIterator headerIt;
    private final cz.msebera.android.httpclient.message.HeaderValueParser parser;

    public BasicHeaderElementIterator(cz.msebera.android.httpclient.HeaderIterator r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r0 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.INSTANCE
            r1.<init>(r2, r0)
            return
    }

    public BasicHeaderElementIterator(cz.msebera.android.httpclient.HeaderIterator r2, cz.msebera.android.httpclient.message.HeaderValueParser r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.currentElement = r0
            r1.buffer = r0
            r1.cursor = r0
            java.lang.String r0 = "Header iterator"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.HeaderIterator r2 = (cz.msebera.android.httpclient.HeaderIterator) r2
            r1.headerIt = r2
            java.lang.String r2 = "Parser"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r3, r2)
            cz.msebera.android.httpclient.message.HeaderValueParser r2 = (cz.msebera.android.httpclient.message.HeaderValueParser) r2
            r1.parser = r2
            return
    }

    private void bufferHeaderValue() {
            r4 = this;
            r0 = 0
            r4.cursor = r0
            r4.buffer = r0
        L5:
            cz.msebera.android.httpclient.HeaderIterator r0 = r4.headerIt
            boolean r0 = r0.hasNext()
            if (r0 == 0) goto L5a
            cz.msebera.android.httpclient.HeaderIterator r0 = r4.headerIt
            cz.msebera.android.httpclient.Header r0 = r0.nextHeader()
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.FormattedHeader
            r2 = 0
            if (r1 == 0) goto L37
            cz.msebera.android.httpclient.FormattedHeader r0 = (cz.msebera.android.httpclient.FormattedHeader) r0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r0.getBuffer()
            r4.buffer = r1
            cz.msebera.android.httpclient.message.ParserCursor r1 = new cz.msebera.android.httpclient.message.ParserCursor
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = r4.buffer
            int r3 = r3.length()
            r1.<init>(r2, r3)
            r4.cursor = r1
            cz.msebera.android.httpclient.message.ParserCursor r1 = r4.cursor
            int r0 = r0.getValuePos()
            r1.updatePos(r0)
            goto L5a
        L37:
            java.lang.String r0 = r0.getValue()
            if (r0 == 0) goto L5
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r3 = r0.length()
            r1.<init>(r3)
            r4.buffer = r1
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r4.buffer
            r1.append(r0)
            cz.msebera.android.httpclient.message.ParserCursor r0 = new cz.msebera.android.httpclient.message.ParserCursor
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r4.buffer
            int r1 = r1.length()
            r0.<init>(r2, r1)
            r4.cursor = r0
        L5a:
            return
    }

    private void parseNextElement() {
            r3 = this;
        L0:
            cz.msebera.android.httpclient.HeaderIterator r0 = r3.headerIt
            boolean r0 = r0.hasNext()
            if (r0 != 0) goto Le
            cz.msebera.android.httpclient.message.ParserCursor r0 = r3.cursor
            if (r0 == 0) goto Ld
            goto Le
        Ld:
            return
        Le:
            cz.msebera.android.httpclient.message.ParserCursor r0 = r3.cursor
            if (r0 == 0) goto L18
            boolean r0 = r0.atEnd()
            if (r0 == 0) goto L1b
        L18:
            r3.bufferHeaderValue()
        L1b:
            cz.msebera.android.httpclient.message.ParserCursor r0 = r3.cursor
            if (r0 == 0) goto L0
        L1f:
            cz.msebera.android.httpclient.message.ParserCursor r0 = r3.cursor
            boolean r0 = r0.atEnd()
            if (r0 != 0) goto L44
            cz.msebera.android.httpclient.message.HeaderValueParser r0 = r3.parser
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r3.buffer
            cz.msebera.android.httpclient.message.ParserCursor r2 = r3.cursor
            cz.msebera.android.httpclient.HeaderElement r0 = r0.parseHeaderElement(r1, r2)
            java.lang.String r1 = r0.getName()
            int r1 = r1.length()
            if (r1 != 0) goto L41
            java.lang.String r1 = r0.getValue()
            if (r1 == 0) goto L1f
        L41:
            r3.currentElement = r0
            return
        L44:
            cz.msebera.android.httpclient.message.ParserCursor r0 = r3.cursor
            boolean r0 = r0.atEnd()
            if (r0 == 0) goto L0
            r0 = 0
            r3.cursor = r0
            r3.buffer = r0
            goto L0
    }

    @Override
    public boolean hasNext() {
            r1 = this;
            cz.msebera.android.httpclient.HeaderElement r0 = r1.currentElement
            if (r0 != 0) goto L7
            r1.parseNextElement()
        L7:
            cz.msebera.android.httpclient.HeaderElement r0 = r1.currentElement
            if (r0 == 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    @Override
    public final java.lang.Object next() throws java.util.NoSuchElementException {
            r1 = this;
            cz.msebera.android.httpclient.HeaderElement r0 = r1.nextElement()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HeaderElement nextElement() throws java.util.NoSuchElementException {
            r2 = this;
            cz.msebera.android.httpclient.HeaderElement r0 = r2.currentElement
            if (r0 != 0) goto L7
            r2.parseNextElement()
        L7:
            cz.msebera.android.httpclient.HeaderElement r0 = r2.currentElement
            if (r0 == 0) goto Lf
            r1 = 0
            r2.currentElement = r1
            return r0
        Lf:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            java.lang.String r1 = "No more header elements available"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void remove() throws java.lang.UnsupportedOperationException {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Remove not supported"
            r0.<init>(r1)
            throw r0
    }
}
