package com.czhj.sdk.common.utils;

import java.io.Serializable;
import java.util.Calendar;
import java.util.UUID;

/* JADX INFO: loaded from: classes.dex */
public class AdvertisingId implements Serializable {
    private static final long c = 86400000;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final Calendar f1797a;
    final String b;
    public final String mAdvertisingId;
    public final boolean mDoNotTrack;

    AdvertisingId(String str, String str2, boolean z, long j) {
        this.mAdvertisingId = str;
        this.b = str2;
        this.mDoNotTrack = z;
        Calendar calendar = Calendar.getInstance();
        this.f1797a = calendar;
        calendar.setTimeInMillis(j);
    }

    static String a() {
        return UUID.randomUUID().toString();
    }

    public static AdvertisingId generateExpiredAdvertisingId() {
        return new AdvertisingId(null, a(), false, (Calendar.getInstance().getTimeInMillis() - 86400000) - 1);
    }

    boolean b() {
        return Calendar.getInstance().getTimeInMillis() - this.f1797a.getTimeInMillis() >= 86400000;
    }

    public boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof AdvertisingId)) {
            return false;
        }
        AdvertisingId advertisingId = (AdvertisingId) obj;
        return this.mDoNotTrack == advertisingId.mDoNotTrack && this.mAdvertisingId.equals(advertisingId.mAdvertisingId) && this.b.equals(advertisingId.b);
    }

    public int hashCode() {
        return (((this.mAdvertisingId.hashCode() * 31) + this.b.hashCode()) * 31) + (this.mDoNotTrack ? 1 : 0);
    }

    public String toString() {
        return "AdvertisingId{mLastRotation=" + this.f1797a + ", mAdvertisingId='" + this.mAdvertisingId + "', mSigmobId='" + this.b + "', mDoNotTrack=" + this.mDoNotTrack + '}';
    }
}
