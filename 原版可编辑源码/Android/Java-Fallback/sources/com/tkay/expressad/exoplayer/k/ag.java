package com.tkay.expressad.exoplayer.k;

public final class ag {
    private ag() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r2) {
            r0 = 58
            int r0 = r2.indexOf(r0)
            r1 = -1
            if (r0 != r1) goto La
            return r2
        La:
            int r0 = r0 + 1
            java.lang.String r2 = r2.substring(r0)
            return r2
    }

    private static boolean a(org.xmlpull.v1.XmlPullParser r1) {
            int r1 = r1.getEventType()
            r0 = 3
            if (r1 != r0) goto L9
            r1 = 1
            return r1
        L9:
            r1 = 0
            return r1
    }

    private static boolean a(org.xmlpull.v1.XmlPullParser r4, java.lang.String r5) {
            int r0 = r4.getEventType()
            r1 = 1
            r2 = 0
            r3 = 3
            if (r0 != r3) goto Lb
            r0 = r1
            goto Lc
        Lb:
            r0 = r2
        Lc:
            if (r0 == 0) goto L19
            java.lang.String r4 = r4.getName()
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L19
            return r1
        L19:
            return r2
    }

    private static boolean b(org.xmlpull.v1.XmlPullParser r1) {
            int r1 = r1.getEventType()
            r0 = 2
            if (r1 != r0) goto L9
            r1 = 1
            return r1
        L9:
            r1 = 0
            return r1
    }

    private static boolean b(org.xmlpull.v1.XmlPullParser r1, java.lang.String r2) {
            boolean r0 = b(r1)
            if (r0 == 0) goto L12
            java.lang.String r1 = r1.getName()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L12
            r1 = 1
            return r1
        L12:
            r1 = 0
            return r1
    }

    private static boolean c(org.xmlpull.v1.XmlPullParser r1, java.lang.String r2) {
            boolean r0 = b(r1)
            if (r0 == 0) goto L16
            java.lang.String r1 = r1.getName()
            java.lang.String r1 = a(r1)
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L16
            r1 = 1
            return r1
        L16:
            r1 = 0
            return r1
    }

    private static java.lang.String d(org.xmlpull.v1.XmlPullParser r3, java.lang.String r4) {
            int r0 = r3.getAttributeCount()
            r1 = 0
        L5:
            if (r1 >= r0) goto L19
            java.lang.String r2 = r3.getAttributeName(r1)
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L16
            java.lang.String r3 = r3.getAttributeValue(r1)
            return r3
        L16:
            int r1 = r1 + 1
            goto L5
        L19:
            r3 = 0
            return r3
    }

    private static java.lang.String e(org.xmlpull.v1.XmlPullParser r3, java.lang.String r4) {
            int r0 = r3.getAttributeCount()
            r1 = 0
        L5:
            if (r1 >= r0) goto L1d
            java.lang.String r2 = r3.getAttributeName(r1)
            java.lang.String r2 = a(r2)
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L1a
            java.lang.String r3 = r3.getAttributeValue(r1)
            return r3
        L1a:
            int r1 = r1 + 1
            goto L5
        L1d:
            r3 = 0
            return r3
    }
}
