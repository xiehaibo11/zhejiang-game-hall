package com.kwad.sdk.core.imageloader.core.assist;

public enum ViewScaleType extends java.lang.Enum<com.kwad.sdk.core.imageloader.core.assist.ViewScaleType> {
    private static final com.kwad.sdk.core.imageloader.core.assist.ViewScaleType[] $VALUES = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.ViewScaleType CROP = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.ViewScaleType FIT_INSIDE = null;

    static class 1 {
        static final int[] $SwitchMap$android$widget$ImageView$ScaleType = null;

        static {
                android.widget.ImageView$ScaleType[] r0 = android.widget.ImageView.ScaleType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.1.$SwitchMap$android$widget$ImageView$ScaleType = r0
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_CENTER     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.1.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L1d
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_XY     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.1.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L28
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_START     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.1.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L33
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_END     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.1.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L3e
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_INSIDE     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.1.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L49
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.MATRIX     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.1.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L54
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                int[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.1.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L60
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP     // Catch: java.lang.NoSuchFieldError -> L60
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L60
                r2 = 8
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L60
            L60:
                return
        }
    }

    static {
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r0 = new com.kwad.sdk.core.imageloader.core.assist.ViewScaleType
            r1 = 0
            java.lang.String r2 = "FIT_INSIDE"
            r0.<init>(r2, r1)
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.FIT_INSIDE = r0
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r0 = new com.kwad.sdk.core.imageloader.core.assist.ViewScaleType
            r2 = 1
            java.lang.String r3 = "CROP"
            r0.<init>(r3, r2)
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.CROP = r0
            r3 = 2
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType[] r3 = new com.kwad.sdk.core.imageloader.core.assist.ViewScaleType[r3]
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r4 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.FIT_INSIDE
            r3[r1] = r4
            r3[r2] = r0
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.$VALUES = r3
            return
    }

    ViewScaleType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.kwad.sdk.core.imageloader.core.assist.ViewScaleType fromImageView(android.widget.ImageView r1) {
            int[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.1.$SwitchMap$android$widget$ImageView$ScaleType
            android.widget.ImageView$ScaleType r1 = r1.getScaleType()
            int r1 = r1.ordinal()
            r1 = r0[r1]
            r0 = 1
            if (r1 == r0) goto L1e
            r0 = 2
            if (r1 == r0) goto L1e
            r0 = 3
            if (r1 == r0) goto L1e
            r0 = 4
            if (r1 == r0) goto L1e
            r0 = 5
            if (r1 == r0) goto L1e
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.CROP
            return r1
        L1e:
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.FIT_INSIDE
            return r1
    }

    public static com.kwad.sdk.core.imageloader.core.assist.ViewScaleType valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.core.imageloader.core.assist.ViewScaleType> r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r1 = (com.kwad.sdk.core.imageloader.core.assist.ViewScaleType) r1
            return r1
    }

    public static com.kwad.sdk.core.imageloader.core.assist.ViewScaleType[] values() {
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType[] r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType[] r0 = (com.kwad.sdk.core.imageloader.core.assist.ViewScaleType[]) r0
            return r0
    }
}
