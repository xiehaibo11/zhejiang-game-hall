package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicTokenIterator implements cz.msebera.android.httpclient.TokenIterator {
    public static final java.lang.String HTTP_SEPARATORS = " ,;=()<>@:\\\"/[]?{}\t";
    protected java.lang.String currentHeader;
    protected java.lang.String currentToken;
    protected final cz.msebera.android.httpclient.HeaderIterator headerIt;
    protected int searchPos;

    public BasicTokenIterator(cz.msebera.android.httpclient.HeaderIterator r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Header iterator"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.HeaderIterator r2 = (cz.msebera.android.httpclient.HeaderIterator) r2
            r1.headerIt = r2
            r2 = -1
            int r2 = r1.findNext(r2)
            r1.searchPos = r2
            return
    }

    protected java.lang.String createToken(java.lang.String r1, int r2, int r3) {
            r0 = this;
            java.lang.String r1 = r1.substring(r2, r3)
            return r1
    }

    protected int findNext(int r3) throws cz.msebera.android.httpclient.ParseException {
            r2 = this;
            r0 = -1
            if (r3 >= 0) goto L1a
            cz.msebera.android.httpclient.HeaderIterator r3 = r2.headerIt
            boolean r3 = r3.hasNext()
            if (r3 != 0) goto Lc
            return r0
        Lc:
            cz.msebera.android.httpclient.HeaderIterator r3 = r2.headerIt
            cz.msebera.android.httpclient.Header r3 = r3.nextHeader()
            java.lang.String r3 = r3.getValue()
            r2.currentHeader = r3
            r3 = 0
            goto L1e
        L1a:
            int r3 = r2.findTokenSeparator(r3)
        L1e:
            int r3 = r2.findTokenStart(r3)
            if (r3 >= 0) goto L28
            r3 = 0
            r2.currentToken = r3
            return r0
        L28:
            int r0 = r2.findTokenEnd(r3)
            java.lang.String r1 = r2.currentHeader
            java.lang.String r3 = r2.createToken(r1, r3, r0)
            r2.currentToken = r3
            return r0
    }

    protected int findTokenEnd(int r3) {
            r2 = this;
            java.lang.String r0 = "Search position"
            cz.msebera.android.httpclient.util.Args.notNegative(r3, r0)
            java.lang.String r0 = r2.currentHeader
            int r0 = r0.length()
        Lb:
            int r3 = r3 + 1
            if (r3 >= r0) goto L1c
            java.lang.String r1 = r2.currentHeader
            char r1 = r1.charAt(r3)
            boolean r1 = r2.isTokenChar(r1)
            if (r1 == 0) goto L1c
            goto Lb
        L1c:
            return r3
    }

    protected int findTokenSeparator(int r5) {
            r4 = this;
            java.lang.String r0 = "Search position"
            int r5 = cz.msebera.android.httpclient.util.Args.notNegative(r5, r0)
            java.lang.String r0 = r4.currentHeader
            int r0 = r0.length()
            r1 = 0
        Ld:
            if (r1 != 0) goto L6e
            if (r5 >= r0) goto L6e
            java.lang.String r2 = r4.currentHeader
            char r2 = r2.charAt(r5)
            boolean r3 = r4.isTokenSeparator(r2)
            if (r3 == 0) goto L1f
            r1 = 1
            goto Ld
        L1f:
            boolean r3 = r4.isWhitespace(r2)
            if (r3 == 0) goto L28
            int r5 = r5 + 1
            goto Ld
        L28:
            boolean r0 = r4.isTokenChar(r2)
            java.lang.String r1 = "): "
            if (r0 == 0) goto L4f
            cz.msebera.android.httpclient.ParseException r0 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Tokens without separator (pos "
            r2.append(r3)
            r2.append(r5)
            r2.append(r1)
            java.lang.String r5 = r4.currentHeader
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L4f:
            cz.msebera.android.httpclient.ParseException r0 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Invalid character after token (pos "
            r2.append(r3)
            r2.append(r5)
            r2.append(r1)
            java.lang.String r5 = r4.currentHeader
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L6e:
            return r5
    }

    protected int findTokenStart(int r6) {
            r5 = this;
            java.lang.String r0 = "Search position"
            int r6 = cz.msebera.android.httpclient.util.Args.notNegative(r6, r0)
            r0 = 0
            r1 = r6
            r6 = 0
        L9:
            if (r6 != 0) goto L78
            java.lang.String r2 = r5.currentHeader
            if (r2 == 0) goto L78
            int r2 = r2.length()
        L13:
            if (r6 != 0) goto L5c
            if (r1 >= r2) goto L5c
            java.lang.String r3 = r5.currentHeader
            char r3 = r3.charAt(r1)
            boolean r4 = r5.isTokenSeparator(r3)
            if (r4 != 0) goto L59
            boolean r3 = r5.isWhitespace(r3)
            if (r3 == 0) goto L2a
            goto L59
        L2a:
            java.lang.String r6 = r5.currentHeader
            char r6 = r6.charAt(r1)
            boolean r6 = r5.isTokenChar(r6)
            if (r6 == 0) goto L38
            r6 = 1
            goto L13
        L38:
            cz.msebera.android.httpclient.ParseException r6 = new cz.msebera.android.httpclient.ParseException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Invalid character before token (pos "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = "): "
            r0.append(r1)
            java.lang.String r1 = r5.currentHeader
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L59:
            int r1 = r1 + 1
            goto L13
        L5c:
            if (r6 != 0) goto L9
            cz.msebera.android.httpclient.HeaderIterator r2 = r5.headerIt
            boolean r2 = r2.hasNext()
            if (r2 == 0) goto L74
            cz.msebera.android.httpclient.HeaderIterator r1 = r5.headerIt
            cz.msebera.android.httpclient.Header r1 = r1.nextHeader()
            java.lang.String r1 = r1.getValue()
            r5.currentHeader = r1
            r1 = 0
            goto L9
        L74:
            r2 = 0
            r5.currentHeader = r2
            goto L9
        L78:
            if (r6 == 0) goto L7b
            goto L7c
        L7b:
            r1 = -1
        L7c:
            return r1
    }

    @Override
    public boolean hasNext() {
            r1 = this;
            java.lang.String r0 = r1.currentToken
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    protected boolean isHttpSeparator(char r2) {
            r1 = this;
            java.lang.String r0 = " ,;=()<>@:\\\"/[]?{}\t"
            int r2 = r0.indexOf(r2)
            if (r2 < 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    protected boolean isTokenChar(char r4) {
            r3 = this;
            boolean r0 = java.lang.Character.isLetterOrDigit(r4)
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = java.lang.Character.isISOControl(r4)
            r2 = 0
            if (r0 == 0) goto L10
            return r2
        L10:
            boolean r4 = r3.isHttpSeparator(r4)
            if (r4 == 0) goto L17
            return r2
        L17:
            return r1
    }

    protected boolean isTokenSeparator(char r2) {
            r1 = this;
            r0 = 44
            if (r2 != r0) goto L6
            r2 = 1
            goto L7
        L6:
            r2 = 0
        L7:
            return r2
    }

    protected boolean isWhitespace(char r2) {
            r1 = this;
            r0 = 9
            if (r2 == r0) goto Ld
            boolean r2 = java.lang.Character.isSpaceChar(r2)
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            r2 = 0
            goto Le
        Ld:
            r2 = 1
        Le:
            return r2
    }

    @Override
    public final java.lang.Object next() throws java.util.NoSuchElementException, cz.msebera.android.httpclient.ParseException {
            r1 = this;
            java.lang.String r0 = r1.nextToken()
            return r0
    }

    @Override
    public java.lang.String nextToken() throws java.util.NoSuchElementException, cz.msebera.android.httpclient.ParseException {
            r2 = this;
            java.lang.String r0 = r2.currentToken
            if (r0 == 0) goto Ld
            int r1 = r2.searchPos
            int r1 = r2.findNext(r1)
            r2.searchPos = r1
            return r0
        Ld:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            java.lang.String r1 = "Iteration already finished."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final void remove() throws java.lang.UnsupportedOperationException {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Removing tokens is not supported."
            r0.<init>(r1)
            throw r0
    }
}
