package org.bouncycastle.util.encoders;

public class BufferedEncoder {
    protected byte[] buf;
    protected int bufOff;
    protected org.bouncycastle.util.encoders.Translator translator;

    public BufferedEncoder(org.bouncycastle.util.encoders.Translator r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.translator = r1
            int r1 = r1.getEncodedBlockSize()
            int r1 = r2 % r1
            if (r1 != 0) goto L15
            byte[] r1 = new byte[r2]
            r0.buf = r1
            r1 = 0
            r0.bufOff = r1
            return
        L15:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "buffer size not multiple of input block size"
            r1.<init>(r2)
            throw r1
    }

    public int processByte(byte r8, byte[] r9, int r10) {
            r7 = this;
            byte[] r1 = r7.buf
            int r0 = r7.bufOff
            int r2 = r0 + 1
            r7.bufOff = r2
            r1[r0] = r8
            int r8 = r1.length
            r6 = 0
            if (r2 != r8) goto L1b
            org.bouncycastle.util.encoders.Translator r0 = r7.translator
            r2 = 0
            int r3 = r1.length
            r4 = r9
            r5 = r10
            int r8 = r0.encode(r1, r2, r3, r4, r5)
            r7.bufOff = r6
            r6 = r8
        L1b:
            return r6
    }

    public int processBytes(byte[] r11, int r12, int r13, byte[] r14, int r15) {
            r10 = this;
            if (r13 < 0) goto L45
            byte[] r0 = r10.buf
            int r1 = r0.length
            int r2 = r10.bufOff
            int r1 = r1 - r2
            r3 = 0
            if (r13 <= r1) goto L36
            java.lang.System.arraycopy(r11, r12, r0, r2, r1)
            org.bouncycastle.util.encoders.Translator r4 = r10.translator
            byte[] r5 = r10.buf
            r6 = 0
            int r7 = r5.length
            r8 = r14
            r9 = r15
            int r0 = r4.encode(r5, r6, r7, r8, r9)
            int r0 = r0 + r3
            r10.bufOff = r3
            int r13 = r13 - r1
            int r12 = r12 + r1
            int r7 = r15 + r0
            byte[] r15 = r10.buf
            int r15 = r15.length
            int r15 = r13 % r15
            int r15 = r13 - r15
            org.bouncycastle.util.encoders.Translator r2 = r10.translator
            r3 = r11
            r4 = r12
            r5 = r15
            r6 = r14
            int r14 = r2.encode(r3, r4, r5, r6, r7)
            int r3 = r0 + r14
            int r13 = r13 - r15
            int r12 = r12 + r15
        L36:
            if (r13 == 0) goto L44
            byte[] r14 = r10.buf
            int r15 = r10.bufOff
            java.lang.System.arraycopy(r11, r12, r14, r15, r13)
            int r11 = r10.bufOff
            int r11 = r11 + r13
            r10.bufOff = r11
        L44:
            return r3
        L45:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r12 = "Can't have a negative input length!"
            r11.<init>(r12)
            throw r11
    }
}
