package android.support.v7.app;

import android.R;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.TypedArray;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.util.ArrayMap;
import android.support.v4.view.ViewCompat;
import android.support.v7.view.ContextThemeWrapper;
import android.support.v7.widget.AppCompatAutoCompleteTextView;
import android.support.v7.widget.AppCompatButton;
import android.support.v7.widget.AppCompatCheckBox;
import android.support.v7.widget.AppCompatCheckedTextView;
import android.support.v7.widget.AppCompatEditText;
import android.support.v7.widget.AppCompatImageButton;
import android.support.v7.widget.AppCompatImageView;
import android.support.v7.widget.AppCompatMultiAutoCompleteTextView;
import android.support.v7.widget.AppCompatRadioButton;
import android.support.v7.widget.AppCompatRatingBar;
import android.support.v7.widget.AppCompatSeekBar;
import android.support.v7.widget.AppCompatSpinner;
import android.support.v7.widget.AppCompatTextView;
import android.support.v7.widget.TintContextWrapper;
import android.util.AttributeSet;
import android.util.Log;
import android.view.InflateException;
import android.view.View;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Map;

public class AppCompatViewInflater {
    private static final String LOG_TAG = "AppCompatViewInflater";
    private static final String[] sClassPrefixList = null;
    private static final Map<String, Constructor<? extends View>> sConstructorMap = null;
    private static final Class<?>[] sConstructorSignature = null;
    private static final int[] sOnClickAttrs = null;
    private final Object[] mConstructorArgs;

    private static class DeclaredOnClickListener implements View.OnClickListener {
        private final View mHostView;
        private final String mMethodName;
        private Context mResolvedContext;
        private Method mResolvedMethod;

        public DeclaredOnClickListener(@NonNull View r1, @NonNull String r2) {
            this.mHostView = r1;
            this.mMethodName = r2;
        }

        @Override
        public void onClick(@NonNull View r5) {
            if (this.mResolvedMethod != null) goto L13;
            resolveMethod(this.mHostView.getContext(), this.mMethodName);
        L13:
            this.mResolvedMethod.invoke(this.mResolvedContext, new Object[]{r5});     // Catch: InvocationTargetException -> L7 IllegalAccessException -> L10
            return;
        L10:
            e = move-exception;
            throw new IllegalStateException("Could not execute non-public method for android:onClick", e);
        L7:
            e = move-exception;
            throw new IllegalStateException("Could not execute method for android:onClick", e);
        }

        @NonNull
        private void resolveMethod(@Nullable Context r5, @NonNull String r6) {
        L2:
            if (r5 == null) goto L13;
            if (r5.isRestricted() == true) goto L10;
            Method r62 = r5.getClass().getMethod(this.mMethodName, new Class[]{View.class});     // Catch: NoSuchMethodException -> L19
            if (r62 == null) goto L10;
            this.mResolvedMethod = r62;     // Catch: NoSuchMethodException -> L19
            this.mResolvedContext = r5;     // Catch: NoSuchMethodException -> L19
            return;
        L10:
            if ((r5 instanceof ContextWrapper) == true) goto L11;
            r5 = null;
            goto L2
        L11:
            r5 = ((ContextWrapper) r5).getBaseContext();
            goto L2
        L13:
            int r52 = this.mHostView.getId();
            if (r52 != (-1)) goto L16;
            String r53 = "";
        L18:
            throw new IllegalStateException("Could not find method " + this.mMethodName + "(View) in a parent or ancestor Context for android:onClick attribute defined on view " + this.mHostView.getClass() + r53);
        L16:
            r53 = " with id '" + this.mHostView.getContext().getResources().getResourceEntryName(r52) + "'";
            goto L18
        }
    }

    @Nullable
    protected View createView(Context r1, String r2, AttributeSet r3) {
        return null;
    }

    public AppCompatViewInflater() {
        this.mConstructorArgs = new Object[2];
    }

    static {
        sConstructorSignature = new Class[]{Context.class, AttributeSet.class};
        sOnClickAttrs = new int[]{R.attr.onClick};
        sClassPrefixList = new String[]{"android.widget.", "android.view.", "android.webkit."};
        sConstructorMap = new ArrayMap();
    }

    final View createView(View r1, String r2, @NonNull Context r3, @NonNull AttributeSet r4, boolean r5, boolean r6, boolean r7, boolean r8) {
        if (r5 == false) goto L5;
        if (r1 == null) goto L5;
        Context r12 = r1.getContext();
    L6:
        if (r6 == true) goto L8;
        if (r7 == true) goto L8;
    L9:
        if (r8 == false) goto L11;
        r12 = TintContextWrapper.wrap(r12);
    L11:
        byte r52 = -1;
        switch(r2.hashCode()) {
            case -1946472170: goto L51;
            case -1455429095: goto L48;
            case -1346021293: goto L45;
            case -938935918: goto L42;
            case -937446323: goto L39;
            case -658531749: goto L36;
            case -339785223: goto L33;
            case 776382189: goto L30;
            case 1125864064: goto L27;
            case 1413872058: goto L24;
            case 1601505219: goto L21;
            case 1666676343: goto L18;
            case 2001146706: goto L15;
            default: goto L53;
        };
    L53:
        switch(r52) {
            case 0: goto L67;
            case 1: goto L66;
            case 2: goto L65;
            case 3: goto L64;
            case 4: goto L63;
            case 5: goto L62;
            case 6: goto L61;
            case 7: goto L60;
            case 8: goto L59;
            case 9: goto L58;
            case 10: goto L57;
            case 11: goto L56;
            case 12: goto L55;
            default: goto L54;
        };
    L54:
        View r53 = createView(r12, r2, r4);
    L68:
        if (r53 != null) goto L71;
        if (r3 == r12) goto L71;
        r53 = createViewFromTag(r12, r2, r4);
    L71:
        if (r53 == null) goto L73;
        checkOnClickListener(r53, r4);
    L73:
        return r53;
    L55:
        r53 = createSeekBar(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L56:
        r53 = createRatingBar(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L57:
        r53 = createMultiAutoCompleteTextView(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L58:
        r53 = createAutoCompleteTextView(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L59:
        r53 = createCheckedTextView(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L60:
        r53 = createRadioButton(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L61:
        r53 = createCheckBox(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L62:
        r53 = createImageButton(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L63:
        r53 = createSpinner(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L64:
        r53 = createEditText(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L65:
        r53 = createButton(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L66:
        r53 = createImageView(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L67:
        r53 = createTextView(r12, r4);
        verifyNotNull(r53, r2);
        goto L68
    L15:
        if (r2.equals("Button") == false) goto L53;
        r52 = 2;
        goto L53
    L18:
        if (r2.equals("EditText") == false) goto L53;
        r52 = 3;
        goto L53
    L21:
        if (r2.equals("CheckBox") == false) goto L53;
        r52 = 6;
        goto L53
    L24:
        if (r2.equals("AutoCompleteTextView") == false) goto L53;
        r52 = 9;
        goto L53
    L27:
        if (r2.equals("ImageView") == false) goto L53;
        r52 = 1;
        goto L53
    L30:
        if (r2.equals("RadioButton") == false) goto L53;
        r52 = 7;
        goto L53
    L33:
        if (r2.equals("Spinner") == false) goto L53;
        r52 = 4;
        goto L53
    L36:
        if (r2.equals("SeekBar") == false) goto L53;
        r52 = 12;
        goto L53
    L39:
        if (r2.equals("ImageButton") == false) goto L53;
        r52 = 5;
        goto L53
    L42:
        if (r2.equals("TextView") == false) goto L53;
        r52 = 0;
        goto L53
    L45:
        if (r2.equals("MultiAutoCompleteTextView") == false) goto L53;
        r52 = 10;
        goto L53
    L48:
        if (r2.equals("CheckedTextView") == false) goto L53;
        r52 = 8;
        goto L53
    L51:
        if (r2.equals("RatingBar") == false) goto L53;
        r52 = 11;
    L8:
        r12 = themifyContext(r12, r4, r6, r7);
    L5:
        r12 = r3;
        goto L6
    }

    @NonNull
    protected AppCompatTextView createTextView(Context r2, AttributeSet r3) {
        return new AppCompatTextView(r2, r3);
    }

    @NonNull
    protected AppCompatImageView createImageView(Context r2, AttributeSet r3) {
        return new AppCompatImageView(r2, r3);
    }

    @NonNull
    protected AppCompatButton createButton(Context r2, AttributeSet r3) {
        return new AppCompatButton(r2, r3);
    }

    @NonNull
    protected AppCompatEditText createEditText(Context r2, AttributeSet r3) {
        return new AppCompatEditText(r2, r3);
    }

    @NonNull
    protected AppCompatSpinner createSpinner(Context r2, AttributeSet r3) {
        return new AppCompatSpinner(r2, r3);
    }

    @NonNull
    protected AppCompatImageButton createImageButton(Context r2, AttributeSet r3) {
        return new AppCompatImageButton(r2, r3);
    }

    @NonNull
    protected AppCompatCheckBox createCheckBox(Context r2, AttributeSet r3) {
        return new AppCompatCheckBox(r2, r3);
    }

    @NonNull
    protected AppCompatRadioButton createRadioButton(Context r2, AttributeSet r3) {
        return new AppCompatRadioButton(r2, r3);
    }

    @NonNull
    protected AppCompatCheckedTextView createCheckedTextView(Context r2, AttributeSet r3) {
        return new AppCompatCheckedTextView(r2, r3);
    }

    @NonNull
    protected AppCompatAutoCompleteTextView createAutoCompleteTextView(Context r2, AttributeSet r3) {
        return new AppCompatAutoCompleteTextView(r2, r3);
    }

    @NonNull
    protected AppCompatMultiAutoCompleteTextView createMultiAutoCompleteTextView(Context r2, AttributeSet r3) {
        return new AppCompatMultiAutoCompleteTextView(r2, r3);
    }

    @NonNull
    protected AppCompatRatingBar createRatingBar(Context r2, AttributeSet r3) {
        return new AppCompatRatingBar(r2, r3);
    }

    @NonNull
    protected AppCompatSeekBar createSeekBar(Context r2, AttributeSet r3) {
        return new AppCompatSeekBar(r2, r3);
    }

    private void verifyNotNull(View r3, String r4) {
        if (r3 == null) goto L5;
        return;
    L5:
        throw new IllegalStateException(getClass().getName() + " asked to inflate view for <" + r4 + ">, but returned null");
    }

    private View createViewFromTag(Context r5, String r6, AttributeSet r7) {
        if (r6.equals("view") == false) goto L26;
        r6 = r7.getAttributeValue(null, "class");
    L26:
        this.mConstructorArgs[0] = r5;     // Catch: Throwable -> L21 Exception -> L24
        this.mConstructorArgs[1] = r7;     // Catch: Throwable -> L21 Exception -> L24
        if ((-1) != r6.indexOf(46)) goto L18;
        int r72 = 0;
    L10:
        if (r72 >= sClassPrefixList.length) goto L16;
        View r3 = createViewByPrefix(r5, r6, sClassPrefixList[r72]);     // Catch: Throwable -> L21 Exception -> L24
        if (r3 != null) goto L13;
        r72 = r72 + 1;
        goto L10
    L13:
        Object[] r52 = this.mConstructorArgs;
        r52[0] = null;
        r52[1] = null;
        return r3;
    L16:
        Object[] r53 = this.mConstructorArgs;
        r53[0] = null;
        r53[1] = null;
        return null;
    L18:
        View r54 = createViewByPrefix(r5, r6, null);     // Catch: Throwable -> L21 Exception -> L24
        Object[] r62 = this.mConstructorArgs;
        r62[0] = null;
        r62[1] = null;
        return r54;
    L24:
        Object[] r55 = this.mConstructorArgs;
        r55[0] = null;
        r55[1] = null;
        return null;
    L21:
        th = move-exception;
        Object[] r63 = this.mConstructorArgs;
        r63[0] = null;
        r63[1] = null;
        throw th;
    }

    private void checkOnClickListener(View r4, AttributeSet r5) {
        Context r0 = r4.getContext();
        if ((r0 instanceof ContextWrapper) == true) goto L5;
        return;
    L5:
        if (Build.VERSION.SDK_INT >= 15) goto L7;
    L9:
        TypedArray r52 = r0.obtainStyledAttributes(r5, sOnClickAttrs);
        String r02 = r52.getString(0);
        if (r02 == null) goto L12;
        r4.setOnClickListener(new DeclaredOnClickListener(r4, r02));
    L12:
        r52.recycle();
        return;
    L7:
        if (ViewCompat.hasOnClickListeners(r4) == true) goto L9;
    }

    private View createViewByPrefix(Context r2, String r3, String r4) throws ClassNotFoundException, InflateException {
        Constructor<? extends View> r0 = sConstructorMap.get(r3);
        if (r0 == null) goto L13;
    L9:
        r0.setAccessible(true);     // Catch: Exception -> L11
        return r0.newInstance(this.mConstructorArgs);
    L11:
        return null;
    L13:
        ClassLoader r22 = r2.getClassLoader();     // Catch: Exception -> L11
        if (r4 == null) goto L7;
        String r42 = r4 + r3;     // Catch: Exception -> L11
    L8:
        r0 = r22.loadClass(r42).asSubclass(View.class).getConstructor(sConstructorSignature);     // Catch: Exception -> L11
        sConstructorMap.put(r3, r0);     // Catch: Exception -> L11
        goto L9
    L7:
        r42 = r3;
        goto L8
    }

    private static Context themifyContext(Context r2, AttributeSet r3, boolean r4, boolean r5) {
        TypedArray r32 = r2.obtainStyledAttributes(r3, android.support.v7.appcompat.R.styleable.View, 0, 0);
        if (r4 == false) goto L5;
        int r42 = r32.getResourceId(android.support.v7.appcompat.R.styleable.View_android_theme, 0);
    L6:
        if (r5 == false) goto L11;
        if (r42 != 0) goto L11;
        r42 = r32.getResourceId(android.support.v7.appcompat.R.styleable.View_theme, 0);
        if (r42 == 0) goto L11;
        Log.i(LOG_TAG, "app:theme is now deprecated. Please move to using android:theme instead.");
    L11:
        r32.recycle();
        if (r42 != 0) goto L14;
        return r2;
    L14:
        if ((r2 instanceof ContextThemeWrapper) == false) goto L18;
        if (((ContextThemeWrapper) r2).getThemeResId() != r42) goto L18;
        return r2;
    L18:
        return new ContextThemeWrapper(r2, r42);
    L5:
        r42 = 0;
        goto L6
    }
}
