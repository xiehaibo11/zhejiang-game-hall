package android.support.v4.text;

import android.os.Build;
import android.support.annotation.GuardedBy;
import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.annotation.UiThread;
import android.support.v4.os.TraceCompat;
import android.support.v4.util.ObjectsCompat;
import android.support.v4.util.Preconditions;
import android.support.v7.widget.ActivityChooserView;
import android.text.Layout;
import android.text.PrecomputedText;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.StaticLayout;
import android.text.TextDirectionHeuristic;
import android.text.TextDirectionHeuristics;
import android.text.TextPaint;
import android.text.TextUtils;
import android.text.style.MetricAffectingSpan;
import java.util.ArrayList;
import java.util.concurrent.Callable;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.FutureTask;

public class PrecomputedTextCompat implements Spannable {
    private static final char LINE_FEED = '\n';

    @GuardedBy("sLock")
    @NonNull
    private static Executor sExecutor;
    private static final Object sLock = null;

    @NonNull
    private final int[] mParagraphEnds;

    @NonNull
    private final Params mParams;

    @NonNull
    private final Spannable mText;

    @Nullable
    private final PrecomputedText mWrapped;

    public static final class Params {
        private final int mBreakStrategy;
        private final int mHyphenationFrequency;

        @NonNull
        private final TextPaint mPaint;

        @Nullable
        private final TextDirectionHeuristic mTextDir;
        final PrecomputedText.Params mWrapped;

        public static class Builder {
            private int mBreakStrategy;
            private int mHyphenationFrequency;

            @NonNull
            private final TextPaint mPaint;
            private TextDirectionHeuristic mTextDir;

            public Builder(@NonNull TextPaint r2) {
                this.mPaint = r2;
                if (Build.VERSION.SDK_INT < 23) goto L5;
                this.mBreakStrategy = 1;
                this.mHyphenationFrequency = 1;
            L7:
                if (Build.VERSION.SDK_INT < 18) goto L9;
                this.mTextDir = TextDirectionHeuristics.FIRSTSTRONG_LTR;
                return;
            L9:
                this.mTextDir = null;
                return;
            L5:
                this.mHyphenationFrequency = 0;
                this.mBreakStrategy = 0;
                goto L7
            }

            @RequiresApi(23)
            public Builder setBreakStrategy(int r1) {
                this.mBreakStrategy = r1;
                return this;
            }

            @RequiresApi(23)
            public Builder setHyphenationFrequency(int r1) {
                this.mHyphenationFrequency = r1;
                return this;
            }

            @RequiresApi(18)
            public Builder setTextDirection(@NonNull TextDirectionHeuristic r1) {
                this.mTextDir = r1;
                return this;
            }

            @NonNull
            public Params build() {
                return new Params(this.mPaint, this.mTextDir, this.mBreakStrategy, this.mHyphenationFrequency);
            }
        }

        Params(@NonNull TextPaint r3, @NonNull TextDirectionHeuristic r4, int r5, int r6) {
            if (Build.VERSION.SDK_INT < 28) goto L5;
            this.mWrapped = new PrecomputedText.Params.Builder(r3).setBreakStrategy(r5).setHyphenationFrequency(r6).setTextDirection(r4).build();
        L6:
            this.mPaint = r3;
            this.mTextDir = r4;
            this.mBreakStrategy = r5;
            this.mHyphenationFrequency = r6;
            return;
        L5:
            this.mWrapped = null;
            goto L6
        }

        @RequiresApi(28)
        public Params(@NonNull PrecomputedText.Params r2) {
            this.mPaint = r2.getTextPaint();
            this.mTextDir = r2.getTextDirection();
            this.mBreakStrategy = r2.getBreakStrategy();
            this.mHyphenationFrequency = r2.getHyphenationFrequency();
            this.mWrapped = r2;
        }

        @NonNull
        public TextPaint getTextPaint() {
            return this.mPaint;
        }

        @RequiresApi(18)
        @Nullable
        public TextDirectionHeuristic getTextDirection() {
            return this.mTextDir;
        }

        @RequiresApi(23)
        public int getBreakStrategy() {
            return this.mBreakStrategy;
        }

        @RequiresApi(23)
        public int getHyphenationFrequency() {
            return this.mHyphenationFrequency;
        }

        public boolean equals(@Nullable Object r5) {
            if (r5 != this) goto L6;
            return true;
        L6:
            if (r5 != null) goto L8;
        L66:
            return false;
        L8:
            if ((r5 instanceof Params) == false) goto L66;
            Params r52 = (Params) r5;
            PrecomputedText.Params r2 = this.mWrapped;
            if (r2 == null) goto L15;
            return r2.equals(r52.mWrapped);
        L15:
            if (Build.VERSION.SDK_INT < 23) goto L23;
            if (this.mBreakStrategy == r52.getBreakStrategy()) goto L20;
            return false;
        L20:
            if (this.mHyphenationFrequency == r52.getHyphenationFrequency()) goto L23;
            return false;
        L23:
            if (Build.VERSION.SDK_INT < 18) goto L28;
            if (this.mTextDir == r52.getTextDirection()) goto L28;
            return false;
        L28:
            if (this.mPaint.getTextSize() == r52.getTextPaint().getTextSize()) goto L31;
            return false;
        L31:
            if (this.mPaint.getTextScaleX() == r52.getTextPaint().getTextScaleX()) goto L34;
            return false;
        L34:
            if (this.mPaint.getTextSkewX() == r52.getTextPaint().getTextSkewX()) goto L37;
            return false;
        L37:
            if (Build.VERSION.SDK_INT < 21) goto L45;
            if (this.mPaint.getLetterSpacing() == r52.getTextPaint().getLetterSpacing()) goto L42;
            return false;
        L42:
            if (TextUtils.equals(this.mPaint.getFontFeatureSettings(), r52.getTextPaint().getFontFeatureSettings()) == true) goto L45;
            return false;
        L45:
            if (this.mPaint.getFlags() == r52.getTextPaint().getFlags()) goto L48;
            return false;
        L48:
            if (Build.VERSION.SDK_INT < 24) goto L53;
            if (this.mPaint.getTextLocales().equals(r52.getTextPaint().getTextLocales()) == true) goto L58;
            return false;
        L58:
            if (this.mPaint.getTypeface() != null) goto L63;
            if (r52.getTextPaint().getTypeface() == null) goto L65;
            return false;
        L65:
            return true;
        L63:
            if (this.mPaint.getTypeface().equals(r52.getTextPaint().getTypeface()) == true) goto L65;
            return false;
        L53:
            if (Build.VERSION.SDK_INT < 17) goto L58;
            if (this.mPaint.getTextLocale().equals(r52.getTextPaint().getTextLocale()) == true) goto L58;
            return false;
        }

        public int hashCode() {
            if (Build.VERSION.SDK_INT < 24) goto L7;
            return ObjectsCompat.hash(new Object[]{Float.valueOf(this.mPaint.getTextSize()), Float.valueOf(this.mPaint.getTextScaleX()), Float.valueOf(this.mPaint.getTextSkewX()), Float.valueOf(this.mPaint.getLetterSpacing()), Integer.valueOf(this.mPaint.getFlags()), this.mPaint.getTextLocales(), this.mPaint.getTypeface(), Boolean.valueOf(this.mPaint.isElegantTextHeight()), this.mTextDir, Integer.valueOf(this.mBreakStrategy), Integer.valueOf(this.mHyphenationFrequency)});
        L7:
            if (Build.VERSION.SDK_INT < 21) goto L11;
            return ObjectsCompat.hash(new Object[]{Float.valueOf(this.mPaint.getTextSize()), Float.valueOf(this.mPaint.getTextScaleX()), Float.valueOf(this.mPaint.getTextSkewX()), Float.valueOf(this.mPaint.getLetterSpacing()), Integer.valueOf(this.mPaint.getFlags()), this.mPaint.getTextLocale(), this.mPaint.getTypeface(), Boolean.valueOf(this.mPaint.isElegantTextHeight()), this.mTextDir, Integer.valueOf(this.mBreakStrategy), Integer.valueOf(this.mHyphenationFrequency)});
        L11:
            if (Build.VERSION.SDK_INT < 18) goto L15;
            return ObjectsCompat.hash(new Object[]{Float.valueOf(this.mPaint.getTextSize()), Float.valueOf(this.mPaint.getTextScaleX()), Float.valueOf(this.mPaint.getTextSkewX()), Integer.valueOf(this.mPaint.getFlags()), this.mPaint.getTextLocale(), this.mPaint.getTypeface(), this.mTextDir, Integer.valueOf(this.mBreakStrategy), Integer.valueOf(this.mHyphenationFrequency)});
        L15:
            if (Build.VERSION.SDK_INT < 17) goto L19;
            return ObjectsCompat.hash(new Object[]{Float.valueOf(this.mPaint.getTextSize()), Float.valueOf(this.mPaint.getTextScaleX()), Float.valueOf(this.mPaint.getTextSkewX()), Integer.valueOf(this.mPaint.getFlags()), this.mPaint.getTextLocale(), this.mPaint.getTypeface(), this.mTextDir, Integer.valueOf(this.mBreakStrategy), Integer.valueOf(this.mHyphenationFrequency)});
        L19:
            return ObjectsCompat.hash(new Object[]{Float.valueOf(this.mPaint.getTextSize()), Float.valueOf(this.mPaint.getTextScaleX()), Float.valueOf(this.mPaint.getTextSkewX()), Integer.valueOf(this.mPaint.getFlags()), this.mPaint.getTypeface(), this.mTextDir, Integer.valueOf(this.mBreakStrategy), Integer.valueOf(this.mHyphenationFrequency)});
        }

        public String toString() {
            StringBuilder r0 = new StringBuilder("{");
            r0.append("textSize=" + this.mPaint.getTextSize());
            r0.append(", textScaleX=" + this.mPaint.getTextScaleX());
            r0.append(", textSkewX=" + this.mPaint.getTextSkewX());
            if (Build.VERSION.SDK_INT < 21) goto L6;
            r0.append(", letterSpacing=" + this.mPaint.getLetterSpacing());
            r0.append(", elegantTextHeight=" + this.mPaint.isElegantTextHeight());
        L6:
            if (Build.VERSION.SDK_INT < 24) goto L9;
            r0.append(", textLocale=" + this.mPaint.getTextLocales());
        L11:
            r0.append(", typeface=" + this.mPaint.getTypeface());
            if (Build.VERSION.SDK_INT < 26) goto L14;
            r0.append(", variationSettings=" + this.mPaint.getFontVariationSettings());
        L14:
            r0.append(", textDir=" + this.mTextDir);
            r0.append(", breakStrategy=" + this.mBreakStrategy);
            r0.append(", hyphenationFrequency=" + this.mHyphenationFrequency);
            r0.append("}");
            return r0.toString();
        L9:
            if (Build.VERSION.SDK_INT < 17) goto L11;
            r0.append(", textLocale=" + this.mPaint.getTextLocale());
            goto L11
        }
    }

    private static class PrecomputedTextFutureTask extends FutureTask<PrecomputedTextCompat> {

        private static class PrecomputedTextCallback implements Callable<PrecomputedTextCompat> {
            private Params mParams;
            private CharSequence mText;

            @Override
            public PrecomputedTextCompat call() throws Exception {
                return call();
            }

            PrecomputedTextCallback(@NonNull Params r1, @NonNull CharSequence r2) {
                this.mParams = r1;
                this.mText = r2;
            }

            @Override
            public PrecomputedTextCompat call() throws Exception {
                return PrecomputedTextCompat.create(this.mText, this.mParams);
            }
        }

        PrecomputedTextFutureTask(@NonNull Params r2, @NonNull CharSequence r3) {
            super(new PrecomputedTextCallback(r2, r3));
        }
    }

    static {
        sLock = new Object();
        sExecutor = null;
    }

    public static PrecomputedTextCompat create(@NonNull CharSequence r11, @NonNull Params r12) {
        Preconditions.checkNotNull(r11);
        Preconditions.checkNotNull(r12);
        TraceCompat.beginSection("PrecomputedText");     // Catch: Throwable -> L30
        if (Build.VERSION.SDK_INT >= 28) goto L6;
    L10:
        ArrayList r0 = new ArrayList();     // Catch: Throwable -> L30
        int r1 = r11.length();     // Catch: Throwable -> L30
        int r3 = 0;
    L11:
        if (r3 >= r1) goto L17;
        int r32 = TextUtils.indexOf(r11, LINE_FEED, r3, r1);     // Catch: Throwable -> L30
        if (r32 >= 0) goto L15;
        r3 = r1;
    L16:
        r0.add(Integer.valueOf(r3));     // Catch: Throwable -> L30
        goto L11
    L15:
        r3 = r32 + 1;     // Catch: Throwable -> L30
        goto L16
    L17:
        int[] r13 = new int[r0.size()];     // Catch: Throwable -> L30
        int r33 = 0;
    L19:
        if (r33 >= r0.size()) goto L22;
        r13[r33] = ((Integer) r0.get(r33)).intValue();     // Catch: Throwable -> L30
        r33 = r33 + 1;     // Catch: Throwable -> L30
        goto L19
    L22:
        if (Build.VERSION.SDK_INT < 23) goto L25;
        StaticLayout.Builder.obtain(r11, 0, r11.length(), r12.getTextPaint(), ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED).setBreakStrategy(r12.getBreakStrategy()).setHyphenationFrequency(r12.getHyphenationFrequency()).setTextDirection(r12.getTextDirection()).build();     // Catch: Throwable -> L30
    L27:
        PrecomputedTextCompat r02 = new PrecomputedTextCompat(r11, r12, r13);     // Catch: Throwable -> L30
        TraceCompat.endSection();
        return r02;
    L25:
        if (Build.VERSION.SDK_INT < 21) goto L27;
        new StaticLayout(r11, r12.getTextPaint(), ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED, Layout.Alignment.ALIGN_NORMAL, 1.0f, 0.0f, false);     // Catch: Throwable -> L30
        goto L27
    L6:
        if (r12.mWrapped == null) goto L10;
        PrecomputedTextCompat r03 = new PrecomputedTextCompat(PrecomputedText.create(r11, r12.mWrapped), r12);     // Catch: Throwable -> L30
        TraceCompat.endSection();
        return r03;
    L30:
        th = move-exception;
        TraceCompat.endSection();
        throw th;
    }

    private PrecomputedTextCompat(@NonNull CharSequence r2, @NonNull Params r3, @NonNull int[] r4) {
        this.mText = new SpannableString(r2);
        this.mParams = r3;
        this.mParagraphEnds = r4;
        this.mWrapped = null;
    }

    @RequiresApi(28)
    private PrecomputedTextCompat(@NonNull PrecomputedText r1, @NonNull Params r2) {
        this.mText = r1;
        this.mParams = r2;
        this.mParagraphEnds = null;
        this.mWrapped = r1;
    }

    @RequiresApi(28)
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public PrecomputedText getPrecomputedText() {
        Spannable r0 = this.mText;
        if ((r0 instanceof PrecomputedText) == true) goto L5;
        return null;
    L5:
        return (PrecomputedText) r0;
    }

    @NonNull
    public Params getParams() {
        return this.mParams;
    }

    @IntRange(from = 0)
    public int getParagraphCount() {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return this.mWrapped.getParagraphCount();
    L7:
        return this.mParagraphEnds.length;
    }

    @IntRange(from = 0)
    public int getParagraphStart(@IntRange(from = 0) int r4) {
        Preconditions.checkArgumentInRange(r4, 0, getParagraphCount(), "paraIndex");
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        if (r4 != 0) goto L9;
        return 0;
    L9:
        return this.mParagraphEnds[r4 - 1];
    L5:
        return this.mWrapped.getParagraphStart(r4);
    }

    @IntRange(from = 0)
    public int getParagraphEnd(@IntRange(from = 0) int r4) {
        Preconditions.checkArgumentInRange(r4, 0, getParagraphCount(), "paraIndex");
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return this.mWrapped.getParagraphEnd(r4);
    L7:
        return this.mParagraphEnds[r4];
    }

    private int findParaIndex(@IntRange(from = 0) int r5) {
        int r0 = 0;
    L3:
        int[] r1 = this.mParagraphEnds;
        if (r0 >= r1.length) goto L9;
        if (r5 < r1[r0]) goto L7;
        r0 = r0 + 1;
        goto L3
    L7:
        return r0;
    L9:
        StringBuilder r12 = new StringBuilder();
        r12.append("pos must be less than ");
        r12.append(this.mParagraphEnds[r2.length - 1]);
        r12.append(", gave ");
        r12.append(r5);
        throw new IndexOutOfBoundsException(r12.toString());
    }

    @UiThread
    public static Future<PrecomputedTextCompat> getTextFuture(@NonNull CharSequence r1, @NonNull Params r2, @Nullable Executor r3) {
        PrecomputedTextFutureTask r0 = new PrecomputedTextFutureTask(r2, r1);
        if (r3 != null) goto L15;
        Object r12 = sLock;
        monitor-enter(r12);
    L12:
        th = move-exception;
        throw th;
    L7:
        if (sExecutor != null) goto L9;
        sExecutor = Executors.newFixedThreadPool(1);     // Catch: Throwable -> L12
    L9:
        r3 = sExecutor;     // Catch: Throwable -> L12
        monitor-exit(r12);     // Catch: Throwable -> L12
    L15:
        r3.execute(r0);
        return r0;
    }

    @Override
    public void setSpan(Object r3, int r4, int r5, int r6) {
        if ((r3 instanceof MetricAffectingSpan) == true) goto L10;
        if (Build.VERSION.SDK_INT < 28) goto L7;
        this.mWrapped.setSpan(r3, r4, r5, r6);
        return;
    L7:
        this.mText.setSpan(r3, r4, r5, r6);
        return;
    L10:
        throw new IllegalArgumentException("MetricAffectingSpan can not be set to PrecomputedText.");
    }

    @Override
    public void removeSpan(Object r3) {
        if ((r3 instanceof MetricAffectingSpan) == true) goto L10;
        if (Build.VERSION.SDK_INT < 28) goto L7;
        this.mWrapped.removeSpan(r3);
        return;
    L7:
        this.mText.removeSpan(r3);
        return;
    L10:
        throw new IllegalArgumentException("MetricAffectingSpan can not be removed from PrecomputedText.");
    }

    @Override
    public <T> T[] getSpans(int r3, int r4, Class<T> r5) {
        if (Build.VERSION.SDK_INT < 28) goto L7;
        return (T[]) this.mWrapped.getSpans(r3, r4, r5);
    L7:
        return (T[]) this.mText.getSpans(r3, r4, r5);
    }

    @Override
    public int getSpanStart(Object r2) {
        return this.mText.getSpanStart(r2);
    }

    @Override
    public int getSpanEnd(Object r2) {
        return this.mText.getSpanEnd(r2);
    }

    @Override
    public int getSpanFlags(Object r2) {
        return this.mText.getSpanFlags(r2);
    }

    @Override
    public int nextSpanTransition(int r2, int r3, Class r4) {
        return this.mText.nextSpanTransition(r2, r3, r4);
    }

    @Override
    public int length() {
        return this.mText.length();
    }

    @Override
    public char charAt(int r2) {
        return this.mText.charAt(r2);
    }

    @Override
    public CharSequence subSequence(int r2, int r3) {
        return this.mText.subSequence(r2, r3);
    }

    @Override
    public String toString() {
        return this.mText.toString();
    }
}
