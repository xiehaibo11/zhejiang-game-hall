package com.yxcorp.kuaishou.addfp.android.b;

public class e {
    public int a;
    public java.lang.String b;
    public java.lang.String c;

    public e(int r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "CommandResult{result="
            r0.<init>(r1)
            int r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", successMsg='"
            r0.append(r1)
            java.lang.String r1 = r3.b
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", errorMsg='"
            r0.append(r2)
            java.lang.String r2 = r3.c
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
