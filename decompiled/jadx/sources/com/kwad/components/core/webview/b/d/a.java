package com.kwad.components.core.webview.b.d;

import android.text.TextUtils;
import com.kwad.sdk.utils.bj;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private final List<Integer> XA;
    private List<Integer> Xz;

    /* JADX INFO: renamed from: com.kwad.components.core.webview.b.d.a$a, reason: collision with other inner class name */
    static class C0168a {
        private static final a XE = new a(0);
    }

    private a() {
        this.Xz = new ArrayList();
        this.XA = Arrays.asList(Integer.valueOf(com.tkay.expressad.video.module.a.a.N), 184, 185, 190, 199, 200);
    }

    /* synthetic */ a(byte b) {
        this();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void aP(String str) {
        int iOptInt;
        try {
            iOptInt = new JSONObject(str).optInt("elementType");
        } catch (Exception unused) {
            iOptInt = Integer.MAX_VALUE;
        }
        if (this.XA.contains(Integer.valueOf(iOptInt))) {
            this.Xz.add(Integer.valueOf(iOptInt));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void aQ(int i) {
        if (this.XA.contains(Integer.valueOf(i))) {
            this.Xz.add(Integer.valueOf(i));
        }
    }

    public static a sb() {
        return C0168a.XE;
    }

    public final void aQ(final String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.webview.b.d.a.2
            @Override // java.lang.Runnable
            public final void run() {
                a.this.aP(str);
            }
        });
    }

    public final void aR(final int i) {
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.webview.b.d.a.1
            @Override // java.lang.Runnable
            public final void run() {
                a.this.aQ(i);
            }
        });
    }

    public final List<Integer> sc() {
        return this.Xz;
    }

    public final void sd() {
        this.Xz.clear();
    }
}
