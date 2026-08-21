package com.sigmob.sdk.base.common;

import com.czhj.sdk.common.network.Networking;
import com.czhj.volley.toolbox.FileDownloader;

/* JADX INFO: loaded from: classes3.dex */
public class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static FileDownloader f4861a;
    private static FileDownloader b;

    public static FileDownloader a() {
        if (f4861a == null) {
            synchronized (p.class) {
                if (f4861a == null && Networking.getDownloadRequestQueue() != null) {
                    f4861a = new FileDownloader(Networking.getDownloadRequestQueue(), 3);
                }
            }
        }
        return f4861a;
    }
}
