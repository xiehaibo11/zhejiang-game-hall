package com.sigmob.sdk.nativead;

import android.os.Bundle;
import com.czhj.volley.toolbox.DownloadItem;
import com.czhj.volley.toolbox.FileDownloadRequest;
import com.czhj.volley.toolbox.FileDownloader;
import com.sigmob.sdk.base.common.AdActivity;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.sdk.videoAd.BaseAdActivity;
import java.io.File;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class c extends com.sigmob.sdk.base.common.v {
    private NativeAdBroadcastReceiver d;

    interface a extends m.b, m.c {
        void c();

        void d();

        void e();
    }

    protected c(m.b bVar) {
        super(bVar);
    }

    private static boolean a(MaterialMeta materialMeta) {
        return true;
    }

    @Override // com.sigmob.sdk.base.common.v
    protected void a(m.b bVar) {
        File adPrivacyTemplateFile = this.c.getAdPrivacyTemplateFile();
        if (adPrivacyTemplateFile == null || adPrivacyTemplateFile.exists()) {
            return;
        }
        DownloadItem downloadItem = new DownloadItem();
        downloadItem.url = this.c.getadPrivacy().privacy_template_url;
        downloadItem.filePath = adPrivacyTemplateFile.getAbsolutePath();
        downloadItem.type = DownloadItem.FileType.OTHER;
        FileDownloader fileDownloaderA = com.sigmob.sdk.base.common.p.a();
        if (fileDownloaderA != null) {
            fileDownloaderA.add(downloadItem, new FileDownloadRequest.FileDownloadListener() { // from class: com.sigmob.sdk.nativead.c.1
                @Override // com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener
                public void downloadProgress(DownloadItem downloadItem2, long j, long j2) {
                }

                @Override // com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener
                public void onCancel(DownloadItem downloadItem2) {
                }

                @Override // com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener
                public void onErrorResponse(DownloadItem downloadItem2) {
                }

                @Override // com.czhj.volley.toolbox.FileDownloadRequest.FileDownloadListener
                public void onSuccess(DownloadItem downloadItem2) {
                }
            });
        }
    }

    @Override // com.sigmob.sdk.base.common.v
    public void a(BaseAdUnit baseAdUnit, Bundle bundle) {
        super.a(baseAdUnit, bundle);
        AdActivity.a(com.sigmob.sdk.b.b(), AdActivity.class, this.f4869a, bundle, BaseAdActivity.e);
    }

    @Override // com.sigmob.sdk.base.common.v
    public void a(Map<String, Object> map, BaseAdUnit baseAdUnit) {
        super.a(map, baseAdUnit);
        if (this.d == null && (this.b instanceof a)) {
            NativeAdBroadcastReceiver nativeAdBroadcastReceiver = new NativeAdBroadcastReceiver((a) this.b, this.f4869a);
            this.d = nativeAdBroadcastReceiver;
            nativeAdBroadcastReceiver.a(nativeAdBroadcastReceiver);
        }
    }

    @Override // com.sigmob.sdk.base.common.v
    protected boolean a(BaseAdUnit baseAdUnit) {
        if (baseAdUnit.getMaterial() != null) {
            return a(baseAdUnit.getMaterial());
        }
        return false;
    }

    @Override // com.sigmob.sdk.base.common.v
    public void b(BaseAdUnit baseAdUnit) {
        super.b(baseAdUnit);
    }
}
