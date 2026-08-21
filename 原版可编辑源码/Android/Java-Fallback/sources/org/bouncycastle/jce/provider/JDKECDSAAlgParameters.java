package org.bouncycastle.jce.provider;

public abstract class JDKECDSAAlgParameters extends java.security.AlgorithmParametersSpi {

    public static class SigAlgParameters extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        public SigAlgParameters() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected byte[] engineGetEncoded() throws java.io.IOException {
                r1 = this;
                java.lang.String r0 = "ASN.1"
                byte[] r0 = r1.engineGetEncoded(r0)
                return r0
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r2) throws java.io.IOException {
                r1 = this;
                java.lang.String r0 = "ASN.1"
                if (r2 != 0) goto L9
                byte[] r2 = r1.engineGetEncoded(r0)
                return r2
            L9:
                boolean r2 = r2.equals(r0)
                if (r2 == 0) goto L1f
                org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
                java.lang.String r0 = "RAW"
                byte[] r0 = r1.engineGetEncoded(r0)
                r2.<init>(r0)
                byte[] r2 = r2.getEncoded()
                return r2
            L1f:
                r2 = 0
                return r2
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to ECDSA parameters object."
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r1) throws java.io.IOException {
                r0 = this;
                return
        }

        @Override
        protected void engineInit(byte[] r1, java.lang.String r2) throws java.io.IOException {
                r0 = this;
                java.io.IOException r1 = new java.io.IOException
                java.lang.String r2 = "Unknown parameters format in IV parameters object"
                r1.<init>(r2)
                throw r1
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "ECDSA Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to ECDSA parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public JDKECDSAAlgParameters() {
            r0 = this;
            r0.<init>()
            return
    }
}
