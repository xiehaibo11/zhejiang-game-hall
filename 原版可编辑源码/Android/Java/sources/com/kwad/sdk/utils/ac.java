package com.kwad.sdk.utils;

import android.content.Context;
import android.text.TextUtils;

public final class ac {

    public static class a {
        private int aIJ;
        private int aIK;
        private int aIL;
        private int aIM;
        private int mHeight;
        private int mWidth;

        public a() {
            this.mWidth = -1;
            this.mHeight = -1;
            this.aIJ = -1;
            this.aIK = -1;
            this.aIL = -1;
            this.aIM = -1;
        }

        public a(int i, int i2) {
            this.mWidth = -1;
            this.mHeight = -1;
            this.aIJ = -1;
            this.aIK = -1;
            this.aIL = -1;
            this.aIM = -1;
            this.mWidth = i;
            this.mHeight = i2;
        }

        public final int IJ() {
            return this.aIJ;
        }

        public final int IK() {
            return this.aIK;
        }

        public final int IL() {
            return this.aIL;
        }

        public final int IM() {
            return this.aIM;
        }

        public final void f(float f, float f2) {
            this.aIJ = (int) f;
            this.aIK = (int) f2;
        }

        public final void g(float f, float f2) {
            this.aIL = (int) f;
            this.aIM = (int) f2;
        }

        public final int getHeight() {
            return this.mHeight;
        }

        public final int getWidth() {
            return this.mWidth;
        }

        public final String toString() {
            return "TouchCoords{mWidth=" + this.mWidth + ", mHeight=" + this.mHeight + ", mDownX=" + this.aIJ + ", mDownY=" + this.aIK + ", mUpX=" + this.aIL + ", mUpY=" + this.aIM + '}';
        }

        public final void x(int i, int i2) {
            this.mWidth = i;
            this.mHeight = i2;
        }
    }

    public static String a(String str, a aVar) {
        return (TextUtils.isEmpty(str) || aVar == null) ? str : str.replace("__WIDTH__", dd(aVar.getWidth())).replace("__HEIGHT__", dd(aVar.getHeight())).replace("__DOWN_X__", dd(aVar.IJ())).replace("__DOWN_Y__", dd(aVar.IK())).replace("__UP_X__", dd(aVar.IL())).replace("__UP_Y__", dd(aVar.IM()));
    }

    public static String aj(Context context, String str) {
        return TextUtils.isEmpty(str) ? str : str.replace("__SCREEN_WIDTH__", String.valueOf(k.getScreenWidth(context))).replace("__SCREEN_HEIGHT__", String.valueOf(k.getScreenHeight(context))).replace("__DEVICE_WIDTH__", String.valueOf(k.bS(context))).replace("__DEVICE_HEIGHT__", String.valueOf(k.bT(context)));
    }

    public static String c(Context context, String str, boolean z) {
        return str.replace("__TS__", String.valueOf(bg.v(context, z)));
    }

    private static String dd(int i) {
        return i >= 0 ? String.valueOf(i) : "-999";
    }
}
