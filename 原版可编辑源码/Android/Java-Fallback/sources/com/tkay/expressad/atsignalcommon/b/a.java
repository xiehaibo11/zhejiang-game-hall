package com.tkay.expressad.atsignalcommon.b;

public final class a extends java.lang.Exception {
    private static final long a = 1;
    private java.util.List<com.tkay.expressad.atsignalcommon.b.c.b.a> b;

    private a(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.b = r1
            return
    }

    private static com.tkay.expressad.atsignalcommon.b.a a(com.tkay.expressad.atsignalcommon.b.a r2, com.tkay.expressad.atsignalcommon.b.a r3) {
            if (r2 != 0) goto L3
            return r3
        L3:
            if (r3 != 0) goto L6
            return r2
        L6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getMessage()
            r0.append(r1)
            java.lang.String r1 = ";"
            r0.append(r1)
            java.lang.String r1 = r3.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tkay.expressad.atsignalcommon.b.a r1 = new com.tkay.expressad.atsignalcommon.b.a
            r1.<init>(r0)
            java.util.List<com.tkay.expressad.atsignalcommon.b.c$b$a> r2 = r2.b
            r1.a(r2)
            java.util.List<com.tkay.expressad.atsignalcommon.b.c$b$a> r2 = r3.b
            r1.a(r2)
            return r1
    }

    private java.util.List<com.tkay.expressad.atsignalcommon.b.c.b.a> a() {
            r1 = this;
            java.util.List<com.tkay.expressad.atsignalcommon.b.c$b$a> r0 = r1.b
            return r0
    }

    private void a(com.tkay.expressad.atsignalcommon.b.c.b.a r2) {
            r1 = this;
            java.util.List<com.tkay.expressad.atsignalcommon.b.c$b$a> r0 = r1.b
            r0.add(r2)
            return
    }

    private void a(java.util.List<com.tkay.expressad.atsignalcommon.b.c.b.a> r2) {
            r1 = this;
            java.util.List<com.tkay.expressad.atsignalcommon.b.c$b$a> r0 = r1.b
            r0.addAll(r2)
            return
    }

    @Override
    public final java.lang.String toString() {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.List<com.tkay.expressad.atsignalcommon.b.c$b$a> r1 = r8.b
            java.util.Iterator r1 = r1.iterator()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lb9
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.atsignalcommon.b.c$b$a r2 = (com.tkay.expressad.atsignalcommon.b.c.b.a) r2
            java.lang.String r3 = r2.toString()
            r0.append(r3)
            java.lang.String r3 = ";"
            r0.append(r3)
            java.lang.Throwable r4 = r2.getCause()     // Catch: java.lang.Exception -> Lae
            boolean r4 = r4 instanceof java.lang.NoSuchFieldException     // Catch: java.lang.Exception -> Lae
            java.lang.String r5 = "/"
            r6 = 0
            if (r4 == 0) goto L62
            java.lang.Class r4 = r2.a()     // Catch: java.lang.Exception -> Lae
            java.lang.reflect.Field[] r4 = r4.getDeclaredFields()     // Catch: java.lang.Exception -> Lae
            java.lang.Class r7 = r2.a()     // Catch: java.lang.Exception -> Lae
            java.lang.String r7 = r7.getName()     // Catch: java.lang.Exception -> Lae
            r0.append(r7)     // Catch: java.lang.Exception -> Lae
            java.lang.String r7 = "."
            r0.append(r7)     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.c()     // Catch: java.lang.Exception -> Lae
            r0.append(r2)     // Catch: java.lang.Exception -> Lae
            r0.append(r3)     // Catch: java.lang.Exception -> Lae
        L50:
            int r2 = r4.length     // Catch: java.lang.Exception -> Lae
            if (r6 >= r2) goto Lb2
            r2 = r4[r6]     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Exception -> Lae
            r0.append(r2)     // Catch: java.lang.Exception -> Lae
            r0.append(r5)     // Catch: java.lang.Exception -> Lae
            int r6 = r6 + 1
            goto L50
        L62:
            java.lang.Throwable r4 = r2.getCause()     // Catch: java.lang.Exception -> Lae
            boolean r4 = r4 instanceof java.lang.NoSuchMethodException     // Catch: java.lang.Exception -> Lae
            if (r4 == 0) goto Lb2
            java.lang.Class r4 = r2.a()     // Catch: java.lang.Exception -> Lae
            java.lang.reflect.Method[] r4 = r4.getDeclaredMethods()     // Catch: java.lang.Exception -> Lae
            java.lang.Class r7 = r2.a()     // Catch: java.lang.Exception -> Lae
            java.lang.String r7 = r7.getName()     // Catch: java.lang.Exception -> Lae
            r0.append(r7)     // Catch: java.lang.Exception -> Lae
            java.lang.String r7 = "->"
            r0.append(r7)     // Catch: java.lang.Exception -> Lae
            java.lang.String r7 = r2.b()     // Catch: java.lang.Exception -> Lae
            r0.append(r7)     // Catch: java.lang.Exception -> Lae
            r0.append(r3)     // Catch: java.lang.Exception -> Lae
        L8c:
            int r3 = r4.length     // Catch: java.lang.Exception -> Lae
            if (r6 >= r3) goto Lb2
            java.lang.String r3 = r2.b()     // Catch: java.lang.Exception -> Lae
            r7 = r4[r6]     // Catch: java.lang.Exception -> Lae
            java.lang.String r7 = r7.getName()     // Catch: java.lang.Exception -> Lae
            boolean r3 = r3.equals(r7)     // Catch: java.lang.Exception -> Lae
            if (r3 == 0) goto Lab
            r3 = r4[r6]     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = r3.toGenericString()     // Catch: java.lang.Exception -> Lae
            r0.append(r3)     // Catch: java.lang.Exception -> Lae
            r0.append(r5)     // Catch: java.lang.Exception -> Lae
        Lab:
            int r6 = r6 + 1
            goto L8c
        Lae:
            r2 = move-exception
            r2.printStackTrace()
        Lb2:
            java.lang.String r2 = "@@@@"
            r0.append(r2)
            goto Lb
        Lb9:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
