package org.bouncycastle.asn1.isismtt;

import org.bouncycastle.asn1.DERObjectIdentifier;

/* JADX INFO: loaded from: classes4.dex */
public interface ISISMTTObjectIdentifiers {
    public static final DERObjectIdentifier id_isismtt = new DERObjectIdentifier("1.3.36.8");
    public static final DERObjectIdentifier id_isismtt_cp = new DERObjectIdentifier(id_isismtt + ".1");
    public static final DERObjectIdentifier id_isismtt_cp_accredited = new DERObjectIdentifier(id_isismtt_cp + ".1");
    public static final DERObjectIdentifier id_isismtt_at = new DERObjectIdentifier(id_isismtt + ".3");
    public static final DERObjectIdentifier id_isismtt_at_dateOfCertGen = new DERObjectIdentifier(id_isismtt_at + ".1");
    public static final DERObjectIdentifier id_isismtt_at_procuration = new DERObjectIdentifier(id_isismtt_at + ".2");
    public static final DERObjectIdentifier id_isismtt_at_admission = new DERObjectIdentifier(id_isismtt_at + ".3");
    public static final DERObjectIdentifier id_isismtt_at_monetaryLimit = new DERObjectIdentifier(id_isismtt_at + ".4");
    public static final DERObjectIdentifier id_isismtt_at_declarationOfMajority = new DERObjectIdentifier(id_isismtt_at + ".5");
    public static final DERObjectIdentifier id_isismtt_at_iCCSN = new DERObjectIdentifier(id_isismtt_at + ".6");
    public static final DERObjectIdentifier id_isismtt_at_PKReference = new DERObjectIdentifier(id_isismtt_at + ".7");
    public static final DERObjectIdentifier id_isismtt_at_restriction = new DERObjectIdentifier(id_isismtt_at + ".8");
    public static final DERObjectIdentifier id_isismtt_at_retrieveIfAllowed = new DERObjectIdentifier(id_isismtt_at + ".9");
    public static final DERObjectIdentifier id_isismtt_at_requestedCertificate = new DERObjectIdentifier(id_isismtt_at + ".10");
    public static final DERObjectIdentifier id_isismtt_at_namingAuthorities = new DERObjectIdentifier(id_isismtt_at + ".11");
    public static final DERObjectIdentifier id_isismtt_at_certInDirSince = new DERObjectIdentifier(id_isismtt_at + ".12");
    public static final DERObjectIdentifier id_isismtt_at_certHash = new DERObjectIdentifier(id_isismtt_at + ".13");
    public static final DERObjectIdentifier id_isismtt_at_nameAtBirth = new DERObjectIdentifier(id_isismtt_at + ".14");
    public static final DERObjectIdentifier id_isismtt_at_additionalInformation = new DERObjectIdentifier(id_isismtt_at + ".15");
    public static final DERObjectIdentifier id_isismtt_at_liabilityLimitationFlag = new DERObjectIdentifier("0.2.262.1.10.12.0");
}
