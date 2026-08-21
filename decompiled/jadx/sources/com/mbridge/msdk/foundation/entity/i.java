package com.mbridge.msdk.foundation.entity;

import com.xiaomi.mipush.sdk.Constants;
import java.util.Set;

/* JADX INFO: compiled from: InstallApp.java */
/* JADX INFO: loaded from: classes2.dex */
public final class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3389a;
    private String b;

    public i() {
    }

    public i(String str, String str2) {
        this.f3389a = str;
        this.b = str2;
    }

    public final String a() {
        return this.f3389a;
    }

    public final void a(String str) {
        this.f3389a = str;
    }

    public final String b() {
        return this.b;
    }

    public final void b(String str) {
        this.b = str;
    }

    public static String a(Set<i> set) {
        if (set == null) {
            return null;
        }
        try {
            if (set.size() <= 0) {
                return null;
            }
            StringBuffer stringBuffer = new StringBuffer();
            for (i iVar : set) {
                stringBuffer.append("{\"campaignId\":");
                stringBuffer.append(iVar.f3389a + Constants.ACCEPT_TIME_SEPARATOR_SP);
                stringBuffer.append("\"packageName\":");
                stringBuffer.append(iVar.b + "},");
            }
            return "[{$native_info}]".replace("{$native_info}", stringBuffer.subSequence(0, stringBuffer.lastIndexOf(Constants.ACCEPT_TIME_SEPARATOR_SP)));
        } catch (Exception unused) {
            return null;
        }
    }

    public final int hashCode() {
        String str = this.f3389a;
        int iHashCode = ((str == null ? 0 : str.hashCode()) + 31) * 31;
        String str2 = this.b;
        return iHashCode + (str2 != null ? str2.hashCode() : 0);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        i iVar = (i) obj;
        String str = this.f3389a;
        if (str == null) {
            if (iVar.f3389a != null) {
                return false;
            }
        } else if (!str.equals(iVar.f3389a)) {
            return false;
        }
        String str2 = this.b;
        if (str2 == null) {
            if (iVar.b != null) {
                return false;
            }
        } else if (!str2.equals(iVar.b)) {
            return false;
        }
        return true;
    }
}
