package com.bianfeng.privategetui;

public class ResourceManger {
    public ResourceManger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getId(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "\\."
            java.lang.String[] r4 = r4.split(r0)
            boolean r0 = isVaildContent(r3)
            if (r0 != 0) goto Le
            r3 = 0
            return r3
        Le:
            java.lang.String r0 = r3.getPackageName()
            android.content.res.Resources r3 = r3.getResources()
            r1 = 2
            r1 = r4[r1]
            r2 = 1
            r4 = r4[r2]
            int r3 = r3.getIdentifier(r1, r4, r0)
            return r3
    }

    public static int getId(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            if (r1 == 0) goto L1d
            boolean r0 = r1 instanceof android.app.Activity
            if (r0 == 0) goto L10
            r0 = r1
            android.app.Activity r0 = (android.app.Activity) r0
            boolean r0 = r0.isFinishing()
            if (r0 == 0) goto L10
            goto L1d
        L10:
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r1 = r1.getPackageName()
            int r1 = r0.getIdentifier(r2, r3, r1)
            return r1
        L1d:
            r1 = 0
            return r1
    }

    public static boolean isVaildContent(android.content.Context r1) {
            if (r1 == 0) goto L10
            boolean r0 = r1 instanceof android.app.Activity
            if (r0 == 0) goto Le
            android.app.Activity r1 = (android.app.Activity) r1
            boolean r1 = r1.isFinishing()
            if (r1 != 0) goto L10
        Le:
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }
}
