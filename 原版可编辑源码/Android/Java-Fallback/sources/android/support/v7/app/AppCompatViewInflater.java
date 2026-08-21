package android.support.v7.app;

public class AppCompatViewInflater {
    private static final java.lang.String LOG_TAG = "AppCompatViewInflater";
    private static final java.lang.String[] sClassPrefixList = null;
    private static final java.util.Map<java.lang.String, java.lang.reflect.Constructor<? extends android.view.View>> sConstructorMap = null;
    private static final java.lang.Class<?>[] sConstructorSignature = null;
    private static final int[] sOnClickAttrs = null;
    private final java.lang.Object[] mConstructorArgs;

    private static class DeclaredOnClickListener implements android.view.View.OnClickListener {
        private final android.view.View mHostView;
        private final java.lang.String mMethodName;
        private android.content.Context mResolvedContext;
        private java.lang.reflect.Method mResolvedMethod;

        public DeclaredOnClickListener(android.view.View r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.mHostView = r1
                r0.mMethodName = r2
                return
        }

        private void resolveMethod(android.content.Context r5, java.lang.String r6) {
                r4 = this;
            L0:
                if (r5 == 0) goto L2e
                boolean r6 = r5.isRestricted()     // Catch: java.lang.NoSuchMethodException -> L21
                if (r6 != 0) goto L21
                java.lang.Class r6 = r5.getClass()     // Catch: java.lang.NoSuchMethodException -> L21
                java.lang.String r0 = r4.mMethodName     // Catch: java.lang.NoSuchMethodException -> L21
                r1 = 1
                java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.NoSuchMethodException -> L21
                r2 = 0
                java.lang.Class<android.view.View> r3 = android.view.View.class
                r1[r2] = r3     // Catch: java.lang.NoSuchMethodException -> L21
                java.lang.reflect.Method r6 = r6.getMethod(r0, r1)     // Catch: java.lang.NoSuchMethodException -> L21
                if (r6 == 0) goto L21
                r4.mResolvedMethod = r6     // Catch: java.lang.NoSuchMethodException -> L21
                r4.mResolvedContext = r5     // Catch: java.lang.NoSuchMethodException -> L21
                return
            L21:
                boolean r6 = r5 instanceof android.content.ContextWrapper
                if (r6 == 0) goto L2c
                android.content.ContextWrapper r5 = (android.content.ContextWrapper) r5
                android.content.Context r5 = r5.getBaseContext()
                goto L0
            L2c:
                r5 = 0
                goto L0
            L2e:
                android.view.View r5 = r4.mHostView
                int r5 = r5.getId()
                r6 = -1
                if (r5 != r6) goto L3a
                java.lang.String r5 = ""
                goto L5e
            L3a:
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                java.lang.String r0 = " with id '"
                r6.append(r0)
                android.view.View r0 = r4.mHostView
                android.content.Context r0 = r0.getContext()
                android.content.res.Resources r0 = r0.getResources()
                java.lang.String r5 = r0.getResourceEntryName(r5)
                r6.append(r5)
                java.lang.String r5 = "'"
                r6.append(r5)
                java.lang.String r5 = r6.toString()
            L5e:
                java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Could not find method "
                r0.append(r1)
                java.lang.String r1 = r4.mMethodName
                r0.append(r1)
                java.lang.String r1 = "(View) in a parent or ancestor Context for android:onClick "
                r0.append(r1)
                java.lang.String r1 = "attribute defined on view "
                r0.append(r1)
                android.view.View r1 = r4.mHostView
                java.lang.Class r1 = r1.getClass()
                r0.append(r1)
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                r6.<init>(r5)
                throw r6
        }

        @Override
        public void onClick(android.view.View r5) {
                r4 = this;
                java.lang.reflect.Method r0 = r4.mResolvedMethod
                if (r0 != 0) goto Lf
                android.view.View r0 = r4.mHostView
                android.content.Context r0 = r0.getContext()
                java.lang.String r1 = r4.mMethodName
                r4.resolveMethod(r0, r1)
            Lf:
                java.lang.reflect.Method r0 = r4.mResolvedMethod     // Catch: java.lang.reflect.InvocationTargetException -> L1d java.lang.IllegalAccessException -> L26
                android.content.Context r1 = r4.mResolvedContext     // Catch: java.lang.reflect.InvocationTargetException -> L1d java.lang.IllegalAccessException -> L26
                r2 = 1
                java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L1d java.lang.IllegalAccessException -> L26
                r3 = 0
                r2[r3] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L1d java.lang.IllegalAccessException -> L26
                r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L1d java.lang.IllegalAccessException -> L26
                return
            L1d:
                r5 = move-exception
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "Could not execute method for android:onClick"
                r0.<init>(r1, r5)
                throw r0
            L26:
                r5 = move-exception
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "Could not execute non-public method for android:onClick"
                r0.<init>(r1, r5)
                throw r0
        }
    }

    static {
            r0 = 2
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<android.content.Context> r1 = android.content.Context.class
            r2 = 0
            r0[r2] = r1
            java.lang.Class<android.util.AttributeSet> r1 = android.util.AttributeSet.class
            r3 = 1
            r0[r3] = r1
            android.support.v7.app.AppCompatViewInflater.sConstructorSignature = r0
            int[] r0 = new int[r3]
            r1 = 16843375(0x101026f, float:2.3695304E-38)
            r0[r2] = r1
            android.support.v7.app.AppCompatViewInflater.sOnClickAttrs = r0
            java.lang.String r0 = "android.widget."
            java.lang.String r1 = "android.view."
            java.lang.String r2 = "android.webkit."
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            android.support.v7.app.AppCompatViewInflater.sClassPrefixList = r0
            android.support.v4.util.ArrayMap r0 = new android.support.v4.util.ArrayMap
            r0.<init>()
            android.support.v7.app.AppCompatViewInflater.sConstructorMap = r0
            return
    }

    public AppCompatViewInflater() {
            r1 = this;
            r1.<init>()
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1.mConstructorArgs = r0
            return
    }

    private void checkOnClickListener(android.view.View r4, android.util.AttributeSet r5) {
            r3 = this;
            android.content.Context r0 = r4.getContext()
            boolean r1 = r0 instanceof android.content.ContextWrapper
            if (r1 == 0) goto L2d
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 15
            if (r1 < r2) goto L15
            boolean r1 = android.support.v4.view.ViewCompat.hasOnClickListeners(r4)
            if (r1 != 0) goto L15
            goto L2d
        L15:
            int[] r1 = android.support.v7.app.AppCompatViewInflater.sOnClickAttrs
            android.content.res.TypedArray r5 = r0.obtainStyledAttributes(r5, r1)
            r0 = 0
            java.lang.String r0 = r5.getString(r0)
            if (r0 == 0) goto L2a
            android.support.v7.app.AppCompatViewInflater$DeclaredOnClickListener r1 = new android.support.v7.app.AppCompatViewInflater$DeclaredOnClickListener
            r1.<init>(r4, r0)
            r4.setOnClickListener(r1)
        L2a:
            r5.recycle()
        L2d:
            return
    }

    private android.view.View createViewByPrefix(android.content.Context r2, java.lang.String r3, java.lang.String r4) throws java.lang.ClassNotFoundException, android.view.InflateException {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.reflect.Constructor<? extends android.view.View>> r0 = android.support.v7.app.AppCompatViewInflater.sConstructorMap
            java.lang.Object r0 = r0.get(r3)
            java.lang.reflect.Constructor r0 = (java.lang.reflect.Constructor) r0
            if (r0 != 0) goto L36
            java.lang.ClassLoader r2 = r2.getClassLoader()     // Catch: java.lang.Exception -> L43
            if (r4 == 0) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r0.<init>()     // Catch: java.lang.Exception -> L43
            r0.append(r4)     // Catch: java.lang.Exception -> L43
            r0.append(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L43
            goto L21
        L20:
            r4 = r3
        L21:
            java.lang.Class r2 = r2.loadClass(r4)     // Catch: java.lang.Exception -> L43
            java.lang.Class<android.view.View> r4 = android.view.View.class
            java.lang.Class r2 = r2.asSubclass(r4)     // Catch: java.lang.Exception -> L43
            java.lang.Class<?>[] r4 = android.support.v7.app.AppCompatViewInflater.sConstructorSignature     // Catch: java.lang.Exception -> L43
            java.lang.reflect.Constructor r0 = r2.getConstructor(r4)     // Catch: java.lang.Exception -> L43
            java.util.Map<java.lang.String, java.lang.reflect.Constructor<? extends android.view.View>> r2 = android.support.v7.app.AppCompatViewInflater.sConstructorMap     // Catch: java.lang.Exception -> L43
            r2.put(r3, r0)     // Catch: java.lang.Exception -> L43
        L36:
            r2 = 1
            r0.setAccessible(r2)     // Catch: java.lang.Exception -> L43
            java.lang.Object[] r2 = r1.mConstructorArgs     // Catch: java.lang.Exception -> L43
            java.lang.Object r2 = r0.newInstance(r2)     // Catch: java.lang.Exception -> L43
            android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Exception -> L43
            return r2
        L43:
            r2 = 0
            return r2
    }

    private android.view.View createViewFromTag(android.content.Context r5, java.lang.String r6, android.util.AttributeSet r7) {
            r4 = this;
            java.lang.String r0 = "view"
            boolean r0 = r6.equals(r0)
            r1 = 0
            if (r0 == 0) goto Lf
            java.lang.String r6 = "class"
            java.lang.String r6 = r7.getAttributeValue(r1, r6)
        Lf:
            r0 = 1
            r2 = 0
            java.lang.Object[] r3 = r4.mConstructorArgs     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            r3[r2] = r5     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            java.lang.Object[] r3 = r4.mConstructorArgs     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            r3[r0] = r7     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            r7 = -1
            r3 = 46
            int r3 = r6.indexOf(r3)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            if (r7 != r3) goto L43
            r7 = r2
        L23:
            java.lang.String[] r3 = android.support.v7.app.AppCompatViewInflater.sClassPrefixList     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            int r3 = r3.length     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            if (r7 >= r3) goto L3c
            java.lang.String[] r3 = android.support.v7.app.AppCompatViewInflater.sClassPrefixList     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            r3 = r3[r7]     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            android.view.View r3 = r4.createViewByPrefix(r5, r6, r3)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            if (r3 == 0) goto L39
            java.lang.Object[] r5 = r4.mConstructorArgs
            r5[r2] = r1
            r5[r0] = r1
            return r3
        L39:
            int r7 = r7 + 1
            goto L23
        L3c:
            java.lang.Object[] r5 = r4.mConstructorArgs
            r5[r2] = r1
            r5[r0] = r1
            return r1
        L43:
            android.view.View r5 = r4.createViewByPrefix(r5, r6, r1)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L56
            java.lang.Object[] r6 = r4.mConstructorArgs
            r6[r2] = r1
            r6[r0] = r1
            return r5
        L4e:
            r5 = move-exception
            java.lang.Object[] r6 = r4.mConstructorArgs
            r6[r2] = r1
            r6[r0] = r1
            throw r5
        L56:
            java.lang.Object[] r5 = r4.mConstructorArgs
            r5[r2] = r1
            r5[r0] = r1
            return r1
    }

    private static android.content.Context themifyContext(android.content.Context r2, android.util.AttributeSet r3, boolean r4, boolean r5) {
            int[] r0 = android.support.v7.appcompat.R.styleable.View
            r1 = 0
            android.content.res.TypedArray r3 = r2.obtainStyledAttributes(r3, r0, r1, r1)
            if (r4 == 0) goto L10
            int r4 = android.support.v7.appcompat.R.styleable.View_android_theme
            int r4 = r3.getResourceId(r4, r1)
            goto L11
        L10:
            r4 = r1
        L11:
            if (r5 == 0) goto L24
            if (r4 != 0) goto L24
            int r4 = android.support.v7.appcompat.R.styleable.View_theme
            int r4 = r3.getResourceId(r4, r1)
            if (r4 == 0) goto L24
            java.lang.String r5 = "AppCompatViewInflater"
            java.lang.String r0 = "app:theme is now deprecated. Please move to using android:theme instead."
            android.util.Log.i(r5, r0)
        L24:
            r3.recycle()
            if (r4 == 0) goto L3c
            boolean r3 = r2 instanceof android.support.v7.view.ContextThemeWrapper
            if (r3 == 0) goto L36
            r3 = r2
            android.support.v7.view.ContextThemeWrapper r3 = (android.support.v7.view.ContextThemeWrapper) r3
            int r3 = r3.getThemeResId()
            if (r3 == r4) goto L3c
        L36:
            android.support.v7.view.ContextThemeWrapper r3 = new android.support.v7.view.ContextThemeWrapper
            r3.<init>(r2, r4)
            r2 = r3
        L3c:
            return r2
    }

    private void verifyNotNull(android.view.View r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " asked to inflate view for <"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = ">, but returned null"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    protected android.support.v7.widget.AppCompatAutoCompleteTextView createAutoCompleteTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatAutoCompleteTextView r0 = new android.support.v7.widget.AppCompatAutoCompleteTextView
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatButton createButton(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatButton r0 = new android.support.v7.widget.AppCompatButton
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatCheckBox createCheckBox(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatCheckBox r0 = new android.support.v7.widget.AppCompatCheckBox
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatCheckedTextView createCheckedTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatCheckedTextView r0 = new android.support.v7.widget.AppCompatCheckedTextView
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatEditText createEditText(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatEditText r0 = new android.support.v7.widget.AppCompatEditText
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatImageButton createImageButton(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatImageButton r0 = new android.support.v7.widget.AppCompatImageButton
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatImageView createImageView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatImageView r0 = new android.support.v7.widget.AppCompatImageView
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatMultiAutoCompleteTextView createMultiAutoCompleteTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatMultiAutoCompleteTextView r0 = new android.support.v7.widget.AppCompatMultiAutoCompleteTextView
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatRadioButton createRadioButton(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatRadioButton r0 = new android.support.v7.widget.AppCompatRadioButton
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatRatingBar createRatingBar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatRatingBar r0 = new android.support.v7.widget.AppCompatRatingBar
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatSeekBar createSeekBar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatSeekBar r0 = new android.support.v7.widget.AppCompatSeekBar
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatSpinner createSpinner(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatSpinner r0 = new android.support.v7.widget.AppCompatSpinner
            r0.<init>(r2, r3)
            return r0
    }

    protected android.support.v7.widget.AppCompatTextView createTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.AppCompatTextView r0 = new android.support.v7.widget.AppCompatTextView
            r0.<init>(r2, r3)
            return r0
    }

    protected android.view.View createView(android.content.Context r1, java.lang.String r2, android.util.AttributeSet r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    final android.view.View createView(android.view.View r1, java.lang.String r2, android.content.Context r3, android.util.AttributeSet r4, boolean r5, boolean r6, boolean r7, boolean r8) {
            r0 = this;
            if (r5 == 0) goto L9
            if (r1 == 0) goto L9
            android.content.Context r1 = r1.getContext()
            goto La
        L9:
            r1 = r3
        La:
            if (r6 != 0) goto Le
            if (r7 == 0) goto L12
        Le:
            android.content.Context r1 = themifyContext(r1, r4, r6, r7)
        L12:
            if (r8 == 0) goto L18
            android.content.Context r1 = android.support.v7.widget.TintContextWrapper.wrap(r1)
        L18:
            r5 = -1
            int r6 = r2.hashCode()
            switch(r6) {
                case -1946472170: goto La1;
                case -1455429095: goto L96;
                case -1346021293: goto L8b;
                case -938935918: goto L81;
                case -937446323: goto L77;
                case -658531749: goto L6c;
                case -339785223: goto L62;
                case 776382189: goto L58;
                case 1125864064: goto L4e;
                case 1413872058: goto L43;
                case 1601505219: goto L38;
                case 1666676343: goto L2d;
                case 2001146706: goto L22;
                default: goto L20;
            }
        L20:
            goto Lab
        L22:
            java.lang.String r6 = "Button"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 2
            goto Lab
        L2d:
            java.lang.String r6 = "EditText"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 3
            goto Lab
        L38:
            java.lang.String r6 = "CheckBox"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 6
            goto Lab
        L43:
            java.lang.String r6 = "AutoCompleteTextView"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 9
            goto Lab
        L4e:
            java.lang.String r6 = "ImageView"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 1
            goto Lab
        L58:
            java.lang.String r6 = "RadioButton"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 7
            goto Lab
        L62:
            java.lang.String r6 = "Spinner"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 4
            goto Lab
        L6c:
            java.lang.String r6 = "SeekBar"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 12
            goto Lab
        L77:
            java.lang.String r6 = "ImageButton"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 5
            goto Lab
        L81:
            java.lang.String r6 = "TextView"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 0
            goto Lab
        L8b:
            java.lang.String r6 = "MultiAutoCompleteTextView"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 10
            goto Lab
        L96:
            java.lang.String r6 = "CheckedTextView"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 8
            goto Lab
        La1:
            java.lang.String r6 = "RatingBar"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto Lab
            r5 = 11
        Lab:
            switch(r5) {
                case 0: goto L114;
                case 1: goto L10c;
                case 2: goto L104;
                case 3: goto Lfc;
                case 4: goto Lf4;
                case 5: goto Lec;
                case 6: goto Le4;
                case 7: goto Ldc;
                case 8: goto Ld4;
                case 9: goto Lcc;
                case 10: goto Lc4;
                case 11: goto Lbc;
                case 12: goto Lb4;
                default: goto Lae;
            }
        Lae:
            android.view.View r5 = r0.createView(r1, r2, r4)
            goto L11b
        Lb4:
            android.support.v7.widget.AppCompatSeekBar r5 = r0.createSeekBar(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        Lbc:
            android.support.v7.widget.AppCompatRatingBar r5 = r0.createRatingBar(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        Lc4:
            android.support.v7.widget.AppCompatMultiAutoCompleteTextView r5 = r0.createMultiAutoCompleteTextView(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        Lcc:
            android.support.v7.widget.AppCompatAutoCompleteTextView r5 = r0.createAutoCompleteTextView(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        Ld4:
            android.support.v7.widget.AppCompatCheckedTextView r5 = r0.createCheckedTextView(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        Ldc:
            android.support.v7.widget.AppCompatRadioButton r5 = r0.createRadioButton(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        Le4:
            android.support.v7.widget.AppCompatCheckBox r5 = r0.createCheckBox(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        Lec:
            android.support.v7.widget.AppCompatImageButton r5 = r0.createImageButton(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        Lf4:
            android.support.v7.widget.AppCompatSpinner r5 = r0.createSpinner(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        Lfc:
            android.support.v7.widget.AppCompatEditText r5 = r0.createEditText(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        L104:
            android.support.v7.widget.AppCompatButton r5 = r0.createButton(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        L10c:
            android.support.v7.widget.AppCompatImageView r5 = r0.createImageView(r1, r4)
            r0.verifyNotNull(r5, r2)
            goto L11b
        L114:
            android.support.v7.widget.AppCompatTextView r5 = r0.createTextView(r1, r4)
            r0.verifyNotNull(r5, r2)
        L11b:
            if (r5 != 0) goto L123
            if (r3 == r1) goto L123
            android.view.View r5 = r0.createViewFromTag(r1, r2, r4)
        L123:
            if (r5 == 0) goto L128
            r0.checkOnClickListener(r5, r4)
        L128:
            return r5
    }
}
