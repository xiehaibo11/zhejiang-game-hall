package org.json.simple;

public class JSONArray extends java.util.ArrayList implements java.util.List, org.json.simple.JSONAware, org.json.simple.JSONStreamAware {
    private static final long serialVersionUID = 3957988303675231981L;

    public JSONArray() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String toJSONString(java.util.List r4) {
            java.lang.String r0 = "null"
            if (r4 != 0) goto L5
            return r0
        L5:
            r1 = 1
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            r2.<init>()
            java.util.Iterator r4 = r4.iterator()
            r3 = 91
            r2.append(r3)
        L14:
            boolean r3 = r4.hasNext()
            if (r3 == 0) goto L35
            if (r1 == 0) goto L1e
            r1 = 0
            goto L23
        L1e:
            r3 = 44
            r2.append(r3)
        L23:
            java.lang.Object r3 = r4.next()
            if (r3 != 0) goto L2d
            r2.append(r0)
            goto L14
        L2d:
            java.lang.String r3 = org.json.simple.JSONValue.toJSONString(r3)
            r2.append(r3)
            goto L14
        L35:
            r4 = 93
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            return r4
    }

    public static void writeJSONString(java.util.List r3, java.io.Writer r4) throws java.io.IOException {
            java.lang.String r0 = "null"
            if (r3 != 0) goto L8
            r4.write(r0)
            return
        L8:
            r1 = 1
            java.util.Iterator r3 = r3.iterator()
            r2 = 91
            r4.write(r2)
        L12:
            boolean r2 = r3.hasNext()
            if (r2 == 0) goto L2f
            if (r1 == 0) goto L1c
            r1 = 0
            goto L21
        L1c:
            r2 = 44
            r4.write(r2)
        L21:
            java.lang.Object r2 = r3.next()
            if (r2 != 0) goto L2b
            r4.write(r0)
            goto L12
        L2b:
            org.json.simple.JSONValue.writeJSONString(r2, r4)
            goto L12
        L2f:
            r3 = 93
            r4.write(r3)
            return
    }

    @Override
    public java.lang.String toJSONString() {
            r1 = this;
            java.lang.String r0 = toJSONString(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.toJSONString()
            return r0
    }

    @Override
    public void writeJSONString(java.io.Writer r1) throws java.io.IOException {
            r0 = this;
            writeJSONString(r0, r1)
            return
    }
}
