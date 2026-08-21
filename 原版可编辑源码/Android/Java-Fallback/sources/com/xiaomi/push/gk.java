package com.xiaomi.push;

public class gk implements com.xiaomi.push.go {
    private java.lang.String a;
    private java.util.List<com.xiaomi.push.gk> a;
    private java.lang.String[] a;
    private java.lang.String b;
    private java.lang.String[] b;
    private java.lang.String c;

    public gk(java.lang.String r2, java.lang.String r3, java.lang.String[] r4, java.lang.String[] r5) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.a = r0
            r1.a = r2
            r1.b = r3
            r1.a = r4
            r1.b = r5
            return
    }

    public gk(java.lang.String r2, java.lang.String r3, java.lang.String[] r4, java.lang.String[] r5, java.lang.String r6, java.util.List<com.xiaomi.push.gk> r7) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.a = r0
            r1.a = r2
            r1.b = r3
            r1.a = r4
            r1.b = r5
            r1.c = r6
            r1.a = r7
            return
    }

    public static com.xiaomi.push.gk a(android.os.Bundle r10) {
            java.lang.String r0 = "ext_ele_name"
            java.lang.String r2 = r10.getString(r0)
            java.lang.String r0 = "ext_ns"
            java.lang.String r3 = r10.getString(r0)
            java.lang.String r0 = "ext_text"
            java.lang.String r6 = r10.getString(r0)
            java.lang.String r0 = "attributes"
            android.os.Bundle r0 = r10.getBundle(r0)
            java.util.Set r1 = r0.keySet()
            int r4 = r1.size()
            java.lang.String[] r4 = new java.lang.String[r4]
            int r5 = r1.size()
            java.lang.String[] r5 = new java.lang.String[r5]
            java.util.Iterator r1 = r1.iterator()
            r7 = 0
            r8 = r7
        L2e:
            boolean r9 = r1.hasNext()
            if (r9 == 0) goto L45
            java.lang.Object r9 = r1.next()
            java.lang.String r9 = (java.lang.String) r9
            r4[r8] = r9
            java.lang.String r9 = r0.getString(r9)
            r5[r8] = r9
            int r8 = r8 + 1
            goto L2e
        L45:
            java.lang.String r0 = "children"
            boolean r1 = r10.containsKey(r0)
            if (r1 == 0) goto L6a
            android.os.Parcelable[] r10 = r10.getParcelableArray(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r10.length
            r0.<init>(r1)
            int r1 = r10.length
        L58:
            if (r7 >= r1) goto L68
            r8 = r10[r7]
            android.os.Bundle r8 = (android.os.Bundle) r8
            com.xiaomi.push.gk r8 = a(r8)
            r0.add(r8)
            int r7 = r7 + 1
            goto L58
        L68:
            r7 = r0
            goto L6c
        L6a:
            r10 = 0
            r7 = r10
        L6c:
            com.xiaomi.push.gk r10 = new com.xiaomi.push.gk
            r1 = r10
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return r10
    }

    public static android.os.Parcelable[] a(java.util.List<com.xiaomi.push.gk> r1) {
            int r0 = r1.size()
            com.xiaomi.push.gk[] r0 = new com.xiaomi.push.gk[r0]
            java.lang.Object[] r1 = r1.toArray(r0)
            com.xiaomi.push.gk[] r1 = (com.xiaomi.push.gk[]) r1
            android.os.Parcelable[] r1 = a(r1)
            return r1
    }

    public static android.os.Parcelable[] a(com.xiaomi.push.gk[] r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            int r0 = r3.length
            android.os.Parcelable[] r0 = new android.os.Parcelable[r0]
            r1 = 0
        L8:
            int r2 = r3.length
            if (r1 >= r2) goto L16
            r2 = r3[r1]
            android.os.Parcelable r2 = r2.a()
            r0[r1] = r2
            int r1 = r1 + 1
            goto L8
        L16:
            return r0
    }

    public android.os.Bundle a() {
            r5 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = r5.a
            java.lang.String r2 = "ext_ele_name"
            r0.putString(r2, r1)
            java.lang.String r1 = r5.b
            java.lang.String r2 = "ext_ns"
            r0.putString(r2, r1)
            java.lang.String r1 = r5.c
            java.lang.String r2 = "ext_text"
            r0.putString(r2, r1)
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String[] r2 = r5.a
            if (r2 == 0) goto L38
            int r2 = r2.length
            if (r2 <= 0) goto L38
            r2 = 0
        L27:
            java.lang.String[] r3 = r5.a
            int r4 = r3.length
            if (r2 >= r4) goto L38
            r3 = r3[r2]
            java.lang.String[] r4 = r5.b
            r4 = r4[r2]
            r1.putString(r3, r4)
            int r2 = r2 + 1
            goto L27
        L38:
            java.lang.String r2 = "attributes"
            r0.putBundle(r2, r1)
            java.util.List<com.xiaomi.push.gk> r1 = r5.a
            if (r1 == 0) goto L52
            int r1 = r1.size()
            if (r1 <= 0) goto L52
            java.util.List<com.xiaomi.push.gk> r1 = r5.a
            android.os.Parcelable[] r1 = a(r1)
            java.lang.String r2 = "children"
            r0.putParcelableArray(r2, r1)
        L52:
            return r0
    }

    public android.os.Parcelable a() {
            r1 = this;
            android.os.Bundle r0 = r1.a()
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String a(java.lang.String r4) {
            r3 = this;
            if (r4 == 0) goto L1e
            java.lang.String[] r0 = r3.a
            if (r0 == 0) goto L1c
            r0 = 0
        L7:
            java.lang.String[] r1 = r3.a
            int r2 = r1.length
            if (r0 >= r2) goto L1c
            r1 = r1[r0]
            boolean r1 = r4.equals(r1)
            if (r1 == 0) goto L19
            java.lang.String[] r4 = r3.b
            r4 = r4[r0]
            return r4
        L19:
            int r0 = r0 + 1
            goto L7
        L1c:
            r4 = 0
            return r4
        L1e:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>()
            throw r4
    }

    public void a(com.xiaomi.push.gk r2) {
            r1 = this;
            java.util.List<com.xiaomi.push.gk> r0 = r1.a
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
        Lb:
            java.util.List<com.xiaomi.push.gk> r0 = r1.a
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L18
            java.util.List<com.xiaomi.push.gk> r0 = r1.a
            r0.add(r2)
        L18:
            return
    }

    public void a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto La
            java.lang.String r2 = com.xiaomi.push.gy.a(r2)
        La:
            r1.c = r2
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            java.lang.String r0 = r1.c
            java.lang.String r0 = com.xiaomi.push.gy.b(r0)
            return r0
        Lf:
            java.lang.String r0 = r1.c
            return r0
    }

    @Override
    public java.lang.String d() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "<"
            r0.append(r1)
            java.lang.String r1 = r5.a
            r0.append(r1)
            java.lang.String r1 = r5.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r2 = " "
            java.lang.String r3 = "\""
            if (r1 != 0) goto L2e
            r0.append(r2)
            java.lang.String r1 = "xmlns="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = r5.b
            r0.append(r1)
            r0.append(r3)
        L2e:
            java.lang.String[] r1 = r5.a
            if (r1 == 0) goto L65
            int r1 = r1.length
            if (r1 <= 0) goto L65
            r1 = 0
        L36:
            java.lang.String[] r4 = r5.a
            int r4 = r4.length
            if (r1 >= r4) goto L65
            java.lang.String[] r4 = r5.b
            r4 = r4[r1]
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L62
            r0.append(r2)
            java.lang.String[] r4 = r5.a
            r4 = r4[r1]
            r0.append(r4)
            java.lang.String r4 = "=\""
            r0.append(r4)
            java.lang.String[] r4 = r5.b
            r4 = r4[r1]
            java.lang.String r4 = com.xiaomi.push.gy.a(r4)
            r0.append(r4)
            r0.append(r3)
        L62:
            int r1 = r1 + 1
            goto L36
        L65:
            java.lang.String r1 = r5.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r2 = "</"
            java.lang.String r3 = ">"
            if (r1 != 0) goto L85
            r0.append(r3)
            java.lang.String r1 = r5.c
            r0.append(r1)
        L79:
            r0.append(r2)
            java.lang.String r1 = r5.a
            r0.append(r1)
            r0.append(r3)
            goto Lb1
        L85:
            java.util.List<com.xiaomi.push.gk> r1 = r5.a
            if (r1 == 0) goto Lac
            int r1 = r1.size()
            if (r1 <= 0) goto Lac
            r0.append(r3)
            java.util.List<com.xiaomi.push.gk> r1 = r5.a
            java.util.Iterator r1 = r1.iterator()
        L98:
            boolean r4 = r1.hasNext()
            if (r4 == 0) goto L79
            java.lang.Object r4 = r1.next()
            com.xiaomi.push.gk r4 = (com.xiaomi.push.gk) r4
            java.lang.String r4 = r4.d()
            r0.append(r4)
            goto L98
        Lac:
            java.lang.String r1 = "/>"
            r0.append(r1)
        Lb1:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.d()
            return r0
    }
}
