package com.alibaba.sdk.android.oss.model;

public class Owner implements java.io.Serializable {
    private static final long serialVersionUID = -1942759024112448066L;
    private java.lang.String displayName;
    private java.lang.String id;

    public Owner() {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r0)
            return
    }

    public Owner(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            r0.displayName = r2
            return
    }

    public boolean equals(java.lang.Object r6) {
            r5 = this;
            boolean r0 = r6 instanceof com.alibaba.sdk.android.oss.model.Owner
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.alibaba.sdk.android.oss.model.Owner r6 = (com.alibaba.sdk.android.oss.model.Owner) r6
            java.lang.String r0 = r6.getId()
            java.lang.String r6 = r6.getDisplayName()
            java.lang.String r2 = r5.getId()
            java.lang.String r3 = r5.getDisplayName()
            java.lang.String r4 = ""
            if (r0 != 0) goto L1d
            r0 = r4
        L1d:
            if (r6 != 0) goto L20
            r6 = r4
        L20:
            if (r2 != 0) goto L23
            r2 = r4
        L23:
            if (r3 != 0) goto L26
            r3 = r4
        L26:
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L33
            boolean r6 = r6.equals(r3)
            if (r6 == 0) goto L33
            r1 = 1
        L33:
            return r1
    }

    public java.lang.String getDisplayName() {
            r1 = this;
            java.lang.String r0 = r1.displayName
            return r0
    }

    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.id
            if (r0 == 0) goto L9
            int r0 = r0.hashCode()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public void setDisplayName(java.lang.String r1) {
            r0 = this;
            r0.displayName = r1
            return
    }

    public void setId(java.lang.String r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Owner [name="
            r0.append(r1)
            java.lang.String r1 = r2.getDisplayName()
            r0.append(r1)
            java.lang.String r1 = ",id="
            r0.append(r1)
            java.lang.String r1 = r2.getId()
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
