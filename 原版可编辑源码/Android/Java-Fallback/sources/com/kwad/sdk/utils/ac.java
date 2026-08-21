package com.kwad.sdk.utils;

public final class ac {

    public static class a {
        private int aIJ;
        private int aIK;
        private int aIL;
        private int aIM;
        private int mHeight;
        private int mWidth;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.mWidth = r0
                r1.mHeight = r0
                r1.aIJ = r0
                r1.aIK = r0
                r1.aIL = r0
                r1.aIM = r0
                return
        }

        public a(int r2, int r3) {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.mWidth = r0
                r1.mHeight = r0
                r1.aIJ = r0
                r1.aIK = r0
                r1.aIL = r0
                r1.aIM = r0
                r1.mWidth = r2
                r1.mHeight = r3
                return
        }

        public final int IJ() {
                r1 = this;
                int r0 = r1.aIJ
                return r0
        }

        public final int IK() {
                r1 = this;
                int r0 = r1.aIK
                return r0
        }

        public final int IL() {
                r1 = this;
                int r0 = r1.aIL
                return r0
        }

        public final int IM() {
                r1 = this;
                int r0 = r1.aIM
                return r0
        }

        public final void f(float r1, float r2) {
                r0 = this;
                int r1 = (int) r1
                r0.aIJ = r1
                int r1 = (int) r2
                r0.aIK = r1
                return
        }

        public final void g(float r1, float r2) {
                r0 = this;
                int r1 = (int) r1
                r0.aIL = r1
                int r1 = (int) r2
                r0.aIM = r1
                return
        }

        public final int getHeight() {
                r1 = this;
                int r0 = r1.mHeight
                return r0
        }

        public final int getWidth() {
                r1 = this;
                int r0 = r1.mWidth
                return r0
        }

        public final java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "TouchCoords{mWidth="
                r0.<init>(r1)
                int r1 = r2.mWidth
                r0.append(r1)
                java.lang.String r1 = ", mHeight="
                r0.append(r1)
                int r1 = r2.mHeight
                r0.append(r1)
                java.lang.String r1 = ", mDownX="
                r0.append(r1)
                int r1 = r2.aIJ
                r0.append(r1)
                java.lang.String r1 = ", mDownY="
                r0.append(r1)
                int r1 = r2.aIK
                r0.append(r1)
                java.lang.String r1 = ", mUpX="
                r0.append(r1)
                int r1 = r2.aIL
                r0.append(r1)
                java.lang.String r1 = ", mUpY="
                r0.append(r1)
                int r1 = r2.aIM
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        public final void x(int r1, int r2) {
                r0 = this;
                r0.mWidth = r1
                r0.mHeight = r2
                return
        }
    }

    public static java.lang.String a(java.lang.String r2, com.kwad.sdk.utils.ac.a r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L5d
            if (r3 != 0) goto L9
            goto L5d
        L9:
            int r0 = r3.getWidth()
            java.lang.String r0 = dd(r0)
            java.lang.String r1 = "__WIDTH__"
            java.lang.String r2 = r2.replace(r1, r0)
            int r0 = r3.getHeight()
            java.lang.String r0 = dd(r0)
            java.lang.String r1 = "__HEIGHT__"
            java.lang.String r2 = r2.replace(r1, r0)
            int r0 = r3.IJ()
            java.lang.String r0 = dd(r0)
            java.lang.String r1 = "__DOWN_X__"
            java.lang.String r2 = r2.replace(r1, r0)
            int r0 = r3.IK()
            java.lang.String r0 = dd(r0)
            java.lang.String r1 = "__DOWN_Y__"
            java.lang.String r2 = r2.replace(r1, r0)
            int r0 = r3.IL()
            java.lang.String r0 = dd(r0)
            java.lang.String r1 = "__UP_X__"
            java.lang.String r2 = r2.replace(r1, r0)
            int r3 = r3.IM()
            java.lang.String r3 = dd(r3)
            java.lang.String r0 = "__UP_Y__"
            java.lang.String r2 = r2.replace(r0, r3)
        L5d:
            return r2
    }

    public static java.lang.String aj(android.content.Context r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return r3
        L7:
            int r0 = com.kwad.sdk.utils.k.getScreenWidth(r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "__SCREEN_WIDTH__"
            java.lang.String r3 = r3.replace(r1, r0)
            int r0 = com.kwad.sdk.utils.k.getScreenHeight(r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "__SCREEN_HEIGHT__"
            java.lang.String r3 = r3.replace(r1, r0)
            int r0 = com.kwad.sdk.utils.k.bS(r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "__DEVICE_WIDTH__"
            java.lang.String r3 = r3.replace(r1, r0)
            int r2 = com.kwad.sdk.utils.k.bT(r2)
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "__DEVICE_HEIGHT__"
            java.lang.String r2 = r3.replace(r0, r2)
            return r2
    }

    public static java.lang.String c(android.content.Context r2, java.lang.String r3, boolean r4) {
            long r0 = com.kwad.sdk.utils.bg.v(r2, r4)
            java.lang.String r2 = java.lang.String.valueOf(r0)
            java.lang.String r4 = "__TS__"
            java.lang.String r2 = r3.replace(r4, r2)
            return r2
    }

    private static java.lang.String dd(int r0) {
            if (r0 < 0) goto L7
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        L7:
            java.lang.String r0 = "-999"
            return r0
    }
}
