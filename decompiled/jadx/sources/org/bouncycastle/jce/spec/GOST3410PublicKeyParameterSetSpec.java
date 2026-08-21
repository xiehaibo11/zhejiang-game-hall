package org.bouncycastle.jce.spec;

import java.math.BigInteger;

/* JADX INFO: loaded from: classes4.dex */
public class GOST3410PublicKeyParameterSetSpec {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private BigInteger f8424a;
    private BigInteger p;
    private BigInteger q;

    public GOST3410PublicKeyParameterSetSpec(BigInteger bigInteger, BigInteger bigInteger2, BigInteger bigInteger3) {
        this.p = bigInteger;
        this.q = bigInteger2;
        this.f8424a = bigInteger3;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof GOST3410PublicKeyParameterSetSpec)) {
            return false;
        }
        GOST3410PublicKeyParameterSetSpec gOST3410PublicKeyParameterSetSpec = (GOST3410PublicKeyParameterSetSpec) obj;
        return this.f8424a.equals(gOST3410PublicKeyParameterSetSpec.f8424a) && this.p.equals(gOST3410PublicKeyParameterSetSpec.p) && this.q.equals(gOST3410PublicKeyParameterSetSpec.q);
    }

    public BigInteger getA() {
        return this.f8424a;
    }

    public BigInteger getP() {
        return this.p;
    }

    public BigInteger getQ() {
        return this.q;
    }

    public int hashCode() {
        return (this.f8424a.hashCode() ^ this.p.hashCode()) ^ this.q.hashCode();
    }
}
