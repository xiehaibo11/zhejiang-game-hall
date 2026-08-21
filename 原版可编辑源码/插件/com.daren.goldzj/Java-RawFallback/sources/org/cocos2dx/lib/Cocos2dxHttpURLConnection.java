package org.cocos2dx.lib;

public class Cocos2dxHttpURLConnection {
    private static final java.lang.String POST_METHOD = "POST";
    private static final java.lang.String PUT_METHOD = "PUT";
    private static java.lang.String TAG = "Cocos2dxHttpURLConnection";

    static {
            return
    }

    public Cocos2dxHttpURLConnection() {
            r0 = this;
            r0.<init>()
            return
    }

    static void addRequestHeader(java.net.HttpURLConnection r0, java.lang.String r1, java.lang.String r2) {
            r0.setRequestProperty(r1, r2)
            return
    }

    public static java.lang.String combinCookies(java.util.List<java.lang.String> r17, java.lang.String r18) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r1 = r17.iterator()
            java.lang.String r2 = "FALSE"
            r3 = 0
            java.lang.String r4 = "/"
            r5 = r2
            r6 = r3
            r7 = r6
            r8 = r7
            r3 = r18
        L14:
            boolean r9 = r1.hasNext()
            if (r9 == 0) goto L104
            java.lang.Object r9 = r1.next()
            java.lang.String r9 = (java.lang.String) r9
            java.lang.String r10 = ";"
            java.lang.String[] r9 = r9.split(r10)
            int r10 = r9.length
            r11 = 0
            r12 = r8
            r8 = r7
            r7 = r6
            r6 = r5
            r5 = r4
            r4 = r3
            r3 = 0
        L2f:
            if (r3 >= r10) goto Lc7
            r13 = r9[r3]
            java.lang.String r14 = "="
            int r14 = r13.indexOf(r14)
            r15 = -1
            if (r15 != r14) goto L3e
            goto Lc3
        L3e:
            r15 = 2
            java.lang.String[] r15 = new java.lang.String[r15]
            java.lang.String r16 = r13.substring(r11, r14)
            r15[r11] = r16
            int r14 = r14 + 1
            java.lang.String r13 = r13.substring(r14)
            r14 = 1
            r15[r14] = r13
            r13 = r15[r11]
            java.lang.String r13 = r13.trim()
            java.lang.String r11 = "expires"
            boolean r11 = r11.equalsIgnoreCase(r13)
            if (r11 == 0) goto L6a
            r11 = r15[r14]
            java.lang.String r11 = r11.trim()
            java.lang.String r12 = str2Seconds(r11)
        L68:
            r11 = 0
            goto Lc3
        L6a:
            r11 = 0
            r13 = r15[r11]
            java.lang.String r13 = r13.trim()
            java.lang.String r11 = "path"
            boolean r11 = r11.equalsIgnoreCase(r13)
            if (r11 == 0) goto L7c
            r5 = r15[r14]
            goto L68
        L7c:
            r11 = 0
            r13 = r15[r11]
            java.lang.String r13 = r13.trim()
            java.lang.String r11 = "secure"
            boolean r11 = r11.equalsIgnoreCase(r13)
            if (r11 == 0) goto L8e
            r6 = r15[r14]
            goto L68
        L8e:
            r11 = 0
            r13 = r15[r11]
            java.lang.String r13 = r13.trim()
            java.lang.String r11 = "domain"
            boolean r11 = r11.equalsIgnoreCase(r13)
            if (r11 == 0) goto La0
            r4 = r15[r14]
            goto L68
        La0:
            r11 = 0
            r13 = r15[r11]
            java.lang.String r13 = r13.trim()
            java.lang.String r14 = "version"
            boolean r13 = r14.equalsIgnoreCase(r13)
            if (r13 != 0) goto Lc3
            r13 = r15[r11]
            java.lang.String r13 = r13.trim()
            java.lang.String r14 = "max-age"
            boolean r13 = r14.equalsIgnoreCase(r13)
            if (r13 == 0) goto Lbe
            goto Lc3
        Lbe:
            r7 = r15[r11]
            r8 = 1
            r8 = r15[r8]
        Lc3:
            int r3 = r3 + 1
            goto L2f
        Lc7:
            if (r4 != 0) goto Lcc
            java.lang.String r3 = "none"
            goto Lcd
        Lcc:
            r3 = r4
        Lcd:
            r0.append(r3)
            r4 = 9
            r0.append(r4)
            r0.append(r2)
            r0.append(r4)
            r0.append(r5)
            r0.append(r4)
            r0.append(r6)
            r0.append(r4)
            r0.append(r12)
            java.lang.String r4 = "\t"
            r0.append(r4)
            r0.append(r7)
            r0.append(r4)
            r0.append(r8)
            r4 = 10
            r0.append(r4)
            r4 = r5
            r5 = r6
            r6 = r7
            r7 = r8
            r8 = r12
            goto L14
        L104:
            java.lang.String r0 = r0.toString()
            return r0
    }

    static int connect(java.net.HttpURLConnection r3) {
            r3.connect()     // Catch: java.lang.Exception -> L5
            r3 = 0
            goto L24
        L5:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "connect"
            r1.append(r2)
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            android.util.Log.e(r0, r3)
            r3 = 1
        L24:
            return r3
    }

    static java.net.HttpURLConnection createHttpURLConnection(java.lang.String r3) {
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L17
            r0.<init>(r3)     // Catch: java.lang.Exception -> L17
            java.net.URLConnection r3 = r0.openConnection()     // Catch: java.lang.Exception -> L17
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3     // Catch: java.lang.Exception -> L17
            java.lang.String r0 = "Accept-Encoding"
            java.lang.String r1 = "identity"
            r3.setRequestProperty(r0, r1)     // Catch: java.lang.Exception -> L17
            r0 = 1
            r3.setDoInput(r0)     // Catch: java.lang.Exception -> L17
            return r3
        L17:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "createHttpURLConnection:"
            r1.append(r2)
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            android.util.Log.e(r0, r3)
            r3 = 0
            return r3
    }

    static void disconnect(java.net.HttpURLConnection r0) {
            r0.disconnect()
            return
    }

    static int getResponseCode(java.net.HttpURLConnection r3) {
            int r3 = r3.getResponseCode()     // Catch: java.lang.Exception -> L5
            goto L24
        L5:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getResponseCode:"
            r1.append(r2)
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            android.util.Log.e(r0, r3)
            r3 = 0
        L24:
            return r3
    }

    static byte[] getResponseContent(java.net.HttpURLConnection r7) {
            r0 = 0
            java.io.InputStream r1 = r7.getInputStream()     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            java.lang.String r2 = r7.getContentEncoding()     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            if (r2 == 0) goto L52
            java.lang.String r3 = "gzip"
            boolean r3 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            if (r3 == 0) goto L1d
            java.util.zip.GZIPInputStream r1 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            java.io.InputStream r2 = r7.getInputStream()     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            goto L52
        L1d:
            java.lang.String r3 = "deflate"
            boolean r2 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            if (r2 == 0) goto L52
            java.util.zip.InflaterInputStream r1 = new java.util.zip.InflaterInputStream     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            java.io.InputStream r2 = r7.getInputStream()     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2f java.io.IOException -> L4e
            goto L52
        L2f:
            r7 = move-exception
            r7.printStackTrace()
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "1 getResponseContent: "
            r2.append(r3)
            java.lang.String r7 = r7.toString()
            r2.append(r7)
            java.lang.String r7 = r2.toString()
            android.util.Log.e(r1, r7)
            return r0
        L4e:
            java.io.InputStream r1 = r7.getErrorStream()
        L52:
            r7 = 1024(0x400, float:1.435E-42)
            byte[] r2 = new byte[r7]     // Catch: java.lang.Exception -> L6f
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L6f
            r3.<init>()     // Catch: java.lang.Exception -> L6f
        L5b:
            r4 = 0
            int r5 = r1.read(r2, r4, r7)     // Catch: java.lang.Exception -> L6f
            r6 = -1
            if (r5 == r6) goto L67
            r3.write(r2, r4, r5)     // Catch: java.lang.Exception -> L6f
            goto L5b
        L67:
            byte[] r7 = r3.toByteArray()     // Catch: java.lang.Exception -> L6f
            r3.close()     // Catch: java.lang.Exception -> L6f
            return r7
        L6f:
            r7 = move-exception
            r7.printStackTrace()
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "2 getResponseContent:"
            r2.append(r3)
            java.lang.String r7 = r7.toString()
            r2.append(r7)
            java.lang.String r7 = r2.toString()
            android.util.Log.e(r1, r7)
            return r0
    }

    static java.lang.String getResponseHeaderByIdx(java.net.HttpURLConnection r3, int r4) {
            java.util.Map r3 = r3.getHeaderFields()
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            r1 = 0
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L11:
            boolean r2 = r3.hasNext()
            if (r2 == 0) goto L6a
            java.lang.Object r2 = r3.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            if (r1 != r4) goto L67
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r4 = "\n"
            java.lang.String r0 = ","
            if (r3 != 0) goto L45
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r1 = r2.getValue()
            java.util.List r1 = (java.util.List) r1
            java.lang.String r0 = listToString(r1, r0)
            r3.append(r0)
            r3.append(r4)
            java.lang.String r0 = r3.toString()
            goto L6a
        L45:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = ":"
            r1.append(r3)
            java.lang.Object r3 = r2.getValue()
            java.util.List r3 = (java.util.List) r3
            java.lang.String r3 = listToString(r3, r0)
            r1.append(r3)
            r1.append(r4)
            java.lang.String r0 = r1.toString()
            goto L6a
        L67:
            int r1 = r1 + 1
            goto L11
        L6a:
            return r0
    }

    static java.lang.String getResponseHeaderByKey(java.net.HttpURLConnection r4, java.lang.String r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.util.Map r1 = r4.getHeaderFields()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L13:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L52
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            boolean r3 = r5.equalsIgnoreCase(r3)
            if (r3 == 0) goto L13
            java.lang.String r0 = "set-cookie"
            boolean r5 = r0.equalsIgnoreCase(r5)
            if (r5 == 0) goto L46
            java.lang.Object r5 = r2.getValue()
            java.util.List r5 = (java.util.List) r5
            java.net.URL r4 = r4.getURL()
            java.lang.String r4 = r4.getHost()
            java.lang.String r0 = combinCookies(r5, r4)
            goto L52
        L46:
            java.lang.Object r4 = r2.getValue()
            java.util.List r4 = (java.util.List) r4
            java.lang.String r5 = ","
            java.lang.String r0 = listToString(r4, r5)
        L52:
            return r0
    }

    static int getResponseHeaderByKeyInt(java.net.HttpURLConnection r0, java.lang.String r1) {
            java.lang.String r0 = r0.getHeaderField(r1)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
    }

    static java.lang.String getResponseHeaders(java.net.HttpURLConnection r6) {
            java.util.Map r6 = r6.getHeaderFields()
            if (r6 != 0) goto L8
            r6 = 0
            return r6
        L8:
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
            java.lang.String r0 = ""
        L12:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L6c
            java.lang.Object r1 = r6.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "\n"
            java.lang.String r4 = ","
            if (r2 != 0) goto L47
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.Object r0 = r1.getValue()
            java.util.List r0 = (java.util.List) r0
            java.lang.String r0 = listToString(r0, r4)
            r2.append(r0)
            r2.append(r3)
            java.lang.String r0 = r2.toString()
            goto L12
        L47:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r0)
            r5.append(r2)
            java.lang.String r0 = ":"
            r5.append(r0)
            java.lang.Object r0 = r1.getValue()
            java.util.List r0 = (java.util.List) r0
            java.lang.String r0 = listToString(r0, r4)
            r5.append(r0)
            r5.append(r3)
            java.lang.String r0 = r5.toString()
            goto L12
        L6c:
            return r0
    }

    static java.lang.String getResponseMessage(java.net.HttpURLConnection r3) {
            java.lang.String r3 = r3.getResponseMessage()     // Catch: java.lang.Exception -> L5
            goto L23
        L5:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getResponseMessage: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            android.util.Log.e(r0, r1)
        L23:
            return r3
    }

    public static java.lang.String listToString(java.util.List<java.lang.String> r3, java.lang.String r4) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            java.util.Iterator r3 = r3.iterator()
        Le:
            boolean r2 = r3.hasNext()
            if (r2 == 0) goto L28
            java.lang.Object r2 = r3.next()
            java.lang.String r2 = (java.lang.String) r2
            if (r1 == 0) goto L1f
            r0.append(r4)
        L1f:
            if (r2 != 0) goto L23
            java.lang.String r2 = ""
        L23:
            r0.append(r2)
            r1 = 1
            goto Le
        L28:
            java.lang.String r3 = r0.toString()
            return r3
    }

    static void sendRequest(java.net.HttpURLConnection r2, byte[] r3) {
            java.io.OutputStream r2 = r2.getOutputStream()     // Catch: java.lang.Exception -> L10
            if (r3 == 0) goto Lc
            r2.write(r3)     // Catch: java.lang.Exception -> L10
            r2.flush()     // Catch: java.lang.Exception -> L10
        Lc:
            r2.close()     // Catch: java.lang.Exception -> L10
            goto L2e
        L10:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.String r3 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sendRequest:"
            r0.append(r1)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.util.Log.e(r3, r2)
        L2e:
            return
    }

    static void setReadAndConnectTimeout(java.net.HttpURLConnection r0, int r1, int r2) {
            r0.setReadTimeout(r1)
            r0.setConnectTimeout(r2)
            return
    }

    static void setRequestMethod(java.net.HttpURLConnection r2, java.lang.String r3) {
            r2.setRequestMethod(r3)     // Catch: java.net.ProtocolException -> L18
            java.lang.String r0 = "POST"
            boolean r0 = r3.equalsIgnoreCase(r0)     // Catch: java.net.ProtocolException -> L18
            if (r0 != 0) goto L13
            java.lang.String r0 = "PUT"
            boolean r3 = r3.equalsIgnoreCase(r0)     // Catch: java.net.ProtocolException -> L18
            if (r3 == 0) goto L33
        L13:
            r3 = 1
            r2.setDoOutput(r3)     // Catch: java.net.ProtocolException -> L18
            goto L33
        L18:
            r2 = move-exception
            java.lang.String r3 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setRequestMethod:"
            r0.append(r1)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.util.Log.e(r3, r2)
        L33:
            return
    }

    static void setVerifySSL(java.net.HttpURLConnection r4, java.lang.String r5) {
            boolean r0 = r4 instanceof javax.net.ssl.HttpsURLConnection
            if (r0 != 0) goto L5
            return
        L5:
            javax.net.ssl.HttpsURLConnection r4 = (javax.net.ssl.HttpsURLConnection) r4
            java.lang.String r0 = "/"
            boolean r0 = r5.startsWith(r0)     // Catch: java.lang.Exception -> L8b
            if (r0 == 0) goto L1a
            java.io.BufferedInputStream r0 = new java.io.BufferedInputStream     // Catch: java.lang.Exception -> L8b
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L8b
            r1.<init>(r5)     // Catch: java.lang.Exception -> L8b
            r0.<init>(r1)     // Catch: java.lang.Exception -> L8b
            goto L30
        L1a:
            r0 = 7
            java.lang.String r5 = r5.substring(r0)     // Catch: java.lang.Exception -> L8b
            java.io.BufferedInputStream r0 = new java.io.BufferedInputStream     // Catch: java.lang.Exception -> L8b
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()     // Catch: java.lang.Exception -> L8b
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.lang.Exception -> L8b
            java.io.InputStream r5 = r1.open(r5)     // Catch: java.lang.Exception -> L8b
            r0.<init>(r5)     // Catch: java.lang.Exception -> L8b
        L30:
            java.lang.String r5 = "X.509"
            java.security.cert.CertificateFactory r5 = java.security.cert.CertificateFactory.getInstance(r5)     // Catch: java.lang.Exception -> L8b
            java.security.cert.Certificate r5 = r5.generateCertificate(r0)     // Catch: java.lang.Exception -> L8b
            java.io.PrintStream r1 = java.lang.System.out     // Catch: java.lang.Exception -> L8b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8b
            r2.<init>()     // Catch: java.lang.Exception -> L8b
            java.lang.String r3 = "ca="
            r2.append(r3)     // Catch: java.lang.Exception -> L8b
            r3 = r5
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3     // Catch: java.lang.Exception -> L8b
            java.security.Principal r3 = r3.getSubjectDN()     // Catch: java.lang.Exception -> L8b
            r2.append(r3)     // Catch: java.lang.Exception -> L8b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L8b
            r1.println(r2)     // Catch: java.lang.Exception -> L8b
            r0.close()     // Catch: java.lang.Exception -> L8b
            java.lang.String r0 = java.security.KeyStore.getDefaultType()     // Catch: java.lang.Exception -> L8b
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0)     // Catch: java.lang.Exception -> L8b
            r1 = 0
            r0.load(r1, r1)     // Catch: java.lang.Exception -> L8b
            java.lang.String r2 = "ca"
            r0.setCertificateEntry(r2, r5)     // Catch: java.lang.Exception -> L8b
            java.lang.String r5 = javax.net.ssl.TrustManagerFactory.getDefaultAlgorithm()     // Catch: java.lang.Exception -> L8b
            javax.net.ssl.TrustManagerFactory r5 = javax.net.ssl.TrustManagerFactory.getInstance(r5)     // Catch: java.lang.Exception -> L8b
            r5.init(r0)     // Catch: java.lang.Exception -> L8b
            java.lang.String r0 = "TLS"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)     // Catch: java.lang.Exception -> L8b
            javax.net.ssl.TrustManager[] r5 = r5.getTrustManagers()     // Catch: java.lang.Exception -> L8b
            r0.init(r1, r5, r1)     // Catch: java.lang.Exception -> L8b
            javax.net.ssl.SSLSocketFactory r5 = r0.getSocketFactory()     // Catch: java.lang.Exception -> L8b
            r4.setSSLSocketFactory(r5)     // Catch: java.lang.Exception -> L8b
            goto La9
        L8b:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r5 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setVerifySSL:"
            r0.append(r1)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            android.util.Log.e(r5, r4)
        La9:
            return
    }

    private static java.lang.String str2Seconds(java.lang.String r4) {
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat     // Catch: java.text.ParseException -> L1c
            java.lang.String r2 = "EEE, dd-MMM-yy hh:mm:ss zzz"
            java.util.Locale r3 = java.util.Locale.US     // Catch: java.text.ParseException -> L1c
            r1.<init>(r2, r3)     // Catch: java.text.ParseException -> L1c
            java.util.Date r4 = r1.parse(r4)     // Catch: java.text.ParseException -> L1c
            r0.setTime(r4)     // Catch: java.text.ParseException -> L1c
            long r0 = r0.getTimeInMillis()     // Catch: java.text.ParseException -> L1c
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            goto L39
        L1c:
            r4 = move-exception
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHttpURLConnection.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "str2Seconds: "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.util.Log.e(r0, r4)
            r0 = 0
        L39:
            java.lang.String r4 = java.lang.Long.toString(r0)
            return r4
    }
}
