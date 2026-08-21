package org.bouncycastle.asn1.x509;

import org.bouncycastle.asn1.ASN1Choice;
import org.bouncycastle.asn1.ASN1Encodable;
import org.bouncycastle.asn1.ASN1OctetString;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.ASN1TaggedObject;
import org.bouncycastle.asn1.DEREncodable;
import org.bouncycastle.asn1.DERIA5String;
import org.bouncycastle.asn1.DERObject;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.DEROctetString;
import org.bouncycastle.asn1.DERTaggedObject;
import org.bouncycastle.util.IPAddress;
import org.bouncycastle.util.Strings;

public class GeneralName extends ASN1Encodable implements ASN1Choice {
    public static final int dNSName = 2;
    public static final int directoryName = 4;
    public static final int ediPartyName = 5;
    public static final int iPAddress = 7;
    public static final int otherName = 0;
    public static final int registeredID = 8;
    public static final int rfc822Name = 1;
    public static final int uniformResourceIdentifier = 6;
    public static final int x400Address = 3;
    DEREncodable obj;
    int tag;

    public GeneralName(int i, String str) {
        DEREncodable dERIA5String;
        this.tag = i;
        if (i == 1 || i == 2 || i == 6) {
            dERIA5String = new DERIA5String(str);
        } else if (i == 8) {
            dERIA5String = new DERObjectIdentifier(str);
        } else if (i == 4) {
            dERIA5String = new X509Name(str);
        } else {
            if (i != 7) {
                throw new IllegalArgumentException("can't process String for tag: " + i);
            }
            if (!IPAddress.isValid(str)) {
                throw new IllegalArgumentException("IP Address is invalid");
            }
            dERIA5String = new DEROctetString(Strings.toUTF8ByteArray(str));
        }
        this.obj = dERIA5String;
    }

    public GeneralName(int i, ASN1Encodable aSN1Encodable) {
        this.obj = aSN1Encodable;
        this.tag = i;
    }

    public GeneralName(DERObject dERObject, int i) {
        this.obj = dERObject;
        this.tag = i;
    }

    public GeneralName(X509Name x509Name) {
        this.obj = x509Name;
        this.tag = 4;
    }

    public static GeneralName getInstance(Object obj) {
        if (obj == null || (obj instanceof GeneralName)) {
            return (GeneralName) obj;
        }
        if (obj instanceof ASN1TaggedObject) {
            ASN1TaggedObject aSN1TaggedObject = (ASN1TaggedObject) obj;
            int tagNo = aSN1TaggedObject.getTagNo();
            switch (tagNo) {
                case 0:
                    return new GeneralName(tagNo, ASN1Sequence.getInstance(aSN1TaggedObject, false));
                case 1:
                    return new GeneralName(tagNo, DERIA5String.getInstance(aSN1TaggedObject, false));
                case 2:
                    return new GeneralName(tagNo, DERIA5String.getInstance(aSN1TaggedObject, false));
                case 3:
                    throw new IllegalArgumentException("unknown tag: " + tagNo);
                case 4:
                    return new GeneralName(tagNo, ASN1Sequence.getInstance(aSN1TaggedObject, true));
                case 5:
                    return new GeneralName(tagNo, ASN1Sequence.getInstance(aSN1TaggedObject, false));
                case 6:
                    return new GeneralName(tagNo, DERIA5String.getInstance(aSN1TaggedObject, false));
                case 7:
                    return new GeneralName(tagNo, ASN1OctetString.getInstance(aSN1TaggedObject, false));
                case 8:
                    return new GeneralName(tagNo, DERObjectIdentifier.getInstance(aSN1TaggedObject, false));
            }
        }
        throw new IllegalArgumentException("unknown object in getInstance: " + obj.getClass().getName());
    }

    public static GeneralName getInstance(ASN1TaggedObject aSN1TaggedObject, boolean z) {
        return getInstance(ASN1TaggedObject.getInstance(aSN1TaggedObject, true));
    }

    public DEREncodable getName() {
        return this.obj;
    }

    public int getTagNo() {
        return this.tag;
    }

    @Override
    public DERObject toASN1Object() {
        return this.tag == 4 ? new DERTaggedObject(true, this.tag, this.obj) : new DERTaggedObject(false, this.tag, this.obj);
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x002f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String toString() {
        String string;
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append(this.tag);
        stringBuffer.append(": ");
        int i = this.tag;
        if (i == 1 || i == 2) {
            string = DERIA5String.getInstance(this.obj).getString();
        } else if (i == 4) {
            string = X509Name.getInstance(this.obj).toString();
        } else if (i != 6) {
            string = this.obj.toString();
        }
        stringBuffer.append(string);
        return stringBuffer.toString();
    }
}
