package com.tkay.basead.a.b;

public final class g {

    public static class a {
        public int a;
        public int b;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.basead.a.b.g.a a(java.io.FileDescriptor r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.tkay.basead.a.b.g$a r1 = new com.tkay.basead.a.b.g$a     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            android.media.MediaMetadataRetriever r0 = new android.media.MediaMetadataRetriever     // Catch: java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Exception -> L2d
            r0.setDataSource(r3)     // Catch: java.lang.Exception -> L2d
            r3 = 18
            java.lang.String r3 = r0.extractMetadata(r3)     // Catch: java.lang.Exception -> L2d
            r2 = 19
            java.lang.String r2 = r0.extractMetadata(r2)     // Catch: java.lang.Exception -> L2d
            r0.release()     // Catch: java.lang.Exception -> L2d
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L2d
            r1.a = r3     // Catch: java.lang.Exception -> L2d
            int r3 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L2d
            r1.b = r3     // Catch: java.lang.Exception -> L2d
            goto L35
        L2d:
            r3 = move-exception
            r0 = r1
            goto L31
        L30:
            r3 = move-exception
        L31:
            r3.printStackTrace()
            r1 = r0
        L35:
            return r1
    }

    private static com.tkay.basead.a.b.g.a a(java.io.FileDescriptor r3, int r4, int r5) {
            com.tkay.basead.a.b.g$a r3 = a(r3)
            if (r3 != 0) goto L8
            r3 = 0
            return r3
        L8:
            int r0 = r3.a
            int r1 = r3.b
            float r0 = (float) r0
            r2 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 * r2
            float r1 = (float) r1
            float r0 = r0 / r1
            float r1 = (float) r4
            float r1 = r1 * r2
            float r2 = (float) r5
            float r1 = r1 / r2
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r1 >= 0) goto L29
            r3.b = r5
            int r4 = r3.b
            float r4 = (float) r4
            float r4 = r4 * r0
            double r4 = (double) r4
            double r4 = java.lang.Math.ceil(r4)
            int r4 = (int) r4
            r3.a = r4
            goto L37
        L29:
            r3.a = r4
            int r4 = r3.a
            float r4 = (float) r4
            float r4 = r4 / r0
            double r4 = (double) r4
            double r4 = java.lang.Math.ceil(r4)
            int r4 = (int) r4
            r3.b = r4
        L37:
            return r3
    }

    public static com.tkay.basead.a.b.g.a a(java.lang.String r3) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L40
            if (r1 == 0) goto L8
            return r0
        L8:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L40
            r1.<init>(r3)     // Catch: java.lang.Exception -> L40
            boolean r1 = r1.exists()     // Catch: java.lang.Exception -> L40
            if (r1 != 0) goto L14
            return r0
        L14:
            com.tkay.basead.a.b.g$a r1 = new com.tkay.basead.a.b.g$a     // Catch: java.lang.Exception -> L40
            r1.<init>()     // Catch: java.lang.Exception -> L40
            android.media.MediaMetadataRetriever r0 = new android.media.MediaMetadataRetriever     // Catch: java.lang.Exception -> L3d
            r0.<init>()     // Catch: java.lang.Exception -> L3d
            r0.setDataSource(r3)     // Catch: java.lang.Exception -> L3d
            r3 = 18
            java.lang.String r3 = r0.extractMetadata(r3)     // Catch: java.lang.Exception -> L3d
            r2 = 19
            java.lang.String r2 = r0.extractMetadata(r2)     // Catch: java.lang.Exception -> L3d
            r0.release()     // Catch: java.lang.Exception -> L3d
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L3d
            r1.a = r3     // Catch: java.lang.Exception -> L3d
            int r3 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L3d
            r1.b = r3     // Catch: java.lang.Exception -> L3d
            goto L45
        L3d:
            r3 = move-exception
            r0 = r1
            goto L41
        L40:
            r3 = move-exception
        L41:
            r3.printStackTrace()
            r1 = r0
        L45:
            return r1
    }

    private static com.tkay.basead.a.b.g.a a(java.lang.String r3, int r4, int r5) {
            com.tkay.basead.a.b.g$a r3 = a(r3)
            if (r3 != 0) goto L8
            r3 = 0
            return r3
        L8:
            int r0 = r3.a
            int r1 = r3.b
            float r0 = (float) r0
            r2 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 * r2
            float r1 = (float) r1
            float r0 = r0 / r1
            float r1 = (float) r4
            float r1 = r1 * r2
            float r2 = (float) r5
            float r1 = r1 / r2
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r1 >= 0) goto L24
            r3.b = r5
            int r4 = r3.b
            float r4 = (float) r4
            float r4 = r4 * r0
            int r4 = (int) r4
            r3.a = r4
            goto L2d
        L24:
            r3.a = r4
            int r4 = r3.a
            float r4 = (float) r4
            float r4 = r4 / r0
            int r4 = (int) r4
            r3.b = r4
        L2d:
            return r3
    }
}
