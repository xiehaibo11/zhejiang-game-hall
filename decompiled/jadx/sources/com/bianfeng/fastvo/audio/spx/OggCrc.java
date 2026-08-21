package com.bianfeng.fastvo.audio.spx;

import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class OggCrc {
    private static int[] crc_lookup = new int[256];

    static {
        for (int i = 0; i < crc_lookup.length; i++) {
            int i2 = i << 24;
            for (int i3 = 0; i3 < 8; i3++) {
                i2 = (Integer.MIN_VALUE & i2) != 0 ? (i2 << 1) ^ 79764919 : i2 << 1;
            }
            crc_lookup[i] = i2 & (-1);
        }
    }

    public static int checksum(int i, byte[] bArr, int i2, int i3) {
        int i4 = i3 + i2;
        while (i2 < i4) {
            i = crc_lookup[((i >>> 24) & 255) ^ (bArr[i2] & UByte.MAX_VALUE)] ^ (i << 8);
            i2++;
        }
        return i;
    }
}
