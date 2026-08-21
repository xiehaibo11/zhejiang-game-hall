package com.ss.android.downloadlib.addownload.compliance;

public class pt extends com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Long, android.graphics.Bitmap> {
    private final java.util.Map<java.lang.Long, java.lang.ref.SoftReference<com.ss.android.downloadlib.addownload.compliance.pt.rg>> rg;



    private static class df {
        private static com.ss.android.downloadlib.addownload.compliance.pt rg;

        static {
                com.ss.android.downloadlib.addownload.compliance.pt r0 = new com.ss.android.downloadlib.addownload.compliance.pt
                r1 = 0
                r0.<init>(r1)
                com.ss.android.downloadlib.addownload.compliance.pt.df.rg = r0
                return
        }

        static com.ss.android.downloadlib.addownload.compliance.pt rg() {
                com.ss.android.downloadlib.addownload.compliance.pt r0 = com.ss.android.downloadlib.addownload.compliance.pt.df.rg
                return r0
        }
    }

    public interface rg {
        void rg(android.graphics.Bitmap r1);
    }

    private pt() {
            r1 = this;
            r0 = 8
            r1.<init>(r0, r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.rg = r0
            return
    }

    pt(com.ss.android.downloadlib.addownload.compliance.pt.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private static int df(int r1, int r2, android.graphics.BitmapFactory.Options r3) {
            int r0 = r3.outWidth
            if (r0 > r1) goto Lb
            int r0 = r3.outHeight
            if (r0 <= r2) goto L9
            goto Lb
        L9:
            r1 = 1
            goto L21
        Lb:
            int r0 = r3.outWidth
            float r0 = (float) r0
            float r1 = (float) r1
            float r0 = r0 / r1
            int r1 = java.lang.Math.round(r0)
            int r3 = r3.outHeight
            float r3 = (float) r3
            float r2 = (float) r2
            float r3 = r3 / r2
            int r2 = java.lang.Math.round(r3)
            int r1 = java.lang.Math.min(r1, r2)
        L21:
            return r1
    }

    static int rg(int r0, int r1, android.graphics.BitmapFactory.Options r2) {
            int r0 = df(r0, r1, r2)
            return r0
    }

    public static com.ss.android.downloadlib.addownload.compliance.pt rg() {
            com.ss.android.downloadlib.addownload.compliance.pt r0 = com.ss.android.downloadlib.addownload.compliance.pt.df.rg()
            return r0
    }

    static java.util.Map rg(com.ss.android.downloadlib.addownload.compliance.pt r0) {
            java.util.Map<java.lang.Long, java.lang.ref.SoftReference<com.ss.android.downloadlib.addownload.compliance.pt$rg>> r0 = r0.rg
            return r0
    }

    public void rg(long r9, long r11, java.lang.String r13) {
            r8 = this;
            java.lang.Long r0 = java.lang.Long.valueOf(r9)
            java.lang.Object r0 = r8.get(r0)
            if (r0 == 0) goto L32
            java.util.Map<java.lang.Long, java.lang.ref.SoftReference<com.ss.android.downloadlib.addownload.compliance.pt$rg>> r11 = r8.rg
            java.lang.Long r12 = java.lang.Long.valueOf(r9)
            java.lang.Object r11 = r11.remove(r12)
            java.lang.ref.SoftReference r11 = (java.lang.ref.SoftReference) r11
            if (r11 == 0) goto L31
            java.lang.Object r12 = r11.get()
            if (r12 == 0) goto L31
            java.lang.Object r11 = r11.get()
            com.ss.android.downloadlib.addownload.compliance.pt$rg r11 = (com.ss.android.downloadlib.addownload.compliance.pt.rg) r11
            java.lang.Long r9 = java.lang.Long.valueOf(r9)
            java.lang.Object r9 = r8.get(r9)
            android.graphics.Bitmap r9 = (android.graphics.Bitmap) r9
            r11.rg(r9)
        L31:
            return
        L32:
            boolean r0 = android.text.TextUtils.isEmpty(r13)
            if (r0 == 0) goto L3e
            r9 = 12
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r9, r11)
            return
        L3e:
            com.ss.android.downloadlib.addownload.compliance.pt$2 r7 = new com.ss.android.downloadlib.addownload.compliance.pt$2
            r0 = r7
            r1 = r8
            r2 = r13
            r3 = r11
            r5 = r9
            r0.<init>(r1, r2, r3, r5)
            r11 = 0
            com.ss.android.downloadlib.utils.Chain r11 = com.ss.android.downloadlib.utils.Chain.rg(r7, r11)
            com.ss.android.downloadlib.addownload.compliance.pt$1 r12 = new com.ss.android.downloadlib.addownload.compliance.pt$1
            r12.<init>(r8, r9)
            com.ss.android.downloadlib.utils.Chain r9 = r11.rg(r12)
            r9.rg()
            return
    }

    public void rg(long r2, com.ss.android.downloadlib.addownload.compliance.pt.rg r4) {
            r1 = this;
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            java.lang.Object r0 = r1.get(r0)
            if (r0 == 0) goto L18
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.Object r2 = r1.get(r2)
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2
            r4.rg(r2)
            goto L26
        L18:
            java.util.Map<java.lang.Long, java.lang.ref.SoftReference<com.ss.android.downloadlib.addownload.compliance.pt$rg>> r0 = r1.rg
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.ref.SoftReference r3 = new java.lang.ref.SoftReference
            r3.<init>(r4)
            r0.put(r2, r3)
        L26:
            return
    }
}
