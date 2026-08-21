package com.alipay.sdk.widget;

import java.util.Iterator;
import java.util.Stack;

/* JADX INFO: loaded from: classes.dex */
public class u {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Stack<WebViewWindow> f1348a = new Stack<>();

    public WebViewWindow a() {
        return this.f1348a.pop();
    }

    public void a(WebViewWindow webViewWindow) {
        this.f1348a.push(webViewWindow);
    }

    public boolean b() {
        return this.f1348a.isEmpty();
    }

    public void c() {
        if (b()) {
            return;
        }
        Iterator<WebViewWindow> it = this.f1348a.iterator();
        while (it.hasNext()) {
            it.next().a();
        }
        this.f1348a.clear();
    }
}
