package com.alipay.sdk.widget;

public class j extends com.alipay.sdk.widget.g implements com.alipay.sdk.widget.WebViewWindow.a, com.alipay.sdk.widget.WebViewWindow.b, com.alipay.sdk.widget.WebViewWindow.c {
    public static final java.lang.String b = "alipayjsbridge://";
    public static final java.lang.String c = "onBack";
    public static final java.lang.String d = "setTitle";
    public static final java.lang.String e = "onRefresh";
    public static final java.lang.String f = "showBackButton";
    public static final java.lang.String g = "onExit";
    public static final java.lang.String h = "onLoadJs";
    public static final java.lang.String i = "callNativeFunc";
    public static final java.lang.String j = "back";
    public static final java.lang.String k = "title";
    public static final java.lang.String l = "refresh";
    public static final java.lang.String m = "backButton";
    public static final java.lang.String n = "refreshButton";
    public static final java.lang.String o = "exit";
    public static final java.lang.String p = "action";
    public static final java.lang.String q = "pushWindow";
    public static final java.lang.String r = "h5JsFuncCallback";
    private static final java.lang.String s = "sdk_result_code:";
    private boolean t;
    private java.lang.String u;
    private boolean v;
    private boolean w;
    private com.alipay.sdk.widget.WebViewWindow x;
    private com.alipay.sdk.widget.u y;

    private abstract class a implements android.view.animation.Animation.AnimationListener {
        final com.alipay.sdk.widget.j d;

        private a(com.alipay.sdk.widget.j r1) {
                r0 = this;
                r0.d = r1
                r0.<init>()
                return
        }

        a(com.alipay.sdk.widget.j r1, com.alipay.sdk.widget.k r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onAnimationEnd(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public void onAnimationRepeat(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public void onAnimationStart(android.view.animation.Animation r1) {
                r0 = this;
                return
        }
    }

    public j(android.app.Activity r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.t = r1
            java.lang.String r1 = "GET"
            r0.u = r1
            r1 = 0
            r0.v = r1
            r1 = 0
            r0.x = r1
            com.alipay.sdk.widget.u r1 = new com.alipay.sdk.widget.u
            r1.<init>()
            r0.y = r1
            r0.c()
            return
    }

    static com.alipay.sdk.widget.WebViewWindow a(com.alipay.sdk.widget.j r0) {
            com.alipay.sdk.widget.WebViewWindow r0 = r0.x
            return r0
    }

    private void a(java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            org.json.JSONObject r9 = com.alipay.sdk.util.n.d(r10)
            java.lang.String r10 = "title"
            boolean r0 = r10.equals(r8)
            java.lang.String r1 = ""
            if (r0 == 0) goto L23
            boolean r0 = r9.has(r10)
            if (r0 == 0) goto L23
            com.alipay.sdk.widget.WebViewWindow r8 = r7.x
            android.widget.TextView r8 = r8.getTitle()
            java.lang.String r9 = r9.optString(r10, r1)
            r8.setText(r9)
            goto Lb3
        L23:
            java.lang.String r0 = "refresh"
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L36
            com.alipay.sdk.widget.WebViewWindow r8 = r7.x
            android.webkit.WebView r8 = r8.getWebView()
            r8.reload()
            goto Lb3
        L36:
            java.lang.String r0 = "back"
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L43
            r7.e()
            goto Lb3
        L43:
            java.lang.String r0 = "exit"
            boolean r0 = r0.equals(r8)
            r2 = 0
            r3 = 0
            if (r0 == 0) goto L60
            java.lang.String r8 = "result"
            java.lang.String r8 = r9.optString(r8, r2)
            com.alipay.sdk.app.j.a(r8)
            java.lang.String r8 = "success"
            boolean r8 = r9.optBoolean(r8, r3)
            r7.a(r8)
            goto Lb3
        L60:
            java.lang.String r0 = "backButton"
            boolean r0 = r0.equals(r8)
            r4 = 4
            r5 = 1
            java.lang.String r6 = "show"
            if (r0 == 0) goto L7e
            boolean r8 = r9.optBoolean(r6, r5)
            com.alipay.sdk.widget.WebViewWindow r9 = r7.x
            android.widget.ImageView r9 = r9.getBackButton()
            if (r8 == 0) goto L79
            goto L7a
        L79:
            r3 = 4
        L7a:
            r9.setVisibility(r3)
            goto Lb3
        L7e:
            java.lang.String r0 = "refreshButton"
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L98
            boolean r8 = r9.optBoolean(r6, r5)
            com.alipay.sdk.widget.WebViewWindow r9 = r7.x
            android.widget.ImageView r9 = r9.getRefreshButton()
            if (r8 == 0) goto L93
            goto L94
        L93:
            r3 = 4
        L94:
            r9.setVisibility(r3)
            goto Lb3
        L98:
            java.lang.String r0 = "pushWindow"
            boolean r8 = r0.equals(r8)
            if (r8 == 0) goto Lb3
            java.lang.String r8 = "url"
            java.lang.String r0 = r9.optString(r8, r2)
            if (r0 == 0) goto Lb3
            java.lang.String r8 = r9.optString(r8)
            java.lang.String r9 = r9.optString(r10, r1)
            r7.b(r8, r9)
        Lb3:
            return
    }

    private void a(boolean r1) {
            r0 = this;
            com.alipay.sdk.app.j.a(r1)
            android.app.Activity r1 = r0.a
            r1.finish()
            return
    }

    static boolean a(com.alipay.sdk.widget.j r0, boolean r1) {
            r0.v = r1
            return r1
    }

    private void b(java.lang.String r5) {
            r4 = this;
            java.util.Map r0 = com.alipay.sdk.util.n.c(r5)
            java.lang.String r1 = "callNativeFunc"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L29
            java.lang.String r5 = "func"
            java.lang.Object r5 = r0.get(r5)
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r1 = "cbId"
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "data"
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            r4.a(r5, r1, r0)
            goto Lc6
        L29:
            java.lang.String r1 = "onBack"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L36
            r4.e()
            goto Lc6
        L36:
            java.lang.String r1 = "setTitle"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L57
            java.lang.String r1 = "title"
            boolean r2 = r0.containsKey(r1)
            if (r2 == 0) goto L57
            com.alipay.sdk.widget.WebViewWindow r5 = r4.x
            android.widget.TextView r5 = r5.getTitle()
            java.lang.Object r0 = r0.get(r1)
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r5.setText(r0)
            goto Lc6
        L57:
            java.lang.String r1 = "onRefresh"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto L69
            com.alipay.sdk.widget.WebViewWindow r5 = r4.x
            android.webkit.WebView r5 = r5.getWebView()
            r5.reload()
            goto Lc6
        L69:
            java.lang.String r1 = "showBackButton"
            boolean r1 = r5.startsWith(r1)
            java.lang.String r2 = "true"
            if (r1 == 0) goto L94
            java.lang.String r1 = "bshow"
            boolean r3 = r0.containsKey(r1)
            if (r3 == 0) goto L94
            java.lang.Object r5 = r0.get(r1)
            java.lang.CharSequence r5 = (java.lang.CharSequence) r5
            boolean r5 = android.text.TextUtils.equals(r2, r5)
            com.alipay.sdk.widget.WebViewWindow r0 = r4.x
            android.widget.ImageView r0 = r0.getBackButton()
            if (r5 == 0) goto L8f
            r5 = 0
            goto L90
        L8f:
            r5 = 4
        L90:
            r0.setVisibility(r5)
            goto Lc6
        L94:
            java.lang.String r1 = "onExit"
            boolean r1 = r5.startsWith(r1)
            if (r1 == 0) goto Lb7
            java.lang.String r5 = "result"
            java.lang.Object r5 = r0.get(r5)
            java.lang.String r5 = (java.lang.String) r5
            com.alipay.sdk.app.j.a(r5)
            java.lang.String r5 = "bsucc"
            java.lang.Object r5 = r0.get(r5)
            java.lang.CharSequence r5 = (java.lang.CharSequence) r5
            boolean r5 = android.text.TextUtils.equals(r2, r5)
            r4.a(r5)
            goto Lc6
        Lb7:
            java.lang.String r0 = "onLoadJs"
            boolean r5 = r5.startsWith(r0)
            if (r5 == 0) goto Lc6
            com.alipay.sdk.widget.WebViewWindow r5 = r4.x
            java.lang.String r0 = "javascript:(function() {\n    if (window.AlipayJSBridge) {\n        return\n    }\n\n    function alipayjsbridgeFunc(url) {\n        var iframe = document.createElement(\"iframe\");\n        iframe.style.width = \"1px\";\n        iframe.style.height = \"1px\";\n        iframe.style.display = \"none\";\n        iframe.src = url;\n        document.body.appendChild(iframe);\n        setTimeout(function() {\n            document.body.removeChild(iframe)\n        }, 100)\n    }\n    window.alipayjsbridgeSetTitle = function(title) {\n        document.title = title;\n        alipayjsbridgeFunc(\"alipayjsbridge://setTitle?title=\" + encodeURIComponent(title))\n    };\n    window.alipayjsbridgeRefresh = function() {\n        alipayjsbridgeFunc(\"alipayjsbridge://onRefresh?\")\n    };\n    window.alipayjsbridgeBack = function() {\n        alipayjsbridgeFunc(\"alipayjsbridge://onBack?\")\n    };\n    window.alipayjsbridgeExit = function(bsucc) {\n        alipayjsbridgeFunc(\"alipayjsbridge://onExit?bsucc=\" + bsucc)\n    };\n    window.alipayjsbridgeShowBackButton = function(bshow) {\n        alipayjsbridgeFunc(\"alipayjsbridge://showBackButton?bshow=\" + bshow)\n    };\n    window.AlipayJSBridge = {\n        version: \"2.0\",\n        addListener: addListener,\n        hasListener: hasListener,\n        callListener: callListener,\n        callNativeFunc: callNativeFunc,\n        callBackFromNativeFunc: callBackFromNativeFunc\n    };\n    var uniqueId = 1;\n    var h5JsCallbackMap = {};\n\n    function iframeCall(paramStr) {\n        setTimeout(function() {\n        \tvar iframe = document.createElement(\"iframe\");\n        \tiframe.style.width = \"1px\";\n        \tiframe.style.height = \"1px\";\n        \tiframe.style.display = \"none\";\n        \tiframe.src = \"alipayjsbridge://callNativeFunc?\" + paramStr;\n        \tvar parent = document.body || document.documentElement;\n        \tparent.appendChild(iframe);\n        \tsetTimeout(function() {\n            \tparent.removeChild(iframe)\n        \t}, 0)\n        }, 0)\n    }\n\n    function callNativeFunc(nativeFuncName, data, h5JsCallback) {\n        var h5JsCallbackId = \"\";\n        if (h5JsCallback) {\n            h5JsCallbackId = \"cb_\" + (uniqueId++) + \"_\" + new Date().getTime();\n            h5JsCallbackMap[h5JsCallbackId] = h5JsCallback\n        }\n        var dataStr = \"\";\n        if (data) {\n            dataStr = encodeURIComponent(JSON.stringify(data))\n        }\n        var paramStr = \"func=\" + nativeFuncName + \"&cbId=\" + h5JsCallbackId + \"&data=\" + dataStr;\n        iframeCall(paramStr)\n    }\n\n    function callBackFromNativeFunc(h5JsCallbackId, data) {\n        var h5JsCallback = h5JsCallbackMap[h5JsCallbackId];\n        if (h5JsCallback) {\n            h5JsCallback(data);\n            delete h5JsCallbackMap[h5JsCallbackId]\n        }\n    }\n    var h5ListenerMap = {};\n\n    function addListener(jsFuncName, jsFunc) {\n        h5ListenerMap[jsFuncName] = jsFunc\n    }\n\n    function hasListener(jsFuncName) {\n        var jsFunc = h5ListenerMap[jsFuncName];\n        if (!jsFunc) {\n            return false\n        }\n        return true\n    }\n\n    function callListener(h5JsFuncName, data, nativeCallbackId) {\n        var responseCallback;\n        if (nativeCallbackId) {\n            responseCallback = function(responseData) {\n                var dataStr = \"\";\n                if (responseData) {\n                    dataStr = encodeURIComponent(JSON.stringify(responseData))\n                }\n                var paramStr = \"func=h5JsFuncCallback\" + \"&cbId=\" + nativeCallbackId + \"&data=\" + dataStr;\n                iframeCall(paramStr)\n            }\n        }\n        var h5JsFunc = h5ListenerMap[h5JsFuncName];\n        if (h5JsFunc) {\n            h5JsFunc(data, responseCallback)\n        } else if (h5JsFuncName == \"h5BackAction\") {\n            if (!window.alipayjsbridgeH5BackAction || !alipayjsbridgeH5BackAction()) {\n                var paramStr = \"func=back\";\n                iframeCall(paramStr)\n            }\n        } else {\n            console.log(\"AlipayJSBridge: no h5JsFunc \" + h5JsFuncName + data)\n        }\n    }\n    var event;\n    if (window.CustomEvent) {\n        event = new CustomEvent(\"alipayjsbridgeready\")\n    } else {\n        event = document.createEvent(\"Event\");\n        event.initEvent(\"alipayjsbridgeready\", true, true)\n    }\n    document.dispatchEvent(event);\n    setTimeout(excuteH5InitFuncs, 0);\n\n    function excuteH5InitFuncs() {\n        if (window.AlipayJSBridgeInitArray) {\n            var h5InitFuncs = window.AlipayJSBridgeInitArray;\n            delete window.AlipayJSBridgeInitArray;\n            for (var i = 0; i < h5InitFuncs.length; i++) {\n                try {\n                    h5InitFuncs[i](AlipayJSBridge)\n                } catch (e) {\n                    setTimeout(function() {\n                        throw e\n                    })\n                }\n            }\n        }\n    }\n})();\n"
            r5.a(r0)
        Lc6:
            return
    }

    static boolean b(com.alipay.sdk.widget.j r0, boolean r1) {
            r0.w = r1
            return r1
    }

    private boolean b(java.lang.String r13, java.lang.String r14) {
            r12 = this;
            com.alipay.sdk.widget.WebViewWindow r0 = r12.x
            r1 = 0
            com.alipay.sdk.widget.WebViewWindow r2 = new com.alipay.sdk.widget.WebViewWindow     // Catch: java.lang.Throwable -> L5c
            android.app.Activity r3 = r12.a     // Catch: java.lang.Throwable -> L5c
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L5c
            r12.x = r2     // Catch: java.lang.Throwable -> L5c
            com.alipay.sdk.widget.WebViewWindow r2 = r12.x     // Catch: java.lang.Throwable -> L5c
            r2.setChromeProxy(r12)     // Catch: java.lang.Throwable -> L5c
            com.alipay.sdk.widget.WebViewWindow r2 = r12.x     // Catch: java.lang.Throwable -> L5c
            r2.setWebClientProxy(r12)     // Catch: java.lang.Throwable -> L5c
            com.alipay.sdk.widget.WebViewWindow r2 = r12.x     // Catch: java.lang.Throwable -> L5c
            r2.setWebEventProxy(r12)     // Catch: java.lang.Throwable -> L5c
            boolean r2 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L5c
            if (r2 != 0) goto L2a
            com.alipay.sdk.widget.WebViewWindow r2 = r12.x     // Catch: java.lang.Throwable -> L5c
            android.widget.TextView r2 = r2.getTitle()     // Catch: java.lang.Throwable -> L5c
            r2.setText(r14)     // Catch: java.lang.Throwable -> L5c
        L2a:
            r14 = 1
            r12.v = r14
            com.alipay.sdk.widget.u r2 = r12.y
            r2.a(r0)
            android.view.animation.TranslateAnimation r2 = new android.view.animation.TranslateAnimation
            r4 = 1
            r5 = 1065353216(0x3f800000, float:1.0)
            r6 = 1
            r7 = 0
            r8 = 1
            r9 = 0
            r10 = 1
            r11 = 0
            r3 = r2
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)
            r3 = 400(0x190, double:1.976E-321)
            r2.setDuration(r3)
            r2.setFillAfter(r1)
            com.alipay.sdk.widget.m r1 = new com.alipay.sdk.widget.m
            r1.<init>(r12, r0, r13)
            r2.setAnimationListener(r1)
            com.alipay.sdk.widget.WebViewWindow r13 = r12.x
            r13.setAnimation(r2)
            com.alipay.sdk.widget.WebViewWindow r13 = r12.x
            r12.addView(r13)
            return r14
        L5c:
            return r1
    }

    private boolean c() {
            r2 = this;
            com.alipay.sdk.widget.WebViewWindow r0 = new com.alipay.sdk.widget.WebViewWindow     // Catch: java.lang.Exception -> L1f
            android.app.Activity r1 = r2.a     // Catch: java.lang.Exception -> L1f
            r0.<init>(r1)     // Catch: java.lang.Exception -> L1f
            r2.x = r0     // Catch: java.lang.Exception -> L1f
            com.alipay.sdk.widget.WebViewWindow r0 = r2.x     // Catch: java.lang.Exception -> L1f
            r0.setChromeProxy(r2)     // Catch: java.lang.Exception -> L1f
            com.alipay.sdk.widget.WebViewWindow r0 = r2.x     // Catch: java.lang.Exception -> L1f
            r0.setWebClientProxy(r2)     // Catch: java.lang.Exception -> L1f
            com.alipay.sdk.widget.WebViewWindow r0 = r2.x     // Catch: java.lang.Exception -> L1f
            r0.setWebEventProxy(r2)     // Catch: java.lang.Exception -> L1f
            com.alipay.sdk.widget.WebViewWindow r0 = r2.x     // Catch: java.lang.Exception -> L1f
            r2.addView(r0)     // Catch: java.lang.Exception -> L1f
            r0 = 1
            return r0
        L1f:
            r0 = 0
            return r0
    }

    private void d() {
            r2 = this;
            boolean r0 = r2.t
            if (r0 == 0) goto La
            android.app.Activity r0 = r2.a
            r0.finish()
            goto L11
        La:
            com.alipay.sdk.widget.WebViewWindow r0 = r2.x
            java.lang.String r1 = "javascript:window.AlipayJSBridge.callListener('h5BackAction');"
            r0.a(r1)
        L11:
            return
    }

    private void e() {
            r2 = this;
            com.alipay.sdk.widget.WebViewWindow r0 = r2.x
            android.webkit.WebView r0 = r0.getWebView()
            boolean r1 = r0.canGoBack()
            if (r1 == 0) goto L10
            r0.goBack()
            goto L22
        L10:
            com.alipay.sdk.widget.u r0 = r2.y
            if (r0 == 0) goto L1e
            boolean r0 = r0.b()
            if (r0 != 0) goto L1e
            r2.f()
            goto L22
        L1e:
            r0 = 0
            r2.a(r0)
        L22:
            return
    }

    private boolean f() {
            r12 = this;
            com.alipay.sdk.widget.u r0 = r12.y
            boolean r0 = r0.b()
            r1 = 1
            if (r0 == 0) goto Lf
            android.app.Activity r0 = r12.a
            r0.finish()
            goto L46
        Lf:
            r12.v = r1
            com.alipay.sdk.widget.WebViewWindow r0 = r12.x
            com.alipay.sdk.widget.u r2 = r12.y
            com.alipay.sdk.widget.WebViewWindow r2 = r2.a()
            r12.x = r2
            android.view.animation.TranslateAnimation r2 = new android.view.animation.TranslateAnimation
            r4 = 1
            r5 = 0
            r6 = 1
            r7 = 1065353216(0x3f800000, float:1.0)
            r8 = 1
            r9 = 0
            r10 = 1
            r11 = 0
            r3 = r2
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)
            r3 = 400(0x190, double:1.976E-321)
            r2.setDuration(r3)
            r3 = 0
            r2.setFillAfter(r3)
            com.alipay.sdk.widget.l r3 = new com.alipay.sdk.widget.l
            r3.<init>(r12, r0)
            r2.setAnimationListener(r3)
            r0.setAnimation(r2)
            r12.removeView(r0)
            com.alipay.sdk.widget.WebViewWindow r0 = r12.x
            r12.addView(r0)
        L46:
            return r1
    }

    @Override
    public void a() {
            r1 = this;
            com.alipay.sdk.widget.WebViewWindow r0 = r1.x
            r0.a()
            com.alipay.sdk.widget.u r0 = r1.y
            r0.c()
            return
    }

    @Override
    public void a(com.alipay.sdk.widget.WebViewWindow r1) {
            r0 = this;
            r0.d()
            return
    }

    @Override
    public void a(com.alipay.sdk.widget.WebViewWindow r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "http"
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto L1b
            java.lang.String r2 = r2.getUrl()
            boolean r2 = r2.endsWith(r3)
            if (r2 != 0) goto L1b
            com.alipay.sdk.widget.WebViewWindow r2 = r1.x
            android.widget.TextView r2 = r2.getTitle()
            r2.setText(r3)
        L1b:
            return
    }

    @Override
    public void a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.u
            java.lang.String r1 = "POST"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L11
            com.alipay.sdk.widget.WebViewWindow r0 = r2.x
            r1 = 0
            r0.a(r3, r1)
            goto L16
        L11:
            com.alipay.sdk.widget.WebViewWindow r0 = r2.x
            r0.a(r3)
        L16:
            return
    }

    public void a(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = this;
            r0.u = r2
            com.alipay.sdk.widget.WebViewWindow r2 = r0.x
            android.widget.TextView r2 = r2.getTitle()
            r2.setText(r1)
            r0.t = r3
            return
    }

    @Override
    public boolean a(com.alipay.sdk.widget.WebViewWindow r1, int r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "onReceivedError:"
            r2.append(r3)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "net"
            java.lang.String r4 = "SSLError"
            com.alipay.sdk.app.statistic.a.a(r3, r4, r2)
            android.widget.ImageView r1 = r1.getRefreshButton()
            r2 = 0
            r1.setVisibility(r2)
            return r2
    }

    @Override
    public boolean a(com.alipay.sdk.widget.WebViewWindow r2, android.webkit.SslErrorHandler r3, android.net.http.SslError r4) {
            r1 = this;
            java.lang.String r2 = java.lang.String.valueOf(r4)
            java.lang.String r4 = "net"
            java.lang.String r0 = "SSLError"
            com.alipay.sdk.app.statistic.a.a(r4, r0, r2)
            boolean r2 = r1.w
            r4 = 1
            if (r2 == 0) goto L17
            r3.proceed()
            r2 = 0
            r1.w = r2
            return r4
        L17:
            android.app.Activity r2 = r1.a
            com.alipay.sdk.widget.n r0 = new com.alipay.sdk.widget.n
            r0.<init>(r1, r3)
            r2.runOnUiThread(r0)
            return r4
    }

    @Override
    public boolean a(com.alipay.sdk.widget.WebViewWindow r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, android.webkit.JsPromptResult r5) {
            r0 = this;
            java.lang.String r1 = "<head>"
            boolean r1 = r3.startsWith(r1)
            if (r1 == 0) goto L1a
            java.lang.String r1 = "sdk_result_code:"
            boolean r1 = r3.contains(r1)
            if (r1 == 0) goto L1a
            com.alipay.sdk.widget.k r1 = new com.alipay.sdk.widget.k
            r1.<init>(r0)
            android.app.Activity r2 = r0.a
            r2.runOnUiThread(r1)
        L1a:
            r5.cancel()
            r1 = 1
            return r1
    }

    @Override
    public void b(com.alipay.sdk.widget.WebViewWindow r2) {
            r1 = this;
            android.webkit.WebView r0 = r2.getWebView()
            r0.reload()
            android.widget.ImageView r2 = r2.getRefreshButton()
            r0 = 4
            r2.setVisibility(r0)
            return
    }

    @Override
    public boolean b() {
            r1 = this;
            boolean r0 = r1.v
            if (r0 != 0) goto L7
            r1.d()
        L7:
            r0 = 1
            return r0
    }

    @Override
    public boolean b(com.alipay.sdk.widget.WebViewWindow r2, java.lang.String r3) {
            r1 = this;
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            r0 = 0
            if (r2 == 0) goto L8
            return r0
        L8:
            java.lang.String r2 = "alipayjsbridge://"
            boolean r2 = r3.startsWith(r2)
            if (r2 == 0) goto L1a
            r2 = 17
            java.lang.String r2 = r3.substring(r2)
            r1.b(r2)
            goto L5a
        L1a:
            java.lang.String r2 = "sdklite://h5quit"
            boolean r2 = android.text.TextUtils.equals(r3, r2)
            if (r2 == 0) goto L26
            r1.a(r0)
            goto L5a
        L26:
            java.lang.String r2 = "http://"
            boolean r2 = r3.startsWith(r2)
            if (r2 != 0) goto L55
            java.lang.String r2 = "https://"
            boolean r2 = r3.startsWith(r2)
            if (r2 == 0) goto L37
            goto L55
        L37:
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L4e
            r2.<init>()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r0 = "android.intent.action.VIEW"
            r2.setAction(r0)     // Catch: java.lang.Throwable -> L4e
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L4e
            r2.setData(r3)     // Catch: java.lang.Throwable -> L4e
            android.app.Activity r3 = r1.a     // Catch: java.lang.Throwable -> L4e
            r3.startActivity(r2)     // Catch: java.lang.Throwable -> L4e
            goto L5a
        L4e:
            r2 = move-exception
            java.lang.String r3 = "biz"
            com.alipay.sdk.app.statistic.a.a(r3, r2)
            goto L5a
        L55:
            com.alipay.sdk.widget.WebViewWindow r2 = r1.x
            r2.a(r3)
        L5a:
            r2 = 1
            return r2
    }

    @Override
    public boolean c(com.alipay.sdk.widget.WebViewWindow r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r2 = "javascript:window.prompt('<head>'+document.getElementsByTagName('html')[0].innerHTML+'</head>');(function() {\n    if (window.AlipayJSBridge) {\n        return\n    }\n\n    function alipayjsbridgeFunc(url) {\n        var iframe = document.createElement(\"iframe\");\n        iframe.style.width = \"1px\";\n        iframe.style.height = \"1px\";\n        iframe.style.display = \"none\";\n        iframe.src = url;\n        document.body.appendChild(iframe);\n        setTimeout(function() {\n            document.body.removeChild(iframe)\n        }, 100)\n    }\n    window.alipayjsbridgeSetTitle = function(title) {\n        document.title = title;\n        alipayjsbridgeFunc(\"alipayjsbridge://setTitle?title=\" + encodeURIComponent(title))\n    };\n    window.alipayjsbridgeRefresh = function() {\n        alipayjsbridgeFunc(\"alipayjsbridge://onRefresh?\")\n    };\n    window.alipayjsbridgeBack = function() {\n        alipayjsbridgeFunc(\"alipayjsbridge://onBack?\")\n    };\n    window.alipayjsbridgeExit = function(bsucc) {\n        alipayjsbridgeFunc(\"alipayjsbridge://onExit?bsucc=\" + bsucc)\n    };\n    window.alipayjsbridgeShowBackButton = function(bshow) {\n        alipayjsbridgeFunc(\"alipayjsbridge://showBackButton?bshow=\" + bshow)\n    };\n    window.AlipayJSBridge = {\n        version: \"2.0\",\n        addListener: addListener,\n        hasListener: hasListener,\n        callListener: callListener,\n        callNativeFunc: callNativeFunc,\n        callBackFromNativeFunc: callBackFromNativeFunc\n    };\n    var uniqueId = 1;\n    var h5JsCallbackMap = {};\n\n    function iframeCall(paramStr) {\n        setTimeout(function() {\n        \tvar iframe = document.createElement(\"iframe\");\n        \tiframe.style.width = \"1px\";\n        \tiframe.style.height = \"1px\";\n        \tiframe.style.display = \"none\";\n        \tiframe.src = \"alipayjsbridge://callNativeFunc?\" + paramStr;\n        \tvar parent = document.body || document.documentElement;\n        \tparent.appendChild(iframe);\n        \tsetTimeout(function() {\n            \tparent.removeChild(iframe)\n        \t}, 0)\n        }, 0)\n    }\n\n    function callNativeFunc(nativeFuncName, data, h5JsCallback) {\n        var h5JsCallbackId = \"\";\n        if (h5JsCallback) {\n            h5JsCallbackId = \"cb_\" + (uniqueId++) + \"_\" + new Date().getTime();\n            h5JsCallbackMap[h5JsCallbackId] = h5JsCallback\n        }\n        var dataStr = \"\";\n        if (data) {\n            dataStr = encodeURIComponent(JSON.stringify(data))\n        }\n        var paramStr = \"func=\" + nativeFuncName + \"&cbId=\" + h5JsCallbackId + \"&data=\" + dataStr;\n        iframeCall(paramStr)\n    }\n\n    function callBackFromNativeFunc(h5JsCallbackId, data) {\n        var h5JsCallback = h5JsCallbackMap[h5JsCallbackId];\n        if (h5JsCallback) {\n            h5JsCallback(data);\n            delete h5JsCallbackMap[h5JsCallbackId]\n        }\n    }\n    var h5ListenerMap = {};\n\n    function addListener(jsFuncName, jsFunc) {\n        h5ListenerMap[jsFuncName] = jsFunc\n    }\n\n    function hasListener(jsFuncName) {\n        var jsFunc = h5ListenerMap[jsFuncName];\n        if (!jsFunc) {\n            return false\n        }\n        return true\n    }\n\n    function callListener(h5JsFuncName, data, nativeCallbackId) {\n        var responseCallback;\n        if (nativeCallbackId) {\n            responseCallback = function(responseData) {\n                var dataStr = \"\";\n                if (responseData) {\n                    dataStr = encodeURIComponent(JSON.stringify(responseData))\n                }\n                var paramStr = \"func=h5JsFuncCallback\" + \"&cbId=\" + nativeCallbackId + \"&data=\" + dataStr;\n                iframeCall(paramStr)\n            }\n        }\n        var h5JsFunc = h5ListenerMap[h5JsFuncName];\n        if (h5JsFunc) {\n            h5JsFunc(data, responseCallback)\n        } else if (h5JsFuncName == \"h5BackAction\") {\n            if (!window.alipayjsbridgeH5BackAction || !alipayjsbridgeH5BackAction()) {\n                var paramStr = \"func=back\";\n                iframeCall(paramStr)\n            }\n        } else {\n            console.log(\"AlipayJSBridge: no h5JsFunc \" + h5JsFuncName + data)\n        }\n    }\n    var event;\n    if (window.CustomEvent) {\n        event = new CustomEvent(\"alipayjsbridgeready\")\n    } else {\n        event = document.createEvent(\"Event\");\n        event.initEvent(\"alipayjsbridgeready\", true, true)\n    }\n    document.dispatchEvent(event);\n    setTimeout(excuteH5InitFuncs, 0);\n\n    function excuteH5InitFuncs() {\n        if (window.AlipayJSBridgeInitArray) {\n            var h5InitFuncs = window.AlipayJSBridgeInitArray;\n            delete window.AlipayJSBridgeInitArray;\n            for (var i = 0; i < h5InitFuncs.length; i++) {\n                try {\n                    h5InitFuncs[i](AlipayJSBridge)\n                } catch (e) {\n                    setTimeout(function() {\n                        throw e\n                    })\n                }\n            }\n        }\n    }\n})();\n;window.AlipayJSBridge.callListener('h5PageFinished');"
            r1.a(r2)
            android.widget.ImageView r1 = r1.getRefreshButton()
            r2 = 0
            r1.setVisibility(r2)
            r1 = 1
            return r1
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            boolean r0 = r1.v
            if (r0 == 0) goto L6
            r2 = 1
            goto La
        L6:
            boolean r2 = super.onInterceptTouchEvent(r2)
        La:
            return r2
    }
}
