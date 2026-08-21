package com.kwad.sdk.crash.model.message;

public class DiskInfo implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final long serialVersionUID = -154725647775465930L;
    public double mDataAvailableGB;
    public double mDataTotalGB;
    public double mExternalStorageAvailableGB;
    public double mExternalStorageTotalGB;

    public DiskInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mDataTotalGB"
            double r0 = r3.optDouble(r0)
            r2.mDataTotalGB = r0
            java.lang.String r0 = "mDataAvailableGB"
            double r0 = r3.optDouble(r0)
            r2.mDataAvailableGB = r0
            java.lang.String r0 = "mExternalStorageTotalGB"
            double r0 = r3.optDouble(r0)
            r2.mExternalStorageTotalGB = r0
            java.lang.String r0 = "mExternalStorageAvailableGB"
            double r0 = r3.optDouble(r0)
            r2.mExternalStorageAvailableGB = r0
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            double r1 = r4.mDataTotalGB
            java.lang.String r3 = "mDataTotalGB"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            double r1 = r4.mDataAvailableGB
            java.lang.String r3 = "mDataAvailableGB"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            double r1 = r4.mExternalStorageTotalGB
            java.lang.String r3 = "mExternalStorageTotalGB"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            double r1 = r4.mExternalStorageAvailableGB
            java.lang.String r3 = "mExternalStorageAvailableGB"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "\t总存储空间: "
            r0.append(r1)
            double r1 = r3.mDataTotalGB
            r0.append(r1)
            java.lang.String r1 = " (GB)\n\t可用存储空间: "
            r0.append(r1)
            double r1 = r3.mDataAvailableGB
            r0.append(r1)
            java.lang.String r1 = " (GB)\n\t总SD卡空间: "
            r0.append(r1)
            double r1 = r3.mExternalStorageTotalGB
            r0.append(r1)
            java.lang.String r1 = " (GB)\n\t可用SD卡空间: "
            r0.append(r1)
            double r1 = r3.mExternalStorageAvailableGB
            r0.append(r1)
            java.lang.String r1 = " (GB)\n"
            r0.append(r1)
            r1 = 0
            java.lang.String r0 = r0.substring(r1)
            return r0
    }
}
