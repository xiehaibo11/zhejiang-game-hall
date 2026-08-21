package kotlin.text;

@kotlin.Metadata(d1 = {"\u0000~\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0019\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\r\n\u0002\b\n\n\u0002\u0010\u0011\n\u0002\u0010\u0000\n\u0002\b\n\n\u0002\u0010\f\n\u0002\b\u0011\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000e\u001a\u0011\u0010\u0007\u001a\u00020\u00022\u0006\u0010\b\u001a\u00020\tH\u0087\b\u001a\u0011\u0010\u0007\u001a\u00020\u00022\u0006\u0010\n\u001a\u00020\u000bH\u0087\b\u001a\u0011\u0010\u0007\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\rH\u0087\b\u001a\u0019\u0010\u0007\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000fH\u0087\b\u001a!\u0010\u0007\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0011H\u0087\b\u001a)\u0010\u0007\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00112\u0006\u0010\u000e\u001a\u00020\u000fH\u0087\b\u001a\u0011\u0010\u0007\u001a\u00020\u00022\u0006\u0010\u0013\u001a\u00020\u0014H\u0087\b\u001a!\u0010\u0007\u001a\u00020\u00022\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0011H\u0087\b\u001a!\u0010\u0007\u001a\u00020\u00022\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0011H\u0087\b\u001a\f\u0010\u0017\u001a\u00020\u0002*\u00020\u0002H\u0007\u001a\u0014\u0010\u0017\u001a\u00020\u0002*\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u0019H\u0007\u001a\u0015\u0010\u001a\u001a\u00020\u0011*\u00020\u00022\u0006\u0010\u001b\u001a\u00020\u0011H\u0087\b\u001a\u0015\u0010\u001c\u001a\u00020\u0011*\u00020\u00022\u0006\u0010\u001b\u001a\u00020\u0011H\u0087\b\u001a\u001d\u0010\u001d\u001a\u00020\u0011*\u00020\u00022\u0006\u0010\u001e\u001a\u00020\u00112\u0006\u0010\u001f\u001a\u00020\u0011H\u0087\b\u001a\u001c\u0010 \u001a\u00020\u0011*\u00020\u00022\u0006\u0010!\u001a\u00020\u00022\b\b\u0002\u0010\"\u001a\u00020#\u001a\f\u0010$\u001a\u00020\u0002*\u00020\u0014H\u0007\u001a \u0010$\u001a\u00020\u0002*\u00020\u00142\b\b\u0002\u0010%\u001a\u00020\u00112\b\b\u0002\u0010\u001f\u001a\u00020\u0011H\u0007\u001a\u0019\u0010&\u001a\u00020#*\u0004\u0018\u00010'2\b\u0010!\u001a\u0004\u0018\u00010'H\u0087\u0004\u001a \u0010&\u001a\u00020#*\u0004\u0018\u00010'2\b\u0010!\u001a\u0004\u0018\u00010'2\u0006\u0010\"\u001a\u00020#H\u0007\u001a\u0015\u0010&\u001a\u00020#*\u00020\u00022\u0006\u0010\n\u001a\u00020\tH\u0087\b\u001a\u0015\u0010&\u001a\u00020#*\u00020\u00022\u0006\u0010(\u001a\u00020'H\u0087\b\u001a\f\u0010)\u001a\u00020\u0002*\u00020\u0002H\u0007\u001a\u0014\u0010)\u001a\u00020\u0002*\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u0019H\u0007\u001a\f\u0010*\u001a\u00020\u0002*\u00020\rH\u0007\u001a*\u0010*\u001a\u00020\u0002*\u00020\r2\b\b\u0002\u0010%\u001a\u00020\u00112\b\b\u0002\u0010\u001f\u001a\u00020\u00112\b\b\u0002\u0010+\u001a\u00020#H\u0007\u001a\f\u0010,\u001a\u00020\r*\u00020\u0002H\u0007\u001a*\u0010,\u001a\u00020\r*\u00020\u00022\b\b\u0002\u0010%\u001a\u00020\u00112\b\b\u0002\u0010\u001f\u001a\u00020\u00112\b\b\u0002\u0010+\u001a\u00020#H\u0007\u001a\u001c\u0010-\u001a\u00020#*\u00020\u00022\u0006\u0010.\u001a\u00020\u00022\b\b\u0002\u0010\"\u001a\u00020#\u001a \u0010/\u001a\u00020#*\u0004\u0018\u00010\u00022\b\u0010!\u001a\u0004\u0018\u00010\u00022\b\b\u0002\u0010\"\u001a\u00020#\u001a2\u00100\u001a\u00020\u0002*\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u00192\u0016\u00101\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010302\"\u0004\u0018\u000103H\u0087\b¢\u0006\u0002\u00104\u001a6\u00100\u001a\u00020\u0002*\u00020\u00022\b\u0010\u0018\u001a\u0004\u0018\u00010\u00192\u0016\u00101\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010302\"\u0004\u0018\u000103H\u0087\b¢\u0006\u0004\b5\u00104\u001a*\u00100\u001a\u00020\u0002*\u00020\u00022\u0016\u00101\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010302\"\u0004\u0018\u000103H\u0087\b¢\u0006\u0002\u00106\u001a:\u00100\u001a\u00020\u0002*\u00020\u00042\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u00100\u001a\u00020\u00022\u0016\u00101\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010302\"\u0004\u0018\u000103H\u0087\b¢\u0006\u0002\u00107\u001a>\u00100\u001a\u00020\u0002*\u00020\u00042\b\u0010\u0018\u001a\u0004\u0018\u00010\u00192\u0006\u00100\u001a\u00020\u00022\u0016\u00101\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010302\"\u0004\u0018\u000103H\u0087\b¢\u0006\u0004\b5\u00107\u001a2\u00100\u001a\u00020\u0002*\u00020\u00042\u0006\u00100\u001a\u00020\u00022\u0016\u00101\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010302\"\u0004\u0018\u000103H\u0087\b¢\u0006\u0002\u00108\u001a\r\u00109\u001a\u00020\u0002*\u00020\u0002H\u0087\b\u001a\n\u0010:\u001a\u00020#*\u00020'\u001a\r\u0010;\u001a\u00020\u0002*\u00020\u0002H\u0087\b\u001a\u0015\u0010;\u001a\u00020\u0002*\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u0019H\u0087\b\u001a\u001d\u0010<\u001a\u00020\u0011*\u00020\u00022\u0006\u0010=\u001a\u00020>2\u0006\u0010?\u001a\u00020\u0011H\u0081\b\u001a\u001d\u0010<\u001a\u00020\u0011*\u00020\u00022\u0006\u0010@\u001a\u00020\u00022\u0006\u0010?\u001a\u00020\u0011H\u0081\b\u001a\u001d\u0010A\u001a\u00020\u0011*\u00020\u00022\u0006\u0010=\u001a\u00020>2\u0006\u0010?\u001a\u00020\u0011H\u0081\b\u001a\u001d\u0010A\u001a\u00020\u0011*\u00020\u00022\u0006\u0010@\u001a\u00020\u00022\u0006\u0010?\u001a\u00020\u0011H\u0081\b\u001a\u001d\u0010B\u001a\u00020\u0011*\u00020\u00022\u0006\u0010\u001b\u001a\u00020\u00112\u0006\u0010C\u001a\u00020\u0011H\u0087\b\u001a4\u0010D\u001a\u00020#*\u00020'2\u0006\u0010E\u001a\u00020\u00112\u0006\u0010!\u001a\u00020'2\u0006\u0010F\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00112\b\b\u0002\u0010\"\u001a\u00020#\u001a4\u0010D\u001a\u00020#*\u00020\u00022\u0006\u0010E\u001a\u00020\u00112\u0006\u0010!\u001a\u00020\u00022\u0006\u0010F\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00112\b\b\u0002\u0010\"\u001a\u00020#\u001a\u0012\u0010G\u001a\u00020\u0002*\u00020'2\u0006\u0010H\u001a\u00020\u0011\u001a$\u0010I\u001a\u00020\u0002*\u00020\u00022\u0006\u0010J\u001a\u00020>2\u0006\u0010K\u001a\u00020>2\b\b\u0002\u0010\"\u001a\u00020#\u001a$\u0010I\u001a\u00020\u0002*\u00020\u00022\u0006\u0010L\u001a\u00020\u00022\u0006\u0010M\u001a\u00020\u00022\b\b\u0002\u0010\"\u001a\u00020#\u001a$\u0010N\u001a\u00020\u0002*\u00020\u00022\u0006\u0010J\u001a\u00020>2\u0006\u0010K\u001a\u00020>2\b\b\u0002\u0010\"\u001a\u00020#\u001a$\u0010N\u001a\u00020\u0002*\u00020\u00022\u0006\u0010L\u001a\u00020\u00022\u0006\u0010M\u001a\u00020\u00022\b\b\u0002\u0010\"\u001a\u00020#\u001a\"\u0010O\u001a\b\u0012\u0004\u0012\u00020\u00020P*\u00020'2\u0006\u0010Q\u001a\u00020R2\b\b\u0002\u0010S\u001a\u00020\u0011\u001a\u001c\u0010T\u001a\u00020#*\u00020\u00022\u0006\u0010U\u001a\u00020\u00022\b\b\u0002\u0010\"\u001a\u00020#\u001a$\u0010T\u001a\u00020#*\u00020\u00022\u0006\u0010U\u001a\u00020\u00022\u0006\u0010%\u001a\u00020\u00112\b\b\u0002\u0010\"\u001a\u00020#\u001a\u0015\u0010V\u001a\u00020\u0002*\u00020\u00022\u0006\u0010%\u001a\u00020\u0011H\u0087\b\u001a\u001d\u0010V\u001a\u00020\u0002*\u00020\u00022\u0006\u0010%\u001a\u00020\u00112\u0006\u0010\u001f\u001a\u00020\u0011H\u0087\b\u001a\u0017\u0010W\u001a\u00020\r*\u00020\u00022\b\b\u0002\u0010\u000e\u001a\u00020\u000fH\u0087\b\u001a\r\u0010X\u001a\u00020\u0014*\u00020\u0002H\u0087\b\u001a3\u0010X\u001a\u00020\u0014*\u00020\u00022\u0006\u0010Y\u001a\u00020\u00142\b\b\u0002\u0010Z\u001a\u00020\u00112\b\b\u0002\u0010%\u001a\u00020\u00112\b\b\u0002\u0010\u001f\u001a\u00020\u0011H\u0087\b\u001a \u0010X\u001a\u00020\u0014*\u00020\u00022\b\b\u0002\u0010%\u001a\u00020\u00112\b\b\u0002\u0010\u001f\u001a\u00020\u0011H\u0007\u001a\r\u0010[\u001a\u00020\u0002*\u00020\u0002H\u0087\b\u001a\u0015\u0010[\u001a\u00020\u0002*\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u0019H\u0087\b\u001a\u0017\u0010\\\u001a\u00020R*\u00020\u00022\b\b\u0002\u0010]\u001a\u00020\u0011H\u0087\b\u001a\r\u0010^\u001a\u00020\u0002*\u00020\u0002H\u0087\b\u001a\u0015\u0010^\u001a\u00020\u0002*\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u0019H\u0087\b\u001a\r\u0010_\u001a\u00020\u0002*\u00020\u0002H\u0087\b\u001a\u0015\u0010_\u001a\u00020\u0002*\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u0019H\u0087\b\"%\u0010\u0000\u001a\u0012\u0012\u0004\u0012\u00020\u00020\u0001j\b\u0012\u0004\u0012\u00020\u0002`\u0003*\u00020\u00048F¢\u0006\u0006\u001a\u0004\b\u0005\u0010\u0006¨\u0006`"}, d2 = {"CASE_INSENSITIVE_ORDER", "Ljava/util/Comparator;", "", "Lkotlin/Comparator;", "Lkotlin/String$Companion;", "getCASE_INSENSITIVE_ORDER", "(Lkotlin/jvm/internal/StringCompanionObject;)Ljava/util/Comparator;", "String", "stringBuffer", "Ljava/lang/StringBuffer;", "stringBuilder", "Ljava/lang/StringBuilder;", "bytes", "", "charset", "Ljava/nio/charset/Charset;", "offset", "", "length", "chars", "", "codePoints", "", "capitalize", "locale", "Ljava/util/Locale;", "codePointAt", "index", "codePointBefore", "codePointCount", "beginIndex", "endIndex", "compareTo", "other", "ignoreCase", "", "concatToString", "startIndex", "contentEquals", "", "charSequence", "decapitalize", "decodeToString", "throwOnInvalidSequence", "encodeToByteArray", "endsWith", "suffix", "equals", "format", "args", "", "", "(Ljava/lang/String;Ljava/util/Locale;[Ljava/lang/Object;)Ljava/lang/String;", "formatNullable", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", "(Lkotlin/jvm/internal/StringCompanionObject;Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", "(Lkotlin/jvm/internal/StringCompanionObject;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", "intern", "isBlank", "lowercase", "nativeIndexOf", "ch", "", "fromIndex", "str", "nativeLastIndexOf", "offsetByCodePoints", "codePointOffset", "regionMatches", "thisOffset", "otherOffset", "repeat", "n", "replace", "oldChar", "newChar", "oldValue", "newValue", "replaceFirst", "split", "", "regex", "Ljava/util/regex/Pattern;", "limit", "startsWith", "prefix", "substring", "toByteArray", "toCharArray", "destination", "destinationOffset", "toLowerCase", "toPattern", "flags", "toUpperCase", "uppercase", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/text/StringsKt")
class StringsKt__StringsJVMKt extends kotlin.text.StringsKt__StringNumberConversionsKt {
    public StringsKt__StringsJVMKt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static final java.lang.String String(java.lang.StringBuffer r1) {
            java.lang.String r0 = "stringBuffer"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            return r0
    }

    private static final java.lang.String String(java.lang.StringBuilder r1) {
            java.lang.String r0 = "stringBuilder"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            return r0
    }

    private static final java.lang.String String(byte[] r2) {
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
            r0.<init>(r2, r1)
            return r0
    }

    private static final java.lang.String String(byte[] r2, int r3, int r4) {
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
            r0.<init>(r2, r3, r4, r1)
            return r0
    }

    private static final java.lang.String String(byte[] r1, int r2, int r3, java.nio.charset.Charset r4) {
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    private static final java.lang.String String(byte[] r1, java.nio.charset.Charset r2) {
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1, r2)
            return r0
    }

    private static final java.lang.String String(char[] r1) {
            java.lang.String r0 = "chars"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            return r0
    }

    private static final java.lang.String String(char[] r1, int r2, int r3) {
            java.lang.String r0 = "chars"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1, r2, r3)
            return r0
    }

    private static final java.lang.String String(int[] r1, int r2, int r3) {
            java.lang.String r0 = "codePoints"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1, r2, r3)
            return r0
    }

    @kotlin.Deprecated(message = "Use replaceFirstChar instead.", replaceWith = @kotlin.ReplaceWith(expression = "replaceFirstChar { if (it.isLowerCase()) it.titlecase(Locale.getDefault()) else it.toString() }", imports = {"java.util.Locale"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static final java.lang.String capitalize(java.lang.String r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r1 = "getDefault()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.String r2 = kotlin.text.StringsKt.capitalize(r2, r0)
            return r2
    }

    @kotlin.Deprecated(message = "Use replaceFirstChar instead.", replaceWith = @kotlin.ReplaceWith(expression = "replaceFirstChar { if (it.isLowerCase()) it.titlecase(locale) else it.toString() }", imports = {}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static final java.lang.String capitalize(java.lang.String r5, java.util.Locale r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "locale"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            r0 = r5
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            int r0 = r0.length()
            r1 = 1
            r2 = 0
            if (r0 <= 0) goto L17
            r0 = r1
            goto L18
        L17:
            r0 = r2
        L18:
            if (r0 == 0) goto L61
            char r0 = r5.charAt(r2)
            boolean r3 = java.lang.Character.isLowerCase(r0)
            if (r3 == 0) goto L61
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char r4 = java.lang.Character.toTitleCase(r0)
            char r0 = java.lang.Character.toUpperCase(r0)
            if (r4 == r0) goto L37
            r3.append(r4)
            goto L4c
        L37:
            java.lang.String r0 = r5.substring(r2, r1)
            java.lang.String r2 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r2)
            java.lang.String r6 = r0.toUpperCase(r6)
            java.lang.String r0 = "this as java.lang.String).toUpperCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r6, r0)
            r3.append(r6)
        L4c:
            java.lang.String r5 = r5.substring(r1)
            java.lang.String r6 = "this as java.lang.String).substring(startIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r6)
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            java.lang.String r6 = "StringBuilder().apply(builderAction).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r6)
        L61:
            return r5
    }

    private static final int codePointAt(java.lang.String r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = r1.codePointAt(r2)
            return r1
    }

    private static final int codePointBefore(java.lang.String r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = r1.codePointBefore(r2)
            return r1
    }

    private static final int codePointCount(java.lang.String r1, int r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = r1.codePointCount(r2, r3)
            return r1
    }

    public static final int compareTo(java.lang.String r1, java.lang.String r2, boolean r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            if (r3 == 0) goto L11
            int r1 = r1.compareToIgnoreCase(r2)
            return r1
        L11:
            int r1 = r1.compareTo(r2)
            return r1
    }

    public static int compareTo$default(java.lang.String r0, java.lang.String r1, boolean r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L5
            r2 = 0
        L5:
            int r0 = kotlin.text.StringsKt.compareTo(r0, r1, r2)
            return r0
    }

    public static final java.lang.String concatToString(char[] r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            return r0
    }

    public static final java.lang.String concatToString(char[] r2, int r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.AbstractList$Companion r0 = kotlin.collections.AbstractList.Companion
            int r1 = r2.length
            r0.checkBoundsIndexes$kotlin_stdlib(r3, r4, r1)
            java.lang.String r0 = new java.lang.String
            int r4 = r4 - r3
            r0.<init>(r2, r3, r4)
            return r0
    }

    public static java.lang.String concatToString$default(char[] r0, int r1, int r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L5
            r1 = 0
        L5:
            r3 = r3 & 2
            if (r3 == 0) goto La
            int r2 = r0.length
        La:
            java.lang.String r0 = kotlin.text.StringsKt.concatToString(r0, r1, r2)
            return r0
    }

    public static final boolean contentEquals(java.lang.CharSequence r1, java.lang.CharSequence r2) {
            boolean r0 = r1 instanceof java.lang.String
            if (r0 == 0) goto Ld
            if (r2 == 0) goto Ld
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = r1.contentEquals(r2)
            goto L11
        Ld:
            boolean r1 = kotlin.text.StringsKt.contentEqualsImpl(r1, r2)
        L11:
            return r1
    }

    public static final boolean contentEquals(java.lang.CharSequence r0, java.lang.CharSequence r1, boolean r2) {
            if (r2 == 0) goto L7
            boolean r0 = kotlin.text.StringsKt.contentEqualsIgnoreCaseImpl(r0, r1)
            goto Lb
        L7:
            boolean r0 = kotlin.text.StringsKt.contentEquals(r0, r1)
        Lb:
            return r0
    }

    private static final boolean contentEquals(java.lang.String r1, java.lang.CharSequence r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charSequence"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r1 = r1.contentEquals(r2)
            return r1
    }

    private static final boolean contentEquals(java.lang.String r1, java.lang.StringBuffer r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "stringBuilder"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r1 = r1.contentEquals(r2)
            return r1
    }

    @kotlin.Deprecated(message = "Use replaceFirstChar instead.", replaceWith = @kotlin.ReplaceWith(expression = "replaceFirstChar { it.lowercase(Locale.getDefault()) }", imports = {"java.util.Locale"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static final java.lang.String decapitalize(java.lang.String r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = r4
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            int r0 = r0.length()
            r1 = 1
            r2 = 0
            if (r0 <= 0) goto L12
            r0 = r1
            goto L13
        L12:
            r0 = r2
        L13:
            if (r0 == 0) goto L49
            char r0 = r4.charAt(r2)
            boolean r0 = java.lang.Character.isLowerCase(r0)
            if (r0 != 0) goto L49
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r4.substring(r2, r1)
            java.lang.String r3 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            java.lang.String r2 = r2.toLowerCase()
            java.lang.String r3 = "this as java.lang.String).toLowerCase()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            r0.append(r2)
            java.lang.String r4 = r4.substring(r1)
            java.lang.String r1 = "this as java.lang.String).substring(startIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        L49:
            return r4
    }

    @kotlin.Deprecated(message = "Use replaceFirstChar instead.", replaceWith = @kotlin.ReplaceWith(expression = "replaceFirstChar { it.lowercase(locale) }", imports = {}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    public static final java.lang.String decapitalize(java.lang.String r4, java.util.Locale r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "locale"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = r4
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            int r0 = r0.length()
            r1 = 1
            r2 = 0
            if (r0 <= 0) goto L17
            r0 = r1
            goto L18
        L17:
            r0 = r2
        L18:
            if (r0 == 0) goto L4e
            char r0 = r4.charAt(r2)
            boolean r0 = java.lang.Character.isLowerCase(r0)
            if (r0 != 0) goto L4e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r4.substring(r2, r1)
            java.lang.String r3 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            java.lang.String r5 = r2.toLowerCase(r5)
            java.lang.String r2 = "this as java.lang.String).toLowerCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r2)
            r0.append(r5)
            java.lang.String r4 = r4.substring(r1)
            java.lang.String r5 = "this as java.lang.String).substring(startIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r5)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        L4e:
            return r4
    }

    public static final java.lang.String decodeToString(byte[] r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
            r0.<init>(r2, r1)
            return r0
    }

    public static final java.lang.String decodeToString(byte[] r2, int r3, int r4, boolean r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.AbstractList$Companion r0 = kotlin.collections.AbstractList.Companion
            int r1 = r2.length
            r0.checkBoundsIndexes$kotlin_stdlib(r3, r4, r1)
            if (r5 != 0) goto L16
            java.lang.String r5 = new java.lang.String
            int r4 = r4 - r3
            java.nio.charset.Charset r0 = kotlin.text.Charsets.UTF_8
            r5.<init>(r2, r3, r4, r0)
            return r5
        L16:
            java.nio.charset.Charset r5 = kotlin.text.Charsets.UTF_8
            java.nio.charset.CharsetDecoder r5 = r5.newDecoder()
            java.nio.charset.CodingErrorAction r0 = java.nio.charset.CodingErrorAction.REPORT
            java.nio.charset.CharsetDecoder r5 = r5.onMalformedInput(r0)
            java.nio.charset.CodingErrorAction r0 = java.nio.charset.CodingErrorAction.REPORT
            java.nio.charset.CharsetDecoder r5 = r5.onUnmappableCharacter(r0)
            int r4 = r4 - r3
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2, r3, r4)
            java.nio.CharBuffer r2 = r5.decode(r2)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "decoder.decode(ByteBuffe…- startIndex)).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            return r2
    }

    public static java.lang.String decodeToString$default(byte[] r1, int r2, int r3, boolean r4, int r5, java.lang.Object r6) {
            r6 = r5 & 1
            r0 = 0
            if (r6 == 0) goto L6
            r2 = r0
        L6:
            r6 = r5 & 2
            if (r6 == 0) goto Lb
            int r3 = r1.length
        Lb:
            r5 = r5 & 4
            if (r5 == 0) goto L10
            r4 = r0
        L10:
            java.lang.String r1 = kotlin.text.StringsKt.decodeToString(r1, r2, r3, r4)
            return r1
    }

    public static final byte[] encodeToByteArray(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.nio.charset.Charset r0 = kotlin.text.Charsets.UTF_8
            byte[] r1 = r1.getBytes(r0)
            java.lang.String r0 = "this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    public static final byte[] encodeToByteArray(java.lang.String r2, int r3, int r4, boolean r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.AbstractList$Companion r0 = kotlin.collections.AbstractList.Companion
            int r1 = r2.length()
            r0.checkBoundsIndexes$kotlin_stdlib(r3, r4, r1)
            if (r5 != 0) goto L25
            java.lang.String r2 = r2.substring(r3, r4)
            java.lang.String r3 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            java.nio.charset.Charset r3 = kotlin.text.Charsets.UTF_8
            byte[] r2 = r2.getBytes(r3)
            java.lang.String r3 = "this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            return r2
        L25:
            java.nio.charset.Charset r5 = kotlin.text.Charsets.UTF_8
            java.nio.charset.CharsetEncoder r5 = r5.newEncoder()
            java.nio.charset.CodingErrorAction r0 = java.nio.charset.CodingErrorAction.REPORT
            java.nio.charset.CharsetEncoder r5 = r5.onMalformedInput(r0)
            java.nio.charset.CodingErrorAction r0 = java.nio.charset.CodingErrorAction.REPORT
            java.nio.charset.CharsetEncoder r5 = r5.onUnmappableCharacter(r0)
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            java.nio.CharBuffer r2 = java.nio.CharBuffer.wrap(r2, r3, r4)
            java.nio.ByteBuffer r2 = r5.encode(r2)
            boolean r3 = r2.hasArray()
            if (r3 == 0) goto L65
            int r3 = r2.arrayOffset()
            if (r3 != 0) goto L65
            int r3 = r2.remaining()
            byte[] r4 = r2.array()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            int r4 = r4.length
            if (r3 != r4) goto L65
            byte[] r2 = r2.array()
            java.lang.String r3 = "{\n        byteBuffer.array()\n    }"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            goto L6f
        L65:
            int r3 = r2.remaining()
            byte[] r3 = new byte[r3]
            r2.get(r3)
            r2 = r3
        L6f:
            return r2
    }

    public static byte[] encodeToByteArray$default(java.lang.String r1, int r2, int r3, boolean r4, int r5, java.lang.Object r6) {
            r6 = r5 & 1
            r0 = 0
            if (r6 == 0) goto L6
            r2 = r0
        L6:
            r6 = r5 & 2
            if (r6 == 0) goto Le
            int r3 = r1.length()
        Le:
            r5 = r5 & 4
            if (r5 == 0) goto L13
            r4 = r0
        L13:
            byte[] r1 = kotlin.text.StringsKt.encodeToByteArray(r1, r2, r3, r4)
            return r1
    }

    public static final boolean endsWith(java.lang.String r7, java.lang.String r8, boolean r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "suffix"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            if (r9 != 0) goto L11
            boolean r7 = r7.endsWith(r8)
            return r7
        L11:
            int r9 = r7.length()
            int r0 = r8.length()
            int r2 = r9 - r0
            r4 = 0
            int r5 = r8.length()
            r6 = 1
            r1 = r7
            r3 = r8
            boolean r7 = kotlin.text.StringsKt.regionMatches(r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static boolean endsWith$default(java.lang.String r0, java.lang.String r1, boolean r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L5
            r2 = 0
        L5:
            boolean r0 = kotlin.text.StringsKt.endsWith(r0, r1, r2)
            return r0
    }

    public static final boolean equals(java.lang.String r0, java.lang.String r1, boolean r2) {
            if (r0 != 0) goto L8
            if (r1 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
        L8:
            if (r2 != 0) goto Lf
            boolean r0 = r0.equals(r1)
            goto L13
        Lf:
            boolean r0 = r0.equalsIgnoreCase(r1)
        L13:
            return r0
    }

    public static boolean equals$default(java.lang.String r0, java.lang.String r1, boolean r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L5
            r2 = 0
        L5:
            boolean r0 = kotlin.text.StringsKt.equals(r0, r1, r2)
            return r0
    }

    @kotlin.Deprecated(message = "Use Kotlin compiler 1.4 to avoid deprecation warning.")
    @kotlin.DeprecatedSinceKotlin(hiddenSince = "1.4")
    private static final java.lang.String format(java.lang.String r1, java.util.Locale r2, java.lang.Object... r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "locale"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "args"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r0 = r3.length
            java.lang.Object[] r3 = java.util.Arrays.copyOf(r3, r0)
            java.lang.String r1 = java.lang.String.format(r2, r1, r3)
            java.lang.String r2 = "format(locale, this, *args)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final java.lang.String format(java.lang.String r1, java.lang.Object... r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "args"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0)
            java.lang.String r1 = java.lang.String.format(r1, r2)
            java.lang.String r2 = "format(this, *args)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final java.lang.String format(kotlin.jvm.internal.StringCompanionObject r1, java.lang.String r2, java.lang.Object... r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = "format"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            java.lang.String r1 = "args"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r1)
            int r1 = r3.length
            java.lang.Object[] r1 = java.util.Arrays.copyOf(r3, r1)
            java.lang.String r1 = java.lang.String.format(r2, r1)
            java.lang.String r2 = "format(format, *args)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    @kotlin.Deprecated(message = "Use Kotlin compiler 1.4 to avoid deprecation warning.")
    @kotlin.DeprecatedSinceKotlin(hiddenSince = "1.4")
    private static final java.lang.String format(kotlin.jvm.internal.StringCompanionObject r1, java.util.Locale r2, java.lang.String r3, java.lang.Object... r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = "locale"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            java.lang.String r1 = "format"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r1)
            java.lang.String r1 = "args"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r1)
            int r1 = r4.length
            java.lang.Object[] r1 = java.util.Arrays.copyOf(r4, r1)
            java.lang.String r1 = java.lang.String.format(r2, r3, r1)
            java.lang.String r2 = "format(locale, format, *args)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final java.lang.String formatNullable(java.lang.String r1, java.util.Locale r2, java.lang.Object... r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "args"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r0 = r3.length
            java.lang.Object[] r3 = java.util.Arrays.copyOf(r3, r0)
            java.lang.String r1 = java.lang.String.format(r2, r1, r3)
            java.lang.String r2 = "format(locale, this, *args)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final java.lang.String formatNullable(kotlin.jvm.internal.StringCompanionObject r1, java.util.Locale r2, java.lang.String r3, java.lang.Object... r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = "format"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r1)
            java.lang.String r1 = "args"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r1)
            int r1 = r4.length
            java.lang.Object[] r1 = java.util.Arrays.copyOf(r4, r1)
            java.lang.String r1 = java.lang.String.format(r2, r3, r1)
            java.lang.String r2 = "format(locale, format, *args)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    public static final java.util.Comparator<java.lang.String> getCASE_INSENSITIVE_ORDER(kotlin.jvm.internal.StringCompanionObject r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.Comparator r1 = java.lang.String.CASE_INSENSITIVE_ORDER
            java.lang.String r0 = "CASE_INSENSITIVE_ORDER"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    private static final java.lang.String intern(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = r1.intern()
            java.lang.String r0 = "this as java.lang.String).intern()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    public static final boolean isBlank(java.lang.CharSequence r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length()
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L40
            kotlin.ranges.IntRange r0 = kotlin.text.StringsKt.getIndices(r4)
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            boolean r3 = r0 instanceof java.util.Collection
            if (r3 == 0) goto L22
            r3 = r0
            java.util.Collection r3 = (java.util.Collection) r3
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L22
        L20:
            r4 = r2
            goto L3e
        L22:
            java.util.Iterator r0 = r0.iterator()
        L26:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L20
            r3 = r0
            kotlin.collections.IntIterator r3 = (kotlin.collections.IntIterator) r3
            int r3 = r3.nextInt()
            char r3 = r4.charAt(r3)
            boolean r3 = kotlin.text.CharsKt.isWhitespace(r3)
            if (r3 != 0) goto L26
            r4 = r1
        L3e:
            if (r4 == 0) goto L41
        L40:
            r1 = r2
        L41:
            return r1
    }

    private static final java.lang.String lowercase(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r1 = r1.toLowerCase(r0)
            java.lang.String r0 = "this as java.lang.String).toLowerCase(Locale.ROOT)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    private static final java.lang.String lowercase(java.lang.String r1, java.util.Locale r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "locale"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r1 = r1.toLowerCase(r2)
            java.lang.String r2 = "this as java.lang.String).toLowerCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final int nativeIndexOf(java.lang.String r1, char r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = r1.indexOf(r2, r3)
            return r1
    }

    private static final int nativeIndexOf(java.lang.String r1, java.lang.String r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "str"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r1 = r1.indexOf(r2, r3)
            return r1
    }

    private static final int nativeLastIndexOf(java.lang.String r1, char r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = r1.lastIndexOf(r2, r3)
            return r1
    }

    private static final int nativeLastIndexOf(java.lang.String r1, java.lang.String r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "str"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r1 = r1.lastIndexOf(r2, r3)
            return r1
    }

    private static final int offsetByCodePoints(java.lang.String r1, int r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = r1.offsetByCodePoints(r2, r3)
            return r1
    }

    public static final boolean regionMatches(java.lang.CharSequence r7, int r8, java.lang.CharSequence r9, int r10, int r11, boolean r12) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            boolean r0 = r7 instanceof java.lang.String
            if (r0 == 0) goto L21
            boolean r0 = r9 instanceof java.lang.String
            if (r0 == 0) goto L21
            r1 = r7
            java.lang.String r1 = (java.lang.String) r1
            r3 = r9
            java.lang.String r3 = (java.lang.String) r3
            r2 = r8
            r4 = r10
            r5 = r11
            r6 = r12
            boolean r7 = kotlin.text.StringsKt.regionMatches(r1, r2, r3, r4, r5, r6)
            return r7
        L21:
            boolean r7 = kotlin.text.StringsKt.regionMatchesImpl(r7, r8, r9, r10, r11, r12)
            return r7
    }

    public static final boolean regionMatches(java.lang.String r6, int r7, java.lang.String r8, int r9, int r10, boolean r11) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            if (r11 != 0) goto L11
            boolean r6 = r6.regionMatches(r7, r8, r9, r10)
            goto L1b
        L11:
            r0 = r6
            r1 = r11
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            boolean r6 = r0.regionMatches(r1, r2, r3, r4, r5)
        L1b:
            return r6
    }

    public static boolean regionMatches$default(java.lang.CharSequence r6, int r7, java.lang.CharSequence r8, int r9, int r10, boolean r11, int r12, java.lang.Object r13) {
            r12 = r12 & 16
            if (r12 == 0) goto L5
            r11 = 0
        L5:
            r5 = r11
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            boolean r6 = kotlin.text.StringsKt.regionMatches(r0, r1, r2, r3, r4, r5)
            return r6
    }

    public static boolean regionMatches$default(java.lang.String r6, int r7, java.lang.String r8, int r9, int r10, boolean r11, int r12, java.lang.Object r13) {
            r12 = r12 & 16
            if (r12 == 0) goto L5
            r11 = 0
        L5:
            r5 = r11
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            boolean r6 = kotlin.text.StringsKt.regionMatches(r0, r1, r2, r3, r4, r5)
            return r6
    }

    public static final java.lang.String repeat(java.lang.CharSequence r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 0
            r1 = 1
            if (r5 < 0) goto Lb
            r2 = r1
            goto Lc
        Lb:
            r2 = r0
        Lc:
            if (r2 == 0) goto L52
            java.lang.String r2 = ""
            if (r5 == 0) goto L51
            if (r5 == r1) goto L4d
            int r3 = r4.length()
            if (r3 == 0) goto L51
            if (r3 == r1) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r2 = r4.length()
            int r2 = r2 * r5
            r0.<init>(r2)
            if (r1 > r5) goto L30
        L28:
            r0.append(r4)
            if (r1 == r5) goto L30
            int r1 = r1 + 1
            goto L28
        L30:
            java.lang.String r2 = r0.toString()
            java.lang.String r4 = "{\n                    va…tring()\n                }"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r4)
            goto L51
        L3a:
            char r4 = r4.charAt(r0)
            char[] r1 = new char[r5]
        L40:
            if (r0 >= r5) goto L47
            r1[r0] = r4
            int r0 = r0 + 1
            goto L40
        L47:
            java.lang.String r2 = new java.lang.String
            r2.<init>(r1)
            goto L51
        L4d:
            java.lang.String r2 = r4.toString()
        L51:
            return r2
        L52:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Count 'n' must be non-negative, but was "
            r4.append(r0)
            r4.append(r5)
            r5 = 46
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r4 = r4.toString()
            r5.<init>(r4)
            throw r5
    }

    public static final java.lang.String replace(java.lang.String r4, char r5, char r6, boolean r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            if (r7 != 0) goto L11
            java.lang.String r4 = r4.replace(r5, r6)
            java.lang.String r5 = "this as java.lang.String…replace(oldChar, newChar)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r5)
            return r4
        L11:
            int r0 = r4.length()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            r0 = 0
        L1d:
            int r2 = r4.length()
            if (r0 >= r2) goto L34
            char r2 = r4.charAt(r0)
            boolean r3 = kotlin.text.CharsKt.equals(r2, r5, r7)
            if (r3 == 0) goto L2e
            r2 = r6
        L2e:
            r1.append(r2)
            int r0 = r0 + 1
            goto L1d
        L34:
            java.lang.String r4 = r1.toString()
            java.lang.String r5 = "StringBuilder(capacity).…builderAction).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r5)
            return r4
    }

    public static final java.lang.String replace(java.lang.String r7, java.lang.String r8, java.lang.String r9, boolean r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "oldValue"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "newValue"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r0 = r7
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r1 = 0
            int r2 = kotlin.text.StringsKt.indexOf(r0, r8, r1, r10)
            if (r2 >= 0) goto L1a
            return r7
        L1a:
            int r3 = r8.length()
            r4 = 1
            int r4 = kotlin.ranges.RangesKt.coerceAtLeast(r3, r4)
            int r5 = r7.length()
            int r5 = r5 - r3
            int r6 = r9.length()
            int r5 = r5 + r6
            if (r5 < 0) goto L5a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>(r5)
        L34:
            r6.append(r0, r1, r2)
            r6.append(r9)
            int r1 = r2 + r3
            int r5 = r7.length()
            if (r2 >= r5) goto L49
            int r2 = r2 + r4
            int r2 = kotlin.text.StringsKt.indexOf(r0, r8, r2, r10)
            if (r2 > 0) goto L34
        L49:
            int r7 = r7.length()
            r6.append(r0, r1, r7)
            java.lang.String r7 = r6.toString()
            java.lang.String r8 = "stringBuilder.append(this, i, length).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r8)
            return r7
        L5a:
            java.lang.OutOfMemoryError r7 = new java.lang.OutOfMemoryError
            r7.<init>()
            throw r7
    }

    public static java.lang.String replace$default(java.lang.String r0, char r1, char r2, boolean r3, int r4, java.lang.Object r5) {
            r4 = r4 & 4
            if (r4 == 0) goto L5
            r3 = 0
        L5:
            java.lang.String r0 = kotlin.text.StringsKt.replace(r0, r1, r2, r3)
            return r0
    }

    public static java.lang.String replace$default(java.lang.String r0, java.lang.String r1, java.lang.String r2, boolean r3, int r4, java.lang.Object r5) {
            r4 = r4 & 4
            if (r4 == 0) goto L5
            r3 = 0
        L5:
            java.lang.String r0 = kotlin.text.StringsKt.replace(r0, r1, r2, r3)
            return r0
    }

    public static final java.lang.String replaceFirst(java.lang.String r7, char r8, char r9, boolean r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            r0 = r7
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r3 = 0
            r5 = 2
            r6 = 0
            r1 = r0
            r2 = r8
            r4 = r10
            int r8 = kotlin.text.StringsKt.indexOf$default(r1, r2, r3, r4, r5, r6)
            if (r8 >= 0) goto L15
            goto L25
        L15:
            int r7 = r8 + 1
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.CharSequence r9 = (java.lang.CharSequence) r9
            java.lang.CharSequence r7 = kotlin.text.StringsKt.replaceRange(r0, r8, r7, r9)
            java.lang.String r7 = r7.toString()
        L25:
            return r7
    }

    public static final java.lang.String replaceFirst(java.lang.String r7, java.lang.String r8, java.lang.String r9, boolean r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "oldValue"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "newValue"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r0 = r7
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r3 = 0
            r5 = 2
            r6 = 0
            r1 = r0
            r2 = r8
            r4 = r10
            int r10 = kotlin.text.StringsKt.indexOf$default(r1, r2, r3, r4, r5, r6)
            if (r10 >= 0) goto L1f
            goto L2e
        L1f:
            int r7 = r8.length()
            int r7 = r7 + r10
            java.lang.CharSequence r9 = (java.lang.CharSequence) r9
            java.lang.CharSequence r7 = kotlin.text.StringsKt.replaceRange(r0, r10, r7, r9)
            java.lang.String r7 = r7.toString()
        L2e:
            return r7
    }

    public static java.lang.String replaceFirst$default(java.lang.String r0, char r1, char r2, boolean r3, int r4, java.lang.Object r5) {
            r4 = r4 & 4
            if (r4 == 0) goto L5
            r3 = 0
        L5:
            java.lang.String r0 = kotlin.text.StringsKt.replaceFirst(r0, r1, r2, r3)
            return r0
    }

    public static java.lang.String replaceFirst$default(java.lang.String r0, java.lang.String r1, java.lang.String r2, boolean r3, int r4, java.lang.Object r5) {
            r4 = r4 & 4
            if (r4 == 0) goto L5
            r3 = 0
        L5:
            java.lang.String r0 = kotlin.text.StringsKt.replaceFirst(r0, r1, r2, r3)
            return r0
    }

    public static final java.util.List<java.lang.String> split(java.lang.CharSequence r1, java.util.regex.Pattern r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "regex"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.text.StringsKt.requireNonNegativeLimit(r3)
            if (r3 != 0) goto L10
            r3 = -1
        L10:
            java.lang.String[] r1 = r2.split(r1, r3)
            java.lang.String r2 = "regex.split(this, if (limit == 0) -1 else limit)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            java.util.List r1 = kotlin.collections.ArraysKt.asList(r1)
            return r1
    }

    public static java.util.List split$default(java.lang.CharSequence r0, java.util.regex.Pattern r1, int r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L5
            r2 = 0
        L5:
            java.util.List r0 = kotlin.text.StringsKt.split(r0, r1, r2)
            return r0
    }

    public static final boolean startsWith(java.lang.String r6, java.lang.String r7, int r8, boolean r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "prefix"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            if (r9 != 0) goto L11
            boolean r6 = r6.startsWith(r7, r8)
            return r6
        L11:
            r3 = 0
            int r4 = r7.length()
            r0 = r6
            r1 = r8
            r2 = r7
            r5 = r9
            boolean r6 = kotlin.text.StringsKt.regionMatches(r0, r1, r2, r3, r4, r5)
            return r6
    }

    public static final boolean startsWith(java.lang.String r6, java.lang.String r7, boolean r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "prefix"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            if (r8 != 0) goto L11
            boolean r6 = r6.startsWith(r7)
            return r6
        L11:
            r1 = 0
            r3 = 0
            int r4 = r7.length()
            r0 = r6
            r2 = r7
            r5 = r8
            boolean r6 = kotlin.text.StringsKt.regionMatches(r0, r1, r2, r3, r4, r5)
            return r6
    }

    public static boolean startsWith$default(java.lang.String r0, java.lang.String r1, int r2, boolean r3, int r4, java.lang.Object r5) {
            r4 = r4 & 4
            if (r4 == 0) goto L5
            r3 = 0
        L5:
            boolean r0 = kotlin.text.StringsKt.startsWith(r0, r1, r2, r3)
            return r0
    }

    public static boolean startsWith$default(java.lang.String r0, java.lang.String r1, boolean r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L5
            r2 = 0
        L5:
            boolean r0 = kotlin.text.StringsKt.startsWith(r0, r1, r2)
            return r0
    }

    private static final java.lang.String substring(java.lang.String r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = r1.substring(r2)
            java.lang.String r2 = "this as java.lang.String).substring(startIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final java.lang.String substring(java.lang.String r1, int r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = r1.substring(r2, r3)
            java.lang.String r2 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final byte[] toByteArray(java.lang.String r1, java.nio.charset.Charset r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            byte[] r1 = r1.getBytes(r2)
            java.lang.String r2 = "this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    static byte[] toByteArray$default(java.lang.String r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            byte[] r0 = r0.getBytes(r1)
            java.lang.String r1 = "this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    private static final char[] toCharArray(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            char[] r1 = r1.toCharArray()
            java.lang.String r0 = "this as java.lang.String).toCharArray()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    public static final char[] toCharArray(java.lang.String r2, int r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.AbstractList$Companion r0 = kotlin.collections.AbstractList.Companion
            int r1 = r2.length()
            r0.checkBoundsIndexes$kotlin_stdlib(r3, r4, r1)
            int r0 = r4 - r3
            char[] r0 = new char[r0]
            r1 = 0
            r2.getChars(r3, r4, r0, r1)
            return r0
    }

    private static final char[] toCharArray(java.lang.String r1, char[] r2, int r3, int r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "destination"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.getChars(r4, r5, r2, r3)
            return r2
    }

    public static char[] toCharArray$default(java.lang.String r0, int r1, int r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L5
            r1 = 0
        L5:
            r3 = r3 & 2
            if (r3 == 0) goto Ld
            int r2 = r0.length()
        Ld:
            char[] r0 = kotlin.text.StringsKt.toCharArray(r0, r1, r2)
            return r0
    }

    static char[] toCharArray$default(java.lang.String r1, char[] r2, int r3, int r4, int r5, int r6, java.lang.Object r7) {
            r7 = r6 & 2
            r0 = 0
            if (r7 == 0) goto L6
            r3 = r0
        L6:
            r7 = r6 & 4
            if (r7 == 0) goto Lb
            r4 = r0
        Lb:
            r6 = r6 & 8
            if (r6 == 0) goto L13
            int r5 = r1.length()
        L13:
            java.lang.String r6 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r6)
            java.lang.String r6 = "destination"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r6)
            r1.getChars(r4, r5, r2, r3)
            return r2
    }

    @kotlin.Deprecated(message = "Use lowercase() instead.", replaceWith = @kotlin.ReplaceWith(expression = "lowercase(Locale.getDefault())", imports = {"java.util.Locale"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    private static final java.lang.String toLowerCase(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = r1.toLowerCase()
            java.lang.String r0 = "this as java.lang.String).toLowerCase()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use lowercase() instead.", replaceWith = @kotlin.ReplaceWith(expression = "lowercase(locale)", imports = {}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    private static final java.lang.String toLowerCase(java.lang.String r1, java.util.Locale r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "locale"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r1 = r1.toLowerCase(r2)
            java.lang.String r2 = "this as java.lang.String).toLowerCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final java.util.regex.Pattern toPattern(java.lang.String r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r2)
            java.lang.String r2 = "compile(this, flags)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    static java.util.regex.Pattern toPattern$default(java.lang.String r0, int r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L5
            r1 = 0
        L5:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r1)
            java.lang.String r1 = "compile(this, flags)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    @kotlin.Deprecated(message = "Use uppercase() instead.", replaceWith = @kotlin.ReplaceWith(expression = "uppercase(Locale.getDefault())", imports = {"java.util.Locale"}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    private static final java.lang.String toUpperCase(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = r1.toUpperCase()
            java.lang.String r0 = "this as java.lang.String).toUpperCase()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    @kotlin.Deprecated(message = "Use uppercase() instead.", replaceWith = @kotlin.ReplaceWith(expression = "uppercase(locale)", imports = {}))
    @kotlin.DeprecatedSinceKotlin(warningSince = "1.5")
    private static final java.lang.String toUpperCase(java.lang.String r1, java.util.Locale r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "locale"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r1 = r1.toUpperCase(r2)
            java.lang.String r2 = "this as java.lang.String).toUpperCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final java.lang.String uppercase(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r1 = r1.toUpperCase(r0)
            java.lang.String r0 = "this as java.lang.String).toUpperCase(Locale.ROOT)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    private static final java.lang.String uppercase(java.lang.String r1, java.util.Locale r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "locale"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r1 = r1.toUpperCase(r2)
            java.lang.String r2 = "this as java.lang.String).toUpperCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }
}
