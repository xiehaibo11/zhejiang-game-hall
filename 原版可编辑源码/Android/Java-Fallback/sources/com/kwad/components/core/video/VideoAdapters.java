package com.kwad.components.core.video;

public final class VideoAdapters {

    static class 1 {
        static final int[] SR = null;

        static {
                com.kwad.components.core.video.VideoAdapters$AdaptType[] r0 = com.kwad.components.core.video.VideoAdapters.AdaptType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.components.core.video.VideoAdapters.1.SR = r0
                com.kwad.components.core.video.VideoAdapters$AdaptType r1 = com.kwad.components.core.video.VideoAdapters.AdaptType.PORTRAIT_VERTICAL     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.components.core.video.VideoAdapters.1.SR     // Catch: java.lang.NoSuchFieldError -> L1d
                com.kwad.components.core.video.VideoAdapters$AdaptType r1 = com.kwad.components.core.video.VideoAdapters.AdaptType.LANDSCAPE_HORIZONTAL     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.kwad.components.core.video.VideoAdapters.1.SR     // Catch: java.lang.NoSuchFieldError -> L28
                com.kwad.components.core.video.VideoAdapters$AdaptType r1 = com.kwad.components.core.video.VideoAdapters.AdaptType.PORTRAIT_HORIZONTAL     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.kwad.components.core.video.VideoAdapters.1.SR     // Catch: java.lang.NoSuchFieldError -> L33
                com.kwad.components.core.video.VideoAdapters$AdaptType r1 = com.kwad.components.core.video.VideoAdapters.AdaptType.LANDSCAPE_VERTICAL     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    enum AdaptType extends java.lang.Enum<com.kwad.components.core.video.VideoAdapters.AdaptType> {
        private static final com.kwad.components.core.video.VideoAdapters.AdaptType[] $VALUES = null;
        public static final com.kwad.components.core.video.VideoAdapters.AdaptType LANDSCAPE_HORIZONTAL = null;
        public static final com.kwad.components.core.video.VideoAdapters.AdaptType LANDSCAPE_VERTICAL = null;
        public static final com.kwad.components.core.video.VideoAdapters.AdaptType PORTRAIT_HORIZONTAL = null;
        public static final com.kwad.components.core.video.VideoAdapters.AdaptType PORTRAIT_VERTICAL = null;

        static {
                com.kwad.components.core.video.VideoAdapters$AdaptType r0 = new com.kwad.components.core.video.VideoAdapters$AdaptType
                r1 = 0
                java.lang.String r2 = "PORTRAIT_VERTICAL"
                r0.<init>(r2, r1)
                com.kwad.components.core.video.VideoAdapters.AdaptType.PORTRAIT_VERTICAL = r0
                com.kwad.components.core.video.VideoAdapters$AdaptType r0 = new com.kwad.components.core.video.VideoAdapters$AdaptType
                r2 = 1
                java.lang.String r3 = "PORTRAIT_HORIZONTAL"
                r0.<init>(r3, r2)
                com.kwad.components.core.video.VideoAdapters.AdaptType.PORTRAIT_HORIZONTAL = r0
                com.kwad.components.core.video.VideoAdapters$AdaptType r0 = new com.kwad.components.core.video.VideoAdapters$AdaptType
                r3 = 2
                java.lang.String r4 = "LANDSCAPE_VERTICAL"
                r0.<init>(r4, r3)
                com.kwad.components.core.video.VideoAdapters.AdaptType.LANDSCAPE_VERTICAL = r0
                com.kwad.components.core.video.VideoAdapters$AdaptType r0 = new com.kwad.components.core.video.VideoAdapters$AdaptType
                r4 = 3
                java.lang.String r5 = "LANDSCAPE_HORIZONTAL"
                r0.<init>(r5, r4)
                com.kwad.components.core.video.VideoAdapters.AdaptType.LANDSCAPE_HORIZONTAL = r0
                r5 = 4
                com.kwad.components.core.video.VideoAdapters$AdaptType[] r5 = new com.kwad.components.core.video.VideoAdapters.AdaptType[r5]
                com.kwad.components.core.video.VideoAdapters$AdaptType r6 = com.kwad.components.core.video.VideoAdapters.AdaptType.PORTRAIT_VERTICAL
                r5[r1] = r6
                com.kwad.components.core.video.VideoAdapters$AdaptType r1 = com.kwad.components.core.video.VideoAdapters.AdaptType.PORTRAIT_HORIZONTAL
                r5[r2] = r1
                com.kwad.components.core.video.VideoAdapters$AdaptType r1 = com.kwad.components.core.video.VideoAdapters.AdaptType.LANDSCAPE_VERTICAL
                r5[r3] = r1
                r5[r4] = r0
                com.kwad.components.core.video.VideoAdapters.AdaptType.$VALUES = r5
                return
        }

        AdaptType(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.components.core.video.VideoAdapters.AdaptType valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.components.core.video.VideoAdapters$AdaptType> r0 = com.kwad.components.core.video.VideoAdapters.AdaptType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.components.core.video.VideoAdapters$AdaptType r1 = (com.kwad.components.core.video.VideoAdapters.AdaptType) r1
                return r1
        }

        public static com.kwad.components.core.video.VideoAdapters.AdaptType[] values() {
                com.kwad.components.core.video.VideoAdapters$AdaptType[] r0 = com.kwad.components.core.video.VideoAdapters.AdaptType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.components.core.video.VideoAdapters$AdaptType[] r0 = (com.kwad.components.core.video.VideoAdapters.AdaptType[]) r0
                return r0
        }
    }

    public static abstract class a implements com.kwad.components.core.video.c {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        private static boolean b(android.view.View r1, android.view.View r2, int r3, int r4) {
                r0 = 0
                if (r1 != 0) goto L4
                return r0
            L4:
                if (r3 == 0) goto L1b
                if (r4 != 0) goto L9
                goto L1b
            L9:
                if (r2 != 0) goto Lc
                return r0
            Lc:
                int r1 = r2.getWidth()
                int r2 = r2.getHeight()
                if (r1 == 0) goto L1b
                if (r2 != 0) goto L19
                goto L1b
            L19:
                r1 = 1
                return r1
            L1b:
                return r0
        }

        @Override
        public final void a(android.view.View r5, android.view.View r6, int r7, int r8) {
                r4 = this;
                boolean r0 = b(r5, r6, r7, r8)
                if (r0 != 0) goto Le
                java.lang.String r5 = "AbstractVideoViewAdapter"
                java.lang.String r6 = "adaptVideo checkArguments invalid"
                com.kwad.sdk.core.e.c.d(r5, r6)
                return
            Le:
                int r0 = r6.getHeight()
                float r0 = (float) r0
                int r6 = r6.getWidth()
                float r6 = (float) r6
                com.kwad.components.core.video.VideoAdapters$d r1 = new com.kwad.components.core.video.VideoAdapters$d
                r1.<init>(r6, r0)
                com.kwad.components.core.video.VideoAdapters$d r6 = new com.kwad.components.core.video.VideoAdapters$d
                float r7 = (float) r7
                float r8 = (float) r8
                r6.<init>(r7, r8)
                float r7 = r6.getRatio()
                r8 = 1065353216(0x3f800000, float:1.0)
                int r7 = (r7 > r8 ? 1 : (r7 == r8 ? 0 : -1))
                r0 = 1
                r2 = 0
                if (r7 < 0) goto L32
                r7 = r0
                goto L33
            L32:
                r7 = r2
            L33:
                float r3 = r1.getRatio()
                int r8 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
                if (r8 < 0) goto L3c
                goto L3d
            L3c:
                r0 = r2
            L3d:
                if (r0 == 0) goto L44
                if (r7 == 0) goto L44
                com.kwad.components.core.video.VideoAdapters$AdaptType r7 = com.kwad.components.core.video.VideoAdapters.AdaptType.PORTRAIT_VERTICAL
                goto L50
            L44:
                if (r0 == 0) goto L49
                com.kwad.components.core.video.VideoAdapters$AdaptType r7 = com.kwad.components.core.video.VideoAdapters.AdaptType.PORTRAIT_HORIZONTAL
                goto L50
            L49:
                if (r7 == 0) goto L4e
                com.kwad.components.core.video.VideoAdapters$AdaptType r7 = com.kwad.components.core.video.VideoAdapters.AdaptType.LANDSCAPE_VERTICAL
                goto L50
            L4e:
                com.kwad.components.core.video.VideoAdapters$AdaptType r7 = com.kwad.components.core.video.VideoAdapters.AdaptType.LANDSCAPE_HORIZONTAL
            L50:
                android.view.ViewGroup$LayoutParams r8 = r5.getLayoutParams()
                r4.a(r7, r8, r1, r6)
                r5.setLayoutParams(r8)
                return
        }

        protected abstract void a(com.kwad.components.core.video.VideoAdapters.AdaptType r1, android.view.ViewGroup.LayoutParams r2, com.kwad.components.core.video.VideoAdapters.d r3, com.kwad.components.core.video.VideoAdapters.d r4);
    }

    public static class b extends com.kwad.components.core.video.VideoAdapters.a {
        private float SS;
        private float ST;
        private float SU;

        public b() {
                r1 = this;
                r1.<init>()
                r0 = 1061997773(0x3f4ccccd, float:0.8)
                r1.SS = r0
                r0 = 1064304640(0x3f700000, float:0.9375)
                r1.ST = r0
                r0 = 1066230664(0x3f8d6388, float:1.1046)
                r1.SU = r0
                return
        }

        @Override
        protected final void a(com.kwad.components.core.video.VideoAdapters.AdaptType r9, android.view.ViewGroup.LayoutParams r10, com.kwad.components.core.video.VideoAdapters.d r11, com.kwad.components.core.video.VideoAdapters.d r12) {
                r8 = this;
                float r0 = r11.ra()
                float r1 = r12.ra()
                float r2 = r11.qZ()
                float r3 = r11.qY()
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                java.lang.String r5 = "onAdaptVideo containerSize: "
                r4.<init>(r5)
                r4.append(r3)
                java.lang.String r5 = ", "
                r4.append(r5)
                r4.append(r2)
                java.lang.String r4 = r4.toString()
                java.lang.String r6 = "FullHeightAdapter"
                com.kwad.sdk.core.e.c.d(r6, r4)
                int[] r4 = com.kwad.components.core.video.VideoAdapters.1.SR
                int r9 = r9.ordinal()
                r9 = r4[r9]
                r4 = 1
                r7 = -822083584(0xffffffffcf000000, float:-2.1474836E9)
                if (r9 == r4) goto L4a
                r4 = 2
                if (r9 == r4) goto L4a
                r11 = 3
                if (r9 == r11) goto L44
                r11 = 4
                if (r9 == r11) goto L44
                r9 = r7
                r2 = r9
                goto L76
            L44:
                float r9 = r8.SU
                float r2 = r2 * r9
            L47:
                float r9 = r2 / r1
                goto L76
            L4a:
                int r9 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r9 <= 0) goto L64
                float r9 = r11.qY()
                float r11 = r9 / r1
                float r0 = r2 / r11
                float r3 = r8.SS
                int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
                if (r0 < 0) goto L5f
                r2 = r9
                r9 = r11
                goto L76
            L5f:
                float r9 = r2 / r3
                float r2 = r9 * r1
                goto L76
            L64:
                float r9 = r11.qZ()
                float r2 = r1 * r9
                float r11 = r3 / r2
                float r0 = r8.ST
                int r11 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
                if (r11 < 0) goto L73
                goto L76
            L73:
                float r2 = r3 / r0
                goto L47
            L76:
                java.lang.StringBuilder r11 = new java.lang.StringBuilder
                java.lang.String r0 = "onAdaptVideo result: "
                r11.<init>(r0)
                r11.append(r2)
                r11.append(r5)
                r11.append(r9)
                java.lang.String r11 = r11.toString()
                com.kwad.sdk.core.e.c.d(r6, r11)
                int r11 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
                if (r11 == 0) goto Lad
                int r11 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
                if (r11 == 0) goto Lad
                float r11 = r12.getHeight()
                float r12 = r12.getWidth()
                int r11 = (r11 > r12 ? 1 : (r11 == r12 ? 0 : -1))
                int r9 = (int) r9
                if (r11 < 0) goto La8
                r10.width = r9
                int r9 = (int) r2
                r10.height = r9
                return
            La8:
                r10.height = r9
                int r9 = (int) r2
                r10.width = r9
            Lad:
                return
        }
    }

    public static class c extends com.kwad.components.core.video.VideoAdapters.a {
        public c() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected final void a(com.kwad.components.core.video.VideoAdapters.AdaptType r5, android.view.ViewGroup.LayoutParams r6, com.kwad.components.core.video.VideoAdapters.d r7, com.kwad.components.core.video.VideoAdapters.d r8) {
                r4 = this;
                float r0 = r7.ra()
                float r1 = r8.ra()
                int[] r2 = com.kwad.components.core.video.VideoAdapters.1.SR
                int r5 = r5.ordinal()
                r5 = r2[r5]
                r2 = 1
                r3 = -822083584(0xffffffffcf000000, float:-2.1474836E9)
                if (r5 == r2) goto L28
                r2 = 2
                if (r5 == r2) goto L28
                r0 = 3
                if (r5 == r0) goto L21
                r0 = 4
                if (r5 == r0) goto L21
                r5 = 0
                r7 = r3
                goto L38
            L21:
                float r5 = r7.qZ()
            L25:
                float r7 = r5 / r1
                goto L38
            L28:
                int r5 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r5 < 0) goto L33
                float r7 = r7.qZ()
                float r5 = r7 * r1
                goto L38
            L33:
                float r5 = r7.qY()
                goto L25
            L38:
                int r0 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
                if (r0 == 0) goto L58
                int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
                if (r0 == 0) goto L58
                float r0 = r8.getHeight()
                float r8 = r8.getWidth()
                int r8 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
                int r7 = (int) r7
                if (r8 <= 0) goto L53
                r6.width = r7
                int r5 = (int) r5
                r6.height = r5
                return
            L53:
                r6.height = r7
                int r5 = (int) r5
                r6.width = r5
            L58:
                return
        }
    }

    static class d {
        float SV;
        float height;
        float width;

        public d(float r3, float r4) {
                r2 = this;
                r2.<init>()
                r0 = -1082130432(0xffffffffbf800000, float:-1.0)
                r2.SV = r0
                r2.width = r3
                r2.height = r4
                r0 = 0
                int r1 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r1 <= 0) goto L17
                int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
                if (r0 <= 0) goto L17
                float r4 = r4 / r3
                r2.SV = r4
            L17:
                return
        }

        private boolean isValid() {
                r2 = this;
                float r0 = r2.width
                r1 = 0
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 <= 0) goto Lf
                float r0 = r2.height
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 <= 0) goto Lf
                r0 = 1
                return r0
            Lf:
                r0 = 0
                return r0
        }

        public final float getHeight() {
                r1 = this;
                float r0 = r1.height
                return r0
        }

        public final float getRatio() {
                r1 = this;
                float r0 = r1.SV
                return r0
        }

        public final float getWidth() {
                r1 = this;
                float r0 = r1.width
                return r0
        }

        public final float qY() {
                r2 = this;
                boolean r0 = r2.isValid()
                if (r0 != 0) goto L9
                r0 = -1082130432(0xffffffffbf800000, float:-1.0)
                return r0
            L9:
                float r0 = r2.width
                float r1 = r2.height
                float r0 = java.lang.Math.max(r0, r1)
                return r0
        }

        public final float qZ() {
                r2 = this;
                boolean r0 = r2.isValid()
                if (r0 != 0) goto L9
                r0 = -1082130432(0xffffffffbf800000, float:-1.0)
                return r0
            L9:
                float r0 = r2.width
                float r1 = r2.height
                float r0 = java.lang.Math.min(r0, r1)
                return r0
        }

        public final float ra() {
                r3 = this;
                boolean r0 = r3.isValid()
                if (r0 != 0) goto L9
                r0 = -1082130432(0xffffffffbf800000, float:-1.0)
                return r0
            L9:
                float r0 = r3.height
                float r1 = r3.width
                int r2 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r2 <= 0) goto L13
                float r0 = r0 / r1
                return r0
            L13:
                float r1 = r1 / r0
                return r1
        }

        public final java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "ViewSize{width="
                r0.<init>(r1)
                float r1 = r2.width
                r0.append(r1)
                java.lang.String r1 = ", height="
                r0.append(r1)
                float r1 = r2.height
                r0.append(r1)
                java.lang.String r1 = ", ratio="
                r0.append(r1)
                float r1 = r2.SV
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }
}
