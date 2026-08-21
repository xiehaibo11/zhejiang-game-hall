package com.sigmob.sdk.base.common;

public class o extends android.os.AsyncTask<java.lang.String, java.lang.Void, java.util.HashMap<java.lang.String, java.lang.String>> {
    private static final int a = 10;
    private final com.sigmob.sdk.base.common.o.a b;

    public interface a {
        void a(java.lang.String r1, java.lang.String r2);

        void a(java.lang.String r1, java.lang.Throwable r2);
    }

    private o(com.sigmob.sdk.base.common.o.a r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    public static java.lang.String a(java.lang.String r2) {
            java.lang.String r0 = r2.toLowerCase()
            java.lang.String r1 = ".apk"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L22
            java.lang.String r0 = b(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L17
            return r0
        L17:
            java.lang.String r2 = c(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L22
            return r2
        L22:
            r2 = 0
            return r2
    }

    private static java.lang.String a(java.lang.String r4, java.net.HttpURLConnection r5) throws java.io.IOException, java.net.URISyntaxException {
            java.lang.String r0 = "Invalid URL redirection. baseUrl="
            int r1 = r5.getResponseCode()
            r2 = 0
            r3 = 200(0xc8, float:2.8E-43)
            if (r1 < r3) goto L48
            r3 = 400(0x190, float:5.6E-43)
            if (r1 >= r3) goto L48
            java.lang.String r1 = "Content-Disposition"
            java.lang.String r5 = r5.getHeaderField(r1)     // Catch: java.lang.NullPointerException -> L1a java.lang.IllegalArgumentException -> L2e
            java.lang.String r4 = android.webkit.URLUtil.guessFileName(r4, r5, r2)     // Catch: java.lang.NullPointerException -> L1a java.lang.IllegalArgumentException -> L2e
            return r4
        L1a:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.e(r4)
            throw r5
        L2e:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r0)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.czhj.sdk.logger.SigmobLog.e(r5)
            java.net.URISyntaxException r5 = new java.net.URISyntaxException
            java.lang.String r0 = "Unable to parse invalid URL"
            r5.<init>(r4, r0)
            throw r5
        L48:
            return r2
    }

    public static void a(java.lang.String r4, com.sigmob.sdk.base.common.o.a r5) {
            java.lang.String r0 = a(r4)     // Catch: java.lang.Throwable -> L25
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L25
            if (r1 != 0) goto Le
            r5.a(r0, r4)     // Catch: java.lang.Throwable -> L25
            goto L2b
        Le:
            com.sigmob.sdk.base.common.o r0 = new com.sigmob.sdk.base.common.o     // Catch: java.lang.Throwable -> L25
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L25
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r1 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.getInstance()     // Catch: java.lang.Throwable -> L25
            java.util.concurrent.ExecutorService r1 = r1.getExecutorService()     // Catch: java.lang.Throwable -> L25
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L25
            r3 = 0
            r2[r3] = r4     // Catch: java.lang.Throwable -> L25
            r0.executeOnExecutor(r1, r2)     // Catch: java.lang.Throwable -> L25
            goto L2b
        L25:
            r4 = move-exception
            java.lang.String r0 = "Failed to resolve url"
            r5.a(r0, r4)
        L2b:
            return
    }

    public static java.lang.String b(java.lang.String r2) {
            java.lang.String r0 = "(fsname=)(.*?apk)"
            r1 = 2
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r1)     // Catch: java.lang.Throwable -> L16
            java.util.regex.Matcher r2 = r0.matcher(r2)     // Catch: java.lang.Throwable -> L16
            boolean r0 = r2.find()     // Catch: java.lang.Throwable -> L16
            if (r0 == 0) goto L16
            java.lang.String r2 = r2.group(r1)     // Catch: java.lang.Throwable -> L16
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static java.lang.String c(java.lang.String r2) {
            java.lang.String r0 = "[\\w\\.]+\\.apk"
            r1 = 2
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r1)     // Catch: java.lang.Throwable -> L17
            java.util.regex.Matcher r2 = r0.matcher(r2)     // Catch: java.lang.Throwable -> L17
            boolean r0 = r2.find()     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L17
            r0 = 0
            java.lang.String r2 = r2.group(r0)     // Catch: java.lang.Throwable -> L17
            return r2
        L17:
            r2 = 0
            return r2
    }

    private java.lang.String d(java.lang.String r3) throws java.io.IOException, java.net.URISyntaxException {
            r2 = this;
            r0 = 0
        L1:
            if (r3 == 0) goto L14
            java.lang.String r0 = e(r3)     // Catch: java.lang.Throwable -> Lb
            r1 = r0
            r0 = r3
            r3 = r1
            goto L1
        Lb:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            goto L15
        L14:
            r3 = r0
        L15:
            return r3
    }

    private static java.lang.String e(java.lang.String r4) throws java.io.IOException, java.net.URISyntaxException {
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L38
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L38
            java.net.URLConnection r4 = r1.openConnection()     // Catch: java.lang.Throwable -> L38
            java.net.HttpURLConnection r4 = (java.net.HttpURLConnection) r4     // Catch: java.lang.Throwable -> L38
            r1 = 0
            r4.setInstanceFollowRedirects(r1)     // Catch: java.lang.Throwable -> L36
            com.czhj.sdk.common.network.ResponseHeader r1 = com.czhj.sdk.common.network.ResponseHeader.USER_AGENT     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = r1.getKey()     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = com.czhj.sdk.common.network.Networking.getUserAgent()     // Catch: java.lang.Throwable -> L36
            r4.addRequestProperty(r1, r2)     // Catch: java.lang.Throwable -> L36
            int r1 = r4.getResponseCode()     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "Location"
            java.lang.String r2 = r4.getHeaderField(r2)     // Catch: java.lang.Throwable -> L36
            r3 = 300(0x12c, float:4.2E-43)
            if (r1 < r3) goto L30
            r3 = 400(0x190, float:5.6E-43)
            if (r1 >= r3) goto L30
            r0 = r2
        L30:
            if (r4 == 0) goto L42
        L32:
            r4.disconnect()
            goto L42
        L36:
            r1 = move-exception
            goto L3a
        L38:
            r1 = move-exception
            r4 = r0
        L3a:
            java.lang.String r2 = "resolveRedirectLocation fail"
            com.czhj.sdk.logger.SigmobLog.e(r2, r1)     // Catch: java.lang.Throwable -> L43
            if (r4 == 0) goto L42
            goto L32
        L42:
            return r0
        L43:
            r0 = move-exception
            if (r4 == 0) goto L49
            r4.disconnect()
        L49:
            throw r0
    }

    private java.lang.String f(java.lang.String r8) throws java.io.IOException {
            r7 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L97
            if (r1 != 0) goto Ld
            java.lang.String r8 = a(r8)     // Catch: java.lang.Throwable -> L97
            goto L8e
        Ld:
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L97
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L97
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Throwable -> L97
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Throwable -> L97
            r2 = 0
            r1.setInstanceFollowRedirects(r2)     // Catch: java.lang.Throwable -> L95
            com.czhj.sdk.common.network.ResponseHeader r2 = com.czhj.sdk.common.network.ResponseHeader.USER_AGENT     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = r2.getKey()     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = com.czhj.sdk.common.network.Networking.getUserAgent()     // Catch: java.lang.Throwable -> L95
            r1.addRequestProperty(r2, r3)     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = a(r8, r1)     // Catch: java.lang.Throwable -> L95
            java.lang.String r3 = ".apk"
            if (r2 == 0) goto L4c
            java.lang.String r4 = "fsname="
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L95
            if (r4 == 0) goto L3e
            java.lang.String r8 = b(r8)     // Catch: java.lang.Throwable -> L95
            goto L8d
        L3e:
            boolean r8 = r2.contains(r3)     // Catch: java.lang.Throwable -> L95
            if (r8 == 0) goto L49
            java.lang.String r8 = c(r2)     // Catch: java.lang.Throwable -> L95
            goto L8d
        L49:
            r0 = r1
            r8 = r2
            goto L8e
        L4c:
            boolean r4 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L95
            if (r4 != 0) goto L8c
            android.net.Uri r4 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L95
            java.lang.String r4 = r4.getPath()     // Catch: java.lang.Throwable -> L95
            java.lang.String r5 = "/"
            java.lang.String[] r4 = r4.split(r5)     // Catch: java.lang.Throwable -> L95
            int r5 = r4.length     // Catch: java.lang.Throwable -> L95
            r6 = 1
            if (r5 <= r6) goto L68
            int r2 = r4.length     // Catch: java.lang.Throwable -> L95
            int r2 = r2 - r6
            r2 = r4[r2]     // Catch: java.lang.Throwable -> L95
        L68:
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L95
            if (r4 != 0) goto L78
            java.lang.String r2 = r2.toLowerCase()     // Catch: java.lang.Throwable -> L95
            boolean r2 = r2.endsWith(r3)     // Catch: java.lang.Throwable -> L95
            if (r2 != 0) goto L8c
        L78:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L95
            r2.<init>()     // Catch: java.lang.Throwable -> L95
            java.lang.String r8 = com.czhj.sdk.common.utils.Md5Util.md5(r8)     // Catch: java.lang.Throwable -> L95
            r2.append(r8)     // Catch: java.lang.Throwable -> L95
            r2.append(r3)     // Catch: java.lang.Throwable -> L95
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L95
            goto L8d
        L8c:
            r8 = r0
        L8d:
            r0 = r1
        L8e:
            if (r0 == 0) goto L93
            r0.disconnect()
        L93:
            r0 = r8
            goto La3
        L95:
            r8 = move-exception
            goto L99
        L97:
            r8 = move-exception
            r1 = r0
        L99:
            java.lang.String r2 = "getDownloadUrlFilename"
            com.czhj.sdk.logger.SigmobLog.e(r2, r8)     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto La3
            r1.disconnect()
        La3:
            return r0
        La4:
            r8 = move-exception
            if (r1 == 0) goto Laa
            r1.disconnect()
        Laa:
            throw r8
    }

    protected java.util.HashMap<java.lang.String, java.lang.String> a(java.lang.String... r3) {
            r2 = this;
            if (r3 == 0) goto L33
            int r0 = r3.length
            if (r0 != 0) goto L6
            goto L33
        L6:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1 = 0
            r3 = r3[r1]     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = r2.d(r3)     // Catch: java.lang.Throwable -> L13
            goto L1b
        L13:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L2a
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L2a
        L1b:
            java.lang.String r1 = "url"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = r2.f(r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = "fileName"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L2a
            goto L32
        L2a:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L32:
            return r0
        L33:
            r3 = 0
            return r3
    }

    protected void a(java.util.HashMap<java.lang.String, java.lang.String> r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L14
            java.lang.String r0 = "fileName"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "url"
            java.lang.Object r3 = r3.get(r1)
            java.lang.String r3 = (java.lang.String) r3
            goto L15
        L14:
            r3 = r0
        L15:
            com.sigmob.sdk.base.common.o$a r1 = r2.b
            r1.a(r0, r3)
            return
    }

    @Override
    protected java.util.HashMap<java.lang.String, java.lang.String> doInBackground(java.lang.String[] r1) {
            r0 = this;
            java.lang.String[] r1 = (java.lang.String[]) r1
            java.util.HashMap r1 = r0.a(r1)
            return r1
    }

    @Override
    protected void onCancelled() {
            r3 = this;
            super.onCancelled()
            com.sigmob.sdk.base.common.o$a r0 = r3.b
            java.lang.String r1 = "Task for resolving url was cancelled"
            r2 = 0
            r0.a(r1, r2)
            return
    }

    @Override
    protected void onPostExecute(java.util.HashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            java.util.HashMap r1 = (java.util.HashMap) r1
            r0.a(r1)
            return
    }
}
