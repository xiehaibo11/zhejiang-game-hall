package org.bouncycastle.asn1;

import java.io.IOException;
import kotlin.jvm.internal.ByteCompanionObject;
import org.bouncycastle.util.Arrays;

public class DERApplicationSpecific extends ASN1Object {
    private final boolean isConstructed;
    private final byte[] octets;
    private final int tag;

    public DERApplicationSpecific(int i, DEREncodable dEREncodable) throws IOException {
        this(true, i, dEREncodable);
    }

    public DERApplicationSpecific(int i, byte[] bArr) {
        this(false, i, bArr);
    }

    public DERApplicationSpecific(boolean z, int i, DEREncodable dEREncodable) throws IOException {
        if (i >= 31) {
            throw new IOException("unsupported tag number");
        }
        byte[] dEREncoded = dEREncodable.getDERObject().getDEREncoded();
        this.isConstructed = z;
        this.tag = i;
        if (z) {
            this.octets = dEREncoded;
            return;
        }
        int lengthOfLength = getLengthOfLength(dEREncoded);
        int length = dEREncoded.length - lengthOfLength;
        byte[] bArr = new byte[length];
        System.arraycopy(dEREncoded, lengthOfLength, bArr, 0, length);
        this.octets = bArr;
    }

    DERApplicationSpecific(boolean z, int i, byte[] bArr) {
        this.isConstructed = z;
        this.tag = i;
        this.octets = bArr;
    }

    private int getLengthOfLength(byte[] bArr) {
        int i = 2;
        while ((bArr[i - 1] & ByteCompanionObject.MIN_VALUE) != 0) {
            i++;
        }
        return i;
    }

    @Override
    boolean asn1Equals(DERObject dERObject) {
        if (!(dERObject instanceof DERApplicationSpecific)) {
            return false;
        }
        DERApplicationSpecific dERApplicationSpecific = (DERApplicationSpecific) dERObject;
        return this.isConstructed == dERApplicationSpecific.isConstructed && this.tag == dERApplicationSpecific.tag && Arrays.areEqual(this.octets, dERApplicationSpecific.octets);
    }

    @Override
    void encode(DEROutputStream dEROutputStream) throws IOException {
        int i = this.isConstructed ? 96 : 64;
        int i2 = this.tag;
        if (i2 < 31) {
            dEROutputStream.writeEncoded(i | i2, this.octets);
        } else {
            dEROutputStream.writeEncodedHigh(i | 31, i2, this.octets);
        }
    }

    public int getApplicationTag() {
        return this.tag;
    }

    public byte[] getContents() {
        return this.octets;
    }

    public DERObject getObject() throws IOException {
        return new ASN1InputStream(getContents()).readObject();
    }

    public DERObject getObject(int i) throws IOException {
        if (this.tag >= 31) {
            throw new IOException("unsupported tag number");
        }
        byte[] encoded = getEncoded();
        encoded[0] = (byte) i;
        return new ASN1InputStream(encoded).readObject();
    }

    @Override
    public int hashCode() {
        boolean z = this.isConstructed;
        return ((z ? 1 : 0) ^ this.tag) ^ Arrays.hashCode(this.octets);
    }

    public boolean isConstructed() {
        return this.isConstructed;
    }
}
