package com.ss.android.socialbase.downloader.exception;

public class BaseException extends java.lang.Exception implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.socialbase.downloader.exception.BaseException> CREATOR = null;
    private static final java.lang.String TAG = "[d-ex]:";
    private int errorCode;
    private java.lang.String errorMsg;
    private java.lang.String extraInfo;


    static {
            com.ss.android.socialbase.downloader.exception.BaseException$1 r0 = new com.ss.android.socialbase.downloader.exception.BaseException$1
            r0.<init>()
            com.ss.android.socialbase.downloader.exception.BaseException.CREATOR = r0
            return
    }

    public BaseException() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.extraInfo = r0
            return
    }

    public BaseException(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[d-ex]:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.String r0 = ""
            r2.extraInfo = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r2.errorMsg = r4
            r2.errorCode = r3
            return
    }

    public BaseException(int r3, java.lang.String r4, java.lang.Throwable r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[d-ex]:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r2.<init>(r0, r5)
            java.lang.String r5 = ""
            r2.extraInfo = r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r2.errorMsg = r4
            r2.errorCode = r3
            return
    }

    public BaseException(int r1, java.lang.Throwable r2) {
            r0 = this;
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getThrowableMsg(r2)
            r0.<init>(r1, r2)
            return
    }

    protected BaseException(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.extraInfo = r0
            r1.readFromParcel(r2)
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public int getErrorCode() {
            r1 = this;
            int r0 = r1.errorCode
            return r0
    }

    public java.lang.String getErrorMessage() {
            r1 = this;
            java.lang.String r0 = r1.errorMsg
            return r0
    }

    public java.lang.String getExtraInfo() {
            r1 = this;
            java.lang.String r0 = r1.extraInfo
            return r0
    }

    public void readFromParcel(android.os.Parcel r2) {
            r1 = this;
            int r0 = r2.readInt()
            r1.errorCode = r0
            java.lang.String r0 = r2.readString()
            r1.errorMsg = r0
            java.lang.String r2 = r2.readString()
            r1.extraInfo = r2
            return
    }

    public void setErrorMsg(java.lang.String r1) {
            r0 = this;
            r0.errorMsg = r1
            return
    }

    public void setExtraInfo(java.lang.String r1) {
            r0 = this;
            r0.extraInfo = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BaseException{errorCode="
            r0.append(r1)
            int r1 = r2.errorCode
            r0.append(r1)
            java.lang.String r1 = ", errorMsg='"
            r0.append(r1)
            java.lang.String r1 = r2.errorMsg
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            int r2 = r0.errorCode
            r1.writeInt(r2)
            java.lang.String r2 = r0.errorMsg
            r1.writeString(r2)
            java.lang.String r2 = r0.extraInfo
            r1.writeString(r2)
            return
    }
}
