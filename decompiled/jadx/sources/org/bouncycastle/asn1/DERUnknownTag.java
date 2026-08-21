package org.bouncycastle.asn1;

import java.io.IOException;
import org.bouncycastle.util.Arrays;

/* JADX INFO: loaded from: classes4.dex */
public class DERUnknownTag extends DERObject {
    byte[] data;
    int tag;

    public DERUnknownTag(int i, byte[] bArr) {
        this.tag = i;
        this.data = bArr;
    }

    @Override // org.bouncycastle.asn1.DERObject
    void encode(DEROutputStream dEROutputStream) throws IOException {
        dEROutputStream.writeEncoded(this.tag, this.data);
    }

    @Override // org.bouncycastle.asn1.DERObject, org.bouncycastle.asn1.ASN1Encodable
    public boolean equals(Object obj) {
        if (!(obj instanceof DERUnknownTag)) {
            return false;
        }
        DERUnknownTag dERUnknownTag = (DERUnknownTag) obj;
        return this.tag == dERUnknownTag.tag && Arrays.areEqual(this.data, dERUnknownTag.data);
    }

    public byte[] getData() {
        return this.data;
    }

    public int getTag() {
        return this.tag;
    }

    @Override // org.bouncycastle.asn1.DERObject, org.bouncycastle.asn1.ASN1Encodable
    public int hashCode() {
        return this.tag ^ Arrays.hashCode(this.data);
    }
}
