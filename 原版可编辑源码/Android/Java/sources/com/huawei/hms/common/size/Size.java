package com.huawei.hms.common.size;

public class Size {
    private final int height;
    private final int width;

    public Size(int i, int i2) {
        this.width = i;
        this.height = i2;
    }

    public static Size parseSize(String str) {
        try {
            int iIndexOf = str.indexOf("x");
            if (iIndexOf < 0) {
                iIndexOf = str.indexOf("*");
            }
            return new Size(Integer.parseInt(str.substring(0, iIndexOf)), Integer.parseInt(str.substring(iIndexOf + 1)));
        } catch (Exception unused) {
            throw new IllegalArgumentException("Size parses failed");
        }
    }

    public final boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Size)) {
            return false;
        }
        Size size = (Size) obj;
        return this.width == size.width && this.height == size.height;
    }

    public final int getHeight() {
        return this.height;
    }

    public final int getWidth() {
        return this.width;
    }

    public final String toString() {
        return "Width is " + this.width + " Height is " + this.height;
    }
}
