package com.bianfeng.fastvo.audio.spx;

public class Speex {
    private static final int DEFAULT_COMPRESSION = 4;
    public static final int QUALITY_11KBPS = 6;
    public static final int QUALITY_15KBPS = 8;
    public static final int QUALITY_4KBPS = 1;
    public static final int QUALITY_6KBPS = 2;
    public static final int QUALITY_8KBPS = 4;
    private static boolean isOpened;
    int quality;

    static {
            java.lang.String r0 = "loadLibrary fastvo.so"
            com.bianfeng.fastvo.util.LogUtil.d(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.String r0 = "fastvo"
            java.lang.System.loadLibrary(r0)     // Catch: java.lang.Throwable -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            return
    }

    protected Speex() {
            r1 = this;
            r1.<init>()
            r0 = 4
            r1.quality = r0
            return
    }

    public native void close();

    public native int decode(byte[] r1, short[] r2, int r3);

    public native int encode(short[] r1, int r2, byte[] r3, int r4);

    public native int getFrameSize();

    public int getQuality() {
            r1 = this;
            int r0 = r1.quality
            return r0
    }

    public void init() {
            r1 = this;
            r0 = 4
            r1.open(r0)
            return
    }

    public void init(int r2) {
            r1 = this;
            r1.quality = r2
            boolean r0 = com.bianfeng.fastvo.audio.spx.Speex.isOpened
            if (r0 == 0) goto L9
            r1.close()
        L9:
            r1.open(r2)
            r2 = 1
            com.bianfeng.fastvo.audio.spx.Speex.isOpened = r2
            return
    }

    public native int open(int r1);
}
