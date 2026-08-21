package com.sigmob.sdk.base.mta;

public final class PointEntitySigmobError extends PointEntitySigmob {
    private String a;

    public static PointEntitySigmobError SigmobError(String str, int i, String str2) {
        PointEntitySigmobError pointEntitySigmobError = new PointEntitySigmobError();
        pointEntitySigmobError.setAc_type("9");
        pointEntitySigmobError.setCategory(str);
        pointEntitySigmobError.setError_code(String.valueOf(i));
        pointEntitySigmobError.setError_message(str2);
        return pointEntitySigmobError;
    }

    @Override
    public String getError_message() {
        return this.a;
    }

    @Override
    public void setError_message(String str) {
        this.a = str;
    }
}
