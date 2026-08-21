package com.github.lzyzsd.jsbridge;

public class BridgeWebView extends android.webkit.WebView implements com.github.lzyzsd.jsbridge.WebViewJavascriptBridge {
    public static final java.lang.String toLoadJs = "WebViewJavascriptBridge.js";
    private final java.lang.String TAG;
    com.github.lzyzsd.jsbridge.BridgeHandler defaultHandler;
    java.util.Map<java.lang.String, com.github.lzyzsd.jsbridge.BridgeHandler> messageHandlers;
    java.util.Map<java.lang.String, com.github.lzyzsd.jsbridge.CallBackFunction> responseCallbacks;
    private java.util.List<com.github.lzyzsd.jsbridge.Message> startupMessage;
    private long uniqueId;


    public BridgeWebView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            java.lang.String r3 = "BridgeWebView"
            r2.TAG = r3
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r2.responseCallbacks = r3
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r2.messageHandlers = r3
            com.github.lzyzsd.jsbridge.DefaultHandler r3 = new com.github.lzyzsd.jsbridge.DefaultHandler
            r3.<init>()
            r2.defaultHandler = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.startupMessage = r3
            r0 = 0
            r2.uniqueId = r0
            r2.init()
            return
    }

    public BridgeWebView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "BridgeWebView"
            r0.TAG = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.responseCallbacks = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.messageHandlers = r1
            com.github.lzyzsd.jsbridge.DefaultHandler r1 = new com.github.lzyzsd.jsbridge.DefaultHandler
            r1.<init>()
            r0.defaultHandler = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.startupMessage = r1
            r1 = 0
            r0.uniqueId = r1
            r0.init()
            return
    }

    public BridgeWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = "BridgeWebView"
            r0.TAG = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.responseCallbacks = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.messageHandlers = r1
            com.github.lzyzsd.jsbridge.DefaultHandler r1 = new com.github.lzyzsd.jsbridge.DefaultHandler
            r1.<init>()
            r0.defaultHandler = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.startupMessage = r1
            r1 = 0
            r0.uniqueId = r1
            r0.init()
            return
    }

    static void access$000(com.github.lzyzsd.jsbridge.BridgeWebView r0, com.github.lzyzsd.jsbridge.Message r1) {
            r0.queueMessage(r1)
            return
    }

    private void doSend(java.lang.String r8, java.lang.String r9, com.github.lzyzsd.jsbridge.CallBackFunction r10) {
            r7 = this;
            com.github.lzyzsd.jsbridge.Message r0 = new com.github.lzyzsd.jsbridge.Message
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 != 0) goto Le
            r0.setData(r9)
        Le:
            if (r10 == 0) goto L43
            r9 = 1
            java.lang.Object[] r9 = new java.lang.Object[r9]
            r1 = 0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            long r3 = r7.uniqueId
            r5 = 1
            long r3 = r3 + r5
            r7.uniqueId = r3
            r2.append(r3)
            java.lang.String r3 = "_"
            r2.append(r3)
            long r3 = android.os.SystemClock.currentThreadTimeMillis()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r9[r1] = r2
            java.lang.String r1 = "JAVA_CB_%s"
            java.lang.String r9 = java.lang.String.format(r1, r9)
            java.util.Map<java.lang.String, com.github.lzyzsd.jsbridge.CallBackFunction> r1 = r7.responseCallbacks
            r1.put(r9, r10)
            r0.setCallbackId(r9)
        L43:
            boolean r9 = android.text.TextUtils.isEmpty(r8)
            if (r9 != 0) goto L4c
            r0.setHandlerName(r8)
        L4c:
            r7.queueMessage(r0)
            return
    }

    private void init() {
            r3 = this;
            r0 = 0
            r3.setVerticalScrollBarEnabled(r0)
            r3.setHorizontalScrollBarEnabled(r0)
            android.webkit.WebSettings r0 = r3.getSettings()
            r1 = 1
            r0.setJavaScriptEnabled(r1)
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r0 < r2) goto L18
            android.webkit.WebView.setWebContentsDebuggingEnabled(r1)
        L18:
            com.github.lzyzsd.jsbridge.BridgeWebViewClient r0 = r3.generateBridgeWebViewClient()
            r3.setWebViewClient(r0)
            android.webkit.WebChromeClient r0 = new android.webkit.WebChromeClient
            r0.<init>()
            r3.setWebChromeClient(r0)
            return
    }

    private void queueMessage(com.github.lzyzsd.jsbridge.Message r2) {
            r1 = this;
            java.util.List<com.github.lzyzsd.jsbridge.Message> r0 = r1.startupMessage
            if (r0 == 0) goto L8
            r0.add(r2)
            goto Lb
        L8:
            r1.dispatchMessage(r2)
        Lb:
            return
    }

    public void callHandler(java.lang.String r1, java.lang.String r2, com.github.lzyzsd.jsbridge.CallBackFunction r3) {
            r0 = this;
            r0.doSend(r1, r2, r3)
            return
    }

    void dispatchMessage(com.github.lzyzsd.jsbridge.Message r3) {
            r2 = this;
            java.lang.String r3 = r3.toJson()
            java.lang.String r0 = "(\\\\)([^utrn])"
            java.lang.String r1 = "\\\\\\\\$1$2"
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "(?<=[^\\\\])(\")"
            java.lang.String r1 = "\\\\\""
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "(?<=[^\\\\])(')"
            java.lang.String r1 = "\\\\'"
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "%7B"
            java.lang.String r1 = java.net.URLEncoder.encode(r0)
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "%7D"
            java.lang.String r1 = java.net.URLEncoder.encode(r0)
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "%22"
            java.lang.String r1 = java.net.URLEncoder.encode(r0)
            java.lang.String r3 = r3.replaceAll(r0, r1)
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r3 = "javascript:WebViewJavascriptBridge._handleMessageFromNative('%s');"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            java.lang.Thread r1 = r1.getThread()
            if (r0 != r1) goto L57
            r2.loadUrl(r3)
        L57:
            return
    }

    void flushMessageQueue() {
            r2 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            java.lang.Thread r1 = r1.getThread()
            if (r0 != r1) goto L18
            com.github.lzyzsd.jsbridge.BridgeWebView$1 r0 = new com.github.lzyzsd.jsbridge.BridgeWebView$1
            r0.<init>(r2)
            java.lang.String r1 = "javascript:WebViewJavascriptBridge._fetchQueue();"
            r2.loadUrl(r1, r0)
        L18:
            return
    }

    protected com.github.lzyzsd.jsbridge.BridgeWebViewClient generateBridgeWebViewClient() {
            r1 = this;
            com.github.lzyzsd.jsbridge.BridgeWebViewClient r0 = new com.github.lzyzsd.jsbridge.BridgeWebViewClient
            r0.<init>(r1)
            return r0
    }

    public java.util.List<com.github.lzyzsd.jsbridge.Message> getStartupMessage() {
            r1 = this;
            java.util.List<com.github.lzyzsd.jsbridge.Message> r0 = r1.startupMessage
            return r0
    }

    void handlerReturnData(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = com.github.lzyzsd.jsbridge.BridgeUtil.getFunctionFromReturnUrl(r3)
            java.util.Map<java.lang.String, com.github.lzyzsd.jsbridge.CallBackFunction> r1 = r2.responseCallbacks
            java.lang.Object r1 = r1.get(r0)
            com.github.lzyzsd.jsbridge.CallBackFunction r1 = (com.github.lzyzsd.jsbridge.CallBackFunction) r1
            java.lang.String r3 = com.github.lzyzsd.jsbridge.BridgeUtil.getDataFromReturnUrl(r3)
            if (r1 == 0) goto L1a
            r1.onCallBack(r3)
            java.util.Map<java.lang.String, com.github.lzyzsd.jsbridge.CallBackFunction> r3 = r2.responseCallbacks
            r3.remove(r0)
        L1a:
            return
    }

    public void loadUrl(java.lang.String r2, com.github.lzyzsd.jsbridge.CallBackFunction r3) {
            r1 = this;
            r1.loadUrl(r2)
            java.util.Map<java.lang.String, com.github.lzyzsd.jsbridge.CallBackFunction> r0 = r1.responseCallbacks
            java.lang.String r2 = com.github.lzyzsd.jsbridge.BridgeUtil.parseFunctionName(r2)
            r0.put(r2, r3)
            return
    }

    public void registerHandler(java.lang.String r2, com.github.lzyzsd.jsbridge.BridgeHandler r3) {
            r1 = this;
            if (r3 == 0) goto L7
            java.util.Map<java.lang.String, com.github.lzyzsd.jsbridge.BridgeHandler> r0 = r1.messageHandlers
            r0.put(r2, r3)
        L7:
            return
    }

    @Override
    public void send(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.send(r2, r0)
            return
    }

    @Override
    public void send(java.lang.String r2, com.github.lzyzsd.jsbridge.CallBackFunction r3) {
            r1 = this;
            r0 = 0
            r1.doSend(r0, r2, r3)
            return
    }

    public void setDefaultHandler(com.github.lzyzsd.jsbridge.BridgeHandler r1) {
            r0 = this;
            r0.defaultHandler = r1
            return
    }

    public void setStartupMessage(java.util.List<com.github.lzyzsd.jsbridge.Message> r1) {
            r0 = this;
            r0.startupMessage = r1
            return
    }

    public void unregisterHandler(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.Map<java.lang.String, com.github.lzyzsd.jsbridge.BridgeHandler> r0 = r1.messageHandlers
            r0.remove(r2)
        L7:
            return
    }
}
