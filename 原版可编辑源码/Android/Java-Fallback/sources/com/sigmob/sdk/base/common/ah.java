package com.sigmob.sdk.base.common;

public class ah extends android.os.AsyncTask<java.lang.String, java.lang.Void, java.lang.String> {
    private static final int a = 10;
    private final com.sigmob.sdk.base.common.ah.a b;

    public interface a {
        void a(java.lang.String r1);

        void a(java.lang.String r1, java.lang.Throwable r2);
    }

    private ah(com.sigmob.sdk.base.common.ah.a r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    private static java.lang.String a(java.lang.String r5, java.net.HttpURLConnection r6) throws java.io.IOException, java.net.URISyntaxException {
            java.lang.String r0 = "\n redirectUrl="
            java.lang.String r1 = "Invalid URL redirection. baseUrl="
            java.net.URI r2 = new java.net.URI
            r2.<init>(r5)
            int r3 = r6.getResponseCode()
            java.lang.String r4 = "Location"
            java.lang.String r6 = r6.getHeaderField(r4)
            r4 = 300(0x12c, float:4.2E-43)
            if (r3 < r4) goto L5e
            r4 = 400(0x190, float:5.6E-43)
            if (r3 >= r4) goto L5e
            java.net.URI r2 = r2.resolve(r6)     // Catch: java.lang.Throwable -> L24 java.lang.IllegalArgumentException -> L3e
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L24 java.lang.IllegalArgumentException -> L3e
            goto L5f
        L24:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r3.append(r5)
            r3.append(r0)
            r3.append(r6)
            java.lang.String r5 = r3.toString()
            com.czhj.sdk.logger.SigmobLog.e(r5)
            throw r2
        L3e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r5)
            r2.append(r0)
            r2.append(r6)
            java.lang.String r5 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.e(r5)
            java.net.URISyntaxException r5 = new java.net.URISyntaxException
            java.lang.String r0 = "Unable to parse invalid URL"
            r5.<init>(r6, r0)
            throw r5
        L5e:
            r5 = 0
        L5f:
            return r5
    }

    public static void a(java.lang.String r4, com.sigmob.sdk.base.common.ah.a r5) {
            com.sigmob.sdk.base.common.ah r0 = new com.sigmob.sdk.base.common.ah
            r0.<init>(r5)
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r1 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.getInstance()     // Catch: java.lang.Throwable -> L17
            java.util.concurrent.ExecutorService r1 = r1.getExecutorService()     // Catch: java.lang.Throwable -> L17
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L17
            r3 = 0
            r2[r3] = r4     // Catch: java.lang.Throwable -> L17
            r0.executeOnExecutor(r1, r2)     // Catch: java.lang.Throwable -> L17
            goto L1d
        L17:
            r4 = move-exception
            java.lang.String r0 = "Failed to resolve url"
            r5.a(r0, r4)
        L1d:
            return
    }

    private java.lang.String b(java.lang.String r5) throws java.io.IOException, java.net.URISyntaxException {
            r4 = this;
            java.lang.String r0 = "IOException when closing httpUrlConnection. Ignoring."
            java.net.URL r1 = new java.net.URL
            r1.<init>(r5)
            r2 = 0
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Throwable -> L39
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Throwable -> L39
            r2 = 0
            r1.setInstanceFollowRedirects(r2)     // Catch: java.lang.Throwable -> L36
            com.czhj.sdk.common.network.ResponseHeader r2 = com.czhj.sdk.common.network.ResponseHeader.USER_AGENT     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = r2.getKey()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = com.czhj.sdk.common.network.Networking.getUserAgent()     // Catch: java.lang.Throwable -> L36
            r1.addRequestProperty(r2, r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r5 = a(r5, r1)     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L35
            java.io.InputStream r2 = r1.getInputStream()
            if (r2 == 0) goto L32
            r2.close()     // Catch: java.lang.Throwable -> L2f
            goto L32
        L2f:
            com.czhj.sdk.logger.SigmobLog.d(r0)
        L32:
            r1.disconnect()
        L35:
            return r5
        L36:
            r5 = move-exception
            r2 = r1
            goto L3a
        L39:
            r5 = move-exception
        L3a:
            if (r2 == 0) goto L4c
            java.io.InputStream r1 = r2.getInputStream()
            if (r1 == 0) goto L49
            r1.close()     // Catch: java.lang.Throwable -> L46
            goto L49
        L46:
            com.czhj.sdk.logger.SigmobLog.d(r0)
        L49:
            r2.disconnect()
        L4c:
            throw r5
    }

    protected java.lang.String a(java.lang.String... r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L30
            int r1 = r5.length
            if (r1 != 0) goto L7
            goto L30
        L7:
            r1 = 0
            r5 = r5[r1]     // Catch: java.lang.Throwable -> L26
        La:
            r3 = r0
            r0 = r5
            r5 = r3
            if (r0 == 0) goto L2f
            com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.f     // Catch: java.lang.Throwable -> L21
            android.net.Uri r2 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> L21
            boolean r5 = r1.a(r2)     // Catch: java.lang.Throwable -> L21
            if (r5 != 0) goto L1c
            return r0
        L1c:
            java.lang.String r5 = r4.b(r0)     // Catch: java.lang.Throwable -> L26
            goto La
        L21:
            r0 = move-exception
            r3 = r0
            r0 = r5
            r5 = r3
            goto L27
        L26:
            r5 = move-exception
        L27:
            java.lang.String r5 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.w(r5)
            r5 = r0
        L2f:
            return r5
        L30:
            return r0
    }

    public void a(java.lang.String r2) {
            r1 = this;
            super.onPostExecute(r2)
            boolean r0 = r1.isCancelled()
            if (r0 != 0) goto L12
            if (r2 != 0) goto Lc
            goto L12
        Lc:
            com.sigmob.sdk.base.common.ah$a r0 = r1.b
            r0.a(r2)
            goto L15
        L12:
            r1.onCancelled()
        L15:
            return
    }

    @Override
    protected java.lang.String doInBackground(java.lang.String[] r1) {
            r0 = this;
            java.lang.String[] r1 = (java.lang.String[]) r1
            java.lang.String r1 = r0.a(r1)
            return r1
    }

    @Override
    public void onCancelled() {
            r3 = this;
            super.onCancelled()
            com.sigmob.sdk.base.common.ah$a r0 = r3.b
            java.lang.String r1 = "Task for resolving url was cancelled"
            r2 = 0
            r0.a(r1, r2)
            return
    }

    @Override
    public void onPostExecute(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            r0.a(r1)
            return
    }
}
