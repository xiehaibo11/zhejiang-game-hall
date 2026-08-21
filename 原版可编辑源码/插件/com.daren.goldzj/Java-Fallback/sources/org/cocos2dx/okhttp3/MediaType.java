package org.cocos2dx.okhttp3;

import java.nio.charset.Charset;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import javax.annotation.Nullable;

public final class MediaType {
    private static final Pattern PARAMETER = null;
    private static final String QUOTED = "\"([^\"]*)\"";
    private static final String TOKEN = "([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)";
    private static final Pattern TYPE_SUBTYPE = null;

    @Nullable
    private final String charset;
    private final String mediaType;
    private final String subtype;
    private final String type;

    static {
        TYPE_SUBTYPE = Pattern.compile("([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)/([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)");
        PARAMETER = Pattern.compile(";\\s*(?:([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)=(?:([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)|\"([^\"]*)\"))?");
    }

    private MediaType(String r1, String r2, String r3, @Nullable String r4) {
        this.mediaType = r1;
        this.type = r2;
        this.subtype = r3;
        this.charset = r4;
    }

    public static MediaType get(String r11) {
        Matcher r0 = TYPE_SUBTYPE.matcher(r11);
        if (r0.lookingAt() == false) goto L37;
        String r3 = r0.group(1).toLowerCase(Locale.US);
        String r5 = r0.group(2).toLowerCase(Locale.US);
        String r6 = null;
        Matcher r7 = PARAMETER.matcher(r11);
        int r02 = r0.end();
    L6:
        if (r02 >= r11.length()) goto L35;
        r7.region(r02, r11.length());
        if (r7.lookingAt() == false) goto L33;
        String r03 = r7.group(1);
        if (r03 == null) goto L31;
        if (r03.equalsIgnoreCase("charset") == false) goto L31;
        String r04 = r7.group(2);
        if (r04 != null) goto L17;
        r04 = r7.group(3);
    L24:
        if (r6 != null) goto L26;
    L30:
        r6 = r04;
        goto L31
    L26:
        if (r04.equalsIgnoreCase(r6) == true) goto L30;
        throw new IllegalArgumentException("Multiple charsets defined: \"" + r6 + "\" and: \"" + r04 + "\" for: \"" + r11 + '\"');
    L17:
        if (r04.startsWith("'") == false) goto L24;
        if (r04.endsWith("'") == false) goto L24;
        if (r04.length() <= 2) goto L24;
        r04 = r04.substring(1, r04.length() - 1);
    L31:
        r02 = r7.end();
        goto L6
    L33:
        throw new IllegalArgumentException("Parameter is not formatted correctly: \"" + r11.substring(r02) + "\" for: \"" + r11 + '\"');
    L35:
        return new MediaType(r11, r3, r5, r6);
    L37:
        throw new IllegalArgumentException("No subtype found for: \"" + r11 + '\"');
    }

    @Nullable
    public static MediaType parse(String r0) {
        return get(r0);
    L4:
        return null;
    }

    public String type() {
        return this.type;
    }

    public String subtype() {
        return this.subtype;
    }

    @Nullable
    public Charset charset() {
        return charset(null);
    }

    @Nullable
    public Charset charset(@Nullable Charset r2) {
        if (this.charset == null) goto L9;
        return Charset.forName(this.charset);
    L9:
        return r2;
    L10:
        return r2;
    }

    public String toString() {
        return this.mediaType;
    }

    public boolean equals(@Nullable Object r2) {
        if ((r2 instanceof MediaType) == true) goto L5;
    L7:
        return false;
    L5:
        if (((MediaType) r2).mediaType.equals(this.mediaType) == false) goto L7;
        return true;
    }

    public int hashCode() {
        return this.mediaType.hashCode();
    }
}
