package org.json;

public class HTTP {
    public static final java.lang.String CRLF = "\r\n";

    public HTTP() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject toJSONObject(java.lang.String r5) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.HTTPTokener r1 = new org.json.HTTPTokener
            r1.<init>(r5)
            java.lang.String r5 = r1.nextToken()
            java.lang.String r2 = r5.toUpperCase()
            java.lang.String r3 = "HTTP"
            boolean r2 = r2.startsWith(r3)
            r3 = 0
            java.lang.String r4 = "HTTP-Version"
            if (r2 == 0) goto L36
            r0.put(r4, r5)
            java.lang.String r5 = r1.nextToken()
            java.lang.String r2 = "Status-Code"
            r0.put(r2, r5)
            java.lang.String r5 = r1.nextTo(r3)
            java.lang.String r2 = "Reason-Phrase"
            r0.put(r2, r5)
            r1.next()
            goto L4b
        L36:
            java.lang.String r2 = "Method"
            r0.put(r2, r5)
            java.lang.String r5 = r1.nextToken()
            java.lang.String r2 = "Request-URI"
            r0.put(r2, r5)
            java.lang.String r5 = r1.nextToken()
            r0.put(r4, r5)
        L4b:
            boolean r5 = r1.more()
            if (r5 == 0) goto L65
            r5 = 58
            java.lang.String r2 = r1.nextTo(r5)
            r1.next(r5)
            java.lang.String r5 = r1.nextTo(r3)
            r0.put(r2, r5)
            r1.next()
            goto L4b
        L65:
            return r0
    }

    public static java.lang.String toString(org.json.JSONObject r10) throws org.json.JSONException {
            java.util.Iterator r0 = r10.keys()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Status-Code"
            boolean r3 = r10.has(r2)
            java.lang.String r4 = "HTTP-Version"
            java.lang.String r5 = "Request-URI"
            java.lang.String r6 = "Reason-Phrase"
            java.lang.String r7 = "Method"
            r8 = 32
            if (r3 == 0) goto L3d
            boolean r3 = r10.has(r6)
            if (r3 == 0) goto L3d
            java.lang.String r3 = r10.getString(r4)
            r1.append(r3)
            r1.append(r8)
            java.lang.String r3 = r10.getString(r2)
            r1.append(r3)
            r1.append(r8)
            java.lang.String r3 = r10.getString(r6)
            r1.append(r3)
            goto L6c
        L3d:
            boolean r3 = r10.has(r7)
            if (r3 == 0) goto Lbc
            boolean r3 = r10.has(r5)
            if (r3 == 0) goto Lbc
            java.lang.String r3 = r10.getString(r7)
            r1.append(r3)
            r1.append(r8)
            r3 = 34
            r1.append(r3)
            java.lang.String r9 = r10.getString(r5)
            r1.append(r9)
            r1.append(r3)
            r1.append(r8)
            java.lang.String r3 = r10.getString(r4)
            r1.append(r3)
        L6c:
            java.lang.String r3 = "\r\n"
            r1.append(r3)
        L71:
            boolean r8 = r0.hasNext()
            if (r8 == 0) goto Lb4
            java.lang.Object r8 = r0.next()
            java.lang.String r8 = (java.lang.String) r8
            boolean r9 = r4.equals(r8)
            if (r9 != 0) goto L71
            boolean r9 = r2.equals(r8)
            if (r9 != 0) goto L71
            boolean r9 = r6.equals(r8)
            if (r9 != 0) goto L71
            boolean r9 = r7.equals(r8)
            if (r9 != 0) goto L71
            boolean r9 = r5.equals(r8)
            if (r9 != 0) goto L71
            boolean r9 = r10.isNull(r8)
            if (r9 != 0) goto L71
            r1.append(r8)
            java.lang.String r9 = ": "
            r1.append(r9)
            java.lang.String r8 = r10.getString(r8)
            r1.append(r8)
            r1.append(r3)
            goto L71
        Lb4:
            r1.append(r3)
            java.lang.String r10 = r1.toString()
            return r10
        Lbc:
            org.json.JSONException r10 = new org.json.JSONException
            java.lang.String r0 = "Not enough material for an HTTP header."
            r10.<init>(r0)
            throw r10
    }
}
