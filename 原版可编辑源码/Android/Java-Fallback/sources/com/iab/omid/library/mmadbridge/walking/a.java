package com.iab.omid.library.mmadbridge.walking;

public class a {
    private final java.util.HashMap<android.view.View, java.lang.String> a;
    private final java.util.HashMap<android.view.View, com.iab.omid.library.mmadbridge.walking.a.a> b;
    private final java.util.HashMap<java.lang.String, android.view.View> c;
    private final java.util.HashSet<android.view.View> d;
    private final java.util.HashSet<java.lang.String> e;
    private final java.util.HashSet<java.lang.String> f;
    private final java.util.HashMap<java.lang.String, java.lang.String> g;
    private final java.util.Map<android.view.View, java.lang.Boolean> h;
    private boolean i;

    public static class a {
        private final com.iab.omid.library.mmadbridge.internal.e a;
        private final java.util.ArrayList<java.lang.String> b;

        public a(com.iab.omid.library.mmadbridge.internal.e r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.b = r0
                r1.a = r2
                r1.a(r3)
                return
        }

        public com.iab.omid.library.mmadbridge.internal.e a() {
                r1 = this;
                com.iab.omid.library.mmadbridge.internal.e r0 = r1.a
                return r0
        }

        public void a(java.lang.String r2) {
                r1 = this;
                java.util.ArrayList<java.lang.String> r0 = r1.b
                r0.add(r2)
                return
        }

        public java.util.ArrayList<java.lang.String> b() {
                r1 = this;
                java.util.ArrayList<java.lang.String> r0 = r1.b
                return r0
        }
    }

    public a() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.d = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.e = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.f = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.g = r0
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            r1.h = r0
            return
    }

    private java.lang.String a(android.view.View r4) {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lf
            boolean r0 = r4.isAttachedToWindow()
            if (r0 != 0) goto Lf
            java.lang.String r4 = "notAttached"
            return r4
        Lf:
            java.lang.Boolean r0 = r3.b(r4)
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L1c
            java.lang.String r4 = "noWindowFocus"
            return r4
        L1c:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1 = 0
        L22:
            if (r4 == 0) goto L3b
            java.lang.String r2 = com.iab.omid.library.mmadbridge.utils.h.a(r4)
            if (r2 == 0) goto L2b
            return r2
        L2b:
            r0.add(r4)
            android.view.ViewParent r4 = r4.getParent()
            boolean r2 = r4 instanceof android.view.View
            if (r2 == 0) goto L39
            android.view.View r4 = (android.view.View) r4
            goto L22
        L39:
            r4 = r1
            goto L22
        L3b:
            java.util.HashSet<android.view.View> r4 = r3.d
            r4.addAll(r0)
            return r1
    }

    private void a(com.iab.omid.library.mmadbridge.adsession.a r3) {
            r2 = this;
            java.util.List r0 = r3.d()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.internal.e r1 = (com.iab.omid.library.mmadbridge.internal.e) r1
            r2.a(r1, r3)
            goto L8
        L18:
            return
    }

    private void a(com.iab.omid.library.mmadbridge.internal.e r4, com.iab.omid.library.mmadbridge.adsession.a r5) {
            r3 = this;
            com.iab.omid.library.mmadbridge.weakreference.a r0 = r4.c()
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto Ld
            return
        Ld:
            java.util.HashMap<android.view.View, com.iab.omid.library.mmadbridge.walking.a$a> r1 = r3.b
            java.lang.Object r1 = r1.get(r0)
            com.iab.omid.library.mmadbridge.walking.a$a r1 = (com.iab.omid.library.mmadbridge.walking.a.a) r1
            if (r1 == 0) goto L1f
            java.lang.String r4 = r5.getAdSessionId()
            r1.a(r4)
            goto L2d
        L1f:
            java.util.HashMap<android.view.View, com.iab.omid.library.mmadbridge.walking.a$a> r1 = r3.b
            com.iab.omid.library.mmadbridge.walking.a$a r2 = new com.iab.omid.library.mmadbridge.walking.a$a
            java.lang.String r5 = r5.getAdSessionId()
            r2.<init>(r4, r5)
            r1.put(r0, r2)
        L2d:
            return
    }

    private java.lang.Boolean b(android.view.View r3) {
            r2 = this;
            boolean r0 = r3.hasWindowFocus()
            if (r0 == 0) goto Le
            java.util.Map<android.view.View, java.lang.Boolean> r0 = r2.h
            r0.remove(r3)
            java.lang.Boolean r3 = java.lang.Boolean.FALSE
            return r3
        Le:
            java.util.Map<android.view.View, java.lang.Boolean> r0 = r2.h
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L1f
            java.util.Map<android.view.View, java.lang.Boolean> r0 = r2.h
            java.lang.Object r3 = r0.get(r3)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            return r3
        L1f:
            java.util.Map<android.view.View, java.lang.Boolean> r0 = r2.h
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            r0.put(r3, r1)
            return r1
    }

    public android.view.View a(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, android.view.View> r0 = r1.c
            java.lang.Object r2 = r0.get(r2)
            android.view.View r2 = (android.view.View) r2
            return r2
    }

    public void a() {
            r1 = this;
            java.util.HashMap<android.view.View, java.lang.String> r0 = r1.a
            r0.clear()
            java.util.HashMap<android.view.View, com.iab.omid.library.mmadbridge.walking.a$a> r0 = r1.b
            r0.clear()
            java.util.HashMap<java.lang.String, android.view.View> r0 = r1.c
            r0.clear()
            java.util.HashSet<android.view.View> r0 = r1.d
            r0.clear()
            java.util.HashSet<java.lang.String> r0 = r1.e
            r0.clear()
            java.util.HashSet<java.lang.String> r0 = r1.f
            r0.clear()
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.g
            r0.clear()
            r0 = 0
            r1.i = r0
            return
    }

    public java.lang.String b(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.g
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public java.util.HashSet<java.lang.String> b() {
            r1 = this;
            java.util.HashSet<java.lang.String> r0 = r1.f
            return r0
    }

    public com.iab.omid.library.mmadbridge.walking.a.a c(android.view.View r3) {
            r2 = this;
            java.util.HashMap<android.view.View, com.iab.omid.library.mmadbridge.walking.a$a> r0 = r2.b
            java.lang.Object r0 = r0.get(r3)
            com.iab.omid.library.mmadbridge.walking.a$a r0 = (com.iab.omid.library.mmadbridge.walking.a.a) r0
            if (r0 == 0) goto Lf
            java.util.HashMap<android.view.View, com.iab.omid.library.mmadbridge.walking.a$a> r1 = r2.b
            r1.remove(r3)
        Lf:
            return r0
    }

    public java.util.HashSet<java.lang.String> c() {
            r1 = this;
            java.util.HashSet<java.lang.String> r0 = r1.e
            return r0
    }

    public java.lang.String d(android.view.View r3) {
            r2 = this;
            java.util.HashMap<android.view.View, java.lang.String> r0 = r2.a
            int r0 = r0.size()
            if (r0 != 0) goto La
            r3 = 0
            return r3
        La:
            java.util.HashMap<android.view.View, java.lang.String> r0 = r2.a
            java.lang.Object r0 = r0.get(r3)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L19
            java.util.HashMap<android.view.View, java.lang.String> r1 = r2.a
            r1.remove(r3)
        L19:
            return r0
    }

    public void d() {
            r1 = this;
            r0 = 1
            r1.i = r0
            return
    }

    public com.iab.omid.library.mmadbridge.walking.c e(android.view.View r2) {
            r1 = this;
            java.util.HashSet<android.view.View> r0 = r1.d
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto Lb
            com.iab.omid.library.mmadbridge.walking.c r2 = com.iab.omid.library.mmadbridge.walking.c.a
            return r2
        Lb:
            boolean r2 = r1.i
            if (r2 == 0) goto L12
            com.iab.omid.library.mmadbridge.walking.c r2 = com.iab.omid.library.mmadbridge.walking.c.b
            goto L14
        L12:
            com.iab.omid.library.mmadbridge.walking.c r2 = com.iab.omid.library.mmadbridge.walking.c.c
        L14:
            return r2
    }

    public void e() {
            r5 = this;
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            if (r0 == 0) goto L5f
            java.util.Collection r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L5f
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.a r1 = (com.iab.omid.library.mmadbridge.adsession.a) r1
            android.view.View r2 = r1.c()
            boolean r3 = r1.f()
            if (r3 == 0) goto Le
            java.lang.String r3 = r1.getAdSessionId()
            if (r2 == 0) goto L52
            java.lang.String r4 = r5.a(r2)
            if (r4 != 0) goto L3e
            java.util.HashSet<java.lang.String> r4 = r5.e
            r4.add(r3)
            java.util.HashMap<android.view.View, java.lang.String> r4 = r5.a
            r4.put(r2, r3)
            r5.a(r1)
            goto Le
        L3e:
            java.lang.String r1 = "noWindowFocus"
            if (r4 == r1) goto Le
            java.util.HashSet<java.lang.String> r1 = r5.f
            r1.add(r3)
            java.util.HashMap<java.lang.String, android.view.View> r1 = r5.c
            r1.put(r3, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r5.g
            r1.put(r3, r4)
            goto Le
        L52:
            java.util.HashSet<java.lang.String> r1 = r5.f
            r1.add(r3)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r5.g
            java.lang.String r2 = "noAdView"
            r1.put(r3, r2)
            goto Le
        L5f:
            return
    }

    public boolean f(android.view.View r3) {
            r2 = this;
            java.util.Map<android.view.View, java.lang.Boolean> r0 = r2.h
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L11
            java.util.Map<android.view.View, java.lang.Boolean> r0 = r2.h
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            r0.put(r3, r1)
            r3 = 0
            return r3
        L11:
            r3 = 1
            return r3
    }
}
