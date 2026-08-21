package com.github.lzyzsd.jsbridge;

public class BridgeUtil {
    static final java.lang.String CALLBACK_ID_FORMAT = "JAVA_CB_%s";
    static final java.lang.String EMPTY_STR = "";
    public static final java.lang.String JAVASCRIPT_STR = "javascript:";
    static final java.lang.String JS_FETCH_QUEUE_FROM_JAVA = "javascript:WebViewJavascriptBridge._fetchQueue();";
    static final java.lang.String JS_HANDLE_MESSAGE_FROM_JAVA = "javascript:WebViewJavascriptBridge._handleMessageFromNative('%s');";
    static final java.lang.String SPLIT_MARK = "/";
    static final java.lang.String UNDERLINE_STR = "_";
    static final java.lang.String YY_FETCH_QUEUE = "yy://return/_fetchQueue/";
    static final java.lang.String YY_OVERRIDE_SCHEMA = "yy://";
    static final java.lang.String YY_RETURN_DATA = "yy://return/";

    public BridgeUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String assetFile2Str(android.content.Context r4, java.lang.String r5) {
            r0 = 0
            android.content.res.AssetManager r4 = r4.getAssets()     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            java.io.InputStream r4 = r4.open(r5)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            java.io.BufferedReader r5 = new java.io.BufferedReader     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            r1.<init>(r4)     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            r5.<init>(r1)     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            r1.<init>()     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
        L18:
            java.lang.String r2 = r5.readLine()     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            if (r2 == 0) goto L29
            java.lang.String r3 = "^\\s*\\/\\/.*"
            boolean r3 = r2.matches(r3)     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            if (r3 != 0) goto L29
            r1.append(r2)     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
        L29:
            if (r2 != 0) goto L18
            r5.close()     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            r4.close()     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L3b java.lang.Throwable -> L4a
            if (r4 == 0) goto L3a
            r4.close()     // Catch: java.io.IOException -> L3a
        L3a:
            return r5
        L3b:
            r5 = move-exception
            goto L41
        L3d:
            r5 = move-exception
            goto L4c
        L3f:
            r5 = move-exception
            r4 = r0
        L41:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L4a
            if (r4 == 0) goto L49
            r4.close()     // Catch: java.io.IOException -> L49
        L49:
            return r0
        L4a:
            r5 = move-exception
            r0 = r4
        L4c:
            if (r0 == 0) goto L51
            r0.close()     // Catch: java.io.IOException -> L51
        L51:
            goto L53
        L52:
            throw r5
        L53:
            goto L52
    }

    public static java.lang.String getDataFromReturnUrl(java.lang.String r3) {
            java.lang.String r0 = "yy://return/_fetchQueue/"
            boolean r1 = r3.startsWith(r0)
            java.lang.String r2 = ""
            if (r1 == 0) goto Lf
            java.lang.String r3 = r3.replace(r0, r2)
            return r3
        Lf:
            java.lang.String r0 = "yy://return/"
            java.lang.String r3 = r3.replace(r0, r2)
            java.lang.String r0 = "/"
            java.lang.String[] r3 = r3.split(r0)
            int r0 = r3.length
            r1 = 2
            if (r0 < r1) goto L35
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 1
        L25:
            int r2 = r3.length
            if (r1 >= r2) goto L30
            r2 = r3[r1]
            r0.append(r2)
            int r1 = r1 + 1
            goto L25
        L30:
            java.lang.String r3 = r0.toString()
            return r3
        L35:
            r3 = 0
            return r3
    }

    public static java.lang.String getFunctionFromReturnUrl(java.lang.String r2) {
            java.lang.String r0 = "yy://return/"
            java.lang.String r1 = ""
            java.lang.String r2 = r2.replace(r0, r1)
            java.lang.String r0 = "/"
            java.lang.String[] r2 = r2.split(r0)
            int r0 = r2.length
            r1 = 1
            if (r0 < r1) goto L16
            r0 = 0
            r2 = r2[r0]
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static java.lang.String parseFunctionName(java.lang.String r2) {
            java.lang.String r0 = "javascript:WebViewJavascriptBridge."
            java.lang.String r1 = ""
            java.lang.String r2 = r2.replace(r0, r1)
            java.lang.String r0 = "\\(.*\\);"
            java.lang.String r2 = r2.replaceAll(r0, r1)
            return r2
    }

    public static void webViewLoadJs(android.webkit.WebView r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "var newscript = document.createElement(\"script\");"
            r0.append(r1)
            java.lang.String r1 = "newscript.src=\""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "\";"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "document.scripts[0].parentNode.insertBefore(newscript,document.scripts[0]);"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "javascript:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.loadUrl(r3)
            return
    }

    public static void webViewLoadLocalJs(android.webkit.WebView r2, java.lang.String r3) {
            android.content.Context r0 = r2.getContext()
            java.lang.String r3 = assetFile2Str(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "javascript:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.loadUrl(r3)
            return
    }
}
