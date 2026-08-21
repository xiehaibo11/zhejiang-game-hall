package com.cmic.gen.sdk.view;

public class c {
    public static int a(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "id"
            int r1 = a(r1, r2, r0)
            if (r1 == 0) goto L9
            return r1
        L9:
            android.content.res.Resources$NotFoundException r1 = new android.content.res.Resources$NotFoundException
            r1.<init>(r2)
            throw r1
    }

    public static int a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r1 = r1.getPackageName()
            int r1 = r0.getIdentifier(r2, r3, r1)
            return r1
    }

    public static int b(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "drawable"
            int r1 = a(r1, r2, r0)
            if (r1 == 0) goto L9
            return r1
        L9:
            android.content.res.Resources$NotFoundException r1 = new android.content.res.Resources$NotFoundException
            r1.<init>(r2)
            throw r1
    }

    public static int c(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "anim"
            int r1 = a(r1, r2, r0)
            if (r1 == 0) goto L9
            return r1
        L9:
            android.content.res.Resources$NotFoundException r1 = new android.content.res.Resources$NotFoundException
            r1.<init>(r2)
            throw r1
    }
}
