package com.mbridge.msdk.mbdownload.manager;

import com.mbridge.msdk.out.IDownloadListener;
import java.util.Observable;
import java.util.Observer;

public final class b implements Observer {
    private boolean a = true;
    private IDownloadListener b;

    public b(IDownloadListener iDownloadListener) {
        this.b = iDownloadListener;
    }

    public final void a(IDownloadListener iDownloadListener) {
        this.b = iDownloadListener;
    }

    @Override
    public final void update(Observable observable, Object obj) {
        try {
            if (this.b != null) {
                if (obj != null) {
                    c cVar = (c) obj;
                    int iB = cVar.b();
                    if (iB == -1) {
                        this.b.onStatus(-1);
                        return;
                    }
                    if (iB == 5) {
                        this.b.onStatus(5);
                        return;
                    }
                    if (iB == 1) {
                        this.b.onEnd(1, 0, cVar.a());
                        this.b.onStatus(1);
                        return;
                    }
                    if (iB == 2) {
                        this.b.onStatus(2);
                        if (this.a) {
                            this.b.onStart();
                            this.a = false;
                        }
                        this.b.onProgressUpdate(cVar.c());
                        return;
                    }
                    if (iB == 8) {
                        this.b.onStatus(8);
                        return;
                    } else if (iB == 9) {
                        this.b.onStatus(9);
                        return;
                    } else {
                        this.b.onStatus(cVar.b());
                        return;
                    }
                }
                this.b.onStatus(8);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
