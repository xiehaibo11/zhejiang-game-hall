package com.github.lzyzsd.jsbridge;

import android.content.Context;
import android.webkit.WebView;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

public class BridgeUtil {
    static final String CALLBACK_ID_FORMAT = "JAVA_CB_%s";
    static final String EMPTY_STR = "";
    public static final String JAVASCRIPT_STR = "javascript:";
    static final String JS_FETCH_QUEUE_FROM_JAVA = "javascript:WebViewJavascriptBridge._fetchQueue();";
    static final String JS_HANDLE_MESSAGE_FROM_JAVA = "javascript:WebViewJavascriptBridge._handleMessageFromNative('%s');";
    static final String SPLIT_MARK = "/";
    static final String UNDERLINE_STR = "_";
    static final String YY_FETCH_QUEUE = "yy://return/_fetchQueue/";
    static final String YY_OVERRIDE_SCHEMA = "yy://";
    static final String YY_RETURN_DATA = "yy://return/";

    public static String parseFunctionName(String str) {
        return str.replace("javascript:WebViewJavascriptBridge.", "").replaceAll("\\(.*\\);", "");
    }

    public static String getDataFromReturnUrl(String str) {
        if (str.startsWith(YY_FETCH_QUEUE)) {
            return str.replace(YY_FETCH_QUEUE, "");
        }
        String[] strArrSplit = str.replace(YY_RETURN_DATA, "").split(SPLIT_MARK);
        if (strArrSplit.length < 2) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i < strArrSplit.length; i++) {
            sb.append(strArrSplit[i]);
        }
        return sb.toString();
    }

    public static String getFunctionFromReturnUrl(String str) {
        String[] strArrSplit = str.replace(YY_RETURN_DATA, "").split(SPLIT_MARK);
        if (strArrSplit.length >= 1) {
            return strArrSplit[0];
        }
        return null;
    }

    public static void webViewLoadJs(WebView webView, String str) {
        webView.loadUrl(JAVASCRIPT_STR + (("var newscript = document.createElement(\"script\");newscript.src=\"" + str + "\";") + "document.scripts[0].parentNode.insertBefore(newscript,document.scripts[0]);"));
    }

    public static void webViewLoadLocalJs(WebView webView, String str) throws Throwable {
        webView.loadUrl(JAVASCRIPT_STR + assetFile2Str(webView.getContext(), str));
    }

    /* JADX WARN: Removed duplicated region for block: B:41:0x004e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String assetFile2Str(Context context, String str) throws Throwable {
        InputStream inputStreamOpen;
        String line;
        InputStream inputStream = null;
        try {
            inputStreamOpen = context.getAssets().open(str);
            try {
                try {
                    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStreamOpen));
                    StringBuilder sb = new StringBuilder();
                    do {
                        line = bufferedReader.readLine();
                        if (line != null && !line.matches("^\\s*\\/\\/.*")) {
                            sb.append(line);
                        }
                    } while (line != null);
                    bufferedReader.close();
                    inputStreamOpen.close();
                    String string = sb.toString();
                    if (inputStreamOpen != null) {
                        try {
                            inputStreamOpen.close();
                        } catch (IOException unused) {
                        }
                    }
                    return string;
                } catch (Exception e) {
                    e = e;
                    e.printStackTrace();
                    if (inputStreamOpen != null) {
                        try {
                            inputStreamOpen.close();
                        } catch (IOException unused2) {
                        }
                    }
                    return null;
                }
            } catch (Throwable th) {
                th = th;
                inputStream = inputStreamOpen;
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (IOException unused3) {
                    }
                }
                throw th;
            }
        } catch (Exception e2) {
            e = e2;
            inputStreamOpen = null;
        } catch (Throwable th2) {
            th = th2;
            if (inputStream != null) {
            }
            throw th;
        }
    }
}
