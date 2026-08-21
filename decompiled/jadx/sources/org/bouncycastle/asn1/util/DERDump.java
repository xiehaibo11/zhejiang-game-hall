package org.bouncycastle.asn1.util;

import org.bouncycastle.asn1.DEREncodable;
import org.bouncycastle.asn1.DERObject;

/* JADX INFO: loaded from: classes4.dex */
public class DERDump extends ASN1Dump {
    public static String dumpAsString(DEREncodable dEREncodable) {
        return _dumpAsString("", dEREncodable.getDERObject());
    }

    public static String dumpAsString(DERObject dERObject) {
        return _dumpAsString("", dERObject);
    }
}
