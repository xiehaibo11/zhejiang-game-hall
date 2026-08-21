package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class LaxExpiresHandler extends cz.msebera.android.httpclient.impl.cookie.AbstractCookieAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    private static final java.util.regex.Pattern DAY_OF_MONTH_PATTERN = null;
    private static final java.util.BitSet DELIMS = null;
    private static final java.util.Map<java.lang.String, java.lang.Integer> MONTHS = null;
    private static final java.util.regex.Pattern MONTH_PATTERN = null;
    private static final java.util.regex.Pattern TIME_PATTERN = null;
    static final java.util.TimeZone UTC = null;
    private static final java.util.regex.Pattern YEAR_PATTERN = null;

    static {
            java.lang.String r0 = "UTC"
            java.util.TimeZone r0 = java.util.TimeZone.getTimeZone(r0)
            cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.UTC = r0
            java.util.BitSet r0 = new java.util.BitSet
            r0.<init>()
            r1 = 9
            r0.set(r1)
            r2 = 32
        L14:
            r3 = 47
            if (r2 > r3) goto L1e
            r0.set(r2)
            int r2 = r2 + 1
            goto L14
        L1e:
            r2 = 59
        L20:
            r3 = 64
            if (r2 > r3) goto L2a
            r0.set(r2)
            int r2 = r2 + 1
            goto L20
        L2a:
            r2 = 91
        L2c:
            r3 = 96
            if (r2 > r3) goto L36
            r0.set(r2)
            int r2 = r2 + 1
            goto L2c
        L36:
            r2 = 123(0x7b, float:1.72E-43)
        L38:
            r3 = 126(0x7e, float:1.77E-43)
            if (r2 > r3) goto L42
            r0.set(r2)
            int r2 = r2 + 1
            goto L38
        L42:
            cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.DELIMS = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r2 = 12
            r0.<init>(r2)
            r2 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "jan"
            r0.put(r3, r2)
            r2 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "feb"
            r0.put(r3, r2)
            r2 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            java.lang.String r4 = "mar"
            r0.put(r4, r3)
            r3 = 3
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r4 = "apr"
            r0.put(r4, r3)
            r3 = 4
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r4 = "may"
            r0.put(r4, r3)
            r3 = 5
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r4 = "jun"
            r0.put(r4, r3)
            r3 = 6
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r4 = "jul"
            r0.put(r4, r3)
            r3 = 7
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r4 = "aug"
            r0.put(r4, r3)
            r3 = 8
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r4 = "sep"
            r0.put(r4, r3)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "oct"
            r0.put(r3, r1)
            r1 = 10
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "nov"
            r0.put(r3, r1)
            r1 = 11
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "dec"
            r0.put(r3, r1)
            cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.MONTHS = r0
            java.lang.String r0 = "^([0-9]{1,2}):([0-9]{1,2}):([0-9]{1,2})([^0-9].*)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.TIME_PATTERN = r0
            java.lang.String r0 = "^([0-9]{1,2})([^0-9].*)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.DAY_OF_MONTH_PATTERN = r0
            java.lang.String r0 = "^(jan|feb|mar|apr|may|jun|jul|aug|sep|oct|nov|dec)(.*)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r2)
            cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.MONTH_PATTERN = r0
            java.lang.String r0 = "^([0-9]{2,4})([^0-9].*)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.YEAR_PATTERN = r0
            return
    }

    public LaxExpiresHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    private void copyContent(java.lang.CharSequence r6, cz.msebera.android.httpclient.message.ParserCursor r7, java.lang.StringBuilder r8) {
            r5 = this;
            int r0 = r7.getPos()
            int r1 = r7.getPos()
            int r2 = r7.getUpperBound()
        Lc:
            if (r1 >= r2) goto L23
            char r3 = r6.charAt(r1)
            java.util.BitSet r4 = cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.DELIMS
            boolean r4 = r4.get(r3)
            if (r4 == 0) goto L1b
            goto L23
        L1b:
            int r0 = r0 + 1
            r8.append(r3)
            int r1 = r1 + 1
            goto Lc
        L23:
            r7.updatePos(r0)
            return
    }

    private void skipDelims(java.lang.CharSequence r6, cz.msebera.android.httpclient.message.ParserCursor r7) {
            r5 = this;
            int r0 = r7.getPos()
            int r1 = r7.getPos()
            int r2 = r7.getUpperBound()
        Lc:
            if (r1 >= r2) goto L1f
            char r3 = r6.charAt(r1)
            java.util.BitSet r4 = cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.DELIMS
            boolean r3 = r4.get(r3)
            if (r3 == 0) goto L1f
            int r0 = r0 + 1
            int r1 = r1 + 1
            goto Lc
        L1f:
            r7.updatePos(r0)
            return
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "max-age"
            return r0
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r21, java.lang.String r22) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r20 = this;
            r0 = r20
            r1 = r21
            r2 = r22
            java.lang.String r3 = "Invalid 'expires' attribute: "
            java.lang.String r4 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r4)
            cz.msebera.android.httpclient.message.ParserCursor r4 = new cz.msebera.android.httpclient.message.ParserCursor
            int r5 = r22.length()
            r6 = 0
            r4.<init>(r6, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 0
            r13 = 0
            r14 = 0
            r15 = 0
            r16 = 0
            r17 = 0
        L28:
            boolean r18 = r4.atEnd()     // Catch: java.lang.NumberFormatException -> L15a
            if (r18 != 0) goto Lcc
            r0.skipDelims(r2, r4)     // Catch: java.lang.NumberFormatException -> L15a
            r5.setLength(r6)     // Catch: java.lang.NumberFormatException -> L15a
            r0.copyContent(r2, r4, r5)     // Catch: java.lang.NumberFormatException -> L15a
            int r18 = r5.length()     // Catch: java.lang.NumberFormatException -> L15a
            if (r18 != 0) goto L3f
            goto Lcc
        L3f:
            if (r8 != 0) goto L6b
            java.util.regex.Pattern r6 = cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.TIME_PATTERN     // Catch: java.lang.NumberFormatException -> L15a
            java.util.regex.Matcher r6 = r6.matcher(r5)     // Catch: java.lang.NumberFormatException -> L15a
            boolean r19 = r6.matches()     // Catch: java.lang.NumberFormatException -> L15a
            if (r19 == 0) goto L6b
            r7 = 1
            java.lang.String r8 = r6.group(r7)     // Catch: java.lang.NumberFormatException -> L15a
            int r14 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.NumberFormatException -> L15a
            r7 = 2
            java.lang.String r7 = r6.group(r7)     // Catch: java.lang.NumberFormatException -> L15a
            int r15 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.NumberFormatException -> L15a
            r7 = 3
            java.lang.String r6 = r6.group(r7)     // Catch: java.lang.NumberFormatException -> L15a
            int r16 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.NumberFormatException -> L15a
            r6 = 0
            r8 = 1
            goto L28
        L6b:
            if (r10 != 0) goto L85
            java.util.regex.Pattern r6 = cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.DAY_OF_MONTH_PATTERN     // Catch: java.lang.NumberFormatException -> L15a
            java.util.regex.Matcher r6 = r6.matcher(r5)     // Catch: java.lang.NumberFormatException -> L15a
            boolean r7 = r6.matches()     // Catch: java.lang.NumberFormatException -> L15a
            if (r7 == 0) goto L85
            r7 = 1
            java.lang.String r6 = r6.group(r7)     // Catch: java.lang.NumberFormatException -> L15a
            int r13 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.NumberFormatException -> L15a
            r6 = 0
            r10 = 1
            goto L28
        L85:
            if (r11 != 0) goto Lae
            java.util.regex.Pattern r6 = cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.MONTH_PATTERN     // Catch: java.lang.NumberFormatException -> L15a
            java.util.regex.Matcher r6 = r6.matcher(r5)     // Catch: java.lang.NumberFormatException -> L15a
            boolean r7 = r6.matches()     // Catch: java.lang.NumberFormatException -> L15a
            if (r7 == 0) goto Lae
            java.util.Map<java.lang.String, java.lang.Integer> r7 = cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.MONTHS     // Catch: java.lang.NumberFormatException -> L15a
            r11 = 1
            java.lang.String r6 = r6.group(r11)     // Catch: java.lang.NumberFormatException -> L15a
            java.util.Locale r11 = java.util.Locale.ROOT     // Catch: java.lang.NumberFormatException -> L15a
            java.lang.String r6 = r6.toLowerCase(r11)     // Catch: java.lang.NumberFormatException -> L15a
            java.lang.Object r6 = r7.get(r6)     // Catch: java.lang.NumberFormatException -> L15a
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.NumberFormatException -> L15a
            int r17 = r6.intValue()     // Catch: java.lang.NumberFormatException -> L15a
            r6 = 0
            r11 = 1
            goto L28
        Lae:
            if (r12 != 0) goto Lc9
            java.util.regex.Pattern r6 = cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.YEAR_PATTERN     // Catch: java.lang.NumberFormatException -> L15a
            java.util.regex.Matcher r6 = r6.matcher(r5)     // Catch: java.lang.NumberFormatException -> L15a
            boolean r7 = r6.matches()     // Catch: java.lang.NumberFormatException -> L15a
            if (r7 == 0) goto Lc9
            r7 = 1
            java.lang.String r6 = r6.group(r7)     // Catch: java.lang.NumberFormatException -> L15a
            int r9 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.NumberFormatException -> L15a
            r6 = 0
            r12 = 1
            goto L28
        Lc9:
            r6 = 0
            goto L28
        Lcc:
            if (r8 == 0) goto L145
            if (r10 == 0) goto L145
            if (r11 == 0) goto L145
            if (r12 == 0) goto L145
            r4 = 70
            if (r9 < r4) goto Lde
            r4 = 99
            if (r9 > r4) goto Lde
            int r9 = r9 + 1900
        Lde:
            if (r9 < 0) goto Le6
            r4 = 69
            if (r9 > r4) goto Le6
            int r9 = r9 + 2000
        Le6:
            r4 = 1
            if (r13 < r4) goto L130
            r4 = 31
            if (r13 > r4) goto L130
            r4 = 1601(0x641, float:2.243E-42)
            if (r9 < r4) goto L130
            r4 = 23
            if (r14 > r4) goto L130
            r4 = 59
            if (r15 > r4) goto L130
            r6 = r16
            if (r6 > r4) goto L130
            java.util.Calendar r2 = java.util.Calendar.getInstance()
            java.util.TimeZone r3 = cz.msebera.android.httpclient.impl.cookie.LaxExpiresHandler.UTC
            r2.setTimeZone(r3)
            r3 = 0
            r2.setTimeInMillis(r3)
            r3 = 13
            r2.set(r3, r6)
            r3 = 12
            r2.set(r3, r15)
            r3 = 11
            r2.set(r3, r14)
            r3 = 5
            r2.set(r3, r13)
            r6 = r17
            r3 = 2
            r2.set(r3, r6)
            r3 = 1
            r2.set(r3, r9)
            java.util.Date r2 = r2.getTime()
            r1.setExpiryDate(r2)
            return
        L130:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r1 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r1.<init>(r2)
            throw r1
        L145:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r1 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r1.<init>(r2)
            throw r1
        L15a:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r1 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r1.<init>(r2)
            throw r1
    }
}
