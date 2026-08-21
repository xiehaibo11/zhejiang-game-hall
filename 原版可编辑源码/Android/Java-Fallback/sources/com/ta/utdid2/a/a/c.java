package com.ta.utdid2.a.a;

public class c {
    public static byte[] getBytes(int r3) {
            r0 = 4
            byte[] r0 = new byte[r0]
            int r1 = r3 % 256
            byte r1 = (byte) r1
            r2 = 3
            r0[r2] = r1
            int r3 = r3 >> 8
            int r1 = r3 % 256
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            int r3 = r3 >> 8
            int r1 = r3 % 256
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r3 = r3 >> 8
            int r3 = r3 % 256
            byte r3 = (byte) r3
            r1 = 0
            r0[r1] = r3
            return r0
    }
}
