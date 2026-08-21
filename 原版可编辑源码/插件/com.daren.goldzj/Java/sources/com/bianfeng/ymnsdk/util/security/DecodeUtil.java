package com.bianfeng.ymnsdk.util.security;

public class DecodeUtil {
    public byte[] decode(byte[] bArr) {
        for (int i = 0; i < bArr.length; i++) {
            byte b = bArr[i];
            bArr[i] = (byte) (((b & 32) >> 4) | (b & 221) | ((b & 2) << 4));
        }
        return bArr;
    }
}
