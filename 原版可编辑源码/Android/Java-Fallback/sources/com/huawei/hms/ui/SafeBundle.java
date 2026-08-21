package com.huawei.hms.ui;

public class SafeBundle {
    public final android.os.Bundle a;

    public SafeBundle() {
            r1 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.<init>(r0)
            return
    }

    public SafeBundle(android.os.Bundle r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L6
            goto Lb
        L6:
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
        Lb:
            r0.a = r1
            return
    }

    public boolean containsKey(java.lang.String r2) {
            r1 = this;
            android.os.Bundle r0 = r1.a     // Catch: java.lang.Exception -> L7
            boolean r2 = r0.containsKey(r2)     // Catch: java.lang.Exception -> L7
            return r2
        L7:
            java.lang.String r2 = "SafeBundle"
            java.lang.String r0 = "containsKey exception. key:"
            com.huawei.hms.base.ui.a.a(r2, r0)
            r2 = 0
            return r2
    }

    public java.lang.Object get(java.lang.String r3) {
            r2 = this;
            android.os.Bundle r0 = r2.a     // Catch: java.lang.Exception -> L7
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Exception -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "get exception: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 1
            java.lang.String r1 = "SafeBundle"
            com.huawei.hms.base.ui.a.a(r1, r3, r0)
            r3 = 0
            return r3
    }

    public android.os.Bundle getBundle() {
            r1 = this;
            android.os.Bundle r0 = r1.a
            return r0
    }

    public int getInt(java.lang.String r2) {
            r1 = this;
            r0 = 0
            int r2 = r1.getInt(r2, r0)
            return r2
    }

    public int getInt(java.lang.String r3, int r4) {
            r2 = this;
            android.os.Bundle r0 = r2.a     // Catch: java.lang.Exception -> L7
            int r3 = r0.getInt(r3, r4)     // Catch: java.lang.Exception -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getInt exception: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 1
            java.lang.String r1 = "SafeBundle"
            com.huawei.hms.base.ui.a.a(r1, r3, r0)
            return r4
    }

    public java.lang.String getString(java.lang.String r3) {
            r2 = this;
            android.os.Bundle r0 = r2.a     // Catch: java.lang.Exception -> L7
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getString exception: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 1
            java.lang.String r1 = "SafeBundle"
            com.huawei.hms.base.ui.a.a(r1, r3, r0)
            java.lang.String r3 = ""
            return r3
    }

    public java.lang.String getString(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.os.Bundle r0 = r2.a     // Catch: java.lang.Exception -> L7
            java.lang.String r3 = r0.getString(r3, r4)     // Catch: java.lang.Exception -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getString exception: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 1
            java.lang.String r1 = "SafeBundle"
            com.huawei.hms.base.ui.a.a(r1, r3, r0)
            return r4
    }

    public boolean isEmpty() {
            r2 = this;
            android.os.Bundle r0 = r2.a     // Catch: java.lang.Exception -> L7
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            java.lang.String r0 = "SafeBundle"
            java.lang.String r1 = "isEmpty exception"
            com.huawei.hms.base.ui.a.a(r0, r1)
            r0 = 1
            return r0
    }

    public int size() {
            r2 = this;
            android.os.Bundle r0 = r2.a     // Catch: java.lang.Exception -> L7
            int r0 = r0.size()     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            java.lang.String r0 = "SafeBundle"
            java.lang.String r1 = "size exception"
            com.huawei.hms.base.ui.a.a(r0, r1)
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            android.os.Bundle r0 = r1.a
            java.lang.String r0 = r0.toString()
            return r0
    }
}
