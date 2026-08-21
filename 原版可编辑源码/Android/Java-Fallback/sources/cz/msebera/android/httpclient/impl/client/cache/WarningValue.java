package cz.msebera.android.httpclient.impl.client.cache;

class WarningValue {
    private static final java.lang.String ASCTIME_DATE = "(Mon|Tue|Wed|Thu|Fri|Sat|Sun) ((Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) ( |\\d)\\d) (\\d{2}:\\d{2}:\\d{2}) \\d{4}";
    private static final java.lang.String DATE1 = "\\d{2} (Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) \\d{4}";
    private static final java.lang.String DATE2 = "\\d{2}-(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)-\\d{2}";
    private static final java.lang.String DATE3 = "(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) ( |\\d)\\d";
    private static final java.lang.String DOMAINLABEL = "\\p{Alnum}([\\p{Alnum}-]*\\p{Alnum})?";
    private static final java.lang.String HOST = "((\\p{Alnum}([\\p{Alnum}-]*\\p{Alnum})?\\.)*\\p{Alpha}([\\p{Alnum}-]*\\p{Alnum})?\\.?)|(\\d+\\.\\d+\\.\\d+\\.\\d+)";
    private static final java.lang.String HOSTNAME = "(\\p{Alnum}([\\p{Alnum}-]*\\p{Alnum})?\\.)*\\p{Alpha}([\\p{Alnum}-]*\\p{Alnum})?\\.?";
    private static final java.lang.String HOSTPORT = "(((\\p{Alnum}([\\p{Alnum}-]*\\p{Alnum})?\\.)*\\p{Alpha}([\\p{Alnum}-]*\\p{Alnum})?\\.?)|(\\d+\\.\\d+\\.\\d+\\.\\d+))(\\:\\d*)?";
    private static final java.util.regex.Pattern HOSTPORT_PATTERN = null;
    private static final java.lang.String HTTP_DATE = "((Mon|Tue|Wed|Thu|Fri|Sat|Sun), (\\d{2} (Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) \\d{4}) (\\d{2}:\\d{2}:\\d{2}) GMT)|((Monday|Tuesday|Wednesday|Thursday|Friday|Saturday|Sunday), (\\d{2}-(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)-\\d{2}) (\\d{2}:\\d{2}:\\d{2}) GMT)|((Mon|Tue|Wed|Thu|Fri|Sat|Sun) ((Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) ( |\\d)\\d) (\\d{2}:\\d{2}:\\d{2}) \\d{4})";
    private static final java.lang.String IPV4ADDRESS = "\\d+\\.\\d+\\.\\d+\\.\\d+";
    private static final java.lang.String MONTH = "Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec";
    private static final java.lang.String PORT = "\\d*";
    private static final java.lang.String RFC1123_DATE = "(Mon|Tue|Wed|Thu|Fri|Sat|Sun), (\\d{2} (Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) \\d{4}) (\\d{2}:\\d{2}:\\d{2}) GMT";
    private static final java.lang.String RFC850_DATE = "(Monday|Tuesday|Wednesday|Thursday|Friday|Saturday|Sunday), (\\d{2}-(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)-\\d{2}) (\\d{2}:\\d{2}:\\d{2}) GMT";
    private static final java.lang.String TIME = "\\d{2}:\\d{2}:\\d{2}";
    private static final java.lang.String TOPLABEL = "\\p{Alpha}([\\p{Alnum}-]*\\p{Alnum})?";
    private static final java.lang.String WARN_DATE = "\"(((Mon|Tue|Wed|Thu|Fri|Sat|Sun), (\\d{2} (Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) \\d{4}) (\\d{2}:\\d{2}:\\d{2}) GMT)|((Monday|Tuesday|Wednesday|Thursday|Friday|Saturday|Sunday), (\\d{2}-(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)-\\d{2}) (\\d{2}:\\d{2}:\\d{2}) GMT)|((Mon|Tue|Wed|Thu|Fri|Sat|Sun) ((Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) ( |\\d)\\d) (\\d{2}:\\d{2}:\\d{2}) \\d{4}))\"";
    private static final java.util.regex.Pattern WARN_DATE_PATTERN = null;
    private static final java.lang.String WEEKDAY = "Monday|Tuesday|Wednesday|Thursday|Friday|Saturday|Sunday";
    private static final java.lang.String WKDAY = "Mon|Tue|Wed|Thu|Fri|Sat|Sun";
    private int init_offs;
    private int offs;
    private final java.lang.String src;
    private java.lang.String warnAgent;
    private int warnCode;
    private java.util.Date warnDate;
    private java.lang.String warnText;

    static {
            java.lang.String r0 = "(((\\p{Alnum}([\\p{Alnum}-]*\\p{Alnum})?\\.)*\\p{Alpha}([\\p{Alnum}-]*\\p{Alnum})?\\.?)|(\\d+\\.\\d+\\.\\d+\\.\\d+))(\\:\\d*)?"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.impl.client.cache.WarningValue.HOSTPORT_PATTERN = r0
            java.lang.String r0 = "\"(((Mon|Tue|Wed|Thu|Fri|Sat|Sun), (\\d{2} (Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) \\d{4}) (\\d{2}:\\d{2}:\\d{2}) GMT)|((Monday|Tuesday|Wednesday|Thursday|Friday|Saturday|Sunday), (\\d{2}-(Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec)-\\d{2}) (\\d{2}:\\d{2}:\\d{2}) GMT)|((Mon|Tue|Wed|Thu|Fri|Sat|Sun) ((Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec) ( |\\d)\\d) (\\d{2}:\\d{2}:\\d{2}) \\d{4}))\""
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            cz.msebera.android.httpclient.impl.client.cache.WarningValue.WARN_DATE_PATTERN = r0
            return
    }

    WarningValue(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    WarningValue(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.init_offs = r2
            r0.offs = r2
            r0.src = r1
            r0.consumeWarnValue()
            return
    }

    public static cz.msebera.android.httpclient.impl.client.cache.WarningValue[] getWarningValues(cz.msebera.android.httpclient.Header r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r4 = r4.getValue()
            r1 = 0
            r2 = 0
        Lb:
            int r3 = r4.length()
            if (r2 >= r3) goto L2a
            cz.msebera.android.httpclient.impl.client.cache.WarningValue r3 = new cz.msebera.android.httpclient.impl.client.cache.WarningValue     // Catch: java.lang.IllegalArgumentException -> L1c
            r3.<init>(r4, r2)     // Catch: java.lang.IllegalArgumentException -> L1c
            r0.add(r3)     // Catch: java.lang.IllegalArgumentException -> L1c
            int r2 = r3.offs     // Catch: java.lang.IllegalArgumentException -> L1c
            goto Lb
        L1c:
            r3 = 44
            int r2 = r4.indexOf(r3, r2)
            r3 = -1
            if (r2 != r3) goto L27
            goto L2a
        L27:
            int r2 = r2 + 1
            goto Lb
        L2a:
            cz.msebera.android.httpclient.impl.client.cache.WarningValue[] r4 = new cz.msebera.android.httpclient.impl.client.cache.WarningValue[r1]
            java.lang.Object[] r4 = r0.toArray(r4)
            cz.msebera.android.httpclient.impl.client.cache.WarningValue[] r4 = (cz.msebera.android.httpclient.impl.client.cache.WarningValue[]) r4
            return r4
    }

    private boolean isChar(char r2) {
            r1 = this;
            if (r2 < 0) goto L8
            r0 = 127(0x7f, float:1.78E-43)
            if (r2 > r0) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            return r2
    }

    private boolean isControl(char r2) {
            r1 = this;
            r0 = 127(0x7f, float:1.78E-43)
            if (r2 == r0) goto Ld
            if (r2 < 0) goto Lb
            r0 = 31
            if (r2 > r0) goto Lb
            goto Ld
        Lb:
            r2 = 0
            goto Le
        Ld:
            r2 = 1
        Le:
            return r2
    }

    private boolean isSeparator(char r2) {
            r1 = this;
            r0 = 40
            if (r2 == r0) goto L4f
            r0 = 41
            if (r2 == r0) goto L4f
            r0 = 60
            if (r2 == r0) goto L4f
            r0 = 62
            if (r2 == r0) goto L4f
            r0 = 64
            if (r2 == r0) goto L4f
            r0 = 44
            if (r2 == r0) goto L4f
            r0 = 59
            if (r2 == r0) goto L4f
            r0 = 58
            if (r2 == r0) goto L4f
            r0 = 92
            if (r2 == r0) goto L4f
            r0 = 34
            if (r2 == r0) goto L4f
            r0 = 47
            if (r2 == r0) goto L4f
            r0 = 91
            if (r2 == r0) goto L4f
            r0 = 93
            if (r2 == r0) goto L4f
            r0 = 63
            if (r2 == r0) goto L4f
            r0 = 61
            if (r2 == r0) goto L4f
            r0 = 123(0x7b, float:1.72E-43)
            if (r2 == r0) goto L4f
            r0 = 125(0x7d, float:1.75E-43)
            if (r2 == r0) goto L4f
            r0 = 32
            if (r2 == r0) goto L4f
            r0 = 9
            if (r2 != r0) goto L4d
            goto L4f
        L4d:
            r2 = 0
            goto L50
        L4f:
            r2 = 1
        L50:
            return r2
    }

    private boolean isTokenChar(char r2) {
            r1 = this;
            boolean r0 = r1.isChar(r2)
            if (r0 == 0) goto L14
            boolean r0 = r1.isControl(r2)
            if (r0 != 0) goto L14
            boolean r2 = r1.isSeparator(r2)
            if (r2 != 0) goto L14
            r2 = 1
            goto L15
        L14:
            r2 = 0
        L15:
            return r2
    }

    private void parseError() {
            r4 = this;
            java.lang.String r0 = r4.src
            int r1 = r4.init_offs
            java.lang.String r0 = r0.substring(r1)
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Bad warn code \""
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = "\""
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    protected void consumeCharacter(char r3) {
            r2 = this;
            int r0 = r2.offs
            int r0 = r0 + 1
            java.lang.String r1 = r2.src
            int r1 = r1.length()
            if (r0 > r1) goto L16
            java.lang.String r0 = r2.src
            int r1 = r2.offs
            char r0 = r0.charAt(r1)
            if (r3 == r0) goto L19
        L16:
            r2.parseError()
        L19:
            int r3 = r2.offs
            int r3 = r3 + 1
            r2.offs = r3
            return
    }

    protected void consumeHostPort() {
            r3 = this;
            java.util.regex.Pattern r0 = cz.msebera.android.httpclient.impl.client.cache.WarningValue.HOSTPORT_PATTERN
            java.lang.String r1 = r3.src
            int r2 = r3.offs
            java.lang.String r1 = r1.substring(r2)
            java.util.regex.Matcher r0 = r0.matcher(r1)
            boolean r1 = r0.find()
            if (r1 != 0) goto L17
            r3.parseError()
        L17:
            int r1 = r0.start()
            if (r1 == 0) goto L20
            r3.parseError()
        L20:
            int r1 = r3.offs
            int r0 = r0.end()
            int r1 = r1 + r0
            r3.offs = r1
            return
    }

    protected void consumeLinearWhitespace() {
            r4 = this;
        L0:
            int r0 = r4.offs
            java.lang.String r1 = r4.src
            int r1 = r1.length()
            if (r0 >= r1) goto L61
            java.lang.String r0 = r4.src
            int r1 = r4.offs
            char r0 = r0.charAt(r1)
            r1 = 9
            if (r0 == r1) goto L5a
            r2 = 13
            r3 = 32
            if (r0 == r2) goto L1f
            if (r0 == r3) goto L5a
            return
        L1f:
            int r0 = r4.offs
            int r0 = r0 + 2
            java.lang.String r2 = r4.src
            int r2 = r2.length()
            if (r0 >= r2) goto L59
            java.lang.String r0 = r4.src
            int r2 = r4.offs
            int r2 = r2 + 1
            char r0 = r0.charAt(r2)
            r2 = 10
            if (r0 != r2) goto L59
            java.lang.String r0 = r4.src
            int r2 = r4.offs
            int r2 = r2 + 2
            char r0 = r0.charAt(r2)
            if (r0 == r3) goto L52
            java.lang.String r0 = r4.src
            int r2 = r4.offs
            int r2 = r2 + 2
            char r0 = r0.charAt(r2)
            if (r0 == r1) goto L52
            goto L59
        L52:
            int r0 = r4.offs
            int r0 = r0 + 2
            r4.offs = r0
            goto L5a
        L59:
            return
        L5a:
            int r0 = r4.offs
            int r0 = r0 + 1
            r4.offs = r0
            goto L0
        L61:
            return
    }

    protected void consumeQuotedString() {
            r6 = this;
            java.lang.String r0 = r6.src
            int r1 = r6.offs
            char r0 = r0.charAt(r1)
            r1 = 34
            if (r0 == r1) goto Lf
            r6.parseError()
        Lf:
            int r0 = r6.offs
            r2 = 1
            int r0 = r0 + r2
            r6.offs = r0
            r0 = 0
        L16:
            int r3 = r6.offs
            java.lang.String r4 = r6.src
            int r4 = r4.length()
            if (r3 >= r4) goto L6a
            if (r0 != 0) goto L6a
            java.lang.String r3 = r6.src
            int r4 = r6.offs
            char r3 = r3.charAt(r4)
            int r4 = r6.offs
            int r4 = r4 + r2
            java.lang.String r5 = r6.src
            int r5 = r5.length()
            if (r4 >= r5) goto L4f
            r4 = 92
            if (r3 != r4) goto L4f
            java.lang.String r4 = r6.src
            int r5 = r6.offs
            int r5 = r5 + r2
            char r4 = r4.charAt(r5)
            boolean r4 = r6.isChar(r4)
            if (r4 == 0) goto L4f
            int r3 = r6.offs
            int r3 = r3 + 2
            r6.offs = r3
            goto L16
        L4f:
            if (r3 != r1) goto L58
            int r0 = r6.offs
            int r0 = r0 + r2
            r6.offs = r0
            r0 = 1
            goto L16
        L58:
            if (r3 == r1) goto L66
            boolean r3 = r6.isControl(r3)
            if (r3 != 0) goto L66
            int r3 = r6.offs
            int r3 = r3 + r2
            r6.offs = r3
            goto L16
        L66:
            r6.parseError()
            goto L16
        L6a:
            if (r0 != 0) goto L6f
            r6.parseError()
        L6f:
            return
    }

    protected void consumeToken() {
            r2 = this;
            java.lang.String r0 = r2.src
            int r1 = r2.offs
            char r0 = r0.charAt(r1)
            boolean r0 = r2.isTokenChar(r0)
            if (r0 != 0) goto L11
            r2.parseError()
        L11:
            int r0 = r2.offs
            java.lang.String r1 = r2.src
            int r1 = r1.length()
            if (r0 >= r1) goto L31
            java.lang.String r0 = r2.src
            int r1 = r2.offs
            char r0 = r0.charAt(r1)
            boolean r0 = r2.isTokenChar(r0)
            if (r0 != 0) goto L2a
            goto L31
        L2a:
            int r0 = r2.offs
            int r0 = r0 + 1
            r2.offs = r0
            goto L11
        L31:
            return
    }

    protected void consumeWarnAgent() {
            r4 = this;
            int r0 = r4.offs
            r1 = 32
            r4.consumeHostPort()     // Catch: java.lang.IllegalArgumentException -> L15
            java.lang.String r2 = r4.src     // Catch: java.lang.IllegalArgumentException -> L15
            int r3 = r4.offs     // Catch: java.lang.IllegalArgumentException -> L15
            java.lang.String r2 = r2.substring(r0, r3)     // Catch: java.lang.IllegalArgumentException -> L15
            r4.warnAgent = r2     // Catch: java.lang.IllegalArgumentException -> L15
            r4.consumeCharacter(r1)     // Catch: java.lang.IllegalArgumentException -> L15
            return
        L15:
            r4.offs = r0
            r4.consumeToken()
            java.lang.String r2 = r4.src
            int r3 = r4.offs
            java.lang.String r0 = r2.substring(r0, r3)
            r4.warnAgent = r0
            r4.consumeCharacter(r1)
            return
    }

    protected void consumeWarnCode() {
            r3 = this;
            int r0 = r3.offs
            int r0 = r0 + 4
            java.lang.String r1 = r3.src
            int r1 = r1.length()
            if (r0 > r1) goto L48
            java.lang.String r0 = r3.src
            int r1 = r3.offs
            char r0 = r0.charAt(r1)
            boolean r0 = java.lang.Character.isDigit(r0)
            if (r0 == 0) goto L48
            java.lang.String r0 = r3.src
            int r1 = r3.offs
            int r1 = r1 + 1
            char r0 = r0.charAt(r1)
            boolean r0 = java.lang.Character.isDigit(r0)
            if (r0 == 0) goto L48
            java.lang.String r0 = r3.src
            int r1 = r3.offs
            int r1 = r1 + 2
            char r0 = r0.charAt(r1)
            boolean r0 = java.lang.Character.isDigit(r0)
            if (r0 == 0) goto L48
            java.lang.String r0 = r3.src
            int r1 = r3.offs
            int r1 = r1 + 3
            char r0 = r0.charAt(r1)
            r1 = 32
            if (r0 == r1) goto L4b
        L48:
            r3.parseError()
        L4b:
            java.lang.String r0 = r3.src
            int r1 = r3.offs
            int r2 = r1 + 3
            java.lang.String r0 = r0.substring(r1, r2)
            int r0 = java.lang.Integer.parseInt(r0)
            r3.warnCode = r0
            int r0 = r3.offs
            int r0 = r0 + 4
            r3.offs = r0
            return
    }

    protected void consumeWarnDate() {
            r3 = this;
            int r0 = r3.offs
            java.util.regex.Pattern r1 = cz.msebera.android.httpclient.impl.client.cache.WarningValue.WARN_DATE_PATTERN
            java.lang.String r2 = r3.src
            java.lang.String r2 = r2.substring(r0)
            java.util.regex.Matcher r1 = r1.matcher(r2)
            boolean r2 = r1.lookingAt()
            if (r2 != 0) goto L17
            r3.parseError()
        L17:
            int r2 = r3.offs
            int r1 = r1.end()
            int r2 = r2 + r1
            r3.offs = r2
            java.lang.String r1 = r3.src
            int r0 = r0 + 1
            int r2 = r3.offs
            int r2 = r2 + (-1)
            java.lang.String r0 = r1.substring(r0, r2)
            java.util.Date r0 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r0)
            r3.warnDate = r0
            return
    }

    protected void consumeWarnText() {
            r3 = this;
            int r0 = r3.offs
            r3.consumeQuotedString()
            java.lang.String r1 = r3.src
            int r2 = r3.offs
            java.lang.String r0 = r1.substring(r0, r2)
            r3.warnText = r0
            return
    }

    protected void consumeWarnValue() {
            r3 = this;
            r3.consumeLinearWhitespace()
            r3.consumeWarnCode()
            r3.consumeWarnAgent()
            r3.consumeWarnText()
            int r0 = r3.offs
            int r0 = r0 + 1
            java.lang.String r1 = r3.src
            int r1 = r1.length()
            if (r0 >= r1) goto L38
            java.lang.String r0 = r3.src
            int r1 = r3.offs
            char r0 = r0.charAt(r1)
            r1 = 32
            if (r0 != r1) goto L38
            java.lang.String r0 = r3.src
            int r2 = r3.offs
            int r2 = r2 + 1
            char r0 = r0.charAt(r2)
            r2 = 34
            if (r0 != r2) goto L38
            r3.consumeCharacter(r1)
            r3.consumeWarnDate()
        L38:
            r3.consumeLinearWhitespace()
            int r0 = r3.offs
            java.lang.String r1 = r3.src
            int r1 = r1.length()
            if (r0 == r1) goto L4a
            r0 = 44
            r3.consumeCharacter(r0)
        L4a:
            return
    }

    public java.lang.String getWarnAgent() {
            r1 = this;
            java.lang.String r0 = r1.warnAgent
            return r0
    }

    public int getWarnCode() {
            r1 = this;
            int r0 = r1.warnCode
            return r0
    }

    public java.util.Date getWarnDate() {
            r1 = this;
            java.util.Date r0 = r1.warnDate
            return r0
    }

    public java.lang.String getWarnText() {
            r1 = this;
            java.lang.String r0 = r1.warnText
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            java.util.Date r0 = r6.warnDate
            r1 = 2
            r2 = 1
            r3 = 0
            r4 = 3
            if (r0 == 0) goto L2a
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r5 = r6.warnCode
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r0[r3] = r5
            java.lang.String r3 = r6.warnAgent
            r0[r2] = r3
            java.lang.String r2 = r6.warnText
            r0[r1] = r2
            java.util.Date r1 = r6.warnDate
            java.lang.String r1 = cz.msebera.android.httpclient.client.utils.DateUtils.formatDate(r1)
            r0[r4] = r1
            java.lang.String r1 = "%d %s %s \"%s\""
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
        L2a:
            java.lang.Object[] r0 = new java.lang.Object[r4]
            int r4 = r6.warnCode
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r0[r3] = r4
            java.lang.String r3 = r6.warnAgent
            r0[r2] = r3
            java.lang.String r2 = r6.warnText
            r0[r1] = r2
            java.lang.String r1 = "%d %s %s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }
}
