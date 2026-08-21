package android.support.v4.text;

import android.text.SpannableStringBuilder;
import java.util.Locale;

public final class BidiFormatter {
    private static final int DEFAULT_FLAGS = 2;
    static final BidiFormatter DEFAULT_LTR_INSTANCE = null;
    static final BidiFormatter DEFAULT_RTL_INSTANCE = null;
    static final TextDirectionHeuristicCompat DEFAULT_TEXT_DIRECTION_HEURISTIC = null;
    private static final int DIR_LTR = -1;
    private static final int DIR_RTL = 1;
    private static final int DIR_UNKNOWN = 0;
    private static final String EMPTY_STRING = "";
    private static final int FLAG_STEREO_RESET = 2;
    private static final char LRE = 8234;
    private static final char LRM = 8206;
    private static final String LRM_STRING = null;
    private static final char PDF = 8236;
    private static final char RLE = 8235;
    private static final char RLM = 8207;
    private static final String RLM_STRING = null;
    private final TextDirectionHeuristicCompat mDefaultTextDirectionHeuristicCompat;
    private final int mFlags;
    private final boolean mIsRtlContext;

    public static final class Builder {
        private int mFlags;
        private boolean mIsRtlContext;
        private TextDirectionHeuristicCompat mTextDirectionHeuristicCompat;

        public Builder() {
            initialize(BidiFormatter.isRtlLocale(Locale.getDefault()));
        }

        public Builder(boolean r1) {
            initialize(r1);
        }

        public Builder(Locale r1) {
            initialize(BidiFormatter.isRtlLocale(r1));
        }

        private void initialize(boolean r1) {
            this.mIsRtlContext = r1;
            this.mTextDirectionHeuristicCompat = BidiFormatter.DEFAULT_TEXT_DIRECTION_HEURISTIC;
            this.mFlags = 2;
        }

        public Builder stereoReset(boolean r1) {
            if (r1 == false) goto L4;
            this.mFlags |= 2;
        L5:
            return this;
        L4:
            this.mFlags &= -3;
            goto L5
        }

        public Builder setTextDirectionHeuristic(TextDirectionHeuristicCompat r1) {
            this.mTextDirectionHeuristicCompat = r1;
            return this;
        }

        private static BidiFormatter getDefaultInstanceFromContext(boolean r0) {
            if (r0 == false) goto L5;
            return BidiFormatter.DEFAULT_RTL_INSTANCE;
        L5:
            return BidiFormatter.DEFAULT_LTR_INSTANCE;
        }

        public BidiFormatter build() {
            if (this.mFlags != 2) goto L9;
            if (this.mTextDirectionHeuristicCompat != BidiFormatter.DEFAULT_TEXT_DIRECTION_HEURISTIC) goto L9;
            return getDefaultInstanceFromContext(this.mIsRtlContext);
        L9:
            return new BidiFormatter(this.mIsRtlContext, this.mFlags, this.mTextDirectionHeuristicCompat);
        }
    }

    private static class DirectionalityEstimator {
        private static final byte[] DIR_TYPE_CACHE = null;
        private static final int DIR_TYPE_CACHE_SIZE = 1792;
        private int charIndex;
        private final boolean isHtml;
        private char lastChar;
        private final int length;
        private final CharSequence text;

        static {
            DIR_TYPE_CACHE = new byte[DIR_TYPE_CACHE_SIZE];
            int r1 = 0;
        L3:
            if (r1 >= DIR_TYPE_CACHE_SIZE) goto L5;
            DIR_TYPE_CACHE[r1] = Character.getDirectionality(r1);
            r1 = r1 + 1;
            goto L3
        }

        DirectionalityEstimator(CharSequence r1, boolean r2) {
            this.text = r1;
            this.isHtml = r2;
            this.length = r1.length();
        }

        int getEntryDir() {
            this.charIndex = 0;
            int r3 = 0;
            int r4 = 0;
            int r5 = 0;
        L4:
            if (this.charIndex >= this.length) goto L23;
            if (r3 != 0) goto L23;
            byte r6 = dirTypeForward();
            if (r6 == 0) goto L20;
            if (r6 == 1) goto L18;
            if (r6 == 2) goto L18;
            if (r6 == 9) goto L4;
            switch(r6) {
                case 14: goto L17;
                case 15: goto L17;
                case 16: goto L16;
                case 17: goto L16;
                case 18: goto L15;
                default: goto L22;
            };
        L16:
            r5 = r5 + 1;
            r4 = 1;
            goto L4
        L17:
            r5 = r5 + 1;
            r4 = -1;
        L22:
            r3 = r5;
            goto L4
        L15:
            r5 = r5 - 1;
            r4 = 0;
        L18:
            if (r5 != 0) goto L22;
            return 1;
        L20:
            if (r5 != 0) goto L22;
            return -1;
        L23:
            if (r3 != 0) goto L25;
            return 0;
        L25:
            if (r4 == 0) goto L28;
            return r4;
        L28:
            if (this.charIndex <= 0) goto L38;
            switch(dirTypeBackward()) {
                case 14: goto L35;
                case 15: goto L35;
                case 16: goto L33;
                case 17: goto L33;
                case 18: goto L32;
                default: goto L28;
            };
        L32:
            r5 = r5 + 1;
            goto L28
        L33:
            if (r3 == r5) goto L34;
        L37:
            r5 = r5 - 1;
            goto L28
        L34:
            return 1;
        L35:
            if (r3 != r5) goto L37;
            return -1;
        L38:
            return 0;
        }

        int getExitDir() {
            this.charIndex = this.length;
            int r1 = 0;
            int r2 = 0;
        L4:
            if (this.charIndex <= 0) goto L30;
            byte r3 = dirTypeBackward();
            if (r3 != 0) goto L8;
            if (r2 == 0) goto L27;
            if (r1 != 0) goto L4;
        L29:
            r1 = r2;
            goto L4
        L27:
            return -1;
        L8:
            if (r3 == 1) goto L22;
            if (r3 == 2) goto L22;
            if (r3 == 9) goto L4;
            switch(r3) {
                case 14: goto L19;
                case 15: goto L19;
                case 16: goto L17;
                case 17: goto L17;
                case 18: goto L16;
                default: goto L14;
            };
        L16:
            r2 = r2 + 1;
            goto L4
        L17:
            if (r1 == r2) goto L18;
        L21:
            r2 = r2 - 1;
            goto L4
        L18:
            return 1;
        L19:
            if (r1 != r2) goto L21;
            return -1;
        L14:
            if (r1 != 0) goto L4;
        L22:
            if (r2 == 0) goto L23;
            if (r1 != 0) goto L4;
        L23:
            return 1;
        L30:
            return 0;
        }

        private static byte getCachedDirectionality(char r1) {
            if (r1 >= DIR_TYPE_CACHE_SIZE) goto L6;
            return DIR_TYPE_CACHE[r1];
        L6:
            return Character.getDirectionality(r1);
        }

        byte dirTypeForward() {
            this.lastChar = this.text.charAt(this.charIndex);
            if (Character.isHighSurrogate(this.lastChar) == false) goto L6;
            int r0 = Character.codePointAt(this.text, this.charIndex);
            this.charIndex += Character.charCount(r0);
            return Character.getDirectionality(r0);
        L6:
            this.charIndex++;
            byte r02 = getCachedDirectionality(this.lastChar);
            if (this.isHtml == false) goto L15;
            char r1 = this.lastChar;
            if (r1 != '<') goto L12;
            return skipTagForward();
        L12:
            if (r1 == '&') goto L14;
            return r02;
        L14:
            return skipEntityForward();
        L15:
            return r02;
        }

        byte dirTypeBackward() {
            this.lastChar = this.text.charAt(this.charIndex - 1);
            if (Character.isLowSurrogate(this.lastChar) == false) goto L6;
            int r0 = Character.codePointBefore(this.text, this.charIndex);
            this.charIndex -= Character.charCount(r0);
            return Character.getDirectionality(r0);
        L6:
            this.charIndex--;
            byte r02 = getCachedDirectionality(this.lastChar);
            if (this.isHtml == false) goto L15;
            char r1 = this.lastChar;
            if (r1 != '>') goto L12;
            return skipTagBackward();
        L12:
            if (r1 == ';') goto L14;
            return r02;
        L14:
            return skipEntityBackward();
        L15:
            return r02;
        }

        private byte skipTagForward() {
            int r0 = this.charIndex;
        L3:
            int r1 = this.charIndex;
            if (r1 >= this.length) goto L19;
            CharSequence r2 = this.text;
            this.charIndex = r1 + 1;
            this.lastChar = r2.charAt(r1);
            char r12 = this.lastChar;
            if (r12 == '>') goto L7;
            if (r12 == '\"') goto L13;
            if (r12 != '\'') goto L3;
        L13:
            char r13 = this.lastChar;
        L14:
            int r22 = this.charIndex;
            if (r22 >= this.length) goto L3;
            CharSequence r3 = this.text;
            this.charIndex = r22 + 1;
            char r23 = r3.charAt(r22);
            this.lastChar = r23;
            if (r23 == r13) goto L3;
        L7:
            return 12;
        L19:
            this.charIndex = r0;
            this.lastChar = '<';
            return 13;
        }

        private byte skipTagBackward() {
            int r0 = this.charIndex;
        L3:
            int r1 = this.charIndex;
            if (r1 <= 0) goto L21;
            CharSequence r3 = this.text;
            int r12 = r1 - 1;
            this.charIndex = r12;
            this.lastChar = r3.charAt(r12);
            char r13 = this.lastChar;
            if (r13 == '<') goto L7;
            if (r13 == '>') goto L21;
            if (r13 == '\"') goto L15;
            if (r13 != '\'') goto L3;
        L15:
            char r14 = this.lastChar;
        L16:
            int r2 = this.charIndex;
            if (r2 <= 0) goto L3;
            CharSequence r32 = this.text;
            int r22 = r2 - 1;
            this.charIndex = r22;
            char r23 = r32.charAt(r22);
            this.lastChar = r23;
            if (r23 == r14) goto L3;
        L7:
            return 12;
        L21:
            this.charIndex = r0;
            this.lastChar = '>';
            return 13;
        }

        private byte skipEntityForward() {
        L2:
            int r0 = this.charIndex;
            if (r0 >= this.length) goto L7;
            CharSequence r1 = this.text;
            this.charIndex = r0 + 1;
            char r02 = r1.charAt(r0);
            this.lastChar = r02;
            if (r02 != ';') goto L2;
            return 12;
        L7:
            return 12;
        }

        private byte skipEntityBackward() {
            int r0 = this.charIndex;
        L3:
            int r1 = this.charIndex;
            if (r1 <= 0) goto L10;
            CharSequence r3 = this.text;
            int r12 = r1 - 1;
            this.charIndex = r12;
            this.lastChar = r3.charAt(r12);
            char r13 = this.lastChar;
            if (r13 == '&') goto L7;
            if (r13 != ';') goto L3;
        L7:
            return 12;
        L10:
            this.charIndex = r0;
            this.lastChar = ';';
            return 13;
        }
    }

    static {
        DEFAULT_TEXT_DIRECTION_HEURISTIC = TextDirectionHeuristicsCompat.FIRSTSTRONG_LTR;
        LRM_STRING = Character.toString(LRM);
        RLM_STRING = Character.toString(RLM);
        DEFAULT_LTR_INSTANCE = new BidiFormatter(false, 2, DEFAULT_TEXT_DIRECTION_HEURISTIC);
        DEFAULT_RTL_INSTANCE = new BidiFormatter(true, 2, DEFAULT_TEXT_DIRECTION_HEURISTIC);
    }

    public static BidiFormatter getInstance() {
        return new Builder().build();
    }

    public static BidiFormatter getInstance(boolean r1) {
        return new Builder(r1).build();
    }

    public static BidiFormatter getInstance(Locale r1) {
        return new Builder(r1).build();
    }

    BidiFormatter(boolean r1, int r2, TextDirectionHeuristicCompat r3) {
        this.mIsRtlContext = r1;
        this.mFlags = r2;
        this.mDefaultTextDirectionHeuristicCompat = r3;
    }

    public boolean isRtlContext() {
        return this.mIsRtlContext;
    }

    public boolean getStereoReset() {
        if ((this.mFlags & 2) == 0) goto L5;
        return true;
    L5:
        return false;
    }

    private String markAfter(CharSequence r3, TextDirectionHeuristicCompat r4) {
        boolean r42 = r4.isRtl(r3, 0, r3.length());
        if (this.mIsRtlContext == true) goto L10;
        if (r42 == true) goto L8;
        if (getExitDir(r3) != 1) goto L10;
    L8:
        return LRM_STRING;
    L10:
        if (this.mIsRtlContext == false) goto L16;
        if (r42 == false) goto L15;
        if (getExitDir(r3) == (-1)) goto L15;
        return "";
    L15:
        return RLM_STRING;
    L16:
        return "";
    }

    private String markBefore(CharSequence r3, TextDirectionHeuristicCompat r4) {
        boolean r42 = r4.isRtl(r3, 0, r3.length());
        if (this.mIsRtlContext == true) goto L10;
        if (r42 == true) goto L8;
        if (getEntryDir(r3) != 1) goto L10;
    L8:
        return LRM_STRING;
    L10:
        if (this.mIsRtlContext == false) goto L16;
        if (r42 == false) goto L15;
        if (getEntryDir(r3) == (-1)) goto L15;
        return "";
    L15:
        return RLM_STRING;
    L16:
        return "";
    }

    public boolean isRtl(String r1) {
        return isRtl(r1);
    }

    public boolean isRtl(CharSequence r4) {
        return this.mDefaultTextDirectionHeuristicCompat.isRtl(r4, 0, r4.length());
    }

    public String unicodeWrap(String r1, TextDirectionHeuristicCompat r2, boolean r3) {
        if (r1 != null) goto L6;
        return null;
    L6:
        return unicodeWrap(r1, r2, r3).toString();
    }

    public CharSequence unicodeWrap(CharSequence r3, TextDirectionHeuristicCompat r4, boolean r5) {
        if (r3 != null) goto L5;
        return null;
    L5:
        boolean r42 = r4.isRtl(r3, 0, r3.length());
        SpannableStringBuilder r0 = new SpannableStringBuilder();
        if (getStereoReset() == false) goto L13;
        if (r5 == false) goto L13;
        if (r42 == false) goto L10;
        TextDirectionHeuristicCompat r1 = TextDirectionHeuristicsCompat.RTL;
    L11:
        r0.append(markBefore(r3, r1));
        goto L13
    L10:
        r1 = TextDirectionHeuristicsCompat.LTR;
    L13:
        if (r42 == this.mIsRtlContext) goto L18;
        if (r42 == false) goto L16;
        char r12 = RLE;
    L17:
        r0.append(r12);
        r0.append(r3);
        r0.append(PDF);
    L19:
        if (r5 == false) goto L24;
        if (r42 == false) goto L22;
        TextDirectionHeuristicCompat r43 = TextDirectionHeuristicsCompat.RTL;
    L23:
        r0.append(markAfter(r3, r43));
        goto L24
    L22:
        r43 = TextDirectionHeuristicsCompat.LTR;
    L24:
        return r0;
    L16:
        r12 = LRE;
        goto L17
    L18:
        r0.append(r3);
        goto L19
    }

    public String unicodeWrap(String r2, TextDirectionHeuristicCompat r3) {
        return unicodeWrap(r2, r3, true);
    }

    public CharSequence unicodeWrap(CharSequence r2, TextDirectionHeuristicCompat r3) {
        return unicodeWrap(r2, r3, true);
    }

    public String unicodeWrap(String r2, boolean r3) {
        return unicodeWrap(r2, this.mDefaultTextDirectionHeuristicCompat, r3);
    }

    public CharSequence unicodeWrap(CharSequence r2, boolean r3) {
        return unicodeWrap(r2, this.mDefaultTextDirectionHeuristicCompat, r3);
    }

    public String unicodeWrap(String r3) {
        return unicodeWrap(r3, this.mDefaultTextDirectionHeuristicCompat, true);
    }

    public CharSequence unicodeWrap(CharSequence r3) {
        return unicodeWrap(r3, this.mDefaultTextDirectionHeuristicCompat, true);
    }

    static boolean isRtlLocale(Locale r1) {
        if (TextUtilsCompat.getLayoutDirectionFromLocale(r1) == 1) goto L7;
        return false;
    L7:
        return true;
    }

    private static int getExitDir(CharSequence r2) {
        return new DirectionalityEstimator(r2, false).getExitDir();
    }

    private static int getEntryDir(CharSequence r2) {
        return new DirectionalityEstimator(r2, false).getEntryDir();
    }
}
