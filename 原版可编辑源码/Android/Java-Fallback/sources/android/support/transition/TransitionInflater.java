package android.support.transition;

public class TransitionInflater {
    private static final android.support.v4.util.ArrayMap<java.lang.String, java.lang.reflect.Constructor> CONSTRUCTORS = null;
    private static final java.lang.Class<?>[] CONSTRUCTOR_SIGNATURE = null;
    private final android.content.Context mContext;

    static {
            r0 = 2
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
            java.lang.Class<android.content.Context> r2 = android.content.Context.class
            r0[r1] = r2
            r1 = 1
            java.lang.Class<android.util.AttributeSet> r2 = android.util.AttributeSet.class
            r0[r1] = r2
            android.support.transition.TransitionInflater.CONSTRUCTOR_SIGNATURE = r0
            android.support.v4.util.ArrayMap r0 = new android.support.v4.util.ArrayMap
            r0.<init>()
            android.support.transition.TransitionInflater.CONSTRUCTORS = r0
            return
    }

    private TransitionInflater(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    private java.lang.Object createCustom(android.util.AttributeSet r7, java.lang.Class r8, java.lang.String r9) {
            r6 = this;
            r0 = 0
            java.lang.String r1 = "class"
            java.lang.String r0 = r7.getAttributeValue(r0, r1)
            if (r0 == 0) goto L68
            android.support.v4.util.ArrayMap<java.lang.String, java.lang.reflect.Constructor> r9 = android.support.transition.TransitionInflater.CONSTRUCTORS     // Catch: java.lang.Exception -> L48
            monitor-enter(r9)     // Catch: java.lang.Exception -> L48
            android.support.v4.util.ArrayMap<java.lang.String, java.lang.reflect.Constructor> r1 = android.support.transition.TransitionInflater.CONSTRUCTORS     // Catch: java.lang.Throwable -> L45
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L45
            java.lang.reflect.Constructor r1 = (java.lang.reflect.Constructor) r1     // Catch: java.lang.Throwable -> L45
            r2 = 1
            if (r1 != 0) goto L35
            android.content.Context r3 = r6.mContext     // Catch: java.lang.Throwable -> L45
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.Throwable -> L45
            java.lang.Class r3 = r3.loadClass(r0)     // Catch: java.lang.Throwable -> L45
            java.lang.Class r3 = r3.asSubclass(r8)     // Catch: java.lang.Throwable -> L45
            if (r3 == 0) goto L35
            java.lang.Class<?>[] r1 = android.support.transition.TransitionInflater.CONSTRUCTOR_SIGNATURE     // Catch: java.lang.Throwable -> L45
            java.lang.reflect.Constructor r1 = r3.getConstructor(r1)     // Catch: java.lang.Throwable -> L45
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L45
            android.support.v4.util.ArrayMap<java.lang.String, java.lang.reflect.Constructor> r3 = android.support.transition.TransitionInflater.CONSTRUCTORS     // Catch: java.lang.Throwable -> L45
            r3.put(r0, r1)     // Catch: java.lang.Throwable -> L45
        L35:
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L45
            r4 = 0
            android.content.Context r5 = r6.mContext     // Catch: java.lang.Throwable -> L45
            r3[r4] = r5     // Catch: java.lang.Throwable -> L45
            r3[r2] = r7     // Catch: java.lang.Throwable -> L45
            java.lang.Object r7 = r1.newInstance(r3)     // Catch: java.lang.Throwable -> L45
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L45
            return r7
        L45:
            r7 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L45
            throw r7     // Catch: java.lang.Exception -> L48
        L48:
            r7 = move-exception
            android.view.InflateException r9 = new android.view.InflateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Could not instantiate "
            r1.append(r2)
            r1.append(r8)
            java.lang.String r8 = " class "
            r1.append(r8)
            r1.append(r0)
            java.lang.String r8 = r1.toString()
            r9.<init>(r8, r7)
            throw r9
        L68:
            android.view.InflateException r7 = new android.view.InflateException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r9)
            java.lang.String r9 = " tag must have a 'class' attribute"
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
    }

    private android.support.transition.Transition createTransitionFromXml(org.xmlpull.v1.XmlPullParser r8, android.util.AttributeSet r9, android.support.transition.Transition r10) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r7 = this;
            int r0 = r8.getDepth()
            boolean r1 = r10 instanceof android.support.transition.TransitionSet
            r2 = 0
            if (r1 == 0) goto Ld
            r1 = r10
            android.support.transition.TransitionSet r1 = (android.support.transition.TransitionSet) r1
            goto Le
        Ld:
            r1 = r2
        Le:
            r3 = r2
        Lf:
            int r4 = r8.next()
            r5 = 3
            if (r4 != r5) goto L1c
            int r5 = r8.getDepth()
            if (r5 <= r0) goto L17d
        L1c:
            r5 = 1
            if (r4 == r5) goto L17d
            r5 = 2
            if (r4 == r5) goto L23
            goto Lf
        L23:
            java.lang.String r4 = r8.getName()
            java.lang.String r5 = "fade"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L38
            android.support.transition.Fade r3 = new android.support.transition.Fade
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        L38:
            java.lang.String r5 = "changeBounds"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L49
            android.support.transition.ChangeBounds r3 = new android.support.transition.ChangeBounds
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        L49:
            java.lang.String r5 = "slide"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L5a
            android.support.transition.Slide r3 = new android.support.transition.Slide
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        L5a:
            java.lang.String r5 = "explode"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L6b
            android.support.transition.Explode r3 = new android.support.transition.Explode
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        L6b:
            java.lang.String r5 = "changeImageTransform"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L7c
            android.support.transition.ChangeImageTransform r3 = new android.support.transition.ChangeImageTransform
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        L7c:
            java.lang.String r5 = "changeTransform"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L8d
            android.support.transition.ChangeTransform r3 = new android.support.transition.ChangeTransform
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        L8d:
            java.lang.String r5 = "changeClipBounds"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L9e
            android.support.transition.ChangeClipBounds r3 = new android.support.transition.ChangeClipBounds
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        L9e:
            java.lang.String r5 = "autoTransition"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto Laf
            android.support.transition.AutoTransition r3 = new android.support.transition.AutoTransition
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        Laf:
            java.lang.String r5 = "changeScroll"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto Lc0
            android.support.transition.ChangeScroll r3 = new android.support.transition.ChangeScroll
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        Lc0:
            java.lang.String r5 = "transitionSet"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto Ld0
            android.support.transition.TransitionSet r3 = new android.support.transition.TransitionSet
            android.content.Context r4 = r7.mContext
            r3.<init>(r4, r9)
            goto L13c
        Ld0:
            java.lang.String r5 = "transition"
            boolean r6 = r5.equals(r4)
            if (r6 == 0) goto Le1
            java.lang.Class<android.support.transition.Transition> r3 = android.support.transition.Transition.class
            java.lang.Object r3 = r7.createCustom(r9, r3, r5)
            android.support.transition.Transition r3 = (android.support.transition.Transition) r3
            goto L13c
        Le1:
            java.lang.String r5 = "targets"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto Led
            r7.getTargetIds(r8, r9, r10)
            goto L13c
        Led:
            java.lang.String r5 = "arcMotion"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L10a
            if (r10 == 0) goto L102
            android.support.transition.ArcMotion r4 = new android.support.transition.ArcMotion
            android.content.Context r5 = r7.mContext
            r4.<init>(r5, r9)
            r10.setPathMotion(r4)
            goto L13c
        L102:
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            java.lang.String r9 = "Invalid use of arcMotion element"
            r8.<init>(r9)
            throw r8
        L10a:
            java.lang.String r5 = "pathMotion"
            boolean r6 = r5.equals(r4)
            if (r6 == 0) goto L128
            if (r10 == 0) goto L120
            java.lang.Class<android.support.transition.PathMotion> r4 = android.support.transition.PathMotion.class
            java.lang.Object r4 = r7.createCustom(r9, r4, r5)
            android.support.transition.PathMotion r4 = (android.support.transition.PathMotion) r4
            r10.setPathMotion(r4)
            goto L13c
        L120:
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            java.lang.String r9 = "Invalid use of pathMotion element"
            r8.<init>(r9)
            throw r8
        L128:
            java.lang.String r5 = "patternPathMotion"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto L162
            if (r10 == 0) goto L15a
            android.support.transition.PatternPathMotion r4 = new android.support.transition.PatternPathMotion
            android.content.Context r5 = r7.mContext
            r4.<init>(r5, r9)
            r10.setPathMotion(r4)
        L13c:
            if (r3 == 0) goto Lf
            boolean r4 = r8.isEmptyElementTag()
            if (r4 != 0) goto L147
            r7.createTransitionFromXml(r8, r9, r3)
        L147:
            if (r1 == 0) goto L14e
            r1.addTransition(r3)
            goto Le
        L14e:
            if (r10 != 0) goto L152
            goto Lf
        L152:
            android.view.InflateException r8 = new android.view.InflateException
            java.lang.String r9 = "Could not add transition to another transition."
            r8.<init>(r9)
            throw r8
        L15a:
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            java.lang.String r9 = "Invalid use of patternPathMotion element"
            r8.<init>(r9)
            throw r8
        L162:
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "Unknown scene name: "
            r10.append(r0)
            java.lang.String r8 = r8.getName()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            r9.<init>(r8)
            throw r9
        L17d:
            return r3
    }

    private android.support.transition.TransitionManager createTransitionManagerFromXml(org.xmlpull.v1.XmlPullParser r5, android.util.AttributeSet r6, android.view.ViewGroup r7) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r4 = this;
            int r0 = r5.getDepth()
            r1 = 0
        L5:
            int r2 = r5.next()
            r3 = 3
            if (r2 != r3) goto L12
            int r3 = r5.getDepth()
            if (r3 <= r0) goto L54
        L12:
            r3 = 1
            if (r2 == r3) goto L54
            r3 = 2
            if (r2 == r3) goto L19
            goto L5
        L19:
            java.lang.String r2 = r5.getName()
            java.lang.String r3 = "transitionManager"
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L2b
            android.support.transition.TransitionManager r1 = new android.support.transition.TransitionManager
            r1.<init>()
            goto L5
        L2b:
            java.lang.String r3 = "transition"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L39
            if (r1 == 0) goto L39
            r4.loadTransition(r6, r5, r7, r1)
            goto L5
        L39:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Unknown scene name: "
            r7.append(r0)
            java.lang.String r5 = r5.getName()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L54:
            return r1
    }

    public static android.support.transition.TransitionInflater from(android.content.Context r1) {
            android.support.transition.TransitionInflater r0 = new android.support.transition.TransitionInflater
            r0.<init>(r1)
            return r0
    }

    private void getTargetIds(org.xmlpull.v1.XmlPullParser r8, android.util.AttributeSet r9, android.support.transition.Transition r10) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r7 = this;
            int r0 = r8.getDepth()
        L4:
            int r1 = r8.next()
            r2 = 3
            if (r1 != r2) goto L11
            int r3 = r8.getDepth()
            if (r3 <= r0) goto Lb8
        L11:
            r3 = 1
            if (r1 == r3) goto Lb8
            r4 = 2
            if (r1 == r4) goto L18
            goto L4
        L18:
            java.lang.String r1 = r8.getName()
            java.lang.String r5 = "target"
            boolean r1 = r1.equals(r5)
            if (r1 == 0) goto L9d
            android.content.Context r1 = r7.mContext
            int[] r5 = android.support.transition.Styleable.TRANSITION_TARGET
            android.content.res.TypedArray r1 = r1.obtainStyledAttributes(r9, r5)
            r5 = 0
            java.lang.String r6 = "targetId"
            int r6 = android.support.v4.content.res.TypedArrayUtils.getNamedResourceId(r1, r8, r6, r3, r5)
            if (r6 == 0) goto L39
            r10.addTarget(r6)
            goto L7e
        L39:
            java.lang.String r6 = "excludeId"
            int r4 = android.support.v4.content.res.TypedArrayUtils.getNamedResourceId(r1, r8, r6, r4, r5)
            if (r4 == 0) goto L45
            r10.excludeTarget(r4, r3)
            goto L7e
        L45:
            r4 = 4
            java.lang.String r6 = "targetName"
            java.lang.String r4 = android.support.v4.content.res.TypedArrayUtils.getNamedString(r1, r8, r6, r4)
            if (r4 == 0) goto L52
            r10.addTarget(r4)
            goto L7e
        L52:
            r4 = 5
            java.lang.String r6 = "excludeName"
            java.lang.String r4 = android.support.v4.content.res.TypedArrayUtils.getNamedString(r1, r8, r6, r4)
            if (r4 == 0) goto L5f
            r10.excludeTarget(r4, r3)
            goto L7e
        L5f:
            java.lang.String r4 = "excludeClass"
            java.lang.String r2 = android.support.v4.content.res.TypedArrayUtils.getNamedString(r1, r8, r4, r2)
            if (r2 == 0) goto L6f
            java.lang.Class r4 = java.lang.Class.forName(r2)     // Catch: java.lang.ClassNotFoundException -> L82
            r10.excludeTarget(r4, r3)     // Catch: java.lang.ClassNotFoundException -> L82
            goto L7e
        L6f:
            java.lang.String r3 = "targetClass"
            java.lang.String r2 = android.support.v4.content.res.TypedArrayUtils.getNamedString(r1, r8, r3, r5)     // Catch: java.lang.ClassNotFoundException -> L82
            if (r2 == 0) goto L7e
            java.lang.Class r3 = java.lang.Class.forName(r2)     // Catch: java.lang.ClassNotFoundException -> L82
            r10.addTarget(r3)     // Catch: java.lang.ClassNotFoundException -> L82
        L7e:
            r1.recycle()
            goto L4
        L82:
            r8 = move-exception
            r1.recycle()
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "Could not create "
            r10.append(r0)
            r10.append(r2)
            java.lang.String r10 = r10.toString()
            r9.<init>(r10, r8)
            throw r9
        L9d:
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "Unknown scene name: "
            r10.append(r0)
            java.lang.String r8 = r8.getName()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            r9.<init>(r8)
            throw r9
        Lb8:
            return
    }

    private void loadTransition(android.util.AttributeSet r7, org.xmlpull.v1.XmlPullParser r8, android.view.ViewGroup r9, android.support.transition.TransitionManager r10) throws android.content.res.Resources.NotFoundException {
            r6 = this;
            android.content.Context r0 = r6.mContext
            int[] r1 = android.support.transition.Styleable.TRANSITION_MANAGER
            android.content.res.TypedArray r7 = r0.obtainStyledAttributes(r7, r1)
            r0 = -1
            java.lang.String r1 = "transition"
            r2 = 2
            int r1 = android.support.v4.content.res.TypedArrayUtils.getNamedResourceId(r7, r8, r1, r2, r0)
            java.lang.String r2 = "fromScene"
            r3 = 0
            int r2 = android.support.v4.content.res.TypedArrayUtils.getNamedResourceId(r7, r8, r2, r3, r0)
            r3 = 0
            if (r2 >= 0) goto L1c
            r2 = r3
            goto L22
        L1c:
            android.content.Context r4 = r6.mContext
            android.support.transition.Scene r2 = android.support.transition.Scene.getSceneForLayout(r9, r2, r4)
        L22:
            r4 = 1
            java.lang.String r5 = "toScene"
            int r8 = android.support.v4.content.res.TypedArrayUtils.getNamedResourceId(r7, r8, r5, r4, r0)
            if (r8 >= 0) goto L2c
            goto L32
        L2c:
            android.content.Context r0 = r6.mContext
            android.support.transition.Scene r3 = android.support.transition.Scene.getSceneForLayout(r9, r8, r0)
        L32:
            if (r1 < 0) goto L5d
            android.support.transition.Transition r8 = r6.inflateTransition(r1)
            if (r8 == 0) goto L5d
            if (r3 == 0) goto L46
            if (r2 != 0) goto L42
            r10.setTransition(r3, r8)
            goto L5d
        L42:
            r10.setTransition(r2, r3, r8)
            goto L5d
        L46:
            java.lang.RuntimeException r7 = new java.lang.RuntimeException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "No toScene for transition ID "
            r8.append(r9)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L5d:
            r7.recycle()
            return
    }

    public android.support.transition.Transition inflateTransition(int r5) {
            r4 = this;
            android.content.Context r0 = r4.mContext
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.XmlResourceParser r5 = r0.getXml(r5)
            android.util.AttributeSet r0 = android.util.Xml.asAttributeSet(r5)     // Catch: java.lang.Throwable -> L17 java.io.IOException -> L19 org.xmlpull.v1.XmlPullParserException -> L3c
            r1 = 0
            android.support.transition.Transition r0 = r4.createTransitionFromXml(r5, r0, r1)     // Catch: java.lang.Throwable -> L17 java.io.IOException -> L19 org.xmlpull.v1.XmlPullParserException -> L3c
            r5.close()
            return r0
        L17:
            r0 = move-exception
            goto L47
        L19:
            r0 = move-exception
            android.view.InflateException r1 = new android.view.InflateException     // Catch: java.lang.Throwable -> L17
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17
            r2.<init>()     // Catch: java.lang.Throwable -> L17
            java.lang.String r3 = r5.getPositionDescription()     // Catch: java.lang.Throwable -> L17
            r2.append(r3)     // Catch: java.lang.Throwable -> L17
            java.lang.String r3 = ": "
            r2.append(r3)     // Catch: java.lang.Throwable -> L17
            java.lang.String r3 = r0.getMessage()     // Catch: java.lang.Throwable -> L17
            r2.append(r3)     // Catch: java.lang.Throwable -> L17
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L17
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L17
            throw r1     // Catch: java.lang.Throwable -> L17
        L3c:
            r0 = move-exception
            android.view.InflateException r1 = new android.view.InflateException     // Catch: java.lang.Throwable -> L17
            java.lang.String r2 = r0.getMessage()     // Catch: java.lang.Throwable -> L17
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L17
            throw r1     // Catch: java.lang.Throwable -> L17
        L47:
            r5.close()
            throw r0
    }

    public android.support.transition.TransitionManager inflateTransitionManager(int r4, android.view.ViewGroup r5) {
            r3 = this;
            android.content.Context r0 = r3.mContext
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.XmlResourceParser r4 = r0.getXml(r4)
            android.util.AttributeSet r0 = android.util.Xml.asAttributeSet(r4)     // Catch: java.lang.Throwable -> L16 java.io.IOException -> L18 org.xmlpull.v1.XmlPullParserException -> L3e
            android.support.transition.TransitionManager r5 = r3.createTransitionManagerFromXml(r4, r0, r5)     // Catch: java.lang.Throwable -> L16 java.io.IOException -> L18 org.xmlpull.v1.XmlPullParserException -> L3e
            r4.close()
            return r5
        L16:
            r5 = move-exception
            goto L4c
        L18:
            r5 = move-exception
            android.view.InflateException r0 = new android.view.InflateException     // Catch: java.lang.Throwable -> L16
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = r4.getPositionDescription()     // Catch: java.lang.Throwable -> L16
            r1.append(r2)     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = ": "
            r1.append(r2)     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = r5.getMessage()     // Catch: java.lang.Throwable -> L16
            r1.append(r2)     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L16
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L16
            r0.initCause(r5)     // Catch: java.lang.Throwable -> L16
            throw r0     // Catch: java.lang.Throwable -> L16
        L3e:
            r5 = move-exception
            android.view.InflateException r0 = new android.view.InflateException     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = r5.getMessage()     // Catch: java.lang.Throwable -> L16
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L16
            r0.initCause(r5)     // Catch: java.lang.Throwable -> L16
            throw r0     // Catch: java.lang.Throwable -> L16
        L4c:
            r4.close()
            throw r5
    }
}
