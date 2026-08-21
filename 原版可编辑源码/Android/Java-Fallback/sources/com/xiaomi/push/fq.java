package com.xiaomi.push;

public class fq {
    private org.xmlpull.v1.XmlPullParser a;

    fq() {
            r3 = this;
            r3.<init>()
            org.xmlpull.v1.XmlPullParserFactory r0 = org.xmlpull.v1.XmlPullParserFactory.newInstance()     // Catch: org.xmlpull.v1.XmlPullParserException -> L13
            org.xmlpull.v1.XmlPullParser r0 = r0.newPullParser()     // Catch: org.xmlpull.v1.XmlPullParserException -> L13
            r3.a = r0     // Catch: org.xmlpull.v1.XmlPullParserException -> L13
            java.lang.String r1 = "http://xmlpull.org/v1/doc/features.html#process-namespaces"
            r2 = 1
            r0.setFeature(r1, r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L13
        L13:
            return
    }

    com.xiaomi.push.gn a(byte[] r4, com.xiaomi.push.fw r5) {
            r3 = this;
            org.xmlpull.v1.XmlPullParser r0 = r3.a
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream
            r2.<init>(r4)
            r1.<init>(r2)
            r0.setInput(r1)
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            r4.next()
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            int r4 = r4.getEventType()
            org.xmlpull.v1.XmlPullParser r0 = r3.a
            java.lang.String r0 = r0.getName()
            r1 = 2
            if (r4 != r1) goto La5
            java.lang.String r4 = "message"
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L32
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            com.xiaomi.push.gn r4 = com.xiaomi.push.gv.a(r4)
            return r4
        L32:
            java.lang.String r4 = "iq"
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L41
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            com.xiaomi.push.gl r4 = com.xiaomi.push.gv.a(r4, r5)
            return r4
        L41:
            java.lang.String r4 = "presence"
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L50
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            com.xiaomi.push.gp r4 = com.xiaomi.push.gv.a(r4)
            return r4
        L50:
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            java.lang.String r4 = r4.getName()
            java.lang.String r5 = "stream"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L5f
            goto La5
        L5f:
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            java.lang.String r4 = r4.getName()
            java.lang.String r5 = "error"
            boolean r4 = r4.equals(r5)
            if (r4 != 0) goto L99
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            java.lang.String r4 = r4.getName()
            java.lang.String r5 = "warning"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L8d
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            r4.next()
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            java.lang.String r4 = r4.getName()
            java.lang.String r5 = "multi-login"
            boolean r4 = r4.equals(r5)
            goto La5
        L8d:
            org.xmlpull.v1.XmlPullParser r4 = r3.a
            java.lang.String r4 = r4.getName()
            java.lang.String r5 = "bind"
            r4.equals(r5)
            goto La5
        L99:
            com.xiaomi.push.gh r4 = new com.xiaomi.push.gh
            org.xmlpull.v1.XmlPullParser r5 = r3.a
            com.xiaomi.push.gq r5 = com.xiaomi.push.gv.a(r5)
            r4.<init>(r5)
            throw r4
        La5:
            r4 = 0
            return r4
    }
}
