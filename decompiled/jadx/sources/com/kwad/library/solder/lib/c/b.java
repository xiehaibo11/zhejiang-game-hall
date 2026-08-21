package com.kwad.library.solder.lib.c;

import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements Comparable<b> {
    public boolean IH;
    public long agA;
    public String agB;
    public boolean agC = false;
    public boolean agD = true;
    public HashMap<String, String> agE = new HashMap<>(10);
    public List<String> agF;
    public List<String> agG;
    public ClassLoader agH;
    public String agf;
    public boolean agg;
    public String agy;
    public String agz;
    public String version;

    /* JADX INFO: Access modifiers changed from: private */
    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public int compareTo(b bVar) {
        return -this.version.compareTo(bVar.version);
    }

    public final String toString() {
        return "RemotePluginInfo{pluginId='" + this.agy + "', version='" + this.version + "', downloadUrl='" + this.agz + "', fileSize=" + this.agA + ", enable=" + this.IH + ", md5sum='" + this.agB + "', onlyWifiDownload=" + this.agC + ", onlyWifiRetryDownload=" + this.agD + ", soMd5s=" + this.agE + ", hostPackages=" + this.agF + ", hostInterfaces=" + this.agG + '}';
    }
}
