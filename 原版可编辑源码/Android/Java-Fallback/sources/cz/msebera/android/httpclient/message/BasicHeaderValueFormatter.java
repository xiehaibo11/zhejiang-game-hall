package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicHeaderValueFormatter implements cz.msebera.android.httpclient.message.HeaderValueFormatter {

    @java.lang.Deprecated
    public static final cz.msebera.android.httpclient.message.BasicHeaderValueFormatter DEFAULT = null;
    public static final cz.msebera.android.httpclient.message.BasicHeaderValueFormatter INSTANCE = null;
    public static final java.lang.String SEPARATORS = " ;,:@()<>\\\"/[]?={}\t";
    public static final java.lang.String UNSAFE_CHARS = "\"\\";

    static {
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter r0 = new cz.msebera.android.httpclient.message.BasicHeaderValueFormatter
            r0.<init>()
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter.DEFAULT = r0
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter r0 = new cz.msebera.android.httpclient.message.BasicHeaderValueFormatter
            r0.<init>()
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter.INSTANCE = r0
            return
    }

    public BasicHeaderValueFormatter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String formatElements(cz.msebera.android.httpclient.HeaderElement[] r1, boolean r2, cz.msebera.android.httpclient.message.HeaderValueFormatter r3) {
            if (r3 == 0) goto L3
            goto L5
        L3:
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter r3 = cz.msebera.android.httpclient.message.BasicHeaderValueFormatter.INSTANCE
        L5:
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r3.formatElements(r0, r1, r2)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public static java.lang.String formatHeaderElement(cz.msebera.android.httpclient.HeaderElement r1, boolean r2, cz.msebera.android.httpclient.message.HeaderValueFormatter r3) {
            if (r3 == 0) goto L3
            goto L5
        L3:
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter r3 = cz.msebera.android.httpclient.message.BasicHeaderValueFormatter.INSTANCE
        L5:
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r3.formatHeaderElement(r0, r1, r2)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public static java.lang.String formatNameValuePair(cz.msebera.android.httpclient.NameValuePair r1, boolean r2, cz.msebera.android.httpclient.message.HeaderValueFormatter r3) {
            if (r3 == 0) goto L3
            goto L5
        L3:
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter r3 = cz.msebera.android.httpclient.message.BasicHeaderValueFormatter.INSTANCE
        L5:
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r3.formatNameValuePair(r0, r1, r2)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public static java.lang.String formatParameters(cz.msebera.android.httpclient.NameValuePair[] r1, boolean r2, cz.msebera.android.httpclient.message.HeaderValueFormatter r3) {
            if (r3 == 0) goto L3
            goto L5
        L3:
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter r3 = cz.msebera.android.httpclient.message.BasicHeaderValueFormatter.INSTANCE
        L5:
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r3.formatParameters(r0, r1, r2)
            java.lang.String r1 = r1.toString()
            return r1
    }

    protected void doFormatValue(cz.msebera.android.httpclient.util.CharArrayBuffer r5, java.lang.String r6, boolean r7) {
            r4 = this;
            r0 = 0
            if (r7 != 0) goto L19
            r1 = r7
            r7 = 0
        L5:
            int r2 = r6.length()
            if (r7 >= r2) goto L18
            if (r1 != 0) goto L18
            char r1 = r6.charAt(r7)
            boolean r1 = r4.isSeparator(r1)
            int r7 = r7 + 1
            goto L5
        L18:
            r7 = r1
        L19:
            r1 = 34
            if (r7 == 0) goto L20
            r5.append(r1)
        L20:
            int r2 = r6.length()
            if (r0 >= r2) goto L3b
            char r2 = r6.charAt(r0)
            boolean r3 = r4.isUnsafe(r2)
            if (r3 == 0) goto L35
            r3 = 92
            r5.append(r3)
        L35:
            r5.append(r2)
            int r0 = r0 + 1
            goto L20
        L3b:
            if (r7 == 0) goto L40
            r5.append(r1)
        L40:
            return
    }

    protected int estimateElementsLen(cz.msebera.android.httpclient.HeaderElement[] r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L1a
            int r1 = r5.length
            r2 = 1
            if (r1 >= r2) goto L8
            goto L1a
        L8:
            int r1 = r5.length
            int r1 = r1 - r2
            int r1 = r1 * 2
            int r2 = r5.length
        Ld:
            if (r0 >= r2) goto L19
            r3 = r5[r0]
            int r3 = r4.estimateHeaderElementLen(r3)
            int r1 = r1 + r3
            int r0 = r0 + 1
            goto Ld
        L19:
            return r1
        L1a:
            return r0
    }

    protected int estimateHeaderElementLen(cz.msebera.android.httpclient.HeaderElement r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r5.getName()
            int r1 = r1.length()
            java.lang.String r2 = r5.getValue()
            if (r2 == 0) goto L19
            int r2 = r2.length()
            int r2 = r2 + 3
            int r1 = r1 + r2
        L19:
            int r2 = r5.getParameterCount()
            if (r2 <= 0) goto L2f
        L1f:
            if (r0 >= r2) goto L2f
            cz.msebera.android.httpclient.NameValuePair r3 = r5.getParameter(r0)
            int r3 = r4.estimateNameValuePairLen(r3)
            int r3 = r3 + 2
            int r1 = r1 + r3
            int r0 = r0 + 1
            goto L1f
        L2f:
            return r1
    }

    protected int estimateNameValuePairLen(cz.msebera.android.httpclient.NameValuePair r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = r2.getName()
            int r0 = r0.length()
            java.lang.String r2 = r2.getValue()
            if (r2 == 0) goto L19
            int r2 = r2.length()
            int r2 = r2 + 3
            int r0 = r0 + r2
        L19:
            return r0
    }

    protected int estimateParametersLen(cz.msebera.android.httpclient.NameValuePair[] r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L1a
            int r1 = r5.length
            r2 = 1
            if (r1 >= r2) goto L8
            goto L1a
        L8:
            int r1 = r5.length
            int r1 = r1 - r2
            int r1 = r1 * 2
            int r2 = r5.length
        Ld:
            if (r0 >= r2) goto L19
            r3 = r5[r0]
            int r3 = r4.estimateNameValuePairLen(r3)
            int r1 = r1 + r3
            int r0 = r0 + 1
            goto Ld
        L19:
            return r1
        L1a:
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.util.CharArrayBuffer formatElements(cz.msebera.android.httpclient.util.CharArrayBuffer r3, cz.msebera.android.httpclient.HeaderElement[] r4, boolean r5) {
            r2 = this;
            java.lang.String r0 = "Header element array"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            int r0 = r2.estimateElementsLen(r4)
            if (r3 != 0) goto L11
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r3.<init>(r0)
            goto L14
        L11:
            r3.ensureCapacity(r0)
        L14:
            r0 = 0
        L15:
            int r1 = r4.length
            if (r0 >= r1) goto L27
            if (r0 <= 0) goto L1f
            java.lang.String r1 = ", "
            r3.append(r1)
        L1f:
            r1 = r4[r0]
            r2.formatHeaderElement(r3, r1, r5)
            int r0 = r0 + 1
            goto L15
        L27:
            return r3
    }

    @Override
    public cz.msebera.android.httpclient.util.CharArrayBuffer formatHeaderElement(cz.msebera.android.httpclient.util.CharArrayBuffer r4, cz.msebera.android.httpclient.HeaderElement r5, boolean r6) {
            r3 = this;
            java.lang.String r0 = "Header element"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            int r0 = r3.estimateHeaderElementLen(r5)
            if (r4 != 0) goto L11
            cz.msebera.android.httpclient.util.CharArrayBuffer r4 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r4.<init>(r0)
            goto L14
        L11:
            r4.ensureCapacity(r0)
        L14:
            java.lang.String r0 = r5.getName()
            r4.append(r0)
            java.lang.String r0 = r5.getValue()
            if (r0 == 0) goto L29
            r1 = 61
            r4.append(r1)
            r3.doFormatValue(r4, r0, r6)
        L29:
            int r0 = r5.getParameterCount()
            if (r0 <= 0) goto L41
            r1 = 0
        L30:
            if (r1 >= r0) goto L41
            java.lang.String r2 = "; "
            r4.append(r2)
            cz.msebera.android.httpclient.NameValuePair r2 = r5.getParameter(r1)
            r3.formatNameValuePair(r4, r2, r6)
            int r1 = r1 + 1
            goto L30
        L41:
            return r4
    }

    @Override
    public cz.msebera.android.httpclient.util.CharArrayBuffer formatNameValuePair(cz.msebera.android.httpclient.util.CharArrayBuffer r2, cz.msebera.android.httpclient.NameValuePair r3, boolean r4) {
            r1 = this;
            java.lang.String r0 = "Name / value pair"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            int r0 = r1.estimateNameValuePairLen(r3)
            if (r2 != 0) goto L11
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r2.<init>(r0)
            goto L14
        L11:
            r2.ensureCapacity(r0)
        L14:
            java.lang.String r0 = r3.getName()
            r2.append(r0)
            java.lang.String r3 = r3.getValue()
            if (r3 == 0) goto L29
            r0 = 61
            r2.append(r0)
            r1.doFormatValue(r2, r3, r4)
        L29:
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.util.CharArrayBuffer formatParameters(cz.msebera.android.httpclient.util.CharArrayBuffer r3, cz.msebera.android.httpclient.NameValuePair[] r4, boolean r5) {
            r2 = this;
            java.lang.String r0 = "Header parameter array"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            int r0 = r2.estimateParametersLen(r4)
            if (r3 != 0) goto L11
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r3.<init>(r0)
            goto L14
        L11:
            r3.ensureCapacity(r0)
        L14:
            r0 = 0
        L15:
            int r1 = r4.length
            if (r0 >= r1) goto L27
            if (r0 <= 0) goto L1f
            java.lang.String r1 = "; "
            r3.append(r1)
        L1f:
            r1 = r4[r0]
            r2.formatNameValuePair(r3, r1, r5)
            int r0 = r0 + 1
            goto L15
        L27:
            return r3
    }

    protected boolean isSeparator(char r2) {
            r1 = this;
            java.lang.String r0 = " ;,:@()<>\\\"/[]?={}\t"
            int r2 = r0.indexOf(r2)
            if (r2 < 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    protected boolean isUnsafe(char r2) {
            r1 = this;
            java.lang.String r0 = "\"\\"
            int r2 = r0.indexOf(r2)
            if (r2 < 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }
}
