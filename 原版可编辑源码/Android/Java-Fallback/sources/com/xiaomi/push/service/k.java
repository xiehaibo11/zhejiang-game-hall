package com.xiaomi.push.service;

public class k implements com.xiaomi.push.gt {
    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.xiaomi.push.gk a(org.xmlpull.v1.XmlPullParser r10) {
            int r0 = r10.getEventType()
            r1 = 2
            r2 = 0
            if (r0 == r1) goto L9
            return r2
        L9:
            java.lang.String r4 = r10.getName()
            java.lang.String r5 = r10.getNamespace()
            int r0 = r10.getAttributeCount()
            if (r0 <= 0) goto L42
            int r0 = r10.getAttributeCount()
            java.lang.String[] r0 = new java.lang.String[r0]
            int r3 = r10.getAttributeCount()
            java.lang.String[] r3 = new java.lang.String[r3]
            r6 = 0
        L24:
            int r7 = r10.getAttributeCount()
            if (r6 >= r7) goto L3d
            java.lang.String r7 = r10.getAttributeName(r6)
            r0[r6] = r7
            java.lang.String r7 = r10.getAttributeValue(r6)
            java.lang.String r7 = com.xiaomi.push.gy.b(r7)
            r3[r6] = r7
            int r6 = r6 + 1
            goto L24
        L3d:
            r6 = r0
            r8 = r2
            r9 = r8
            r7 = r3
            goto L46
        L42:
            r6 = r2
            r7 = r6
            r8 = r7
            r9 = r8
        L46:
            int r0 = r10.next()
            r2 = 3
            if (r0 == r2) goto L6d
            r2 = 4
            if (r0 != r2) goto L59
            java.lang.String r0 = r10.getText()
            java.lang.String r8 = r0.trim()
            goto L46
        L59:
            if (r0 != r1) goto L46
            if (r9 != 0) goto L63
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r9 = r0
        L63:
            com.xiaomi.push.gk r0 = a(r10)
            if (r0 == 0) goto L46
            r9.add(r0)
            goto L46
        L6d:
            com.xiaomi.push.gk r10 = new com.xiaomi.push.gk
            r3 = r10
            r3.<init>(r4, r5, r6, r7, r8, r9)
            return r10
    }

    public void a() {
            r3 = this;
            com.xiaomi.push.gu r0 = com.xiaomi.push.gu.a()
            java.lang.String r1 = "all"
            java.lang.String r2 = "xm:chat"
            r0.a(r1, r2, r3)
            return
    }

    public com.xiaomi.push.gk b(org.xmlpull.v1.XmlPullParser r4) {
            r3 = this;
            int r0 = r4.getEventType()
        L4:
            r1 = 1
            r2 = 2
            if (r0 == r1) goto Lf
            if (r0 == r2) goto Lf
            int r0 = r4.next()
            goto L4
        Lf:
            if (r0 != r2) goto L16
            com.xiaomi.push.gk r4 = a(r4)
            return r4
        L16:
            r4 = 0
            return r4
    }
}
