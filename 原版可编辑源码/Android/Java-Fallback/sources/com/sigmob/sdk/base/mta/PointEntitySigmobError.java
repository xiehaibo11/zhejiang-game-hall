package com.sigmob.sdk.base.mta;

public final class PointEntitySigmobError extends com.sigmob.sdk.base.mta.PointEntitySigmob {
    private java.lang.String a;

    public PointEntitySigmobError() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.sigmob.sdk.base.mta.PointEntitySigmobError SigmobError(java.lang.String r2, int r3, java.lang.String r4) {
            com.sigmob.sdk.base.mta.PointEntitySigmobError r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobError
            r0.<init>()
            java.lang.String r1 = "9"
            r0.setAc_type(r1)
            r0.setCategory(r2)
            java.lang.String r2 = java.lang.String.valueOf(r3)
            r0.setError_code(r2)
            r0.setError_message(r4)
            return r0
    }

    @Override
    public java.lang.String getError_message() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    public void setError_message(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
