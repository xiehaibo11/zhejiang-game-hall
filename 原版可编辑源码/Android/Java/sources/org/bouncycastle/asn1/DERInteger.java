package org.bouncycastle.asn1;

import java.io.IOException;
import java.math.BigInteger;
import kotlin.UByte;

public class DERInteger extends ASN1Object {
    byte[] bytes;

    public DERInteger(int i) {
        this.bytes = BigInteger.valueOf(i).toByteArray();
    }

    public DERInteger(BigInteger bigInteger) {
        this.bytes = bigInteger.toByteArray();
    }

    public DERInteger(byte[] bArr) {
        this.bytes = bArr;
    }

    public static DERInteger getInstance(Object obj) {
        if (obj == null || (obj instanceof DERInteger)) {
            return (DERInteger) obj;
        }
        if (obj instanceof ASN1OctetString) {
            return new DERInteger(((ASN1OctetString) obj).getOctets());
        }
        if (obj instanceof ASN1TaggedObject) {
            return getInstance(((ASN1TaggedObject) obj).getObject());
        }
        throw new IllegalArgumentException("illegal object in getInstance: " + obj.getClass().getName());
    }

    public static DERInteger getInstance(ASN1TaggedObject aSN1TaggedObject, boolean z) {
        return getInstance(aSN1TaggedObject.getObject());
    }

    @Override
    boolean asn1Equals(DERObject dERObject) {
        if (!(dERObject instanceof DERInteger)) {
            return false;
        }
        DERInteger dERInteger = (DERInteger) dERObject;
        if (this.bytes.length != dERInteger.bytes.length) {
            return false;
        }
        int i = 0;
        while (true) {
            byte[] bArr = this.bytes;
            if (i == bArr.length) {
                return true;
            }
            if (bArr[i] != dERInteger.bytes[i]) {
                return false;
            }
            i++;
        }
    }

    @Override
    void encode(DEROutputStream dEROutputStream) throws IOException {
        dEROutputStream.writeEncoded(2, this.bytes);
    }

    public BigInteger getPositiveValue() {
        return new BigInteger(1, this.bytes);
    }

    public BigInteger getValue() {
        return new BigInteger(this.bytes);
    }

    @Override
    public int hashCode() {
        int i = 0;
        int i2 = 0;
        while (true) {
            byte[] bArr = this.bytes;
            if (i == bArr.length) {
                return i2;
            }
            i2 ^= (bArr[i] & UByte.MAX_VALUE) << (i % 4);
            i++;
        }
    }

    public String toString() {
        return getValue().toString();
    }
}
