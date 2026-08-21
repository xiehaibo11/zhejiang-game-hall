package com.kwad.framework.filedownloader.a;

import com.kwad.framework.filedownloader.f.c;
import com.kwad.sdk.api.core.TLSConnectionUtils;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.h;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.Proxy;
import java.net.URL;
import java.net.URLConnection;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class c implements com.kwad.framework.filedownloader.a.b {
    protected URLConnection abF;

    public static class a {
        private Proxy abG;
        private Integer abH;
        private Integer abI;
    }

    public static class b implements c.b {
        private final a abJ;

        public b() {
            this(null);
        }

        private b(a aVar) {
            this.abJ = null;
        }

        @Override // com.kwad.framework.filedownloader.f.c.b
        public final com.kwad.framework.filedownloader.a.b aZ(String str) {
            return new c(str, this.abJ);
        }
    }

    public c(String str, a aVar) {
        this(new URL(str), aVar);
    }

    private c(URL url, a aVar) {
        this.abF = (aVar == null || aVar.abG == null) ? url.openConnection() : url.openConnection(aVar.abG);
        try {
            TLSConnectionUtils.wrapHttpURLConnection(this.abF);
        } catch (Throwable unused) {
        }
        if (aVar != null) {
            if (aVar.abH != null) {
                this.abF.setReadTimeout(aVar.abH.intValue());
            }
            if (aVar.abI != null) {
                this.abF.setConnectTimeout(aVar.abI.intValue());
            }
        }
    }

    @Override // com.kwad.framework.filedownloader.a.b
    public final String aY(String str) {
        return this.abF.getHeaderField(str);
    }

    @Override // com.kwad.framework.filedownloader.a.b
    public final void addHeader(String str, String str2) {
        this.abF.addRequestProperty(str, str2);
    }

    @Override // com.kwad.framework.filedownloader.a.b
    public final void execute() throws IOException {
        this.abF.connect();
    }

    @Override // com.kwad.framework.filedownloader.a.b
    public final InputStream getInputStream() throws IOException {
        return ((h) ServiceProvider.get(h.class)).wrapInputStream(this.abF.getInputStream());
    }

    @Override // com.kwad.framework.filedownloader.a.b
    public final int getResponseCode() throws IOException {
        URLConnection uRLConnection = this.abF;
        if (!(uRLConnection instanceof HttpURLConnection)) {
            return 0;
        }
        try {
            return ((HttpURLConnection) uRLConnection).getResponseCode();
        } catch (Throwable th) {
            throw new IOException(th);
        }
    }

    @Override // com.kwad.framework.filedownloader.a.b
    public final Map<String, List<String>> ue() {
        return this.abF.getRequestProperties();
    }

    @Override // com.kwad.framework.filedownloader.a.b
    public final Map<String, List<String>> uf() {
        return this.abF.getHeaderFields();
    }

    @Override // com.kwad.framework.filedownloader.a.b
    public final void ug() {
    }
}
