package android.support.v4.text;

public final class BidiFormatter {
    private static final int DEFAULT_FLAGS = 2;
    static final android.support.v4.text.BidiFormatter DEFAULT_LTR_INSTANCE = null;
    static final android.support.v4.text.BidiFormatter DEFAULT_RTL_INSTANCE = null;
    static final android.support.v4.text.TextDirectionHeuristicCompat DEFAULT_TEXT_DIRECTION_HEURISTIC = null;
    private static final int DIR_LTR = -1;
    private static final int DIR_RTL = 1;
    private static final int DIR_UNKNOWN = 0;
    private static final java.lang.String EMPTY_STRING = "";
    private static final int FLAG_STEREO_RESET = 2;
    private static final char LRE = 8234;
    private static final char LRM = 8206;
    private static final java.lang.String LRM_STRING = null;
    private static final char PDF = 8236;
    private static final char RLE = 8235;
    private static final char RLM = 8207;
    private static final java.lang.String RLM_STRING = null;
    private final android.support.v4.text.TextDirectionHeuristicCompat mDefaultTextDirectionHeuristicCompat;
    private final int mFlags;
    private final boolean mIsRtlContext;

    public static final class Builder {
        private int mFlags;
        private boolean mIsRtlContext;
        private android.support.v4.text.TextDirectionHeuristicCompat mTextDirectionHeuristicCompat;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.Locale r0 = java.util.Locale.getDefault()
                boolean r0 = android.support.v4.text.BidiFormatter.isRtlLocale(r0)
                r1.initialize(r0)
                return
        }

        public Builder(java.util.Locale r1) {
                r0 = this;
                r0.<init>()
                boolean r1 = android.support.v4.text.BidiFormatter.isRtlLocale(r1)
                r0.initialize(r1)
                return
        }

        public Builder(boolean r1) {
                r0 = this;
                r0.<init>()
                r0.initialize(r1)
                return
        }

        private static android.support.v4.text.BidiFormatter getDefaultInstanceFromContext(boolean r0) {
                if (r0 == 0) goto L5
                android.support.v4.text.BidiFormatter r0 = android.support.v4.text.BidiFormatter.DEFAULT_RTL_INSTANCE
                goto L7
            L5:
                android.support.v4.text.BidiFormatter r0 = android.support.v4.text.BidiFormatter.DEFAULT_LTR_INSTANCE
            L7:
                return r0
        }

        private void initialize(boolean r1) {
                r0 = this;
                r0.mIsRtlContext = r1
                android.support.v4.text.TextDirectionHeuristicCompat r1 = android.support.v4.text.BidiFormatter.DEFAULT_TEXT_DIRECTION_HEURISTIC
                r0.mTextDirectionHeuristicCompat = r1
                r1 = 2
                r0.mFlags = r1
                return
        }

        public android.support.v4.text.BidiFormatter build() {
                r4 = this;
                int r0 = r4.mFlags
                r1 = 2
                if (r0 != r1) goto L12
                android.support.v4.text.TextDirectionHeuristicCompat r0 = r4.mTextDirectionHeuristicCompat
                android.support.v4.text.TextDirectionHeuristicCompat r1 = android.support.v4.text.BidiFormatter.DEFAULT_TEXT_DIRECTION_HEURISTIC
                if (r0 != r1) goto L12
                boolean r0 = r4.mIsRtlContext
                android.support.v4.text.BidiFormatter r0 = getDefaultInstanceFromContext(r0)
                return r0
            L12:
                android.support.v4.text.BidiFormatter r0 = new android.support.v4.text.BidiFormatter
                boolean r1 = r4.mIsRtlContext
                int r2 = r4.mFlags
                android.support.v4.text.TextDirectionHeuristicCompat r3 = r4.mTextDirectionHeuristicCompat
                r0.<init>(r1, r2, r3)
                return r0
        }

        public android.support.v4.text.BidiFormatter.Builder setTextDirectionHeuristic(android.support.v4.text.TextDirectionHeuristicCompat r1) {
                r0 = this;
                r0.mTextDirectionHeuristicCompat = r1
                return r0
        }

        public android.support.v4.text.BidiFormatter.Builder stereoReset(boolean r1) {
                r0 = this;
                if (r1 == 0) goto L9
                int r1 = r0.mFlags
                r1 = r1 | 2
                r0.mFlags = r1
                goto Lf
            L9:
                int r1 = r0.mFlags
                r1 = r1 & (-3)
                r0.mFlags = r1
            Lf:
                return r0
        }
    }

    private static class DirectionalityEstimator {
        private static final byte[] DIR_TYPE_CACHE = null;
        private static final int DIR_TYPE_CACHE_SIZE = 1792;
        private int charIndex;
        private final boolean isHtml;
        private char lastChar;
        private final int length;
        private final java.lang.CharSequence text;

        static {
                r0 = 1792(0x700, float:2.511E-42)
                byte[] r1 = new byte[r0]
                android.support.v4.text.BidiFormatter.DirectionalityEstimator.DIR_TYPE_CACHE = r1
                r1 = 0
            L7:
                if (r1 >= r0) goto L14
                byte[] r2 = android.support.v4.text.BidiFormatter.DirectionalityEstimator.DIR_TYPE_CACHE
                byte r3 = java.lang.Character.getDirectionality(r1)
                r2[r1] = r3
                int r1 = r1 + 1
                goto L7
            L14:
                return
        }

        DirectionalityEstimator(java.lang.CharSequence r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.text = r1
                r0.isHtml = r2
                int r1 = r1.length()
                r0.length = r1
                return
        }

        private static byte getCachedDirectionality(char r1) {
                r0 = 1792(0x700, float:2.511E-42)
                if (r1 >= r0) goto L9
                byte[] r0 = android.support.v4.text.BidiFormatter.DirectionalityEstimator.DIR_TYPE_CACHE
                r1 = r0[r1]
                goto Ld
            L9:
                byte r1 = java.lang.Character.getDirectionality(r1)
            Ld:
                return r1
        }

        private byte skipEntityBackward() {
                r4 = this;
                int r0 = r4.charIndex
            L2:
                int r1 = r4.charIndex
                r2 = 59
                if (r1 <= 0) goto L1f
                java.lang.CharSequence r3 = r4.text
                int r1 = r1 + (-1)
                r4.charIndex = r1
                char r1 = r3.charAt(r1)
                r4.lastChar = r1
                char r1 = r4.lastChar
                r3 = 38
                if (r1 != r3) goto L1d
                r0 = 12
                return r0
            L1d:
                if (r1 != r2) goto L2
            L1f:
                r4.charIndex = r0
                r4.lastChar = r2
                r0 = 13
                return r0
        }

        private byte skipEntityForward() {
                r3 = this;
            L0:
                int r0 = r3.charIndex
                int r1 = r3.length
                if (r0 >= r1) goto L17
                java.lang.CharSequence r1 = r3.text
                int r2 = r0 + 1
                r3.charIndex = r2
                char r0 = r1.charAt(r0)
                r3.lastChar = r0
                r1 = 59
                if (r0 == r1) goto L17
                goto L0
            L17:
                r0 = 12
                return r0
        }

        private byte skipTagBackward() {
                r4 = this;
                int r0 = r4.charIndex
            L2:
                int r1 = r4.charIndex
                r2 = 62
                if (r1 <= 0) goto L3d
                java.lang.CharSequence r3 = r4.text
                int r1 = r1 + (-1)
                r4.charIndex = r1
                char r1 = r3.charAt(r1)
                r4.lastChar = r1
                char r1 = r4.lastChar
                r3 = 60
                if (r1 != r3) goto L1d
                r0 = 12
                return r0
            L1d:
                if (r1 != r2) goto L20
                goto L3d
            L20:
                r2 = 34
                if (r1 == r2) goto L28
                r2 = 39
                if (r1 != r2) goto L2
            L28:
                char r1 = r4.lastChar
            L2a:
                int r2 = r4.charIndex
                if (r2 <= 0) goto L2
                java.lang.CharSequence r3 = r4.text
                int r2 = r2 + (-1)
                r4.charIndex = r2
                char r2 = r3.charAt(r2)
                r4.lastChar = r2
                if (r2 == r1) goto L2
                goto L2a
            L3d:
                r4.charIndex = r0
                r4.lastChar = r2
                r0 = 13
                return r0
        }

        private byte skipTagForward() {
                r5 = this;
                int r0 = r5.charIndex
            L2:
                int r1 = r5.charIndex
                int r2 = r5.length
                if (r1 >= r2) goto L3c
                java.lang.CharSequence r2 = r5.text
                int r3 = r1 + 1
                r5.charIndex = r3
                char r1 = r2.charAt(r1)
                r5.lastChar = r1
                char r1 = r5.lastChar
                r2 = 62
                if (r1 != r2) goto L1d
                r0 = 12
                return r0
            L1d:
                r2 = 34
                if (r1 == r2) goto L25
                r2 = 39
                if (r1 != r2) goto L2
            L25:
                char r1 = r5.lastChar
            L27:
                int r2 = r5.charIndex
                int r3 = r5.length
                if (r2 >= r3) goto L2
                java.lang.CharSequence r3 = r5.text
                int r4 = r2 + 1
                r5.charIndex = r4
                char r2 = r3.charAt(r2)
                r5.lastChar = r2
                if (r2 == r1) goto L2
                goto L27
            L3c:
                r5.charIndex = r0
                r0 = 60
                r5.lastChar = r0
                r0 = 13
                return r0
        }

        byte dirTypeBackward() {
                r3 = this;
                java.lang.CharSequence r0 = r3.text
                int r1 = r3.charIndex
                int r1 = r1 + (-1)
                char r0 = r0.charAt(r1)
                r3.lastChar = r0
                char r0 = r3.lastChar
                boolean r0 = java.lang.Character.isLowSurrogate(r0)
                if (r0 == 0) goto L2a
                java.lang.CharSequence r0 = r3.text
                int r1 = r3.charIndex
                int r0 = java.lang.Character.codePointBefore(r0, r1)
                int r1 = r3.charIndex
                int r2 = java.lang.Character.charCount(r0)
                int r1 = r1 - r2
                r3.charIndex = r1
                byte r0 = java.lang.Character.getDirectionality(r0)
                return r0
            L2a:
                int r0 = r3.charIndex
                int r0 = r0 + (-1)
                r3.charIndex = r0
                char r0 = r3.lastChar
                byte r0 = getCachedDirectionality(r0)
                boolean r1 = r3.isHtml
                if (r1 == 0) goto L4d
                char r1 = r3.lastChar
                r2 = 62
                if (r1 != r2) goto L45
                byte r0 = r3.skipTagBackward()
                goto L4d
            L45:
                r2 = 59
                if (r1 != r2) goto L4d
                byte r0 = r3.skipEntityBackward()
            L4d:
                return r0
        }

        byte dirTypeForward() {
                r3 = this;
                java.lang.CharSequence r0 = r3.text
                int r1 = r3.charIndex
                char r0 = r0.charAt(r1)
                r3.lastChar = r0
                char r0 = r3.lastChar
                boolean r0 = java.lang.Character.isHighSurrogate(r0)
                if (r0 == 0) goto L28
                java.lang.CharSequence r0 = r3.text
                int r1 = r3.charIndex
                int r0 = java.lang.Character.codePointAt(r0, r1)
                int r1 = r3.charIndex
                int r2 = java.lang.Character.charCount(r0)
                int r1 = r1 + r2
                r3.charIndex = r1
                byte r0 = java.lang.Character.getDirectionality(r0)
                return r0
            L28:
                int r0 = r3.charIndex
                int r0 = r0 + 1
                r3.charIndex = r0
                char r0 = r3.lastChar
                byte r0 = getCachedDirectionality(r0)
                boolean r1 = r3.isHtml
                if (r1 == 0) goto L4b
                char r1 = r3.lastChar
                r2 = 60
                if (r1 != r2) goto L43
                byte r0 = r3.skipTagForward()
                goto L4b
            L43:
                r2 = 38
                if (r1 != r2) goto L4b
                byte r0 = r3.skipEntityForward()
            L4b:
                return r0
        }

        int getEntryDir() {
                r8 = this;
                r0 = 0
                r8.charIndex = r0
                r1 = -1
                r2 = 1
                r3 = 0
                r4 = 0
                r5 = 0
            L8:
                int r6 = r8.charIndex
                int r7 = r8.length
                if (r6 >= r7) goto L37
                if (r3 != 0) goto L37
                byte r6 = r8.dirTypeForward()
                if (r6 == 0) goto L32
                if (r6 == r2) goto L2f
                r7 = 2
                if (r6 == r7) goto L2f
                r7 = 9
                if (r6 == r7) goto L8
                switch(r6) {
                    case 14: goto L2b;
                    case 15: goto L2b;
                    case 16: goto L27;
                    case 17: goto L27;
                    case 18: goto L23;
                    default: goto L22;
                }
            L22:
                goto L35
            L23:
                int r5 = r5 + (-1)
                r4 = 0
                goto L8
            L27:
                int r5 = r5 + 1
                r4 = 1
                goto L8
            L2b:
                int r5 = r5 + 1
                r4 = -1
                goto L8
            L2f:
                if (r5 != 0) goto L35
                return r2
            L32:
                if (r5 != 0) goto L35
                return r1
            L35:
                r3 = r5
                goto L8
            L37:
                if (r3 != 0) goto L3a
                return r0
            L3a:
                if (r4 == 0) goto L3d
                return r4
            L3d:
                int r4 = r8.charIndex
                if (r4 <= 0) goto L55
                byte r4 = r8.dirTypeBackward()
                switch(r4) {
                    case 14: goto L4f;
                    case 15: goto L4f;
                    case 16: goto L4c;
                    case 17: goto L4c;
                    case 18: goto L49;
                    default: goto L48;
                }
            L48:
                goto L3d
            L49:
                int r5 = r5 + 1
                goto L3d
            L4c:
                if (r3 != r5) goto L52
                return r2
            L4f:
                if (r3 != r5) goto L52
                return r1
            L52:
                int r5 = r5 + (-1)
                goto L3d
            L55:
                return r0
        }

        int getExitDir() {
                r7 = this;
                int r0 = r7.length
                r7.charIndex = r0
                r0 = 0
                r1 = 0
                r2 = 0
            L7:
                int r3 = r7.charIndex
                if (r3 <= 0) goto L3b
                byte r3 = r7.dirTypeBackward()
                r4 = -1
                if (r3 == 0) goto L34
                r5 = 1
                if (r3 == r5) goto L2e
                r6 = 2
                if (r3 == r6) goto L2e
                r6 = 9
                if (r3 == r6) goto L7
                switch(r3) {
                    case 14: goto L28;
                    case 15: goto L28;
                    case 16: goto L25;
                    case 17: goto L25;
                    case 18: goto L22;
                    default: goto L1f;
                }
            L1f:
                if (r1 != 0) goto L7
                goto L39
            L22:
                int r2 = r2 + 1
                goto L7
            L25:
                if (r1 != r2) goto L2b
                return r5
            L28:
                if (r1 != r2) goto L2b
                return r4
            L2b:
                int r2 = r2 + (-1)
                goto L7
            L2e:
                if (r2 != 0) goto L31
                return r5
            L31:
                if (r1 != 0) goto L7
                goto L39
            L34:
                if (r2 != 0) goto L37
                return r4
            L37:
                if (r1 != 0) goto L7
            L39:
                r1 = r2
                goto L7
            L3b:
                return r0
        }
    }

    static {
            android.support.v4.text.TextDirectionHeuristicCompat r0 = android.support.v4.text.TextDirectionHeuristicsCompat.FIRSTSTRONG_LTR
            android.support.v4.text.BidiFormatter.DEFAULT_TEXT_DIRECTION_HEURISTIC = r0
            r0 = 8206(0x200e, float:1.1499E-41)
            java.lang.String r0 = java.lang.Character.toString(r0)
            android.support.v4.text.BidiFormatter.LRM_STRING = r0
            r0 = 8207(0x200f, float:1.15E-41)
            java.lang.String r0 = java.lang.Character.toString(r0)
            android.support.v4.text.BidiFormatter.RLM_STRING = r0
            android.support.v4.text.BidiFormatter r0 = new android.support.v4.text.BidiFormatter
            android.support.v4.text.TextDirectionHeuristicCompat r1 = android.support.v4.text.BidiFormatter.DEFAULT_TEXT_DIRECTION_HEURISTIC
            r2 = 2
            r3 = 0
            r0.<init>(r3, r2, r1)
            android.support.v4.text.BidiFormatter.DEFAULT_LTR_INSTANCE = r0
            android.support.v4.text.BidiFormatter r0 = new android.support.v4.text.BidiFormatter
            android.support.v4.text.TextDirectionHeuristicCompat r1 = android.support.v4.text.BidiFormatter.DEFAULT_TEXT_DIRECTION_HEURISTIC
            r3 = 1
            r0.<init>(r3, r2, r1)
            android.support.v4.text.BidiFormatter.DEFAULT_RTL_INSTANCE = r0
            return
    }

    BidiFormatter(boolean r1, int r2, android.support.v4.text.TextDirectionHeuristicCompat r3) {
            r0 = this;
            r0.<init>()
            r0.mIsRtlContext = r1
            r0.mFlags = r2
            r0.mDefaultTextDirectionHeuristicCompat = r3
            return
    }

    private static int getEntryDir(java.lang.CharSequence r2) {
            android.support.v4.text.BidiFormatter$DirectionalityEstimator r0 = new android.support.v4.text.BidiFormatter$DirectionalityEstimator
            r1 = 0
            r0.<init>(r2, r1)
            int r2 = r0.getEntryDir()
            return r2
    }

    private static int getExitDir(java.lang.CharSequence r2) {
            android.support.v4.text.BidiFormatter$DirectionalityEstimator r0 = new android.support.v4.text.BidiFormatter$DirectionalityEstimator
            r1 = 0
            r0.<init>(r2, r1)
            int r2 = r0.getExitDir()
            return r2
    }

    public static android.support.v4.text.BidiFormatter getInstance() {
            android.support.v4.text.BidiFormatter$Builder r0 = new android.support.v4.text.BidiFormatter$Builder
            r0.<init>()
            android.support.v4.text.BidiFormatter r0 = r0.build()
            return r0
    }

    public static android.support.v4.text.BidiFormatter getInstance(java.util.Locale r1) {
            android.support.v4.text.BidiFormatter$Builder r0 = new android.support.v4.text.BidiFormatter$Builder
            r0.<init>(r1)
            android.support.v4.text.BidiFormatter r1 = r0.build()
            return r1
    }

    public static android.support.v4.text.BidiFormatter getInstance(boolean r1) {
            android.support.v4.text.BidiFormatter$Builder r0 = new android.support.v4.text.BidiFormatter$Builder
            r0.<init>(r1)
            android.support.v4.text.BidiFormatter r1 = r0.build()
            return r1
    }

    static boolean isRtlLocale(java.util.Locale r1) {
            int r1 = android.support.v4.text.TextUtilsCompat.getLayoutDirectionFromLocale(r1)
            r0 = 1
            if (r1 != r0) goto L8
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private java.lang.String markAfter(java.lang.CharSequence r3, android.support.v4.text.TextDirectionHeuristicCompat r4) {
            r2 = this;
            int r0 = r3.length()
            r1 = 0
            boolean r4 = r4.isRtl(r3, r1, r0)
            boolean r0 = r2.mIsRtlContext
            if (r0 != 0) goto L19
            if (r4 != 0) goto L16
            int r0 = getExitDir(r3)
            r1 = 1
            if (r0 != r1) goto L19
        L16:
            java.lang.String r3 = android.support.v4.text.BidiFormatter.LRM_STRING
            return r3
        L19:
            boolean r0 = r2.mIsRtlContext
            if (r0 == 0) goto L29
            if (r4 == 0) goto L26
            int r3 = getExitDir(r3)
            r4 = -1
            if (r3 != r4) goto L29
        L26:
            java.lang.String r3 = android.support.v4.text.BidiFormatter.RLM_STRING
            return r3
        L29:
            java.lang.String r3 = ""
            return r3
    }

    private java.lang.String markBefore(java.lang.CharSequence r3, android.support.v4.text.TextDirectionHeuristicCompat r4) {
            r2 = this;
            int r0 = r3.length()
            r1 = 0
            boolean r4 = r4.isRtl(r3, r1, r0)
            boolean r0 = r2.mIsRtlContext
            if (r0 != 0) goto L19
            if (r4 != 0) goto L16
            int r0 = getEntryDir(r3)
            r1 = 1
            if (r0 != r1) goto L19
        L16:
            java.lang.String r3 = android.support.v4.text.BidiFormatter.LRM_STRING
            return r3
        L19:
            boolean r0 = r2.mIsRtlContext
            if (r0 == 0) goto L29
            if (r4 == 0) goto L26
            int r3 = getEntryDir(r3)
            r4 = -1
            if (r3 != r4) goto L29
        L26:
            java.lang.String r3 = android.support.v4.text.BidiFormatter.RLM_STRING
            return r3
        L29:
            java.lang.String r3 = ""
            return r3
    }

    public boolean getStereoReset() {
            r1 = this;
            int r0 = r1.mFlags
            r0 = r0 & 2
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean isRtl(java.lang.CharSequence r4) {
            r3 = this;
            android.support.v4.text.TextDirectionHeuristicCompat r0 = r3.mDefaultTextDirectionHeuristicCompat
            int r1 = r4.length()
            r2 = 0
            boolean r4 = r0.isRtl(r4, r2, r1)
            return r4
    }

    public boolean isRtl(java.lang.String r1) {
            r0 = this;
            boolean r1 = r0.isRtl(r1)
            return r1
    }

    public boolean isRtlContext() {
            r1 = this;
            boolean r0 = r1.mIsRtlContext
            return r0
    }

    public java.lang.CharSequence unicodeWrap(java.lang.CharSequence r3) {
            r2 = this;
            android.support.v4.text.TextDirectionHeuristicCompat r0 = r2.mDefaultTextDirectionHeuristicCompat
            r1 = 1
            java.lang.CharSequence r3 = r2.unicodeWrap(r3, r0, r1)
            return r3
    }

    public java.lang.CharSequence unicodeWrap(java.lang.CharSequence r2, android.support.v4.text.TextDirectionHeuristicCompat r3) {
            r1 = this;
            r0 = 1
            java.lang.CharSequence r2 = r1.unicodeWrap(r2, r3, r0)
            return r2
    }

    public java.lang.CharSequence unicodeWrap(java.lang.CharSequence r3, android.support.v4.text.TextDirectionHeuristicCompat r4, boolean r5) {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            r0 = 0
            int r1 = r3.length()
            boolean r4 = r4.isRtl(r3, r0, r1)
            android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
            r0.<init>()
            boolean r1 = r2.getStereoReset()
            if (r1 == 0) goto L28
            if (r5 == 0) goto L28
            if (r4 == 0) goto L1f
            android.support.v4.text.TextDirectionHeuristicCompat r1 = android.support.v4.text.TextDirectionHeuristicsCompat.RTL
            goto L21
        L1f:
            android.support.v4.text.TextDirectionHeuristicCompat r1 = android.support.v4.text.TextDirectionHeuristicsCompat.LTR
        L21:
            java.lang.String r1 = r2.markBefore(r3, r1)
            r0.append(r1)
        L28:
            boolean r1 = r2.mIsRtlContext
            if (r4 == r1) goto L3f
            if (r4 == 0) goto L31
            r1 = 8235(0x202b, float:1.154E-41)
            goto L33
        L31:
            r1 = 8234(0x202a, float:1.1538E-41)
        L33:
            r0.append(r1)
            r0.append(r3)
            r1 = 8236(0x202c, float:1.1541E-41)
            r0.append(r1)
            goto L42
        L3f:
            r0.append(r3)
        L42:
            if (r5 == 0) goto L52
            if (r4 == 0) goto L49
            android.support.v4.text.TextDirectionHeuristicCompat r4 = android.support.v4.text.TextDirectionHeuristicsCompat.RTL
            goto L4b
        L49:
            android.support.v4.text.TextDirectionHeuristicCompat r4 = android.support.v4.text.TextDirectionHeuristicsCompat.LTR
        L4b:
            java.lang.String r3 = r2.markAfter(r3, r4)
            r0.append(r3)
        L52:
            return r0
    }

    public java.lang.CharSequence unicodeWrap(java.lang.CharSequence r2, boolean r3) {
            r1 = this;
            android.support.v4.text.TextDirectionHeuristicCompat r0 = r1.mDefaultTextDirectionHeuristicCompat
            java.lang.CharSequence r2 = r1.unicodeWrap(r2, r0, r3)
            return r2
    }

    public java.lang.String unicodeWrap(java.lang.String r3) {
            r2 = this;
            android.support.v4.text.TextDirectionHeuristicCompat r0 = r2.mDefaultTextDirectionHeuristicCompat
            r1 = 1
            java.lang.String r3 = r2.unicodeWrap(r3, r0, r1)
            return r3
    }

    public java.lang.String unicodeWrap(java.lang.String r2, android.support.v4.text.TextDirectionHeuristicCompat r3) {
            r1 = this;
            r0 = 1
            java.lang.String r2 = r1.unicodeWrap(r2, r3, r0)
            return r2
    }

    public java.lang.String unicodeWrap(java.lang.String r1, android.support.v4.text.TextDirectionHeuristicCompat r2, boolean r3) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.CharSequence r1 = r0.unicodeWrap(r1, r2, r3)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public java.lang.String unicodeWrap(java.lang.String r2, boolean r3) {
            r1 = this;
            android.support.v4.text.TextDirectionHeuristicCompat r0 = r1.mDefaultTextDirectionHeuristicCompat
            java.lang.String r2 = r1.unicodeWrap(r2, r0, r3)
            return r2
    }
}
