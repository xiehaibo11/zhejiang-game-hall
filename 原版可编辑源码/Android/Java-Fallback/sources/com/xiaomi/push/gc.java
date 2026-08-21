package com.xiaomi.push;

public final class gc {
    private static int a = 5000;
    private static java.util.Vector<java.lang.String> a = null;
    private static int b = 330000;
    private static int c = 600000;
    private static int d = 330000;

    static {
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            com.xiaomi.push.gc.a = r0
            java.lang.ClassLoader[] r0 = a()     // Catch: java.lang.Exception -> Lab
            int r1 = r0.length     // Catch: java.lang.Exception -> Lab
            r2 = 0
        Ld:
            if (r2 >= r1) goto Laf
            r3 = r0[r2]     // Catch: java.lang.Exception -> Lab
            java.lang.String r4 = "META-INF/smack-config.xml"
            java.util.Enumeration r3 = r3.getResources(r4)     // Catch: java.lang.Exception -> Lab
        L17:
            boolean r4 = r3.hasMoreElements()     // Catch: java.lang.Exception -> Lab
            if (r4 == 0) goto La7
            java.lang.Object r4 = r3.nextElement()     // Catch: java.lang.Exception -> Lab
            java.net.URL r4 = (java.net.URL) r4     // Catch: java.lang.Exception -> Lab
            r5 = 0
            java.io.InputStream r5 = r4.openStream()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            org.xmlpull.v1.XmlPullParserFactory r4 = org.xmlpull.v1.XmlPullParserFactory.newInstance()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            org.xmlpull.v1.XmlPullParser r4 = r4.newPullParser()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r6 = "http://xmlpull.org/v1/doc/features.html#process-namespaces"
            r7 = 1
            r4.setFeature(r6, r7)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r6 = "UTF-8"
            r4.setInput(r5, r6)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            int r6 = r4.getEventType()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
        L3f:
            r8 = 2
            if (r6 != r8) goto L91
            java.lang.String r6 = r4.getName()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r8 = "className"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r6 == 0) goto L52
            a(r4)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            goto L91
        L52:
            java.lang.String r6 = r4.getName()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r8 = "packetReplyTimeout"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r6 == 0) goto L67
            int r6 = com.xiaomi.push.gc.a     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            int r6 = a(r4, r6)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            com.xiaomi.push.gc.a = r6     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            goto L91
        L67:
            java.lang.String r6 = r4.getName()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r8 = "keepAliveInterval"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r6 == 0) goto L7c
            int r6 = com.xiaomi.push.gc.b     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            int r6 = a(r4, r6)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            com.xiaomi.push.gc.b = r6     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            goto L91
        L7c:
            java.lang.String r6 = r4.getName()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r8 = "mechName"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r6 == 0) goto L91
            java.util.Vector<java.lang.String> r6 = com.xiaomi.push.gc.a     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r8 = r4.nextText()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r6.add(r8)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
        L91:
            int r6 = r4.next()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r6 != r7) goto L3f
        L97:
            r5.close()     // Catch: java.lang.Exception -> L17
            goto L17
        L9c:
            r0 = move-exception
            goto La3
        L9e:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L9c
            goto L97
        La3:
            r5.close()     // Catch: java.lang.Exception -> La6
        La6:
            throw r0     // Catch: java.lang.Exception -> Lab
        La7:
            int r2 = r2 + 1
            goto Ld
        Lab:
            r0 = move-exception
            r0.printStackTrace()
        Laf:
            return
    }

    private gc() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a() {
            int r0 = com.xiaomi.push.gc.b
            return r0
    }

    private static int a(org.xmlpull.v1.XmlPullParser r0, int r1) {
            java.lang.String r0 = r0.nextText()     // Catch: java.lang.NumberFormatException -> L9
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L9
            return r0
        L9:
            r0 = move-exception
            r0.printStackTrace()
            return r1
    }

    public static java.lang.String a() {
            java.lang.String r0 = "3.1.0"
            return r0
    }

    private static void a(org.xmlpull.v1.XmlPullParser r3) {
            java.lang.String r3 = r3.nextText()
            java.lang.Class.forName(r3)     // Catch: java.lang.ClassNotFoundException -> L8
            goto L1e
        L8:
            java.io.PrintStream r0 = java.lang.System.err
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Error! A startup class specified in smack-config.xml could not be loaded: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.println(r3)
        L1e:
            return
    }

    private static java.lang.ClassLoader[] a() {
            r0 = 2
            java.lang.ClassLoader[] r1 = new java.lang.ClassLoader[r0]
            java.lang.Class<com.xiaomi.push.gc> r2 = com.xiaomi.push.gc.class
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

    public static int b() {
            int r0 = com.xiaomi.push.gc.c
            return r0
    }
}
