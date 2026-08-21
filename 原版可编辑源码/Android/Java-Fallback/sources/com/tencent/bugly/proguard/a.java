package com.tencent.bugly.proguard;

public final class a {
    public static java.lang.String a(java.util.ArrayList<java.lang.String> r10) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
            r2 = 0
        L7:
            int r3 = r10.size()
            java.lang.String r4 = "map"
            java.lang.String r5 = "list"
            if (r2 >= r3) goto Lda
            java.lang.Object r3 = r10.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r6 = "java.lang.Integer"
            boolean r6 = r3.equals(r6)
            java.lang.String r7 = "short"
            java.lang.String r8 = "float"
            java.lang.String r9 = "double"
            if (r6 != 0) goto Ld1
            java.lang.String r6 = "int"
            boolean r6 = r3.equals(r6)
            if (r6 == 0) goto L2f
            goto Ld1
        L2f:
            java.lang.String r6 = "java.lang.Boolean"
            boolean r6 = r3.equals(r6)
            if (r6 != 0) goto Lce
            java.lang.String r6 = "boolean"
            boolean r6 = r3.equals(r6)
            if (r6 == 0) goto L41
            goto Lce
        L41:
            java.lang.String r6 = "java.lang.Byte"
            boolean r6 = r3.equals(r6)
            if (r6 != 0) goto Lcb
            java.lang.String r6 = "byte"
            boolean r6 = r3.equals(r6)
            if (r6 == 0) goto L53
            goto Lcb
        L53:
            java.lang.String r6 = "java.lang.Double"
            boolean r6 = r3.equals(r6)
            if (r6 != 0) goto Lc9
            boolean r6 = r3.equals(r9)
            if (r6 == 0) goto L63
            goto Lc9
        L63:
            java.lang.String r6 = "java.lang.Float"
            boolean r6 = r3.equals(r6)
            if (r6 != 0) goto Lc7
            boolean r6 = r3.equals(r8)
            if (r6 == 0) goto L72
            goto Lc7
        L72:
            java.lang.String r6 = "java.lang.Long"
            boolean r6 = r3.equals(r6)
            if (r6 != 0) goto Lc4
            java.lang.String r6 = "long"
            boolean r6 = r3.equals(r6)
            if (r6 == 0) goto L83
            goto Lc4
        L83:
            java.lang.String r6 = "java.lang.Short"
            boolean r6 = r3.equals(r6)
            if (r6 != 0) goto Lc2
            boolean r6 = r3.equals(r7)
            if (r6 == 0) goto L92
            goto Lc2
        L92:
            java.lang.String r6 = "java.lang.Character"
            boolean r6 = r3.equals(r6)
            if (r6 != 0) goto Lba
            java.lang.String r6 = "java.lang.String"
            boolean r6 = r3.equals(r6)
            if (r6 == 0) goto La5
            java.lang.String r4 = "string"
            goto Ld3
        La5:
            java.lang.String r6 = "java.util.List"
            boolean r6 = r3.equals(r6)
            if (r6 == 0) goto Laf
            r4 = r5
            goto Ld3
        Laf:
            java.lang.String r5 = "java.util.Map"
            boolean r5 = r3.equals(r5)
            if (r5 == 0) goto Lb8
            goto Ld3
        Lb8:
            r4 = r3
            goto Ld3
        Lba:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "can not support java.lang.Character"
            r10.<init>(r0)
            throw r10
        Lc2:
            r4 = r7
            goto Ld3
        Lc4:
            java.lang.String r4 = "int64"
            goto Ld3
        Lc7:
            r4 = r8
            goto Ld3
        Lc9:
            r4 = r9
            goto Ld3
        Lcb:
            java.lang.String r4 = "char"
            goto Ld3
        Lce:
            java.lang.String r4 = "bool"
            goto Ld3
        Ld1:
            java.lang.String r4 = "int32"
        Ld3:
            r10.set(r2, r4)
            int r2 = r2 + 1
            goto L7
        Lda:
            java.util.Collections.reverse(r10)
            r2 = 0
        Lde:
            int r3 = r10.size()
            if (r2 >= r3) goto L19a
            java.lang.Object r3 = r10.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            boolean r6 = r3.equals(r5)
            java.lang.String r7 = ">"
            java.lang.String r8 = "<"
            if (r6 == 0) goto L124
            int r3 = r2 + (-1)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>(r8)
            java.lang.Object r8 = r10.get(r3)
            java.lang.String r8 = (java.lang.String) r8
            r6.append(r8)
            java.lang.String r6 = r6.toString()
            r10.set(r3, r6)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r6 = r10.get(r1)
            java.lang.String r6 = (java.lang.String) r6
            r3.append(r6)
            r3.append(r7)
            java.lang.String r3 = r3.toString()
            r10.set(r1, r3)
            goto L196
        L124:
            boolean r6 = r3.equals(r4)
            if (r6 == 0) goto L15f
            int r3 = r2 + (-1)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>(r8)
            java.lang.Object r8 = r10.get(r3)
            java.lang.String r8 = (java.lang.String) r8
            r6.append(r8)
            java.lang.String r8 = ","
            r6.append(r8)
            java.lang.String r6 = r6.toString()
            r10.set(r3, r6)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r6 = r10.get(r1)
            java.lang.String r6 = (java.lang.String) r6
            r3.append(r6)
            r3.append(r7)
            java.lang.String r3 = r3.toString()
            r10.set(r1, r3)
            goto L196
        L15f:
            java.lang.String r6 = "Array"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L196
            int r3 = r2 + (-1)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>(r8)
            java.lang.Object r8 = r10.get(r3)
            java.lang.String r8 = (java.lang.String) r8
            r6.append(r8)
            java.lang.String r6 = r6.toString()
            r10.set(r3, r6)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r6 = r10.get(r1)
            java.lang.String r6 = (java.lang.String) r6
            r3.append(r6)
            r3.append(r7)
            java.lang.String r3 = r3.toString()
            r10.set(r1, r3)
        L196:
            int r2 = r2 + 1
            goto Lde
        L19a:
            java.util.Collections.reverse(r10)
            java.util.Iterator r10 = r10.iterator()
        L1a1:
            boolean r1 = r10.hasNext()
            if (r1 == 0) goto L1b1
            java.lang.Object r1 = r10.next()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            goto L1a1
        L1b1:
            java.lang.String r10 = r0.toString()
            return r10
    }
}
