package org.bouncycastle.jce.interfaces;

public interface PKCS12BagAttributeCarrier {
    org.bouncycastle.asn1.DEREncodable getBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r1);

    java.util.Enumeration getBagAttributeKeys();

    void setBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DEREncodable r2);
}
