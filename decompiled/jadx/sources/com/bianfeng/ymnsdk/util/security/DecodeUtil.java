package com.bianfeng.ymnsdk.util.security;

/* JADX INFO: loaded from: classes.dex */
public class DecodeUtil {
    public byte[] decode(byte[] in) {
        for (int i = 0; i < in.length; i++) {
            byte b = in[i];
            int empty = b & 221;
            int l2 = (b & 2) << 4;
            int h6 = (b & 32) >> 4;
            in[i] = (byte) (empty | l2 | h6);
        }
        return in;
    }
}
