package com.kwad.framework.filedownloader.download;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public final class ConnectTask {
    final int acc;
    final com.kwad.framework.filedownloader.d.b acd;
    private com.kwad.framework.filedownloader.download.a ace;
    private String acf;
    private Map<String, List<String>> acg;
    private List<String> ach;
    final String url;

    class Reconnect extends Throwable {
        private static final long serialVersionUID = 2940866805654257562L;

        Reconnect() {
        }
    }

    static class a {
        private com.kwad.framework.filedownloader.d.b acd;
        private String acf;
        private Integer aci;
        private com.kwad.framework.filedownloader.download.a acj;
        private String url;

        a() {
        }

        public final a a(com.kwad.framework.filedownloader.d.b bVar) {
            this.acd = bVar;
            return this;
        }

        public final a a(com.kwad.framework.filedownloader.download.a aVar) {
            this.acj = aVar;
            return this;
        }

        public final a ba(String str) {
            this.url = str;
            return this;
        }

        public final a bb(String str) {
            this.acf = str;
            return this;
        }

        public final a bn(int i) {
            this.aci = Integer.valueOf(i);
            return this;
        }

        final ConnectTask uo() {
            com.kwad.framework.filedownloader.download.a aVar;
            Integer num = this.aci;
            if (num == null || (aVar = this.acj) == null || this.url == null) {
                throw new IllegalArgumentException();
            }
            return new ConnectTask(aVar, num.intValue(), this.url, this.acf, this.acd, (byte) 0);
        }
    }

    private ConnectTask(com.kwad.framework.filedownloader.download.a aVar, int i, String str, String str2, com.kwad.framework.filedownloader.d.b bVar) {
        this.acc = i;
        this.url = str;
        this.acf = str2;
        this.acd = bVar;
        this.ace = aVar;
    }

    ConnectTask(com.kwad.framework.filedownloader.download.a aVar, int i, String str, String str2, com.kwad.framework.filedownloader.d.b bVar, byte b) {
        this(aVar, i, str, str2, bVar);
    }

    private void a(com.kwad.framework.filedownloader.a.b bVar) {
        HashMap<String, List<String>> mapVl;
        com.kwad.framework.filedownloader.d.b bVar2 = this.acd;
        if (bVar2 == null || (mapVl = bVar2.vl()) == null) {
            return;
        }
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.e(this, "%d add outside header: %s", Integer.valueOf(this.acc), mapVl);
        }
        for (Map.Entry<String, List<String>> entry : mapVl.entrySet()) {
            String key = entry.getKey();
            List<String> value = entry.getValue();
            if (value != null) {
                Iterator<String> it = value.iterator();
                while (it.hasNext()) {
                    bVar.addHeader(key, it.next());
                }
            }
        }
    }

    private void b(com.kwad.framework.filedownloader.a.b bVar) {
        if (!TextUtils.isEmpty(this.acf)) {
            bVar.addHeader("If-Match", this.acf);
        }
        bVar.addHeader("Range", this.ace.acm == 0 ? com.kwad.framework.filedownloader.f.f.b("bytes=%d-", Long.valueOf(this.ace.acl)) : com.kwad.framework.filedownloader.f.f.b("bytes=%d-%d", Long.valueOf(this.ace.acl), Long.valueOf(this.ace.acm)));
    }

    private void c(com.kwad.framework.filedownloader.a.b bVar) {
        com.kwad.framework.filedownloader.d.b bVar2 = this.acd;
        if (bVar2 == null || bVar2.vl().get("User-Agent") == null) {
            bVar.addHeader("User-Agent", com.kwad.framework.filedownloader.f.f.vU());
        }
    }

    public final Map<String, List<String>> getRequestHeader() {
        return this.acg;
    }

    final com.kwad.framework.filedownloader.a.b uk() {
        com.kwad.framework.filedownloader.a.b bVarBc = b.up().bc(this.url);
        a(bVarBc);
        b(bVarBc);
        c(bVarBc);
        this.acg = bVarBc.ue();
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "%s request header %s", Integer.valueOf(this.acc), this.acg);
        }
        bVarBc.execute();
        ArrayList arrayList = new ArrayList();
        this.ach = arrayList;
        return com.kwad.framework.filedownloader.a.d.a(this.acg, bVarBc, arrayList);
    }

    final boolean ul() {
        return this.ace.acl > 0;
    }

    final String um() {
        List<String> list = this.ach;
        if (list == null || list.isEmpty()) {
            return null;
        }
        return this.ach.get(r0.size() - 1);
    }

    public final com.kwad.framework.filedownloader.download.a un() {
        return this.ace;
    }
}
