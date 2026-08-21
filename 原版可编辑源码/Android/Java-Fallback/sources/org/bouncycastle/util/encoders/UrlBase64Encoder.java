package org.bouncycastle.util.encoders;

public class UrlBase64Encoder extends org.bouncycastle.util.encoders.Base64Encoder {
    public UrlBase64Encoder() {
            r3 = this;
            r3.<init>()
            byte[] r0 = r3.encodingTable
            byte[] r1 = r3.encodingTable
            int r1 = r1.length
            int r1 = r1 + (-2)
            r2 = 45
            r0[r1] = r2
            byte[] r0 = r3.encodingTable
            byte[] r1 = r3.encodingTable
            int r1 = r1.length
            int r1 = r1 + (-1)
            r2 = 95
            r0[r1] = r2
            r0 = 46
            r3.padding = r0
            r3.initialiseDecodingTable()
            return
    }
}
