package com.kwad.components.core.video;

import android.view.View;
import android.view.ViewGroup;

public final class VideoAdapters {

    static class 1 {
        static final int[] SR;

        static {
            int[] iArr = new int[AdaptType.values().length];
            SR = iArr;
            try {
                iArr[AdaptType.PORTRAIT_VERTICAL.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                SR[AdaptType.LANDSCAPE_HORIZONTAL.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                SR[AdaptType.PORTRAIT_HORIZONTAL.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                SR[AdaptType.LANDSCAPE_VERTICAL.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    enum AdaptType {
        PORTRAIT_VERTICAL,
        PORTRAIT_HORIZONTAL,
        LANDSCAPE_VERTICAL,
        LANDSCAPE_HORIZONTAL
    }

    public static abstract class a implements com.kwad.components.core.video.c {
        private static boolean b(View view, View view2, int i, int i2) {
            if (view == null || i == 0 || i2 == 0 || view2 == null) {
                return false;
            }
            return (view2.getWidth() == 0 || view2.getHeight() == 0) ? false : true;
        }

        @Override
        public final void a(View view, View view2, int i, int i2) {
            if (!b(view, view2, i, i2)) {
                com.kwad.sdk.core.e.c.d("AbstractVideoViewAdapter", "adaptVideo checkArguments invalid");
                return;
            }
            d dVar = new d(view2.getWidth(), view2.getHeight());
            d dVar2 = new d(i, i2);
            boolean z = dVar2.getRatio() >= 1.0f;
            boolean z2 = dVar.getRatio() >= 1.0f;
            AdaptType adaptType = (z2 && z) ? AdaptType.PORTRAIT_VERTICAL : z2 ? AdaptType.PORTRAIT_HORIZONTAL : z ? AdaptType.LANDSCAPE_VERTICAL : AdaptType.LANDSCAPE_HORIZONTAL;
            ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
            a(adaptType, layoutParams, dVar, dVar2);
            view.setLayoutParams(layoutParams);
        }

        protected abstract void a(AdaptType adaptType, ViewGroup.LayoutParams layoutParams, d dVar, d dVar2);
    }

    public static class b extends a {
        private float SS = 0.8f;
        private float ST = 0.9375f;
        private float SU = 1.1046f;

        @Override
        protected final void a(AdaptType adaptType, ViewGroup.LayoutParams layoutParams, d dVar, d dVar2) {
            float fQZ;
            float f;
            float fRa = dVar.ra();
            float fRa2 = dVar2.ra();
            float fQZ2 = dVar.qZ();
            float fQY = dVar.qY();
            com.kwad.sdk.core.e.c.d("FullHeightAdapter", "onAdaptVideo containerSize: " + fQY + ", " + fQZ2);
            int i = 1.SR[adaptType.ordinal()];
            if (i == 1 || i == 2) {
                if (fRa > fRa2) {
                    float fQY2 = dVar.qY();
                    float f2 = fQY2 / fRa2;
                    float f3 = fQZ2 / f2;
                    float f4 = this.SS;
                    if (f3 >= f4) {
                        f = fQY2;
                        fQZ = f2;
                    } else {
                        fQZ = fQZ2 / f4;
                        f = fQZ * fRa2;
                    }
                } else {
                    fQZ = dVar.qZ();
                    f = fRa2 * fQZ;
                    float f5 = fQY / f;
                    float f6 = this.ST;
                    if (f5 < f6) {
                        f = fQY / f6;
                        fQZ = f / fRa2;
                    }
                }
            } else if (i == 3 || i == 4) {
                f = fQZ2 * this.SU;
                fQZ = f / fRa2;
            } else {
                fQZ = -2.1474836E9f;
                f = -2.1474836E9f;
            }
            com.kwad.sdk.core.e.c.d("FullHeightAdapter", "onAdaptVideo result: " + f + ", " + fQZ);
            if (f == -2.1474836E9f || fQZ == -2.1474836E9f) {
                return;
            }
            int i2 = (int) fQZ;
            if (dVar2.getHeight() >= dVar2.getWidth()) {
                layoutParams.width = i2;
                layoutParams.height = (int) f;
            } else {
                layoutParams.height = i2;
                layoutParams.width = (int) f;
            }
        }
    }

    public static class c extends a {
        @Override
        protected final void a(AdaptType adaptType, ViewGroup.LayoutParams layoutParams, d dVar, d dVar2) {
            float fQY;
            float fQZ;
            float fRa = dVar.ra();
            float fRa2 = dVar2.ra();
            int i = 1.SR[adaptType.ordinal()];
            if (i == 1 || i == 2) {
                if (fRa >= fRa2) {
                    fQZ = dVar.qZ();
                    fQY = fQZ * fRa2;
                } else {
                    fQY = dVar.qY();
                    fQZ = fQY / fRa2;
                }
            } else if (i == 3 || i == 4) {
                fQY = dVar.qZ();
                fQZ = fQY / fRa2;
            } else {
                fQY = 0.0f;
                fQZ = -2.1474836E9f;
            }
            if (fQZ == -2.1474836E9f || fQY == -2.1474836E9f) {
                return;
            }
            int i2 = (int) fQZ;
            if (dVar2.getHeight() > dVar2.getWidth()) {
                layoutParams.width = i2;
                layoutParams.height = (int) fQY;
            } else {
                layoutParams.height = i2;
                layoutParams.width = (int) fQY;
            }
        }
    }

    static class d {
        float SV;
        float height;
        float width;

        public d(float f, float f2) {
            this.SV = -1.0f;
            this.width = f;
            this.height = f2;
            if (f <= 0.0f || f2 <= 0.0f) {
                return;
            }
            this.SV = f2 / f;
        }

        private boolean isValid() {
            return this.width > 0.0f && this.height > 0.0f;
        }

        public final float getHeight() {
            return this.height;
        }

        public final float getRatio() {
            return this.SV;
        }

        public final float getWidth() {
            return this.width;
        }

        public final float qY() {
            if (isValid()) {
                return Math.max(this.width, this.height);
            }
            return -1.0f;
        }

        public final float qZ() {
            if (isValid()) {
                return Math.min(this.width, this.height);
            }
            return -1.0f;
        }

        public final float ra() {
            if (!isValid()) {
                return -1.0f;
            }
            float f = this.height;
            float f2 = this.width;
            return f > f2 ? f / f2 : f2 / f;
        }

        public final String toString() {
            return "ViewSize{width=" + this.width + ", height=" + this.height + ", ratio=" + this.SV + '}';
        }
    }
}
