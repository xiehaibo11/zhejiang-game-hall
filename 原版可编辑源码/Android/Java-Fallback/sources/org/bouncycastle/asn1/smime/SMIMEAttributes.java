package org.bouncycastle.asn1.smime;

public interface SMIMEAttributes {
    public static final org.bouncycastle.asn1.DERObjectIdentifier encrypKeyPref = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier smimeCapabilities = null;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_smimeCapabilities
            org.bouncycastle.asn1.smime.SMIMEAttributes.smimeCapabilities = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_aa_encrypKeyPref
            org.bouncycastle.asn1.smime.SMIMEAttributes.encrypKeyPref = r0
            return
    }
}
