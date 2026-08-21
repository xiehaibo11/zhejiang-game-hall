package com.sigmob.sdk.base.mta;

/* JADX INFO: loaded from: classes3.dex */
public final class PointEntitySigmobError extends PointEntitySigmob {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4909a;

    public static PointEntitySigmobError SigmobError(String str, int i, String str2) {
        PointEntitySigmobError pointEntitySigmobError = new PointEntitySigmobError();
        pointEntitySigmobError.setAc_type("9");
        pointEntitySigmobError.setCategory(str);
        pointEntitySigmobError.setError_code(String.valueOf(i));
        pointEntitySigmobError.setError_message(str2);
        return pointEntitySigmobError;
    }

    @Override // com.sigmob.sdk.base.mta.PointEntitySigmob
    public String getError_message() {
        return this.f4909a;
    }

    @Override // com.sigmob.sdk.base.mta.PointEntitySigmob
    public void setError_message(String str) {
        this.f4909a = str;
    }
}
