package com.kwad.framework.filedownloader.d;

import android.content.ContentValues;
import android.os.Parcel;
import android.os.Parcelable;
import com.kwad.framework.filedownloader.f.f;
import com.mbridge.msdk.foundation.download.database.DownloadModel;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLong;

public final class c implements Parcelable {
    public static final Parcelable.Creator<c> CREATOR = new Parcelable.Creator<c>() {
        private static c[] bz(int i) {
            return new c[i];
        }

        private static c c(Parcel parcel) {
            return new c(parcel);
        }

        @Override
        public final c createFromParcel(Parcel parcel) {
            return c(parcel);
        }

        @Override
        public final c[] newArray(int i) {
            return bz(i);
        }
    };
    private String Tt;
    private boolean adN;
    private boolean aea;
    private final AtomicInteger aeb;
    private final AtomicLong aec;
    private long aed;
    private String aee;
    private String aef;
    private int aeg;
    private String filename;
    private int id;
    private String url;

    public c() {
        this.aec = new AtomicLong();
        this.aeb = new AtomicInteger();
    }

    protected c(Parcel parcel) {
        this.id = parcel.readInt();
        this.url = parcel.readString();
        this.Tt = parcel.readString();
        this.aea = parcel.readByte() != 0;
        this.filename = parcel.readString();
        this.aeb = new AtomicInteger(parcel.readByte());
        this.aec = new AtomicLong(parcel.readLong());
        this.aed = parcel.readLong();
        this.aee = parcel.readString();
        this.aef = parcel.readString();
        this.aeg = parcel.readInt();
        this.adN = parcel.readByte() != 0;
    }

    private String vo() {
        return this.aee;
    }

    public final void L(long j) {
        this.aec.set(j);
    }

    public final void M(long j) {
        this.aec.addAndGet(j);
    }

    public final void N(long j) {
        this.adN = j > 2147483647L;
        this.aed = j;
    }

    public final void bi(String str) {
        this.aef = str;
    }

    public final void bj(String str) {
        this.aee = str;
    }

    public final void bk(String str) {
        this.filename = str;
    }

    public final void by(int i) {
        this.aeg = i;
    }

    public final void c(String str, boolean z) {
        this.Tt = str;
        this.aea = z;
    }

    public final void d(byte b) {
        this.aeb.set(b);
    }

    @Override
    public final int describeContents() {
        return 0;
    }

    public final String getFilename() {
        return this.filename;
    }

    public final int getId() {
        return this.id;
    }

    public final String getPath() {
        return this.Tt;
    }

    public final String getTargetFilePath() {
        return f.a(getPath(), sT(), getFilename());
    }

    public final long getTotal() {
        return this.aed;
    }

    public final String getUrl() {
        return this.url;
    }

    public final boolean isChunked() {
        return this.aed == -1;
    }

    public final boolean sT() {
        return this.aea;
    }

    public final byte sX() {
        return (byte) this.aeb.get();
    }

    public final void setId(int i) {
        this.id = i;
    }

    public final void setUrl(String str) {
        this.url = str;
    }

    public final boolean td() {
        return this.adN;
    }

    public final String toString() {
        return f.b("id[%d], url[%s], path[%s], status[%d], sofar[%s], total[%d], etag[%s], %s", Integer.valueOf(this.id), this.url, this.Tt, Integer.valueOf(this.aeb.get()), this.aec, Long.valueOf(this.aed), this.aef, super.toString());
    }

    public final String uE() {
        if (getTargetFilePath() == null) {
            return null;
        }
        return f.bo(getTargetFilePath());
    }

    public final ContentValues vk() {
        ContentValues contentValues = new ContentValues();
        contentValues.put("_id", Integer.valueOf(getId()));
        contentValues.put("url", getUrl());
        contentValues.put("path", getPath());
        contentValues.put("status", Byte.valueOf(sX()));
        contentValues.put("sofar", Long.valueOf(vm()));
        contentValues.put("total", Long.valueOf(getTotal()));
        contentValues.put("errMsg", vo());
        contentValues.put(DownloadModel.ETAG, vn());
        contentValues.put("connectionCount", Integer.valueOf(vp()));
        contentValues.put("pathAsDirectory", Boolean.valueOf(sT()));
        if (sT() && getFilename() != null) {
            contentValues.put("filename", getFilename());
        }
        return contentValues;
    }

    public final long vm() {
        return this.aec.get();
    }

    public final String vn() {
        return this.aef;
    }

    public final int vp() {
        return this.aeg;
    }

    public final void vq() {
        this.aeg = 1;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.id);
        parcel.writeString(this.url);
        parcel.writeString(this.Tt);
        parcel.writeByte(this.aea ? (byte) 1 : (byte) 0);
        parcel.writeString(this.filename);
        parcel.writeByte((byte) this.aeb.get());
        parcel.writeLong(this.aec.get());
        parcel.writeLong(this.aed);
        parcel.writeString(this.aee);
        parcel.writeString(this.aef);
        parcel.writeInt(this.aeg);
        parcel.writeByte(this.adN ? (byte) 1 : (byte) 0);
    }
}
