package org.bouncycastle.asn1.x509;

import org.bouncycastle.asn1.ASN1Encodable;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.ASN1TaggedObject;
import org.bouncycastle.asn1.DERObject;
import org.bouncycastle.asn1.DERSequence;

/* JADX INFO: loaded from: classes4.dex */
public class GeneralNames extends ASN1Encodable {
    ASN1Sequence seq;

    public GeneralNames(ASN1Sequence aSN1Sequence) {
        this.seq = aSN1Sequence;
    }

    public GeneralNames(GeneralName generalName) {
        this.seq = new DERSequence(generalName);
    }

    public static GeneralNames getInstance(Object obj) {
        if (obj == null || (obj instanceof GeneralNames)) {
            return (GeneralNames) obj;
        }
        if (obj instanceof ASN1Sequence) {
            return new GeneralNames((ASN1Sequence) obj);
        }
        throw new IllegalArgumentException("illegal object in getInstance: " + obj.getClass().getName());
    }

    public static GeneralNames getInstance(ASN1TaggedObject aSN1TaggedObject, boolean z) {
        return getInstance(ASN1Sequence.getInstance(aSN1TaggedObject, z));
    }

    public GeneralName[] getNames() {
        GeneralName[] generalNameArr = new GeneralName[this.seq.size()];
        for (int i = 0; i != this.seq.size(); i++) {
            generalNameArr[i] = GeneralName.getInstance(this.seq.getObjectAt(i));
        }
        return generalNameArr;
    }

    @Override // org.bouncycastle.asn1.ASN1Encodable
    public DERObject toASN1Object() {
        return this.seq;
    }

    public String toString() {
        StringBuffer stringBuffer = new StringBuffer();
        String property = System.getProperty("line.separator");
        GeneralName[] names = getNames();
        stringBuffer.append("GeneralNames:");
        stringBuffer.append(property);
        for (int i = 0; i != names.length; i++) {
            stringBuffer.append("    ");
            stringBuffer.append(names[i]);
            stringBuffer.append(property);
        }
        return stringBuffer.toString();
    }
}
