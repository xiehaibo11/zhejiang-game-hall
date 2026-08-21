package org.json.simple;

public class JSONObject extends java.util.HashMap implements java.util.Map, org.json.simple.JSONAware, org.json.simple.JSONStreamAware {
    private static final long serialVersionUID = -503443796854799292L;

    public JSONObject() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String escape(java.lang.String r0) {
            java.lang.String r0 = org.json.simple.JSONValue.escape(r0)
            return r0
    }

    private static java.lang.String toJSONString(java.lang.String r1, java.lang.Object r2, java.lang.StringBuffer r3) {
            r0 = 34
            r3.append(r0)
            if (r1 != 0) goto Ld
            java.lang.String r1 = "null"
            r3.append(r1)
            goto L10
        Ld:
            org.json.simple.JSONValue.escape(r1, r3)
        L10:
            r3.append(r0)
            r1 = 58
            r3.append(r1)
            java.lang.String r1 = org.json.simple.JSONValue.toJSONString(r2)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            return r1
    }

    public static java.lang.String toJSONString(java.util.Map r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = "null"
            return r4
        L5:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 1
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
            r2 = 123(0x7b, float:1.72E-43)
            r0.append(r2)
        L18:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L3d
            if (r1 == 0) goto L22
            r1 = 0
            goto L27
        L22:
            r2 = 44
            r0.append(r2)
        L27:
            java.lang.Object r2 = r4.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.Object r2 = r2.getValue()
            toJSONString(r3, r2, r0)
            goto L18
        L3d:
            r4 = 125(0x7d, float:1.75E-43)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static java.lang.String toString(java.lang.String r1, java.lang.Object r2) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            toJSONString(r1, r2, r0)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void writeJSONString(java.util.Map r4, java.io.Writer r5) throws java.io.IOException {
            if (r4 != 0) goto L8
            java.lang.String r4 = "null"
            r5.write(r4)
            return
        L8:
            r0 = 1
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
            r1 = 123(0x7b, float:1.72E-43)
            r5.write(r1)
        L16:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L4f
            if (r0 == 0) goto L20
            r0 = 0
            goto L25
        L20:
            r1 = 44
            r5.write(r1)
        L25:
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            r2 = 34
            r5.write(r2)
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r3 = escape(r3)
            r5.write(r3)
            r5.write(r2)
            r2 = 58
            r5.write(r2)
            java.lang.Object r1 = r1.getValue()
            org.json.simple.JSONValue.writeJSONString(r1, r5)
            goto L16
        L4f:
            r4 = 125(0x7d, float:1.75E-43)
            r5.write(r4)
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
