package com.mbridge.msdk.dycreator.a;

public final class a {
    private static final java.lang.Class[] f = null;
    private static final java.util.HashMap<java.lang.String, java.lang.reflect.Constructor> g = null;
    private static java.lang.String j;
    protected final android.content.Context a;
    private final boolean b;
    private com.mbridge.msdk.dycreator.a.a.a c;
    private com.mbridge.msdk.dycreator.a.a.b d;
    private final java.lang.Object[] e;
    private java.util.HashMap<java.lang.String, java.lang.Boolean> h;
    private long i;

    public interface a {
        android.view.View a(java.lang.String r1, android.content.Context r2, android.util.AttributeSet r3);
    }

    public interface b {
        boolean a(java.lang.Class r1);
    }

    static {
            r0 = 2
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
            java.lang.Class<android.content.Context> r2 = android.content.Context.class
            r0[r1] = r2
            r1 = 1
            java.lang.Class<android.util.AttributeSet> r2 = android.util.AttributeSet.class
            r0[r1] = r2
            com.mbridge.msdk.dycreator.a.a.f = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.dycreator.a.a.g = r0
            java.lang.String r0 = "com.mbridge.msdk.dycreator.baseview.MB"
            com.mbridge.msdk.dycreator.a.a.j = r0
            return
    }

    public a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.b = r0
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1.e = r0
            r1.a = r2
            return
    }

    private android.view.View a(java.lang.String r6, android.util.AttributeSet r7) {
            r5 = this;
            java.lang.String r0 = ": Error inflating class "
            java.lang.String r1 = "view"
            boolean r1 = r6.equals(r1)
            r2 = 0
            if (r1 == 0) goto L11
            java.lang.String r6 = "class"
            java.lang.String r6 = r7.getAttributeValue(r2, r6)
        L11:
            java.io.PrintStream r1 = java.lang.System.out
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "******** Creating view: "
            r3.append(r4)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            r1.println(r3)
            com.mbridge.msdk.dycreator.a.a$a r1 = r5.c     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            if (r1 != 0) goto L2d
            r1 = r2
            goto L35
        L2d:
            com.mbridge.msdk.dycreator.a.a$a r1 = r5.c     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            android.content.Context r3 = r5.a     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            android.view.View r1 = r1.a(r6, r3, r7)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
        L35:
            if (r1 != 0) goto L63
            r1 = -1
            r3 = 46
            int r3 = r6.indexOf(r3)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            if (r1 != r3) goto L5f
            java.lang.String r1 = "MBStarLevelLayoutView"
            boolean r1 = r6.equals(r1)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            if (r1 != 0) goto L58
            java.lang.String r1 = "LuckPan"
            boolean r1 = r6.equals(r1)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            if (r1 == 0) goto L51
            goto L58
        L51:
            java.lang.String r1 = com.mbridge.msdk.dycreator.a.a.j     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            android.view.View r1 = r5.a(r6, r1, r7)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            goto L63
        L58:
            java.lang.String r1 = ""
            android.view.View r1 = r5.a(r6, r1, r7)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            goto L63
        L5f:
            android.view.View r1 = r5.a(r6, r2, r7)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
        L63:
            java.io.PrintStream r2 = java.lang.System.out     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            r3.<init>()     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            java.lang.String r4 = "Created view is: "
            r3.append(r4)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            r3.append(r1)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            r2.println(r3)     // Catch: java.lang.Exception -> L7a java.lang.ClassNotFoundException -> L9a android.view.InflateException -> Lba
            return r1
        L7a:
            r1 = move-exception
            android.view.InflateException r2 = new android.view.InflateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r7 = r7.getPositionDescription()
            r3.append(r7)
            r3.append(r0)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            r2.<init>(r6)
            r2.initCause(r1)
            throw r2
        L9a:
            r1 = move-exception
            android.view.InflateException r2 = new android.view.InflateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r7 = r7.getPositionDescription()
            r3.append(r7)
            r3.append(r0)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            r2.<init>(r6)
            r2.initCause(r1)
            throw r2
        Lba:
            r6 = move-exception
            throw r6
    }

    private android.view.View a(java.lang.String r8, java.lang.String r9, android.util.AttributeSet r10) throws java.lang.ClassNotFoundException, android.view.InflateException {
            r7 = this;
            java.util.HashMap<java.lang.String, java.lang.reflect.Constructor> r0 = com.mbridge.msdk.dycreator.a.a.g
            java.lang.Object r0 = r0.get(r8)
            java.lang.reflect.Constructor r0 = (java.lang.reflect.Constructor) r0
            r1 = 1
            java.lang.String r2 = ": Error inflating class "
            r3 = 0
            if (r0 != 0) goto L48
            android.content.Context r0 = r7.a     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r9 == 0) goto L26
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            r4.<init>()     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            r4.append(r9)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            r4.append(r8)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            goto L27
        L26:
            r4 = r8
        L27:
            java.lang.Class r3 = r0.loadClass(r4)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            com.mbridge.msdk.dycreator.a.a$b r0 = r7.d     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r0 == 0) goto L3c
            if (r3 == 0) goto L3c
            com.mbridge.msdk.dycreator.a.a$b r0 = r7.d     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            boolean r0 = r0.a(r3)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r0 != 0) goto L3c
            r7.b(r8, r9, r10)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
        L3c:
            java.lang.Class[] r0 = com.mbridge.msdk.dycreator.a.a.f     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.lang.reflect.Constructor r0 = r3.getConstructor(r0)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.util.HashMap<java.lang.String, java.lang.reflect.Constructor> r4 = com.mbridge.msdk.dycreator.a.a.g     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            r4.put(r8, r0)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            goto L9a
        L48:
            com.mbridge.msdk.dycreator.a.a$b r4 = r7.d     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r4 == 0) goto L9a
            java.util.HashMap<java.lang.String, java.lang.Boolean> r4 = r7.h     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.lang.Object r4 = r4.get(r8)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r4 != 0) goto L8f
            android.content.Context r4 = r7.a     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.lang.ClassLoader r4 = r4.getClassLoader()     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r9 == 0) goto L6e
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            r5.<init>()     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            r5.append(r9)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            r5.append(r8)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            goto L6f
        L6e:
            r5 = r8
        L6f:
            java.lang.Class r3 = r4.loadClass(r5)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r3 == 0) goto L7f
            com.mbridge.msdk.dycreator.a.a$b r4 = r7.d     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            boolean r4 = r4.a(r3)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r4 == 0) goto L7f
            r4 = r1
            goto L80
        L7f:
            r4 = 0
        L80:
            java.util.HashMap<java.lang.String, java.lang.Boolean> r5 = r7.h     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            r5.put(r8, r6)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r4 != 0) goto L9a
            r7.b(r8, r9, r10)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            goto L9a
        L8f:
            java.lang.Boolean r5 = java.lang.Boolean.FALSE     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            if (r4 == 0) goto L9a
            r7.b(r8, r9, r10)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
        L9a:
            java.lang.Object[] r4 = r7.e     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            r4[r1] = r10     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            java.lang.Object r0 = r0.newInstance(r4)     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Exception -> La5 java.lang.ClassNotFoundException -> Lce java.lang.NoSuchMethodException -> Ld0
            return r0
        La5:
            r8 = move-exception
            android.view.InflateException r9 = new android.view.InflateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r10 = r10.getPositionDescription()
            r0.append(r10)
            r0.append(r2)
            if (r3 != 0) goto Lbc
            java.lang.String r10 = "<unknown>"
            goto Lc0
        Lbc:
            java.lang.String r10 = r3.getName()
        Lc0:
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            r9.<init>(r10)
            r9.initCause(r8)
            throw r9
        Lce:
            r8 = move-exception
            throw r8
        Ld0:
            r0 = move-exception
            android.view.InflateException r1 = new android.view.InflateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r10 = r10.getPositionDescription()
            r3.append(r10)
            r3.append(r2)
            if (r9 == 0) goto Lf3
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r9)
            r10.append(r8)
            java.lang.String r8 = r10.toString()
        Lf3:
            r3.append(r8)
            java.lang.String r8 = r3.toString()
            r1.<init>(r8)
            r1.initCause(r0)
            throw r1
    }

    private android.view.View a(org.xmlpull.v1.XmlPullParser r7, android.view.ViewGroup r8, boolean r9) {
            r6 = this;
            java.lang.Object[] r0 = r6.e
            monitor-enter(r0)
            android.util.AttributeSet r1 = android.util.Xml.asAttributeSet(r7)     // Catch: java.lang.Throwable -> Lef
            java.lang.Object[] r2 = r6.e     // Catch: java.lang.Throwable -> Lef
            r3 = 0
            android.content.Context r4 = r6.a     // Catch: java.lang.Throwable -> Lef
            r2[r3] = r4     // Catch: java.lang.Throwable -> Lef
        Le:
            int r2 = r7.next()     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r3 = 2
            if (r2 == r3) goto L19
            r4 = 1
            if (r2 == r4) goto L19
            goto Le
        L19:
            if (r2 != r3) goto La0
            java.lang.String r2 = r7.getName()     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.io.PrintStream r3 = java.lang.System.out     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r4 = "**************************"
            r3.println(r4)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.io.PrintStream r3 = java.lang.System.out     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r4.<init>()     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r5 = "Creating root view: "
            r4.append(r5)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r4.append(r2)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r4 = r4.toString()     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r3.println(r4)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.io.PrintStream r3 = java.lang.System.out     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r4 = "**************************"
            r3.println(r4)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r3 = "merge"
            boolean r3 = r3.equals(r2)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            if (r3 == 0) goto L5b
            if (r8 == 0) goto L53
            if (r9 == 0) goto L53
            r6.a(r7, r8, r1)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            goto L9e
        L53:
            android.view.InflateException r8 = new android.view.InflateException     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r9 = "<merge /> can be used only with a valid ViewGroup root and attachToRoot=true"
            r8.<init>(r9)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            throw r8     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
        L5b:
            android.view.View r2 = r6.a(r2, r1)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r3 = 0
            if (r8 == 0) goto L81
            java.io.PrintStream r3 = java.lang.System.out     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r4.<init>()     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r5 = "Creating params from root: "
            r4.append(r5)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r4.append(r8)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r4 = r4.toString()     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r3.println(r4)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            android.view.ViewGroup$LayoutParams r3 = r8.generateLayoutParams(r1)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            if (r9 != 0) goto L81
            r2.setLayoutParams(r3)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
        L81:
            java.io.PrintStream r4 = java.lang.System.out     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r5 = "-----> start inflating children"
            r4.println(r5)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r6.a(r7, r2, r1)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.io.PrintStream r1 = java.lang.System.out     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r4 = "-----> done inflating children"
            r1.println(r4)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            if (r8 == 0) goto L99
            if (r9 == 0) goto L99
            r8.addView(r2, r3)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
        L99:
            if (r8 == 0) goto L9d
            if (r9 != 0) goto L9e
        L9d:
            r8 = r2
        L9e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lef
            return r8
        La0:
            android.view.InflateException r8 = new android.view.InflateException     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r9.<init>()     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r1 = r7.getPositionDescription()     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r9.append(r1)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r1 = ": No start tag found!"
            r9.append(r1)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            java.lang.String r9 = r9.toString()     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            r8.<init>(r9)     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
            throw r8     // Catch: java.io.IOException -> Lbb org.xmlpull.v1.XmlPullParserException -> Le1 java.lang.Throwable -> Lef
        Lbb:
            r8 = move-exception
            android.view.InflateException r9 = new android.view.InflateException     // Catch: java.lang.Throwable -> Lef
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lef
            r1.<init>()     // Catch: java.lang.Throwable -> Lef
            java.lang.String r7 = r7.getPositionDescription()     // Catch: java.lang.Throwable -> Lef
            r1.append(r7)     // Catch: java.lang.Throwable -> Lef
            java.lang.String r7 = ": "
            r1.append(r7)     // Catch: java.lang.Throwable -> Lef
            java.lang.String r7 = r8.getMessage()     // Catch: java.lang.Throwable -> Lef
            r1.append(r7)     // Catch: java.lang.Throwable -> Lef
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> Lef
            r9.<init>(r7)     // Catch: java.lang.Throwable -> Lef
            r9.initCause(r8)     // Catch: java.lang.Throwable -> Lef
            throw r9     // Catch: java.lang.Throwable -> Lef
        Le1:
            r7 = move-exception
            android.view.InflateException r8 = new android.view.InflateException     // Catch: java.lang.Throwable -> Lef
            java.lang.String r9 = r7.getMessage()     // Catch: java.lang.Throwable -> Lef
            r8.<init>(r9)     // Catch: java.lang.Throwable -> Lef
            r8.initCause(r7)     // Catch: java.lang.Throwable -> Lef
            throw r8     // Catch: java.lang.Throwable -> Lef
        Lef:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lef
            throw r7
    }

    private org.xmlpull.v1.XmlPullParser a(java.lang.String r3) {
            r2 = this;
            org.xmlpull.v1.XmlPullParser r0 = android.util.Xml.newPullParser()
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Exception -> Lf
            r1.<init>(r3)     // Catch: java.lang.Exception -> Lf
            java.lang.String r3 = "utf-8"
            r0.setInput(r1, r3)     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r3 = move-exception
            r3.printStackTrace()
        L13:
            return r0
    }

    private void a(org.xmlpull.v1.XmlPullParser r7, android.view.View r8, android.util.AttributeSet r9) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r6 = this;
            int r0 = r7.getDepth()
        L4:
            int r1 = r7.next()
            r2 = 3
            if (r1 != r2) goto L11
            int r3 = r7.getDepth()
            if (r3 <= r0) goto L76
        L11:
            r3 = 1
            if (r1 == r3) goto L76
            r4 = 2
            if (r1 == r4) goto L18
            goto L4
        L18:
            java.lang.String r1 = r7.getName()
            java.lang.String r4 = "requestFocus"
            boolean r4 = r4.equals(r1)
            if (r4 == 0) goto L3a
            r8.requestFocus()
            int r1 = r7.getDepth()
        L2b:
            int r4 = r7.next()
            if (r4 != r2) goto L37
            int r5 = r7.getDepth()
            if (r5 <= r1) goto L4
        L37:
            if (r4 == r3) goto L4
            goto L2b
        L3a:
            java.lang.String r2 = "include"
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto L54
            int r1 = r7.getDepth()
            if (r1 == 0) goto L4c
            r6.b(r7, r8, r9)
            goto L4
        L4c:
            android.view.InflateException r7 = new android.view.InflateException
            java.lang.String r8 = "<include /> cannot be the root element"
            r7.<init>(r8)
            throw r7
        L54:
            java.lang.String r2 = "merge"
            boolean r2 = r2.equals(r1)
            if (r2 != 0) goto L6e
            android.view.View r1 = r6.a(r1, r9)
            r2 = r8
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            android.view.ViewGroup$LayoutParams r3 = r2.generateLayoutParams(r9)
            r6.a(r7, r1, r9)
            r2.addView(r1, r3)
            goto L4
        L6e:
            android.view.InflateException r7 = new android.view.InflateException
            java.lang.String r8 = "<merge /> must be the root element"
            r7.<init>(r8)
            throw r7
        L76:
            return
    }

    private void b(java.lang.String r3, java.lang.String r4, android.util.AttributeSet r5) {
            r2 = this;
            android.view.InflateException r0 = new android.view.InflateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r5 = r5.getPositionDescription()
            r1.append(r5)
            java.lang.String r5 = ": Class not allowed to be inflated "
            r1.append(r5)
            if (r4 == 0) goto L24
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r4)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
        L24:
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private void b(org.xmlpull.v1.XmlPullParser r6, android.view.View r7, android.util.AttributeSet r8) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r5 = this;
            boolean r0 = r7 instanceof android.view.ViewGroup
            if (r0 == 0) goto Lbb
            r0 = 0
            java.lang.String r1 = "layout"
            r2 = 0
            int r0 = r8.getAttributeResourceValue(r2, r1, r0)
            if (r0 != 0) goto L38
            java.lang.String r6 = r8.getAttributeValue(r2, r1)
            if (r6 != 0) goto L1c
            android.view.InflateException r6 = new android.view.InflateException
            java.lang.String r7 = "You must specifiy a layout in the include tag: <include layout=\"@layout/layoutID\" />"
            r6.<init>(r7)
            throw r6
        L1c:
            android.view.InflateException r7 = new android.view.InflateException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "You must specifiy a valid layout reference. The layout ID "
            r8.append(r0)
            r8.append(r6)
            java.lang.String r6 = " is not valid."
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.<init>(r6)
            throw r7
        L38:
            android.content.Context r1 = r5.a
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.XmlResourceParser r0 = r1.getLayout(r0)
            android.util.AttributeSet r1 = android.util.Xml.asAttributeSet(r0)     // Catch: java.lang.Throwable -> Lb6
        L46:
            int r2 = r0.next()     // Catch: java.lang.Throwable -> Lb6
            r3 = 1
            r4 = 2
            if (r2 == r4) goto L51
            if (r2 == r3) goto L51
            goto L46
        L51:
            if (r2 != r4) goto L9b
            java.lang.String r2 = r0.getName()     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r4 = "merge"
            boolean r4 = r4.equals(r2)     // Catch: java.lang.Throwable -> Lb6
            if (r4 == 0) goto L63
            r5.a(r0, r7, r1)     // Catch: java.lang.Throwable -> Lb6
            goto L82
        L63:
            android.view.View r2 = r5.a(r2, r1)     // Catch: java.lang.Throwable -> Lb6
            android.view.ViewGroup r7 = (android.view.ViewGroup) r7     // Catch: java.lang.Throwable -> Lb6
            android.view.ViewGroup$LayoutParams r8 = r7.generateLayoutParams(r8)     // Catch: java.lang.Throwable -> L73 java.lang.RuntimeException -> L75
            if (r8 == 0) goto L7c
        L6f:
            r2.setLayoutParams(r8)     // Catch: java.lang.Throwable -> Lb6
            goto L7c
        L73:
            r6 = move-exception
            goto L9a
        L75:
            android.view.ViewGroup$LayoutParams r8 = r7.generateLayoutParams(r1)     // Catch: java.lang.Throwable -> L73
            if (r8 == 0) goto L7c
            goto L6f
        L7c:
            r5.a(r0, r2, r1)     // Catch: java.lang.Throwable -> Lb6
            r7.addView(r2)     // Catch: java.lang.Throwable -> Lb6
        L82:
            r0.close()
            int r7 = r6.getDepth()
        L89:
            int r8 = r6.next()
            r0 = 3
            if (r8 != r0) goto L96
            int r0 = r6.getDepth()
            if (r0 <= r7) goto L99
        L96:
            if (r8 == r3) goto L99
            goto L89
        L99:
            return
        L9a:
            throw r6     // Catch: java.lang.Throwable -> Lb6
        L9b:
            android.view.InflateException r6 = new android.view.InflateException     // Catch: java.lang.Throwable -> Lb6
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb6
            r7.<init>()     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r8 = r0.getPositionDescription()     // Catch: java.lang.Throwable -> Lb6
            r7.append(r8)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r8 = ": No start tag found!"
            r7.append(r8)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Lb6
            r6.<init>(r7)     // Catch: java.lang.Throwable -> Lb6
            throw r6     // Catch: java.lang.Throwable -> Lb6
        Lb6:
            r6 = move-exception
            r0.close()
            throw r6
        Lbb:
            android.view.InflateException r6 = new android.view.InflateException
            java.lang.String r7 = "<include /> can only be used inside of a ViewGroup"
            r6.<init>(r7)
            throw r6
    }

    public final android.view.View a(java.lang.String r5, android.view.ViewGroup r6) {
            r4 = this;
            if (r6 == 0) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            long r1 = java.lang.System.currentTimeMillis()
            r4.i = r1
            java.io.PrintStream r1 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "INFLATING from resource: "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            r1.println(r2)
            org.xmlpull.v1.XmlPullParser r5 = r4.a(r5)
            android.view.View r5 = r4.a(r5, r6, r0)
            return r5
    }
}
