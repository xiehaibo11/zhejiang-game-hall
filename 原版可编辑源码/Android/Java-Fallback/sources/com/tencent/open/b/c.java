package com.tencent.open.b;

public class c implements java.io.Serializable {
    public final java.util.HashMap<java.lang.String, java.lang.String> a;

    public c(android.os.Bundle r5) {
            r4 = this;
            r4.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.a = r0
            if (r5 == 0) goto L2a
            java.util.Set r0 = r5.keySet()
            java.util.Iterator r0 = r0.iterator()
        L14:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2a
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.HashMap<java.lang.String, java.lang.String> r2 = r4.a
            java.lang.String r3 = r5.getString(r1)
            r2.put(r1, r3)
            goto L14
        L2a:
            return
    }

    public c(java.util.HashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>(r2)
            r1.a = r0
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BaseData{time="
            r0.append(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r3.a
            java.lang.String r2 = "time"
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            java.lang.String r1 = ", name="
            r0.append(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r3.a
            java.lang.String r2 = "interface_name"
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
