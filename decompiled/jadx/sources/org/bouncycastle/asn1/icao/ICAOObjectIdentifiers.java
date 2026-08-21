package org.bouncycastle.asn1.icao;

import org.bouncycastle.asn1.DERObjectIdentifier;

/* JADX INFO: loaded from: classes4.dex */
public interface ICAOObjectIdentifiers {
    public static final String id_icao = "1.3.27";
    public static final DERObjectIdentifier id_icao_mrtd = new DERObjectIdentifier("1.3.27.1");
    public static final DERObjectIdentifier id_icao_mrtd_security = new DERObjectIdentifier(id_icao_mrtd + ".1");
    public static final DERObjectIdentifier id_icao_ldsSecurityObject = new DERObjectIdentifier(id_icao_mrtd_security + ".1");
}
