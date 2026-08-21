package com.ss.android.socialbase.downloader.exception;

import android.os.Parcel;
import android.os.Parcelable;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;

public class BaseException extends Exception implements Parcelable {
    public static final Parcelable.Creator<BaseException> CREATOR = new Parcelable.Creator<BaseException>() {
        @Override
        public BaseException createFromParcel(Parcel parcel) {
            return new BaseException(parcel);
        }

        @Override
        public BaseException[] newArray(int i) {
            return new BaseException[i];
        }
    };
    private static final String TAG = "[d-ex]:";
    private int errorCode;
    private String errorMsg;
    private String extraInfo;

    @Override
    public int describeContents() {
        return 0;
    }

    public BaseException() {
        this.extraInfo = "";
    }

    public BaseException(int i, String str) {
        super(TAG + str);
        this.extraInfo = "";
        this.errorMsg = TAG + str;
        this.errorCode = i;
    }

    public void setErrorMsg(String str) {
        this.errorMsg = str;
    }

    public BaseException(int i, Throwable th) {
        this(i, DownloadUtils.getThrowableMsg(th));
    }

    public BaseException(int i, String str, Throwable th) {
        super(TAG + str, th);
        this.extraInfo = "";
        this.errorMsg = TAG + str;
        this.errorCode = i;
    }

    protected BaseException(Parcel parcel) {
        this.extraInfo = "";
        readFromParcel(parcel);
    }

    public void readFromParcel(Parcel parcel) {
        this.errorCode = parcel.readInt();
        this.errorMsg = parcel.readString();
        this.extraInfo = parcel.readString();
    }

    public int getErrorCode() {
        return this.errorCode;
    }

    public String getErrorMessage() {
        return this.errorMsg;
    }

    public String getExtraInfo() {
        return this.extraInfo;
    }

    public void setExtraInfo(String str) {
        this.extraInfo = str;
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.errorCode);
        parcel.writeString(this.errorMsg);
        parcel.writeString(this.extraInfo);
    }

    @Override
    public String toString() {
        return "BaseException{errorCode=" + this.errorCode + ", errorMsg='" + this.errorMsg + "'}";
    }
}
