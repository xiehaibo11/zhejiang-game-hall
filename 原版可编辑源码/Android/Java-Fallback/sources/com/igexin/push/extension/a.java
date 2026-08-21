package com.igexin.push.extension;

public class a {
    private static java.lang.String a;
    private static com.igexin.push.extension.a c;
    private java.util.List<com.igexin.push.extension.stub.IPushExtension> b;

    static {
            java.lang.Class<com.igexin.push.extension.a> r0 = com.igexin.push.extension.a.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.extension.a.a = r0
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.b = r0
            return
    }

    public static com.igexin.push.extension.a a() {
            com.igexin.push.extension.a r0 = com.igexin.push.extension.a.c
            if (r0 != 0) goto Lb
            com.igexin.push.extension.a r0 = new com.igexin.push.extension.a
            r0.<init>()
            com.igexin.push.extension.a.c = r0
        Lb:
            com.igexin.push.extension.a r0 = com.igexin.push.extension.a.c
            return r0
    }

    private void b(android.content.Context r6) {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "com.igexin.push.extension.distribution.basic.stub.PushExtension"
            r0.add(r1)
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L66
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            r2 = 0
            java.lang.ClassLoader r3 = r6.getClassLoader()     // Catch: java.lang.Exception -> L4a
            java.lang.Class r3 = r3.loadClass(r1)     // Catch: java.lang.Exception -> L4a
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.Exception -> L4a
            com.igexin.push.extension.stub.IPushExtension r3 = (com.igexin.push.extension.stub.IPushExtension) r3     // Catch: java.lang.Exception -> L4a
            android.content.Context r4 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L4a
            r3.init(r4)     // Catch: java.lang.Exception -> L4a
            java.util.List<com.igexin.push.extension.stub.IPushExtension> r4 = r5.b     // Catch: java.lang.Exception -> L4a
            r4.add(r3)     // Catch: java.lang.Exception -> L4a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4a
            r3.<init>()     // Catch: java.lang.Exception -> L4a
            java.lang.String r4 = "[main] ext loaded(mock): "
            r3.append(r4)     // Catch: java.lang.Exception -> L4a
            r3.append(r1)     // Catch: java.lang.Exception -> L4a
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> L4a
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L4a
            com.igexin.b.a.c.b.a(r1, r3)     // Catch: java.lang.Exception -> L4a
            goto Le
        L4a:
            r1 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = com.igexin.push.extension.a.a
            r3.append(r4)
            java.lang.String r1 = r1.toString()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r2)
            goto Le
        L66:
            return
    }

    public boolean a(android.content.Context r1) {
            r0 = this;
            r0.b(r1)
            r1 = 1
            return r1
    }

    public java.util.List<com.igexin.push.extension.stub.IPushExtension> b() {
            r1 = this;
            java.util.List<com.igexin.push.extension.stub.IPushExtension> r0 = r1.b
            return r0
    }
}
