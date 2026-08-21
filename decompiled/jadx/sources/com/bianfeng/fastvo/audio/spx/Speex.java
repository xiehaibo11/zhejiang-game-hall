package com.bianfeng.fastvo.audio.spx;

import com.bianfeng.fastvo.util.LogUtil;

/* JADX INFO: loaded from: classes.dex */
public class Speex {
    private static final int DEFAULT_COMPRESSION = 4;
    public static final int QUALITY_11KBPS = 6;
    public static final int QUALITY_15KBPS = 8;
    public static final int QUALITY_4KBPS = 1;
    public static final int QUALITY_6KBPS = 2;
    public static final int QUALITY_8KBPS = 4;
    private static boolean isOpened;
    int quality = 4;

    public native void close();

    public native int decode(byte[] bArr, short[] sArr, int i);

    public native int encode(short[] sArr, int i, byte[] bArr, int i2);

    public native int getFrameSize();

    public native int open(int i);

    static {
        try {
            LogUtil.d("loadLibrary fastvo.so");
            System.loadLibrary("fastvo");
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    protected Speex() {
    }

    public void init() {
        open(4);
    }

    public void init(int i) {
        this.quality = i;
        if (isOpened) {
            close();
        }
        open(i);
        isOpened = true;
    }

    public int getQuality() {
        return this.quality;
    }
}
