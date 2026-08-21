package com.bianfeng.utilslib;

public class ResourceManger {
    protected ResourceManger() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getId(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "\\."
            java.lang.String[] r5 = r5.split(r0)
            boolean r0 = r3.isVaildContent(r4)
            if (r0 != 0) goto Le
            r4 = 0
            return r4
        Le:
            java.lang.String r0 = r4.getPackageName()
            android.content.res.Resources r4 = r4.getResources()
            r1 = 2
            r1 = r5[r1]
            r2 = 1
            r5 = r5[r2]
            int r4 = r4.getIdentifier(r1, r5, r0)
            return r4
    }

    public int getId(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            if (r2 == 0) goto L1d
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto L10
            r0 = r2
            android.app.Activity r0 = (android.app.Activity) r0
            boolean r0 = r0.isFinishing()
            if (r0 == 0) goto L10
            goto L1d
        L10:
            android.content.res.Resources r0 = r2.getResources()
            java.lang.String r2 = r2.getPackageName()
            int r2 = r0.getIdentifier(r3, r4, r2)
            return r2
        L1d:
            r2 = 0
            return r2
    }

    public boolean isVaildContent(android.content.Context r2) {
            r1 = this;
            if (r2 == 0) goto L10
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto Le
            android.app.Activity r2 = (android.app.Activity) r2
            boolean r2 = r2.isFinishing()
            if (r2 != 0) goto L10
        Le:
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }
}
