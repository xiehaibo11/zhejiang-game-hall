package com.xiaomi.push;

public class gu {
    private static com.xiaomi.push.gu a;
    private java.util.Map<java.lang.String, java.lang.Object> a;
    private java.util.Map<java.lang.String, java.lang.Object> b;

    private gu() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.b = r0
            r1.a()
            return
    }

    public static synchronized com.xiaomi.push.gu a() {
            java.lang.Class<com.xiaomi.push.gu> r0 = com.xiaomi.push.gu.class
            monitor-enter(r0)
            com.xiaomi.push.gu r1 = com.xiaomi.push.gu.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.xiaomi.push.gu r1 = new com.xiaomi.push.gu     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.xiaomi.push.gu.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.xiaomi.push.gu r1 = com.xiaomi.push.gu.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private java.lang.String a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "<"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r2 = "/>"
            r0.append(r2)
            if (r4 == 0) goto L1d
            r0.append(r1)
            r0.append(r5)
            r0.append(r2)
        L1d:
            java.lang.String r4 = r0.toString()
            return r4
    }

    private java.lang.ClassLoader[] a() {
            r5 = this;
            r0 = 2
            java.lang.ClassLoader[] r1 = new java.lang.ClassLoader[r0]
            java.lang.Class<com.xiaomi.push.gu> r2 = com.xiaomi.push.gu.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            r3 = 0
            r1[r3] = r2
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            java.lang.ClassLoader r2 = r2.getContextClassLoader()
            r4 = 1
            r1[r4] = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
        L1c:
            if (r3 >= r0) goto L28
            r4 = r1[r3]
            if (r4 == 0) goto L25
            r2.add(r4)
        L25:
            int r3 = r3 + 1
            goto L1c
        L28:
            int r0 = r2.size()
            java.lang.ClassLoader[] r0 = new java.lang.ClassLoader[r0]
            java.lang.Object[] r0 = r2.toArray(r0)
            java.lang.ClassLoader[] r0 = (java.lang.ClassLoader[]) r0
            return r0
    }

    public java.lang.Object a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = r0.a(r1, r2)
            java.util.Map<java.lang.String, java.lang.Object> r2 = r0.a
            java.lang.Object r1 = r2.get(r1)
            return r1
    }

    protected void a() {
            r10 = this;
            java.lang.ClassLoader[] r0 = r10.a()     // Catch: java.lang.Exception -> L104
            int r1 = r0.length     // Catch: java.lang.Exception -> L104
            r2 = 0
        L6:
            if (r2 >= r1) goto L108
            r3 = r0[r2]     // Catch: java.lang.Exception -> L104
            java.lang.String r4 = "META-INF/smack.providers"
            java.util.Enumeration r3 = r3.getResources(r4)     // Catch: java.lang.Exception -> L104
        L10:
            boolean r4 = r3.hasMoreElements()     // Catch: java.lang.Exception -> L104
            if (r4 == 0) goto L100
            java.lang.Object r4 = r3.nextElement()     // Catch: java.lang.Exception -> L104
            java.net.URL r4 = (java.net.URL) r4     // Catch: java.lang.Exception -> L104
            r5 = 0
            java.io.InputStream r5 = r4.openStream()     // Catch: java.lang.Throwable -> Lfb
            org.xmlpull.v1.XmlPullParserFactory r4 = org.xmlpull.v1.XmlPullParserFactory.newInstance()     // Catch: java.lang.Throwable -> Lfb
            org.xmlpull.v1.XmlPullParser r4 = r4.newPullParser()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r6 = "http://xmlpull.org/v1/doc/features.html#process-namespaces"
            r7 = 1
            r4.setFeature(r6, r7)     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r6 = "UTF-8"
            r4.setInput(r5, r6)     // Catch: java.lang.Throwable -> Lfb
            int r6 = r4.getEventType()     // Catch: java.lang.Throwable -> Lfb
        L38:
            r8 = 2
            if (r6 != r8) goto Lf0
            java.lang.String r6 = r4.getName()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r8 = "iqProvider"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Throwable -> Lfb
            if (r6 == 0) goto L97
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r6 = r4.nextText()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r8 = r4.nextText()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r9 = r4.nextText()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r6 = r10.a(r6, r8)     // Catch: java.lang.Throwable -> Lfb
            java.util.Map<java.lang.String, java.lang.Object> r8 = r10.b     // Catch: java.lang.Throwable -> Lfb
            boolean r8 = r8.containsKey(r6)     // Catch: java.lang.Throwable -> Lfb
            if (r8 != 0) goto Lf0
            java.lang.Class r8 = java.lang.Class.forName(r9)     // Catch: java.lang.ClassNotFoundException -> L92 java.lang.Throwable -> Lfb
            java.lang.Class<com.xiaomi.push.gs> r9 = com.xiaomi.push.gs.class
            boolean r9 = r9.isAssignableFrom(r8)     // Catch: java.lang.ClassNotFoundException -> L92 java.lang.Throwable -> Lfb
            if (r9 == 0) goto L87
            java.util.Map<java.lang.String, java.lang.Object> r9 = r10.b     // Catch: java.lang.ClassNotFoundException -> L92 java.lang.Throwable -> Lfb
            java.lang.Object r8 = r8.newInstance()     // Catch: java.lang.ClassNotFoundException -> L92 java.lang.Throwable -> Lfb
        L83:
            r9.put(r6, r8)     // Catch: java.lang.ClassNotFoundException -> L92 java.lang.Throwable -> Lfb
            goto Lf0
        L87:
            java.lang.Class<com.xiaomi.push.gl> r9 = com.xiaomi.push.gl.class
            boolean r9 = r9.isAssignableFrom(r8)     // Catch: java.lang.ClassNotFoundException -> L92 java.lang.Throwable -> Lfb
            if (r9 == 0) goto Lf0
            java.util.Map<java.lang.String, java.lang.Object> r9 = r10.b     // Catch: java.lang.ClassNotFoundException -> L92 java.lang.Throwable -> Lfb
            goto L83
        L92:
            r6 = move-exception
        L93:
            r6.printStackTrace()     // Catch: java.lang.Throwable -> Lfb
            goto Lf0
        L97:
            java.lang.String r6 = r4.getName()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r8 = "extensionProvider"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Throwable -> Lfb
            if (r6 == 0) goto Lf0
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r6 = r4.nextText()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r8 = r4.nextText()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            r4.next()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r9 = r4.nextText()     // Catch: java.lang.Throwable -> Lfb
            java.lang.String r6 = r10.a(r6, r8)     // Catch: java.lang.Throwable -> Lfb
            java.util.Map<java.lang.String, java.lang.Object> r8 = r10.a     // Catch: java.lang.Throwable -> Lfb
            boolean r8 = r8.containsKey(r6)     // Catch: java.lang.Throwable -> Lfb
            if (r8 != 0) goto Lf0
            java.lang.Class r8 = java.lang.Class.forName(r9)     // Catch: java.lang.ClassNotFoundException -> Lee java.lang.Throwable -> Lfb
            java.lang.Class<com.xiaomi.push.gt> r9 = com.xiaomi.push.gt.class
            boolean r9 = r9.isAssignableFrom(r8)     // Catch: java.lang.ClassNotFoundException -> Lee java.lang.Throwable -> Lfb
            if (r9 == 0) goto Le3
            java.util.Map<java.lang.String, java.lang.Object> r9 = r10.a     // Catch: java.lang.ClassNotFoundException -> Lee java.lang.Throwable -> Lfb
            java.lang.Object r8 = r8.newInstance()     // Catch: java.lang.ClassNotFoundException -> Lee java.lang.Throwable -> Lfb
        Ldf:
            r9.put(r6, r8)     // Catch: java.lang.ClassNotFoundException -> Lee java.lang.Throwable -> Lfb
            goto Lf0
        Le3:
            java.lang.Class<com.xiaomi.push.go> r9 = com.xiaomi.push.go.class
            boolean r9 = r9.isAssignableFrom(r8)     // Catch: java.lang.ClassNotFoundException -> Lee java.lang.Throwable -> Lfb
            if (r9 == 0) goto Lf0
            java.util.Map<java.lang.String, java.lang.Object> r9 = r10.a     // Catch: java.lang.ClassNotFoundException -> Lee java.lang.Throwable -> Lfb
            goto Ldf
        Lee:
            r6 = move-exception
            goto L93
        Lf0:
            int r6 = r4.next()     // Catch: java.lang.Throwable -> Lfb
            if (r6 != r7) goto L38
            r5.close()     // Catch: java.lang.Exception -> L10
            goto L10
        Lfb:
            r0 = move-exception
            r5.close()     // Catch: java.lang.Exception -> Lff
        Lff:
            throw r0     // Catch: java.lang.Exception -> L104
        L100:
            int r2 = r2 + 1
            goto L6
        L104:
            r0 = move-exception
            r0.printStackTrace()
        L108:
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.Object r4) {
            r1 = this;
            boolean r0 = r4 instanceof com.xiaomi.push.gt
            if (r0 != 0) goto L11
            boolean r0 = r4 instanceof java.lang.Class
            if (r0 == 0) goto L9
            goto L11
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Provider must be a PacketExtensionProvider or a Class instance."
            r2.<init>(r3)
            throw r2
        L11:
            java.lang.String r2 = r1.a(r2, r3)
            java.util.Map<java.lang.String, java.lang.Object> r3 = r1.a
            r3.put(r2, r4)
            return
    }
}
