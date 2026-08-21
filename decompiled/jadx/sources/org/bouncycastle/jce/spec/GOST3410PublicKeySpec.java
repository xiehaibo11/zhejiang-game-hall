package org.bouncycastle.jce.spec;

import java.math.BigInteger;
import java.security.spec.KeySpec;

/* JADX INFO: loaded from: classes4.dex */
public class GOST3410PublicKeySpec implements KeySpec {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private BigInteger f8425a;
    private BigInteger p;
    private BigInteger q;
    private BigInteger y;

    public GOST3410PublicKeySpec(BigInteger bigInteger, BigInteger bigInteger2, BigInteger bigInteger3, BigInteger bigInteger4) {
        this.y = bigInteger;
        this.p = bigInteger2;
        this.q = bigInteger3;
        this.f8425a = bigInteger4;
    }

    public BigInteger getA() {
        return this.f8425a;
    }

    public BigInteger getP() {
        return this.p;
    }

    public BigInteger getQ() {
        return this.q;
    }

    public BigInteger getY() {
        return this.y;
    }
}
