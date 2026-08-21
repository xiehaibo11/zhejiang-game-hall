package com.bianfeng.fastvo.audio.spx;

public class OggCrc {
    private static int[] crc_lookup;

    static {
            r0 = 256(0x100, float:3.59E-43)
            int[] r0 = new int[r0]
            com.bianfeng.fastvo.audio.spx.OggCrc.crc_lookup = r0
            r0 = 0
            r1 = 0
        L8:
            int[] r2 = com.bianfeng.fastvo.audio.spx.OggCrc.crc_lookup
            int r2 = r2.length
            if (r1 >= r2) goto L2e
            int r2 = r1 << 24
            r3 = 0
        L10:
            r4 = 8
            if (r3 >= r4) goto L25
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            r4 = r4 & r2
            if (r4 == 0) goto L20
            int r2 = r2 << 1
            r4 = 79764919(0x4c11db7, float:4.540137E-36)
            r2 = r2 ^ r4
            goto L22
        L20:
            int r2 = r2 << 1
        L22:
            int r3 = r3 + 1
            goto L10
        L25:
            int[] r3 = com.bianfeng.fastvo.audio.spx.OggCrc.crc_lookup
            r2 = r2 & (-1)
            r3[r1] = r2
            int r1 = r1 + 1
            goto L8
        L2e:
            return
    }

    public OggCrc() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int checksum(int r3, byte[] r4, int r5, int r6) {
            int r6 = r6 + r5
        L1:
            if (r5 >= r6) goto L16
            int r0 = r3 << 8
            int[] r1 = com.bianfeng.fastvo.audio.spx.OggCrc.crc_lookup
            int r3 = r3 >>> 24
            r3 = r3 & 255(0xff, float:3.57E-43)
            r2 = r4[r5]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r3 = r3 ^ r2
            r3 = r1[r3]
            r3 = r3 ^ r0
            int r5 = r5 + 1
            goto L1
        L16:
            return r3
    }
}
