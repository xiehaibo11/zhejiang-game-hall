package org.bouncycastle.asn1;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.Enumeration;
import java.util.Vector;
import kotlin.UByte;
import org.bouncycastle.util.encoders.Hex;

/* JADX INFO: loaded from: classes4.dex */
public abstract class ASN1OctetString extends ASN1Object implements ASN1OctetStringParser {
    byte[] string;

    public ASN1OctetString(DEREncodable dEREncodable) {
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            DEROutputStream dEROutputStream = new DEROutputStream(byteArrayOutputStream);
            dEROutputStream.writeObject(dEREncodable);
            dEROutputStream.close();
            this.string = byteArrayOutputStream.toByteArray();
        } catch (IOException e) {
            throw new IllegalArgumentException("Error processing object : " + e.toString());
        }
    }

    public ASN1OctetString(byte[] bArr) {
        if (bArr == null) {
            throw new NullPointerException("string cannot be null");
        }
        this.string = bArr;
    }

    public static ASN1OctetString getInstance(Object obj) {
        if (obj == null || (obj instanceof ASN1OctetString)) {
            return (ASN1OctetString) obj;
        }
        if (obj instanceof ASN1TaggedObject) {
            return getInstance(((ASN1TaggedObject) obj).getObject());
        }
        if (!(obj instanceof ASN1Sequence)) {
            throw new IllegalArgumentException("illegal object in getInstance: " + obj.getClass().getName());
        }
        Vector vector = new Vector();
        Enumeration objects = ((ASN1Sequence) obj).getObjects();
        while (objects.hasMoreElements()) {
            vector.addElement(objects.nextElement());
        }
        return new BERConstructedOctetString(vector);
    }

    public static ASN1OctetString getInstance(ASN1TaggedObject aSN1TaggedObject, boolean z) {
        return getInstance(aSN1TaggedObject.getObject());
    }

    @Override // org.bouncycastle.asn1.ASN1Object
    boolean asn1Equals(DERObject dERObject) {
        if (!(dERObject instanceof ASN1OctetString)) {
            return false;
        }
        byte[] bArr = ((ASN1OctetString) dERObject).string;
        byte[] bArr2 = this.string;
        if (bArr.length != bArr2.length) {
            return false;
        }
        for (int i = 0; i != bArr.length; i++) {
            if (bArr[i] != bArr2[i]) {
                return false;
            }
        }
        return true;
    }

    @Override // org.bouncycastle.asn1.ASN1Object, org.bouncycastle.asn1.DERObject
    abstract void encode(DEROutputStream dEROutputStream) throws IOException;

    @Override // org.bouncycastle.asn1.ASN1OctetStringParser
    public InputStream getOctetStream() {
        return new ByteArrayInputStream(this.string);
    }

    public byte[] getOctets() {
        return this.string;
    }

    @Override // org.bouncycastle.asn1.ASN1Object, org.bouncycastle.asn1.DERObject, org.bouncycastle.asn1.ASN1Encodable
    public int hashCode() {
        byte[] octets = getOctets();
        int i = 0;
        for (int i2 = 0; i2 != octets.length; i2++) {
            i ^= (octets[i2] & UByte.MAX_VALUE) << (i2 % 4);
        }
        return i;
    }

    public ASN1OctetStringParser parser() {
        return this;
    }

    public String toString() {
        return "#" + new String(Hex.encode(this.string));
    }
}
