package com.kwad.sdk.h.a;

import android.text.TextUtils;
import com.kwad.sdk.utils.bc;

public class b extends com.kwad.sdk.core.response.a.a {
    public String aCb;
    public String aCc;
    public String aCd;
    public long aCe;
    public boolean aCf;
    public String agi;
    public int loadType;
    public int packageType;
    public String packageUrl;
    public String version;

    public final long FC() {
        return this.aCe;
    }

    public final void an(long j) {
        this.aCe = j;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            b bVar = (b) obj;
            if (bc.isEquals(this.aCb, bVar.aCb) && bc.isEquals(this.agi, bVar.agi) && bc.isEquals(this.version, bVar.version)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.aCb);
        sb.append("_");
        sb.append(this.agi);
        sb.append("_");
        sb.append(this.version);
        return TextUtils.isEmpty(sb.toString()) ? super.hashCode() : sb.toString().hashCode();
    }

    public final boolean isValid() {
        return (TextUtils.isEmpty(this.aCb) || TextUtils.isEmpty(this.packageUrl) || TextUtils.isEmpty(this.version) || TextUtils.isEmpty(this.aCc)) ? false : true;
    }

    @Override
    public String toString() {
        return "PackageInfoBean{packageId='" + this.aCb + "', zipFileName='" + this.aCc + "', zipPath='" + this.aCd + "', startDownloadTime=" + this.aCe + ", packageUrl='" + this.packageUrl + "', version='" + this.version + "', checksum='" + this.agi + "', loadType=" + this.loadType + ", packageType=" + this.packageType + ", isPublic=" + this.aCf + '}';
    }
}
