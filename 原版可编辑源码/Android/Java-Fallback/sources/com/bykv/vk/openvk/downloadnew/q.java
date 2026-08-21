package com.bykv.vk.openvk.downloadnew;

public class q {

    public static class rg {
        public java.util.Map<java.lang.String, java.lang.String> df;
        public java.net.HttpURLConnection pt;
        public int q;
        public java.io.InputStream rg;

        public rg(java.io.InputStream r1, java.util.Map<java.lang.String, java.lang.String> r2, int r3, java.net.HttpURLConnection r4) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                r0.df = r2
                r0.q = r3
                r0.pt = r4
                return
        }
    }

    public static com.bykv.vk.openvk.downloadnew.q.rg rg(java.lang.String r4, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r5) throws java.io.IOException {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r5 == 0) goto L29
            boolean r1 = r5.isEmpty()
            if (r1 != 0) goto L29
            java.util.Iterator r5 = r5.iterator()
        L11:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L29
            java.lang.Object r1 = r5.next()
            com.ss.android.socialbase.downloader.model.HttpHeader r1 = (com.ss.android.socialbase.downloader.model.HttpHeader) r1
            java.lang.String r2 = r1.getName()
            java.lang.String r1 = r1.getValue()
            r0.put(r2, r1)
            goto L11
        L29:
            java.net.HttpURLConnection r4 = rg(r4, r0)
            r5 = 0
            if (r4 != 0) goto L31
            return r5
        L31:
            int r0 = r4.getResponseCode()
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 < r1) goto L63
            r1 = 300(0x12c, float:4.2E-43)
            if (r0 >= r1) goto L63
            java.util.Map r5 = rg(r4)
            java.io.InputStream r1 = r4.getInputStream()
            java.lang.String r2 = r4.getContentEncoding()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L5d
            java.lang.String r3 = "gzip"
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L5d
            java.util.zip.GZIPInputStream r2 = new java.util.zip.GZIPInputStream
            r2.<init>(r1)
            r1 = r2
        L5d:
            com.bykv.vk.openvk.downloadnew.q$rg r2 = new com.bykv.vk.openvk.downloadnew.q$rg
            r2.<init>(r1, r5, r0, r4)
            return r2
        L63:
            return r5
    }

    public static java.net.HttpURLConnection rg(java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L73
            r0.<init>(r3)     // Catch: java.lang.Exception -> L73
            java.net.URLConnection r3 = r0.openConnection()     // Catch: java.lang.Exception -> L73
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3     // Catch: java.lang.Exception -> L73
            r0 = 0
            r3.setInstanceFollowRedirects(r0)     // Catch: java.lang.Exception -> L72
            java.lang.String r0 = "accept"
            java.lang.String r1 = "*/*"
            r3.setRequestProperty(r0, r1)     // Catch: java.lang.Exception -> L72
            java.lang.String r0 = "connection"
            java.lang.String r1 = "Keep-Alive"
            r3.setRequestProperty(r0, r1)     // Catch: java.lang.Exception -> L72
            if (r4 == 0) goto L51
            boolean r0 = r4.isEmpty()     // Catch: java.lang.Exception -> L72
            if (r0 != 0) goto L51
            java.util.Set r0 = r4.entrySet()     // Catch: java.lang.Exception -> L72
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L72
        L35:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L72
            if (r1 == 0) goto L51
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L72
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Exception -> L72
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Exception -> L72
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L72
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> L72
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L72
            r3.setRequestProperty(r2, r1)     // Catch: java.lang.Exception -> L72
            goto L35
        L51:
            r3.connect()     // Catch: java.lang.Exception -> L72
            int r0 = r3.getResponseCode()     // Catch: java.lang.Exception -> L72
            r1 = 200(0xc8, float:2.8E-43)
            r2 = 300(0x12c, float:4.2E-43)
            if (r0 < r1) goto L61
            if (r0 >= r2) goto L61
            return r3
        L61:
            if (r0 < r2) goto L74
            r1 = 400(0x190, float:5.6E-43)
            if (r0 >= r1) goto L74
            java.lang.String r0 = "Location"
            java.lang.String r0 = r3.getHeaderField(r0)     // Catch: java.lang.Exception -> L72
            java.net.HttpURLConnection r3 = rg(r0, r4)     // Catch: java.lang.Exception -> L72
            return r3
        L72:
            r1 = r3
        L73:
            r3 = r1
        L74:
            return r3
    }

    public static java.util.Map<java.lang.String, java.lang.String> rg(java.net.HttpURLConnection r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r1 = r5.getHeaderFields()
            int r1 = r1.size()
            r2 = 0
        Le:
            if (r2 >= r1) goto L1e
            java.lang.String r3 = r5.getHeaderFieldKey(r2)
            java.lang.String r4 = r5.getHeaderField(r2)
            r0.put(r3, r4)
            int r2 = r2 + 1
            goto Le
        L1e:
            return r0
    }
}
