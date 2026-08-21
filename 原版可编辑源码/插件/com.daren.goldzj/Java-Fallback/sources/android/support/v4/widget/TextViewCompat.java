package android.support.v4.widget;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.graphics.Paint;
import android.graphics.drawable.Drawable;
import android.icu.text.DecimalFormatSymbols;
import android.os.Build;
import android.support.annotation.DrawableRes;
import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.Px;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.annotation.StyleRes;
import android.support.v4.text.PrecomputedTextCompat;
import android.support.v4.util.Preconditions;
import android.text.Editable;
import android.text.TextDirectionHeuristic;
import android.text.TextDirectionHeuristics;
import android.text.TextPaint;
import android.text.method.PasswordTransformationMethod;
import android.util.Log;
import android.view.ActionMode;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class TextViewCompat {
    public static final int AUTO_SIZE_TEXT_TYPE_NONE = 0;
    public static final int AUTO_SIZE_TEXT_TYPE_UNIFORM = 1;
    private static final int LINES = 1;
    private static final String LOG_TAG = "TextViewCompat";
    private static Field sMaxModeField;
    private static boolean sMaxModeFieldFetched;
    private static Field sMaximumField;
    private static boolean sMaximumFieldFetched;
    private static Field sMinModeField;
    private static boolean sMinModeFieldFetched;
    private static Field sMinimumField;
    private static boolean sMinimumFieldFetched;

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface AutoSizeTextType {
    }

    @RequiresApi(26)
    private static class OreoCallback implements ActionMode.Callback {
        private static final int MENU_ITEM_ORDER_PROCESS_TEXT_INTENT_ACTIONS_START = 100;
        private final ActionMode.Callback mCallback;
        private boolean mCanUseMenuBuilderReferences;
        private boolean mInitializedMenuBuilderReferences;
        private Class mMenuBuilderClass;
        private Method mMenuBuilderRemoveItemAtMethod;
        private final TextView mTextView;

        OreoCallback(ActionMode.Callback r1, TextView r2) {
            this.mCallback = r1;
            this.mTextView = r2;
            this.mInitializedMenuBuilderReferences = false;
        }

        @Override
        public boolean onCreateActionMode(ActionMode r2, Menu r3) {
            return this.mCallback.onCreateActionMode(r2, r3);
        }

        @Override
        public boolean onPrepareActionMode(ActionMode r2, Menu r3) {
            recomputeProcessTextMenuItems(r3);
            return this.mCallback.onPrepareActionMode(r2, r3);
        }

        @Override
        public boolean onActionItemClicked(ActionMode r2, MenuItem r3) {
            return this.mCallback.onActionItemClicked(r2, r3);
        }

        @Override
        public void onDestroyActionMode(ActionMode r2) {
            this.mCallback.onDestroyActionMode(r2);
        }

        private void recomputeProcessTextMenuItems(Menu r9) {
            Context r0 = this.mTextView.getContext();
            PackageManager r1 = r0.getPackageManager();
            if (this.mInitializedMenuBuilderReferences == true) goto L28;
            this.mInitializedMenuBuilderReferences = true;
            this.mMenuBuilderClass = Class.forName("com.android.internal.view.menu.MenuBuilder");     // Catch: Throwable -> L7
            this.mMenuBuilderRemoveItemAtMethod = this.mMenuBuilderClass.getDeclaredMethod("removeItemAt", new Class[]{Integer.TYPE});     // Catch: Throwable -> L7
            this.mCanUseMenuBuilderReferences = true;     // Catch: Throwable -> L7
        L7:
            this.mMenuBuilderClass = null;
            this.mMenuBuilderRemoveItemAtMethod = null;
            this.mCanUseMenuBuilderReferences = false;
        L28:
            if (this.mCanUseMenuBuilderReferences == true) goto L11;
        L13:
            Method r2 = r9.getClass().getDeclaredMethod("removeItemAt", new Class[]{Integer.TYPE});     // Catch: Throwable -> L27
        L14:
            int r3 = r9.size() - 1;     // Catch: Throwable -> L27
        L15:
            if (r3 < 0) goto L22;
            MenuItem r6 = r9.getItem(r3);     // Catch: Throwable -> L27
            if (r6.getIntent() == null) goto L21;
            if ("android.intent.action.PROCESS_TEXT".equals(r6.getIntent().getAction()) == false) goto L21;
            r2.invoke(r9, new Object[]{Integer.valueOf(r3)});     // Catch: Throwable -> L27
        L21:
            r3 = r3 - 1;
            goto L15
        L22:
            List<ResolveInfo> r02 = getSupportedActivities(r0, r1);
            int r22 = 0;
        L24:
            if (r22 >= r02.size()) goto L37;
            ResolveInfo r32 = r02.get(r22);
            r9.add(0, 0, r22 + 100, r32.loadLabel(r1)).setIntent(createProcessTextIntentForResolveInfo(r32, this.mTextView)).setShowAsAction(1);
            r22 = r22 + 1;
            goto L24
        L37:
            return;
        L11:
            if (this.mMenuBuilderClass.isInstance(r9) == false) goto L13;
            r2 = this.mMenuBuilderRemoveItemAtMethod;     // Catch: Throwable -> L27
        }

        private List<ResolveInfo> getSupportedActivities(Context r4, PackageManager r5) {
            ArrayList r0 = new ArrayList();
            if ((r4 instanceof Activity) == true) goto L5;
            return r0;
        L5:
            Iterator<ResolveInfo> r52 = r5.queryIntentActivities(createProcessTextIntent(), 0).iterator();
        L7:
            if (r52.hasNext() == false) goto L11;
            ResolveInfo r1 = r52.next();
            if (isSupportedActivity(r1, r4) == false) goto L7;
            r0.add(r1);
            goto L7
        L11:
            return r0;
        }

        private boolean isSupportedActivity(ResolveInfo r4, Context r5) {
            if (r5.getPackageName().equals(r4.activityInfo.packageName) == false) goto L6;
            return true;
        L6:
            if (r4.activityInfo.exported == true) goto L9;
            return false;
        L9:
            if (r4.activityInfo.permission != null) goto L11;
            return true;
        L11:
            if (r5.checkSelfPermission(r4.activityInfo.permission) == 0) goto L16;
            return false;
        L16:
            return true;
        }

        private Intent createProcessTextIntentForResolveInfo(ResolveInfo r3, TextView r4) {
            return createProcessTextIntent().putExtra("android.intent.extra.PROCESS_TEXT_READONLY", !isEditable(r4)).setClassName(r3.activityInfo.packageName, r3.activityInfo.name);
        }

        private boolean isEditable(TextView r2) {
            if ((r2 instanceof Editable) == true) goto L5;
        L9:
            return false;
        L5:
            if (r2.onCheckIsTextEditor() == false) goto L9;
            if (r2.isEnabled() == false) goto L9;
            return true;
        }

        private Intent createProcessTextIntent() {
            return new Intent().setAction("android.intent.action.PROCESS_TEXT").setType("text/plain");
        }
    }

    private TextViewCompat() {
    }

    private static Field retrieveField(String r3) {
        Field r0 = null;
        r0 = TextView.class.getDeclaredField(r3);     // Catch: NoSuchFieldException -> L5
        r0.setAccessible(true);     // Catch: NoSuchFieldException -> L5
        return r0;
    L5:
        Log.e(LOG_TAG, "Could not retrieve " + r3 + " field.");
        return r0;
    }

    private static int retrieveIntFromField(Field r1, TextView r2) {
        return r1.getInt(r2);
    L4:
        Log.d(LOG_TAG, "Could not retrieve value of " + r1.getName() + " field.");
        return -1;
    }

    public static void setCompoundDrawablesRelative(@NonNull TextView r2, @Nullable Drawable r3, @Nullable Drawable r4, @Nullable Drawable r5, @Nullable Drawable r6) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        r2.setCompoundDrawablesRelative(r3, r4, r5, r6);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 17) goto L18;
        boolean r1 = true;
        if (r2.getLayoutDirection() == 1) goto L11;
        r1 = false;
    L11:
        if (r1 == false) goto L13;
        Drawable r0 = r5;
    L14:
        if (r1 == true) goto L17;
        r3 = r5;
    L17:
        r2.setCompoundDrawables(r0, r4, r3, r6);
        return;
    L13:
        r0 = r3;
        goto L14
    L18:
        r2.setCompoundDrawables(r3, r4, r5, r6);
    }

    public static void setCompoundDrawablesRelativeWithIntrinsicBounds(@NonNull TextView r2, @Nullable Drawable r3, @Nullable Drawable r4, @Nullable Drawable r5, @Nullable Drawable r6) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        r2.setCompoundDrawablesRelativeWithIntrinsicBounds(r3, r4, r5, r6);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 17) goto L18;
        boolean r1 = true;
        if (r2.getLayoutDirection() == 1) goto L11;
        r1 = false;
    L11:
        if (r1 == false) goto L13;
        Drawable r0 = r5;
    L14:
        if (r1 == true) goto L17;
        r3 = r5;
    L17:
        r2.setCompoundDrawablesWithIntrinsicBounds(r0, r4, r3, r6);
        return;
    L13:
        r0 = r3;
        goto L14
    L18:
        r2.setCompoundDrawablesWithIntrinsicBounds(r3, r4, r5, r6);
    }

    public static void setCompoundDrawablesRelativeWithIntrinsicBounds(@NonNull TextView r2, @DrawableRes int r3, @DrawableRes int r4, @DrawableRes int r5, @DrawableRes int r6) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        r2.setCompoundDrawablesRelativeWithIntrinsicBounds(r3, r4, r5, r6);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 17) goto L18;
        boolean r1 = true;
        if (r2.getLayoutDirection() == 1) goto L11;
        r1 = false;
    L11:
        if (r1 == false) goto L13;
        int r0 = r5;
    L14:
        if (r1 == true) goto L17;
        r3 = r5;
    L17:
        r2.setCompoundDrawablesWithIntrinsicBounds(r0, r4, r3, r6);
        return;
    L13:
        r0 = r3;
        goto L14
    L18:
        r2.setCompoundDrawablesWithIntrinsicBounds(r3, r4, r5, r6);
    }

    public static int getMaxLines(@NonNull TextView r2) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        return r2.getMaxLines();
    L7:
        if (sMaxModeFieldFetched == true) goto L9;
        sMaxModeField = retrieveField("mMaxMode");
        sMaxModeFieldFetched = true;
    L9:
        Field r0 = sMaxModeField;
        if (r0 != null) goto L12;
        return -1;
    L12:
        if (retrieveIntFromField(r0, r2) == 1) goto L14;
        return -1;
    L14:
        if (sMaximumFieldFetched == true) goto L16;
        sMaximumField = retrieveField("mMaximum");
        sMaximumFieldFetched = true;
    L16:
        Field r02 = sMaximumField;
        if (r02 != null) goto L19;
        return -1;
    L19:
        return retrieveIntFromField(r02, r2);
    }

    public static int getMinLines(@NonNull TextView r2) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        return r2.getMinLines();
    L7:
        if (sMinModeFieldFetched == true) goto L9;
        sMinModeField = retrieveField("mMinMode");
        sMinModeFieldFetched = true;
    L9:
        Field r0 = sMinModeField;
        if (r0 != null) goto L12;
        return -1;
    L12:
        if (retrieveIntFromField(r0, r2) == 1) goto L14;
        return -1;
    L14:
        if (sMinimumFieldFetched == true) goto L16;
        sMinimumField = retrieveField("mMinimum");
        sMinimumFieldFetched = true;
    L16:
        Field r02 = sMinimumField;
        if (r02 != null) goto L19;
        return -1;
    L19:
        return retrieveIntFromField(r02, r2);
    }

    public static void setTextAppearance(@NonNull TextView r2, @StyleRes int r3) {
        if (Build.VERSION.SDK_INT < 23) goto L5;
        r2.setTextAppearance(r3);
        return;
    L5:
        r2.setTextAppearance(r2.getContext(), r3);
    }

    @NonNull
    public static Drawable[] getCompoundDrawablesRelative(@NonNull TextView r4) {
        if (Build.VERSION.SDK_INT < 18) goto L7;
        return r4.getCompoundDrawablesRelative();
    L7:
        if (Build.VERSION.SDK_INT < 17) goto L17;
        boolean r1 = true;
        if (r4.getLayoutDirection() == 1) goto L12;
        r1 = false;
    L12:
        Drawable[] r42 = r4.getCompoundDrawables();
        if (r1 == false) goto L15;
        Drawable r12 = r42[2];
        Drawable r3 = r42[0];
        r42[0] = r12;
        r42[2] = r3;
    L15:
        return r42;
    L17:
        return r4.getCompoundDrawables();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setAutoSizeTextTypeWithDefaults(@NonNull TextView r2, int r3) {
        if (Build.VERSION.SDK_INT < 27) goto L6;
        r2.setAutoSizeTextTypeWithDefaults(r3);
        return;
    L6:
        if ((r2 instanceof AutoSizeableTextView) == false) goto L10;
        ((AutoSizeableTextView) r2).setAutoSizeTextTypeWithDefaults(r3);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setAutoSizeTextTypeUniformWithConfiguration(@NonNull TextView r2, int r3, int r4, int r5, int r6) throws IllegalArgumentException {
        if (Build.VERSION.SDK_INT < 27) goto L6;
        r2.setAutoSizeTextTypeUniformWithConfiguration(r3, r4, r5, r6);
        return;
    L6:
        if ((r2 instanceof AutoSizeableTextView) == false) goto L10;
        ((AutoSizeableTextView) r2).setAutoSizeTextTypeUniformWithConfiguration(r3, r4, r5, r6);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void setAutoSizeTextTypeUniformWithPresetSizes(@NonNull TextView r2, @NonNull int[] r3, int r4) throws IllegalArgumentException {
        if (Build.VERSION.SDK_INT < 27) goto L6;
        r2.setAutoSizeTextTypeUniformWithPresetSizes(r3, r4);
        return;
    L6:
        if ((r2 instanceof AutoSizeableTextView) == false) goto L10;
        ((AutoSizeableTextView) r2).setAutoSizeTextTypeUniformWithPresetSizes(r3, r4);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static int getAutoSizeTextType(@NonNull TextView r2) {
        if (Build.VERSION.SDK_INT < 27) goto L7;
        return r2.getAutoSizeTextType();
    L7:
        if ((r2 instanceof AutoSizeableTextView) == true) goto L9;
        return 0;
    L9:
        return ((AutoSizeableTextView) r2).getAutoSizeTextType();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static int getAutoSizeStepGranularity(@NonNull TextView r2) {
        if (Build.VERSION.SDK_INT < 27) goto L7;
        return r2.getAutoSizeStepGranularity();
    L7:
        if ((r2 instanceof AutoSizeableTextView) == true) goto L9;
        return -1;
    L9:
        return ((AutoSizeableTextView) r2).getAutoSizeStepGranularity();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static int getAutoSizeMinTextSize(@NonNull TextView r2) {
        if (Build.VERSION.SDK_INT < 27) goto L7;
        return r2.getAutoSizeMinTextSize();
    L7:
        if ((r2 instanceof AutoSizeableTextView) == true) goto L9;
        return -1;
    L9:
        return ((AutoSizeableTextView) r2).getAutoSizeMinTextSize();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static int getAutoSizeMaxTextSize(@NonNull TextView r2) {
        if (Build.VERSION.SDK_INT < 27) goto L7;
        return r2.getAutoSizeMaxTextSize();
    L7:
        if ((r2 instanceof AutoSizeableTextView) == true) goto L9;
        return -1;
    L9:
        return ((AutoSizeableTextView) r2).getAutoSizeMaxTextSize();
    }

    /* JADX WARN: Multi-variable type inference failed */
    @NonNull
    public static int[] getAutoSizeTextAvailableSizes(@NonNull TextView r2) {
        if (Build.VERSION.SDK_INT < 27) goto L7;
        return r2.getAutoSizeTextAvailableSizes();
    L7:
        if ((r2 instanceof AutoSizeableTextView) == false) goto L11;
        return ((AutoSizeableTextView) r2).getAutoSizeTextAvailableSizes();
    L11:
        return new int[0];
    }

    public static void setCustomSelectionActionModeCallback(@NonNull TextView r0, @NonNull ActionMode.Callback r1) {
        r0.setCustomSelectionActionModeCallback(wrapCustomSelectionActionModeCallback(r0, r1));
    }

    @NonNull
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static ActionMode.Callback wrapCustomSelectionActionModeCallback(@NonNull TextView r2, @NonNull ActionMode.Callback r3) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
    L11:
        return r3;
    L5:
        if (Build.VERSION.SDK_INT > 27) goto L11;
        if ((r3 instanceof OreoCallback) == true) goto L11;
        return new OreoCallback(r3, r2);
    }

    public static void setFirstBaselineToTopHeight(@NonNull TextView r3, @IntRange(from = 0) @Px int r4) {
        Preconditions.checkArgumentNonnegative(r4);
        if (Build.VERSION.SDK_INT < 28) goto L6;
        r3.setFirstBaselineToTopHeight(r4);
        return;
    L6:
        Paint.FontMetricsInt r0 = r3.getPaint().getFontMetricsInt();
        if (Build.VERSION.SDK_INT >= 16) goto L9;
    L12:
        int r02 = r0.top;
    L14:
        if (r4 <= Math.abs(r02)) goto L17;
        int r42 = r4 - (-r02);
        r3.setPadding(r3.getPaddingLeft(), r42, r3.getPaddingRight(), r3.getPaddingBottom());
        return;
    L17:
        return;
    L9:
        if (r3.getIncludeFontPadding() == true) goto L12;
        r02 = r0.ascent;
        goto L14
    }

    public static void setLastBaselineToBottomHeight(@NonNull TextView r3, @IntRange(from = 0) @Px int r4) {
        Preconditions.checkArgumentNonnegative(r4);
        Paint.FontMetricsInt r0 = r3.getPaint().getFontMetricsInt();
        if (Build.VERSION.SDK_INT >= 16) goto L5;
    L8:
        int r02 = r0.bottom;
    L10:
        if (r4 <= Math.abs(r02)) goto L13;
        int r42 = r4 - r02;
        r3.setPadding(r3.getPaddingLeft(), r3.getPaddingTop(), r3.getPaddingRight(), r42);
        return;
    L13:
        return;
    L5:
        if (r3.getIncludeFontPadding() == true) goto L8;
        r02 = r0.descent;
        goto L10
    }

    public static int getFirstBaselineToTopHeight(@NonNull TextView r1) {
        return r1.getPaddingTop() - r1.getPaint().getFontMetricsInt().top;
    }

    public static int getLastBaselineToBottomHeight(@NonNull TextView r1) {
        return r1.getPaddingBottom() + r1.getPaint().getFontMetricsInt().bottom;
    }

    public static void setLineHeight(@NonNull TextView r2, @IntRange(from = 0) @Px int r3) {
        Preconditions.checkArgumentNonnegative(r3);
        if (r3 == r2.getPaint().getFontMetricsInt(null)) goto L6;
        r2.setLineSpacing(r3 - r0, 1.0f);
        return;
    }

    @NonNull
    public static PrecomputedTextCompat.Params getTextMetricsParams(@NonNull TextView r3) {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        PrecomputedTextCompat.Params.Builder r0 = new PrecomputedTextCompat.Params.Builder(new TextPaint(r3.getPaint()));
        if (Build.VERSION.SDK_INT < 23) goto L10;
        r0.setBreakStrategy(r3.getBreakStrategy());
        r0.setHyphenationFrequency(r3.getHyphenationFrequency());
    L10:
        if (Build.VERSION.SDK_INT < 18) goto L13;
        r0.setTextDirection(getTextDirectionHeuristic(r3));
    L13:
        return r0.build();
    L5:
        return new PrecomputedTextCompat.Params(r3.getTextMetricsParams());
    }

    public static void setTextMetricsParams(@NonNull TextView r2, @NonNull PrecomputedTextCompat.Params r3) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        r2.setTextDirection(getTextDirection(r3.getTextDirection()));
    L6:
        if (Build.VERSION.SDK_INT >= 23) goto L11;
        float r0 = r3.getTextPaint().getTextScaleX();
        r2.getPaint().set(r3.getTextPaint());
        if (r0 != r2.getTextScaleX()) goto L10;
        r2.setTextScaleX((r0 / 2.0f) + 1.0f);
    L10:
        r2.setTextScaleX(r0);
        return;
    L11:
        r2.getPaint().set(r3.getTextPaint());
        r2.setBreakStrategy(r3.getBreakStrategy());
        r2.setHyphenationFrequency(r3.getHyphenationFrequency());
    }

    public static void setPrecomputedText(@NonNull TextView r2, @NonNull PrecomputedTextCompat r3) {
        if (Build.VERSION.SDK_INT < 28) goto L6;
        r2.setText(r3.getPrecomputedText());
        return;
    L6:
        if (getTextMetricsParams(r2).equals(r3.getParams()) == false) goto L10;
        r2.setText(r3);
        return;
    L10:
        throw new IllegalArgumentException("Given text can not be applied to TextView.");
    }

    @RequiresApi(18)
    private static TextDirectionHeuristic getTextDirectionHeuristic(@NonNull TextView r4) {
        if ((r4.getTransformationMethod() instanceof PasswordTransformationMethod) == true) goto L5;
        boolean r2 = false;
        if (Build.VERSION.SDK_INT < 28) goto L20;
        if ((r4.getInputType() & 15) != 3) goto L20;
        byte r42 = Character.getDirectionality(DecimalFormatSymbols.getInstance(r4.getTextLocale()).getDigitStrings()[0].codePointAt(0));
        if (r42 == 1) goto L18;
        if (r42 == 2) goto L18;
        return TextDirectionHeuristics.LTR;
    L18:
        return TextDirectionHeuristics.RTL;
    L20:
        if (r4.getLayoutDirection() != 1) goto L23;
        r2 = true;
    L23:
        switch(r4.getTextDirection()) {
            case 2: goto L37;
            case 3: goto L35;
            case 4: goto L33;
            case 5: goto L31;
            case 6: goto L29;
            case 7: goto L27;
            default: goto L24;
        };
    L24:
        if (r2 == false) goto L39;
        return TextDirectionHeuristics.FIRSTSTRONG_RTL;
    L39:
        return TextDirectionHeuristics.FIRSTSTRONG_LTR;
    L27:
        return TextDirectionHeuristics.FIRSTSTRONG_RTL;
    L29:
        return TextDirectionHeuristics.FIRSTSTRONG_LTR;
    L31:
        return TextDirectionHeuristics.LOCALE;
    L33:
        return TextDirectionHeuristics.RTL;
    L35:
        return TextDirectionHeuristics.LTR;
    L37:
        return TextDirectionHeuristics.ANYRTL_LTR;
    L5:
        return TextDirectionHeuristics.LTR;
    }

    @RequiresApi(18)
    private static int getTextDirection(@NonNull TextDirectionHeuristic r2) {
        if (r2 != TextDirectionHeuristics.FIRSTSTRONG_RTL) goto L6;
        return 1;
    L6:
        if (r2 != TextDirectionHeuristics.FIRSTSTRONG_LTR) goto L9;
        return 1;
    L9:
        if (r2 != TextDirectionHeuristics.ANYRTL_LTR) goto L13;
        return 2;
    L13:
        if (r2 != TextDirectionHeuristics.LTR) goto L17;
        return 3;
    L17:
        if (r2 != TextDirectionHeuristics.RTL) goto L21;
        return 4;
    L21:
        if (r2 != TextDirectionHeuristics.LOCALE) goto L25;
        return 5;
    L25:
        if (r2 != TextDirectionHeuristics.FIRSTSTRONG_LTR) goto L29;
        return 6;
    L29:
        if (r2 != TextDirectionHeuristics.FIRSTSTRONG_RTL) goto L32;
        return 7;
    L32:
        return 1;
    }
}
