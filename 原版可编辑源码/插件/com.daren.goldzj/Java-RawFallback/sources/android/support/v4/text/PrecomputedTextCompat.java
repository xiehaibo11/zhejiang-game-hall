package android.support.v4.text;

public class PrecomputedTextCompat implements android.text.Spannable {
    private static final char LINE_FEED = '\n';

    @android.support.annotation.GuardedBy("sLock")
    @android.support.annotation.NonNull
    private static java.util.concurrent.Executor sExecutor;
    private static final java.lang.Object sLock = null;

    @android.support.annotation.NonNull
    private final int[] mParagraphEnds;

    @android.support.annotation.NonNull
    private final android.support.v4.text.PrecomputedTextCompat.Params mParams;

    @android.support.annotation.NonNull
    private final android.text.Spannable mText;

    @android.support.annotation.Nullable
    private final android.text.PrecomputedText mWrapped;

    public static final class Params {
        private final int mBreakStrategy;
        private final int mHyphenationFrequency;

        @android.support.annotation.NonNull
        private final android.text.TextPaint mPaint;

        @android.support.annotation.Nullable
        private final android.text.TextDirectionHeuristic mTextDir;
        final android.text.PrecomputedText.Params mWrapped;

        public static class Builder {
            private int mBreakStrategy;
            private int mHyphenationFrequency;

            @android.support.annotation.NonNull
            private final android.text.TextPaint mPaint;
            private android.text.TextDirectionHeuristic mTextDir;

            public Builder(@android.support.annotation.NonNull android.text.TextPaint r2) {
                    r1 = this;
                    r1.<init>()
                    r1.mPaint = r2
                    int r2 = android.os.Build.VERSION.SDK_INT
                    r0 = 23
                    if (r2 < r0) goto L11
                    r2 = 1
                    r1.mBreakStrategy = r2
                    r1.mHyphenationFrequency = r2
                    goto L16
                L11:
                    r2 = 0
                    r1.mHyphenationFrequency = r2
                    r1.mBreakStrategy = r2
                L16:
                    int r2 = android.os.Build.VERSION.SDK_INT
                    r0 = 18
                    if (r2 < r0) goto L21
                    android.text.TextDirectionHeuristic r2 = android.text.TextDirectionHeuristics.FIRSTSTRONG_LTR
                    r1.mTextDir = r2
                    goto L24
                L21:
                    r2 = 0
                    r1.mTextDir = r2
                L24:
                    return
            }

            @android.support.annotation.NonNull
            public android.support.v4.text.PrecomputedTextCompat.Params build() {
                    r5 = this;
                    android.support.v4.text.PrecomputedTextCompat$Params r0 = new android.support.v4.text.PrecomputedTextCompat$Params
                    android.text.TextPaint r1 = r5.mPaint
                    android.text.TextDirectionHeuristic r2 = r5.mTextDir
                    int r3 = r5.mBreakStrategy
                    int r4 = r5.mHyphenationFrequency
                    r0.<init>(r1, r2, r3, r4)
                    return r0
            }

            @android.support.annotation.RequiresApi(23)
            public android.support.v4.text.PrecomputedTextCompat.Params.Builder setBreakStrategy(int r1) {
                    r0 = this;
                    r0.mBreakStrategy = r1
                    return r0
            }

            @android.support.annotation.RequiresApi(23)
            public android.support.v4.text.PrecomputedTextCompat.Params.Builder setHyphenationFrequency(int r1) {
                    r0 = this;
                    r0.mHyphenationFrequency = r1
                    return r0
            }

            @android.support.annotation.RequiresApi(18)
            public android.support.v4.text.PrecomputedTextCompat.Params.Builder setTextDirection(@android.support.annotation.NonNull android.text.TextDirectionHeuristic r1) {
                    r0 = this;
                    r0.mTextDir = r1
                    return r0
            }
        }

        @android.support.annotation.RequiresApi(28)
        public Params(@android.support.annotation.NonNull android.text.PrecomputedText.Params r2) {
                r1 = this;
                r1.<init>()
                android.text.TextPaint r0 = r2.getTextPaint()
                r1.mPaint = r0
                android.text.TextDirectionHeuristic r0 = r2.getTextDirection()
                r1.mTextDir = r0
                int r0 = r2.getBreakStrategy()
                r1.mBreakStrategy = r0
                int r0 = r2.getHyphenationFrequency()
                r1.mHyphenationFrequency = r0
                r1.mWrapped = r2
                return
        }

        Params(@android.support.annotation.NonNull android.text.TextPaint r3, @android.support.annotation.NonNull android.text.TextDirectionHeuristic r4, int r5, int r6) {
                r2 = this;
                r2.<init>()
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 28
                if (r0 < r1) goto L21
                android.text.PrecomputedText$Params$Builder r0 = new android.text.PrecomputedText$Params$Builder
                r0.<init>(r3)
                android.text.PrecomputedText$Params$Builder r0 = r0.setBreakStrategy(r5)
                android.text.PrecomputedText$Params$Builder r0 = r0.setHyphenationFrequency(r6)
                android.text.PrecomputedText$Params$Builder r0 = r0.setTextDirection(r4)
                android.text.PrecomputedText$Params r0 = r0.build()
                r2.mWrapped = r0
                goto L24
            L21:
                r0 = 0
                r2.mWrapped = r0
            L24:
                r2.mPaint = r3
                r2.mTextDir = r4
                r2.mBreakStrategy = r5
                r2.mHyphenationFrequency = r6
                return
        }

        public boolean equals(@android.support.annotation.Nullable java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L118
                boolean r2 = r5 instanceof android.support.v4.text.PrecomputedTextCompat.Params
                if (r2 != 0) goto Ld
                goto L118
            Ld:
                android.support.v4.text.PrecomputedTextCompat$Params r5 = (android.support.v4.text.PrecomputedTextCompat.Params) r5
                android.text.PrecomputedText$Params r2 = r4.mWrapped
                if (r2 == 0) goto L1a
                android.text.PrecomputedText$Params r5 = r5.mWrapped
                boolean r5 = r2.equals(r5)
                return r5
            L1a:
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 23
                if (r2 < r3) goto L32
                int r2 = r4.mBreakStrategy
                int r3 = r5.getBreakStrategy()
                if (r2 == r3) goto L29
                return r1
            L29:
                int r2 = r4.mHyphenationFrequency
                int r3 = r5.getHyphenationFrequency()
                if (r2 == r3) goto L32
                return r1
            L32:
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 18
                if (r2 < r3) goto L41
                android.text.TextDirectionHeuristic r2 = r4.mTextDir
                android.text.TextDirectionHeuristic r3 = r5.getTextDirection()
                if (r2 == r3) goto L41
                return r1
            L41:
                android.text.TextPaint r2 = r4.mPaint
                float r2 = r2.getTextSize()
                android.text.TextPaint r3 = r5.getTextPaint()
                float r3 = r3.getTextSize()
                int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
                if (r2 == 0) goto L54
                return r1
            L54:
                android.text.TextPaint r2 = r4.mPaint
                float r2 = r2.getTextScaleX()
                android.text.TextPaint r3 = r5.getTextPaint()
                float r3 = r3.getTextScaleX()
                int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
                if (r2 == 0) goto L67
                return r1
            L67:
                android.text.TextPaint r2 = r4.mPaint
                float r2 = r2.getTextSkewX()
                android.text.TextPaint r3 = r5.getTextPaint()
                float r3 = r3.getTextSkewX()
                int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
                if (r2 == 0) goto L7a
                return r1
            L7a:
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 21
                if (r2 < r3) goto La8
                android.text.TextPaint r2 = r4.mPaint
                float r2 = r2.getLetterSpacing()
                android.text.TextPaint r3 = r5.getTextPaint()
                float r3 = r3.getLetterSpacing()
                int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
                if (r2 == 0) goto L93
                return r1
            L93:
                android.text.TextPaint r2 = r4.mPaint
                java.lang.String r2 = r2.getFontFeatureSettings()
                android.text.TextPaint r3 = r5.getTextPaint()
                java.lang.String r3 = r3.getFontFeatureSettings()
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 != 0) goto La8
                return r1
            La8:
                android.text.TextPaint r2 = r4.mPaint
                int r2 = r2.getFlags()
                android.text.TextPaint r3 = r5.getTextPaint()
                int r3 = r3.getFlags()
                if (r2 == r3) goto Lb9
                return r1
            Lb9:
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 24
                if (r2 < r3) goto Ld4
                android.text.TextPaint r2 = r4.mPaint
                android.os.LocaleList r2 = r2.getTextLocales()
                android.text.TextPaint r3 = r5.getTextPaint()
                android.os.LocaleList r3 = r3.getTextLocales()
                boolean r2 = r2.equals(r3)
                if (r2 != 0) goto Lef
                return r1
            Ld4:
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 17
                if (r2 < r3) goto Lef
                android.text.TextPaint r2 = r4.mPaint
                java.util.Locale r2 = r2.getTextLocale()
                android.text.TextPaint r3 = r5.getTextPaint()
                java.util.Locale r3 = r3.getTextLocale()
                boolean r2 = r2.equals(r3)
                if (r2 != 0) goto Lef
                return r1
            Lef:
                android.text.TextPaint r2 = r4.mPaint
                android.graphics.Typeface r2 = r2.getTypeface()
                if (r2 != 0) goto L102
                android.text.TextPaint r5 = r5.getTextPaint()
                android.graphics.Typeface r5 = r5.getTypeface()
                if (r5 == 0) goto L117
                return r1
            L102:
                android.text.TextPaint r2 = r4.mPaint
                android.graphics.Typeface r2 = r2.getTypeface()
                android.text.TextPaint r5 = r5.getTextPaint()
                android.graphics.Typeface r5 = r5.getTypeface()
                boolean r5 = r2.equals(r5)
                if (r5 != 0) goto L117
                return r1
            L117:
                return r0
            L118:
                return r1
        }

        @android.support.annotation.RequiresApi(23)
        public int getBreakStrategy() {
                r1 = this;
                int r0 = r1.mBreakStrategy
                return r0
        }

        @android.support.annotation.RequiresApi(23)
        public int getHyphenationFrequency() {
                r1 = this;
                int r0 = r1.mHyphenationFrequency
                return r0
        }

        @android.support.annotation.RequiresApi(18)
        @android.support.annotation.Nullable
        public android.text.TextDirectionHeuristic getTextDirection() {
                r1 = this;
                android.text.TextDirectionHeuristic r0 = r1.mTextDir
                return r0
        }

        @android.support.annotation.NonNull
        public android.text.TextPaint getTextPaint() {
                r1 = this;
                android.text.TextPaint r0 = r1.mPaint
                return r0
        }

        public int hashCode() {
                r14 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 10
                r2 = 11
                r3 = 9
                r4 = 8
                r5 = 7
                r6 = 6
                r7 = 5
                r8 = 4
                r9 = 3
                r10 = 2
                r11 = 1
                r12 = 0
                r13 = 24
                if (r0 < r13) goto L89
                java.lang.Object[] r0 = new java.lang.Object[r2]
                android.text.TextPaint r2 = r14.mPaint
                float r2 = r2.getTextSize()
                java.lang.Float r2 = java.lang.Float.valueOf(r2)
                r0[r12] = r2
                android.text.TextPaint r2 = r14.mPaint
                float r2 = r2.getTextScaleX()
                java.lang.Float r2 = java.lang.Float.valueOf(r2)
                r0[r11] = r2
                android.text.TextPaint r2 = r14.mPaint
                float r2 = r2.getTextSkewX()
                java.lang.Float r2 = java.lang.Float.valueOf(r2)
                r0[r10] = r2
                android.text.TextPaint r2 = r14.mPaint
                float r2 = r2.getLetterSpacing()
                java.lang.Float r2 = java.lang.Float.valueOf(r2)
                r0[r9] = r2
                android.text.TextPaint r2 = r14.mPaint
                int r2 = r2.getFlags()
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0[r8] = r2
                android.text.TextPaint r2 = r14.mPaint
                android.os.LocaleList r2 = r2.getTextLocales()
                r0[r7] = r2
                android.text.TextPaint r2 = r14.mPaint
                android.graphics.Typeface r2 = r2.getTypeface()
                r0[r6] = r2
                android.text.TextPaint r2 = r14.mPaint
                boolean r2 = r2.isElegantTextHeight()
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
                r0[r5] = r2
                android.text.TextDirectionHeuristic r2 = r14.mTextDir
                r0[r4] = r2
                int r2 = r14.mBreakStrategy
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0[r3] = r2
                int r2 = r14.mHyphenationFrequency
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0[r1] = r2
                int r0 = android.support.v4.util.ObjectsCompat.hash(r0)
                return r0
            L89:
                int r0 = android.os.Build.VERSION.SDK_INT
                r13 = 21
                if (r0 < r13) goto L102
                java.lang.Object[] r0 = new java.lang.Object[r2]
                android.text.TextPaint r2 = r14.mPaint
                float r2 = r2.getTextSize()
                java.lang.Float r2 = java.lang.Float.valueOf(r2)
                r0[r12] = r2
                android.text.TextPaint r2 = r14.mPaint
                float r2 = r2.getTextScaleX()
                java.lang.Float r2 = java.lang.Float.valueOf(r2)
                r0[r11] = r2
                android.text.TextPaint r2 = r14.mPaint
                float r2 = r2.getTextSkewX()
                java.lang.Float r2 = java.lang.Float.valueOf(r2)
                r0[r10] = r2
                android.text.TextPaint r2 = r14.mPaint
                float r2 = r2.getLetterSpacing()
                java.lang.Float r2 = java.lang.Float.valueOf(r2)
                r0[r9] = r2
                android.text.TextPaint r2 = r14.mPaint
                int r2 = r2.getFlags()
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0[r8] = r2
                android.text.TextPaint r2 = r14.mPaint
                java.util.Locale r2 = r2.getTextLocale()
                r0[r7] = r2
                android.text.TextPaint r2 = r14.mPaint
                android.graphics.Typeface r2 = r2.getTypeface()
                r0[r6] = r2
                android.text.TextPaint r2 = r14.mPaint
                boolean r2 = r2.isElegantTextHeight()
                java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
                r0[r5] = r2
                android.text.TextDirectionHeuristic r2 = r14.mTextDir
                r0[r4] = r2
                int r2 = r14.mBreakStrategy
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0[r3] = r2
                int r2 = r14.mHyphenationFrequency
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r0[r1] = r2
                int r0 = android.support.v4.util.ObjectsCompat.hash(r0)
                return r0
            L102:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 18
                if (r0 < r1) goto L163
                java.lang.Object[] r0 = new java.lang.Object[r3]
                android.text.TextPaint r1 = r14.mPaint
                float r1 = r1.getTextSize()
                java.lang.Float r1 = java.lang.Float.valueOf(r1)
                r0[r12] = r1
                android.text.TextPaint r1 = r14.mPaint
                float r1 = r1.getTextScaleX()
                java.lang.Float r1 = java.lang.Float.valueOf(r1)
                r0[r11] = r1
                android.text.TextPaint r1 = r14.mPaint
                float r1 = r1.getTextSkewX()
                java.lang.Float r1 = java.lang.Float.valueOf(r1)
                r0[r10] = r1
                android.text.TextPaint r1 = r14.mPaint
                int r1 = r1.getFlags()
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0[r9] = r1
                android.text.TextPaint r1 = r14.mPaint
                java.util.Locale r1 = r1.getTextLocale()
                r0[r8] = r1
                android.text.TextPaint r1 = r14.mPaint
                android.graphics.Typeface r1 = r1.getTypeface()
                r0[r7] = r1
                android.text.TextDirectionHeuristic r1 = r14.mTextDir
                r0[r6] = r1
                int r1 = r14.mBreakStrategy
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0[r5] = r1
                int r1 = r14.mHyphenationFrequency
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0[r4] = r1
                int r0 = android.support.v4.util.ObjectsCompat.hash(r0)
                return r0
            L163:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 17
                if (r0 < r1) goto L1c4
                java.lang.Object[] r0 = new java.lang.Object[r3]
                android.text.TextPaint r1 = r14.mPaint
                float r1 = r1.getTextSize()
                java.lang.Float r1 = java.lang.Float.valueOf(r1)
                r0[r12] = r1
                android.text.TextPaint r1 = r14.mPaint
                float r1 = r1.getTextScaleX()
                java.lang.Float r1 = java.lang.Float.valueOf(r1)
                r0[r11] = r1
                android.text.TextPaint r1 = r14.mPaint
                float r1 = r1.getTextSkewX()
                java.lang.Float r1 = java.lang.Float.valueOf(r1)
                r0[r10] = r1
                android.text.TextPaint r1 = r14.mPaint
                int r1 = r1.getFlags()
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0[r9] = r1
                android.text.TextPaint r1 = r14.mPaint
                java.util.Locale r1 = r1.getTextLocale()
                r0[r8] = r1
                android.text.TextPaint r1 = r14.mPaint
                android.graphics.Typeface r1 = r1.getTypeface()
                r0[r7] = r1
                android.text.TextDirectionHeuristic r1 = r14.mTextDir
                r0[r6] = r1
                int r1 = r14.mBreakStrategy
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0[r5] = r1
                int r1 = r14.mHyphenationFrequency
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0[r4] = r1
                int r0 = android.support.v4.util.ObjectsCompat.hash(r0)
                return r0
            L1c4:
                java.lang.Object[] r0 = new java.lang.Object[r4]
                android.text.TextPaint r1 = r14.mPaint
                float r1 = r1.getTextSize()
                java.lang.Float r1 = java.lang.Float.valueOf(r1)
                r0[r12] = r1
                android.text.TextPaint r1 = r14.mPaint
                float r1 = r1.getTextScaleX()
                java.lang.Float r1 = java.lang.Float.valueOf(r1)
                r0[r11] = r1
                android.text.TextPaint r1 = r14.mPaint
                float r1 = r1.getTextSkewX()
                java.lang.Float r1 = java.lang.Float.valueOf(r1)
                r0[r10] = r1
                android.text.TextPaint r1 = r14.mPaint
                int r1 = r1.getFlags()
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0[r9] = r1
                android.text.TextPaint r1 = r14.mPaint
                android.graphics.Typeface r1 = r1.getTypeface()
                r0[r8] = r1
                android.text.TextDirectionHeuristic r1 = r14.mTextDir
                r0[r7] = r1
                int r1 = r14.mBreakStrategy
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0[r6] = r1
                int r1 = r14.mHyphenationFrequency
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0[r5] = r1
                int r0 = android.support.v4.util.ObjectsCompat.hash(r0)
                return r0
        }

        public java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "{"
                r0.<init>(r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "textSize="
                r1.append(r2)
                android.text.TextPaint r2 = r4.mPaint
                float r2 = r2.getTextSize()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", textScaleX="
                r1.append(r2)
                android.text.TextPaint r2 = r4.mPaint
                float r2 = r2.getTextScaleX()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", textSkewX="
                r1.append(r2)
                android.text.TextPaint r2 = r4.mPaint
                float r2 = r2.getTextSkewX()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                int r1 = android.os.Build.VERSION.SDK_INT
                r2 = 21
                if (r1 < r2) goto L8f
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", letterSpacing="
                r1.append(r2)
                android.text.TextPaint r2 = r4.mPaint
                float r2 = r2.getLetterSpacing()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", elegantTextHeight="
                r1.append(r2)
                android.text.TextPaint r2 = r4.mPaint
                boolean r2 = r2.isElegantTextHeight()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
            L8f:
                int r1 = android.os.Build.VERSION.SDK_INT
                r2 = 24
                java.lang.String r3 = ", textLocale="
                if (r1 < r2) goto Lb0
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                android.text.TextPaint r2 = r4.mPaint
                android.os.LocaleList r2 = r2.getTextLocales()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                goto Lce
            Lb0:
                int r1 = android.os.Build.VERSION.SDK_INT
                r2 = 17
                if (r1 < r2) goto Lce
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                android.text.TextPaint r2 = r4.mPaint
                java.util.Locale r2 = r2.getTextLocale()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
            Lce:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", typeface="
                r1.append(r2)
                android.text.TextPaint r2 = r4.mPaint
                android.graphics.Typeface r2 = r2.getTypeface()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                int r1 = android.os.Build.VERSION.SDK_INT
                r2 = 26
                if (r1 < r2) goto L108
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", variationSettings="
                r1.append(r2)
                android.text.TextPaint r2 = r4.mPaint
                java.lang.String r2 = r2.getFontVariationSettings()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
            L108:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", textDir="
                r1.append(r2)
                android.text.TextDirectionHeuristic r2 = r4.mTextDir
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", breakStrategy="
                r1.append(r2)
                int r2 = r4.mBreakStrategy
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", hyphenationFrequency="
                r1.append(r2)
                int r2 = r4.mHyphenationFrequency
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static class PrecomputedTextFutureTask extends java.util.concurrent.FutureTask<android.support.v4.text.PrecomputedTextCompat> {

        private static class PrecomputedTextCallback implements java.util.concurrent.Callable<android.support.v4.text.PrecomputedTextCompat> {
            private android.support.v4.text.PrecomputedTextCompat.Params mParams;
            private java.lang.CharSequence mText;

            PrecomputedTextCallback(@android.support.annotation.NonNull android.support.v4.text.PrecomputedTextCompat.Params r1, @android.support.annotation.NonNull java.lang.CharSequence r2) {
                    r0 = this;
                    r0.<init>()
                    r0.mParams = r1
                    r0.mText = r2
                    return
            }

            @Override
            public android.support.v4.text.PrecomputedTextCompat call() throws java.lang.Exception {
                    r2 = this;
                    java.lang.CharSequence r0 = r2.mText
                    android.support.v4.text.PrecomputedTextCompat$Params r1 = r2.mParams
                    android.support.v4.text.PrecomputedTextCompat r0 = android.support.v4.text.PrecomputedTextCompat.create(r0, r1)
                    return r0
            }

            @Override
            public android.support.v4.text.PrecomputedTextCompat call() throws java.lang.Exception {
                    r1 = this;
                    android.support.v4.text.PrecomputedTextCompat r0 = r1.call()
                    return r0
            }
        }

        PrecomputedTextFutureTask(@android.support.annotation.NonNull android.support.v4.text.PrecomputedTextCompat.Params r2, @android.support.annotation.NonNull java.lang.CharSequence r3) {
                r1 = this;
                android.support.v4.text.PrecomputedTextCompat$PrecomputedTextFutureTask$PrecomputedTextCallback r0 = new android.support.v4.text.PrecomputedTextCompat$PrecomputedTextFutureTask$PrecomputedTextCallback
                r0.<init>(r2, r3)
                r1.<init>(r0)
                return
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.text.PrecomputedTextCompat.sLock = r0
            r0 = 0
            android.support.v4.text.PrecomputedTextCompat.sExecutor = r0
            return
    }

    @android.support.annotation.RequiresApi(28)
    private PrecomputedTextCompat(@android.support.annotation.NonNull android.text.PrecomputedText r1, @android.support.annotation.NonNull android.support.v4.text.PrecomputedTextCompat.Params r2) {
            r0 = this;
            r0.<init>()
            r0.mText = r1
            r0.mParams = r2
            r2 = 0
            r0.mParagraphEnds = r2
            r0.mWrapped = r1
            return
    }

    private PrecomputedTextCompat(@android.support.annotation.NonNull java.lang.CharSequence r2, @android.support.annotation.NonNull android.support.v4.text.PrecomputedTextCompat.Params r3, @android.support.annotation.NonNull int[] r4) {
            r1 = this;
            r1.<init>()
            android.text.SpannableString r0 = new android.text.SpannableString
            r0.<init>(r2)
            r1.mText = r0
            r1.mParams = r3
            r1.mParagraphEnds = r4
            r2 = 0
            r1.mWrapped = r2
            return
    }

    public static android.support.v4.text.PrecomputedTextCompat create(@android.support.annotation.NonNull java.lang.CharSequence r11, @android.support.annotation.NonNull android.support.v4.text.PrecomputedTextCompat.Params r12) {
            android.support.v4.util.Preconditions.checkNotNull(r11)
            android.support.v4.util.Preconditions.checkNotNull(r12)
            java.lang.String r0 = "PrecomputedText"
            android.support.v4.os.TraceCompat.beginSection(r0)     // Catch: java.lang.Throwable -> Lb4
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lb4
            r1 = 28
            if (r0 < r1) goto L24
            android.text.PrecomputedText$Params r0 = r12.mWrapped     // Catch: java.lang.Throwable -> Lb4
            if (r0 == 0) goto L24
            android.support.v4.text.PrecomputedTextCompat r0 = new android.support.v4.text.PrecomputedTextCompat     // Catch: java.lang.Throwable -> Lb4
            android.text.PrecomputedText$Params r1 = r12.mWrapped     // Catch: java.lang.Throwable -> Lb4
            android.text.PrecomputedText r11 = android.text.PrecomputedText.create(r11, r1)     // Catch: java.lang.Throwable -> Lb4
            r0.<init>(r11, r12)     // Catch: java.lang.Throwable -> Lb4
            android.support.v4.os.TraceCompat.endSection()
            return r0
        L24:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lb4
            r0.<init>()     // Catch: java.lang.Throwable -> Lb4
            int r1 = r11.length()     // Catch: java.lang.Throwable -> Lb4
            r2 = 0
            r3 = 0
        L2f:
            if (r3 >= r1) goto L45
            r4 = 10
            int r3 = android.text.TextUtils.indexOf(r11, r4, r3, r1)     // Catch: java.lang.Throwable -> Lb4
            if (r3 >= 0) goto L3b
            r3 = r1
            goto L3d
        L3b:
            int r3 = r3 + 1
        L3d:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> Lb4
            r0.add(r4)     // Catch: java.lang.Throwable -> Lb4
            goto L2f
        L45:
            int r1 = r0.size()     // Catch: java.lang.Throwable -> Lb4
            int[] r1 = new int[r1]     // Catch: java.lang.Throwable -> Lb4
            r3 = 0
        L4c:
            int r4 = r0.size()     // Catch: java.lang.Throwable -> Lb4
            if (r3 >= r4) goto L61
            java.lang.Object r4 = r0.get(r3)     // Catch: java.lang.Throwable -> Lb4
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> Lb4
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> Lb4
            r1[r3] = r4     // Catch: java.lang.Throwable -> Lb4
            int r3 = r3 + 1
            goto L4c
        L61:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lb4
            r3 = 23
            if (r0 < r3) goto L92
            int r0 = r11.length()     // Catch: java.lang.Throwable -> Lb4
            android.text.TextPaint r3 = r12.getTextPaint()     // Catch: java.lang.Throwable -> Lb4
            r4 = 2147483647(0x7fffffff, float:NaN)
            android.text.StaticLayout$Builder r0 = android.text.StaticLayout.Builder.obtain(r11, r2, r0, r3, r4)     // Catch: java.lang.Throwable -> Lb4
            int r2 = r12.getBreakStrategy()     // Catch: java.lang.Throwable -> Lb4
            android.text.StaticLayout$Builder r0 = r0.setBreakStrategy(r2)     // Catch: java.lang.Throwable -> Lb4
            int r2 = r12.getHyphenationFrequency()     // Catch: java.lang.Throwable -> Lb4
            android.text.StaticLayout$Builder r0 = r0.setHyphenationFrequency(r2)     // Catch: java.lang.Throwable -> Lb4
            android.text.TextDirectionHeuristic r2 = r12.getTextDirection()     // Catch: java.lang.Throwable -> Lb4
            android.text.StaticLayout$Builder r0 = r0.setTextDirection(r2)     // Catch: java.lang.Throwable -> Lb4
            r0.build()     // Catch: java.lang.Throwable -> Lb4
            goto Lab
        L92:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lb4
            r2 = 21
            if (r0 < r2) goto Lab
            android.text.StaticLayout r3 = new android.text.StaticLayout     // Catch: java.lang.Throwable -> Lb4
            android.text.TextPaint r5 = r12.getTextPaint()     // Catch: java.lang.Throwable -> Lb4
            r6 = 2147483647(0x7fffffff, float:NaN)
            android.text.Layout$Alignment r7 = android.text.Layout.Alignment.ALIGN_NORMAL     // Catch: java.lang.Throwable -> Lb4
            r8 = 1065353216(0x3f800000, float:1.0)
            r9 = 0
            r10 = 0
            r4 = r11
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> Lb4
        Lab:
            android.support.v4.text.PrecomputedTextCompat r0 = new android.support.v4.text.PrecomputedTextCompat     // Catch: java.lang.Throwable -> Lb4
            r0.<init>(r11, r12, r1)     // Catch: java.lang.Throwable -> Lb4
            android.support.v4.os.TraceCompat.endSection()
            return r0
        Lb4:
            r11 = move-exception
            android.support.v4.os.TraceCompat.endSection()
            throw r11
    }

    private int findParaIndex(@android.support.annotation.IntRange(from = 0) int r5) {
            r4 = this;
            r0 = 0
        L1:
            int[] r1 = r4.mParagraphEnds
            int r2 = r1.length
            if (r0 >= r2) goto Le
            r1 = r1[r0]
            if (r5 >= r1) goto Lb
            return r0
        Lb:
            int r0 = r0 + 1
            goto L1
        Le:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "pos must be less than "
            r1.append(r2)
            int[] r2 = r4.mParagraphEnds
            int r3 = r2.length
            int r3 = r3 + (-1)
            r2 = r2[r3]
            r1.append(r2)
            java.lang.String r2 = ", gave "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    @android.support.annotation.UiThread
    public static java.util.concurrent.Future<android.support.v4.text.PrecomputedTextCompat> getTextFuture(@android.support.annotation.NonNull java.lang.CharSequence r1, @android.support.annotation.NonNull android.support.v4.text.PrecomputedTextCompat.Params r2, @android.support.annotation.Nullable java.util.concurrent.Executor r3) {
            android.support.v4.text.PrecomputedTextCompat$PrecomputedTextFutureTask r0 = new android.support.v4.text.PrecomputedTextCompat$PrecomputedTextFutureTask
            r0.<init>(r2, r1)
            if (r3 != 0) goto L1c
            java.lang.Object r1 = android.support.v4.text.PrecomputedTextCompat.sLock
            monitor-enter(r1)
            java.util.concurrent.Executor r2 = android.support.v4.text.PrecomputedTextCompat.sExecutor     // Catch: java.lang.Throwable -> L19
            if (r2 != 0) goto L15
            r2 = 1
            java.util.concurrent.ExecutorService r2 = java.util.concurrent.Executors.newFixedThreadPool(r2)     // Catch: java.lang.Throwable -> L19
            android.support.v4.text.PrecomputedTextCompat.sExecutor = r2     // Catch: java.lang.Throwable -> L19
        L15:
            java.util.concurrent.Executor r3 = android.support.v4.text.PrecomputedTextCompat.sExecutor     // Catch: java.lang.Throwable -> L19
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
            goto L1c
        L19:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
            throw r2
        L1c:
            r3.execute(r0)
            return r0
    }

    @Override
    public char charAt(int r2) {
            r1 = this;
            android.text.Spannable r0 = r1.mText
            char r2 = r0.charAt(r2)
            return r2
    }

    @android.support.annotation.IntRange(from = 0)
    public int getParagraphCount() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Ld
            android.text.PrecomputedText r0 = r2.mWrapped
            int r0 = r0.getParagraphCount()
            return r0
        Ld:
            int[] r0 = r2.mParagraphEnds
            int r0 = r0.length
            return r0
    }

    @android.support.annotation.IntRange(from = 0)
    public int getParagraphEnd(@android.support.annotation.IntRange(from = 0) int r4) {
            r3 = this;
            int r0 = r3.getParagraphCount()
            r1 = 0
            java.lang.String r2 = "paraIndex"
            android.support.v4.util.Preconditions.checkArgumentInRange(r4, r1, r0, r2)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L17
            android.text.PrecomputedText r0 = r3.mWrapped
            int r4 = r0.getParagraphEnd(r4)
            return r4
        L17:
            int[] r0 = r3.mParagraphEnds
            r4 = r0[r4]
            return r4
    }

    @android.support.annotation.IntRange(from = 0)
    public int getParagraphStart(@android.support.annotation.IntRange(from = 0) int r4) {
            r3 = this;
            int r0 = r3.getParagraphCount()
            r1 = 0
            java.lang.String r2 = "paraIndex"
            android.support.v4.util.Preconditions.checkArgumentInRange(r4, r1, r0, r2)
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 28
            if (r0 < r2) goto L17
            android.text.PrecomputedText r0 = r3.mWrapped
            int r4 = r0.getParagraphStart(r4)
            return r4
        L17:
            if (r4 != 0) goto L1a
            goto L20
        L1a:
            int[] r0 = r3.mParagraphEnds
            int r4 = r4 + (-1)
            r1 = r0[r4]
        L20:
            return r1
    }

    @android.support.annotation.NonNull
    public android.support.v4.text.PrecomputedTextCompat.Params getParams() {
            r1 = this;
            android.support.v4.text.PrecomputedTextCompat$Params r0 = r1.mParams
            return r0
    }

    @android.support.annotation.RequiresApi(28)
    @android.support.annotation.Nullable
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public android.text.PrecomputedText getPrecomputedText() {
            r2 = this;
            android.text.Spannable r0 = r2.mText
            boolean r1 = r0 instanceof android.text.PrecomputedText
            if (r1 == 0) goto L9
            android.text.PrecomputedText r0 = (android.text.PrecomputedText) r0
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public int getSpanEnd(java.lang.Object r2) {
            r1 = this;
            android.text.Spannable r0 = r1.mText
            int r2 = r0.getSpanEnd(r2)
            return r2
    }

    @Override
    public int getSpanFlags(java.lang.Object r2) {
            r1 = this;
            android.text.Spannable r0 = r1.mText
            int r2 = r0.getSpanFlags(r2)
            return r2
    }

    @Override
    public int getSpanStart(java.lang.Object r2) {
            r1 = this;
            android.text.Spannable r0 = r1.mText
            int r2 = r0.getSpanStart(r2)
            return r2
    }

    @Override
    public <T> T[] getSpans(int r3, int r4, java.lang.Class<T> r5) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Ld
            android.text.PrecomputedText r0 = r2.mWrapped
            java.lang.Object[] r3 = r0.getSpans(r3, r4, r5)
            return r3
        Ld:
            android.text.Spannable r0 = r2.mText
            java.lang.Object[] r3 = r0.getSpans(r3, r4, r5)
            return r3
    }

    @Override
    public int length() {
            r1 = this;
            android.text.Spannable r0 = r1.mText
            int r0 = r0.length()
            return r0
    }

    @Override
    public int nextSpanTransition(int r2, int r3, java.lang.Class r4) {
            r1 = this;
            android.text.Spannable r0 = r1.mText
            int r2 = r0.nextSpanTransition(r2, r3, r4)
            return r2
    }

    @Override
    public void removeSpan(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof android.text.style.MetricAffectingSpan
            if (r0 != 0) goto L16
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L10
            android.text.PrecomputedText r0 = r2.mWrapped
            r0.removeSpan(r3)
            goto L15
        L10:
            android.text.Spannable r0 = r2.mText
            r0.removeSpan(r3)
        L15:
            return
        L16:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "MetricAffectingSpan can not be removed from PrecomputedText."
            r3.<init>(r0)
            throw r3
    }

    @Override
    public void setSpan(java.lang.Object r3, int r4, int r5, int r6) {
            r2 = this;
            boolean r0 = r3 instanceof android.text.style.MetricAffectingSpan
            if (r0 != 0) goto L16
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L10
            android.text.PrecomputedText r0 = r2.mWrapped
            r0.setSpan(r3, r4, r5, r6)
            goto L15
        L10:
            android.text.Spannable r0 = r2.mText
            r0.setSpan(r3, r4, r5, r6)
        L15:
            return
        L16:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "MetricAffectingSpan can not be set to PrecomputedText."
            r3.<init>(r4)
            throw r3
    }

    @Override
    public java.lang.CharSequence subSequence(int r2, int r3) {
            r1 = this;
            android.text.Spannable r0 = r1.mText
            java.lang.CharSequence r2 = r0.subSequence(r2, r3)
            return r2
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            android.text.Spannable r0 = r1.mText
            java.lang.String r0 = r0.toString()
            return r0
    }
}
