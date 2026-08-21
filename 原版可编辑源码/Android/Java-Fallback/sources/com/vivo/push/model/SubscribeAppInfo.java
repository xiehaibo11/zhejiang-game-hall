package com.vivo.push.model;

public class SubscribeAppInfo {
    public static final int SUBSCIRBE = 1;
    public static final int SUBSCIRBE_CANCLE = 2;
    private int mActualStatus;
    private java.lang.String mName;
    private int mTargetStatus;

    public SubscribeAppInfo(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.mName = r1
            r0.mTargetStatus = r2
            r0.mActualStatus = r3
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            com.vivo.push.model.SubscribeAppInfo r5 = (com.vivo.push.model.SubscribeAppInfo) r5
            java.lang.String r2 = r4.mName
            if (r2 != 0) goto L1e
            java.lang.String r2 = r5.mName
            if (r2 == 0) goto L27
            return r1
        L1e:
            java.lang.String r3 = r5.mName
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L27
            return r1
        L27:
            int r2 = r4.mTargetStatus
            int r5 = r5.mTargetStatus
            if (r2 != r5) goto L2e
            return r0
        L2e:
            return r1
    }

    public int getActualStatus() {
            r1 = this;
            int r0 = r1.mActualStatus
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.mName
            return r0
    }

    public int getTargetStatus() {
            r1 = this;
            int r0 = r1.mTargetStatus
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.mName
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.hashCode()
        La:
            int r0 = r0 + 31
            int r0 = r0 * 31
            int r1 = r2.mTargetStatus
            int r0 = r0 + r1
            return r0
    }

    public void setActualStatus(int r1) {
            r0 = this;
            r0.mActualStatus = r1
            return
    }

    public void setName(java.lang.String r1) {
            r0 = this;
            r0.mName = r1
            return
    }

    public void setTargetStatus(int r1) {
            r0 = this;
            r0.mTargetStatus = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "SubscribeAppInfo [mName="
            r0.<init>(r1)
            java.lang.String r1 = r2.mName
            r0.append(r1)
            java.lang.String r1 = ", mTargetStatus="
            r0.append(r1)
            int r1 = r2.mTargetStatus
            r0.append(r1)
            java.lang.String r1 = ", mActualStatus="
            r0.append(r1)
            int r1 = r2.mActualStatus
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
