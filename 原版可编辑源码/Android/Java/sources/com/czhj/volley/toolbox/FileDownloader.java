package com.czhj.volley.toolbox;

import android.os.Looper;
import com.czhj.volley.RequestQueue;
import com.czhj.volley.toolbox.FileDownloadRequest;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class FileDownloader {
    final RequestQueue a;
    private final int b;
    private final LinkedList<DownloadController> c;

    public class DownloadController {
        public static final int STATUS_DISCARD = 4;
        public static final int STATUS_DOWNLOADING = 1;
        public static final int STATUS_PAUSE = 2;
        public static final int STATUS_SUCCESS = 3;
        public static final int STATUS_WAITING = 0;
        FileDownloadRequest.FileDownloadListener a;
        int b;
        private FileDownloadRequest d;
        private DownloadItem e;

        DownloadController(DownloadItem downloadItem, FileDownloadRequest.FileDownloadListener fileDownloadListener) {
            this.a = fileDownloadListener;
            this.e = downloadItem;
        }

        boolean a() {
            if (this.b != 0) {
                return false;
            }
            this.d = FileDownloader.this.buildRequest(this.e, new FileDownloadRequest.FileDownloadListener() {
                boolean a;

                @Override
                public void downloadProgress(DownloadItem downloadItem, long j, long j2) {
                    if (DownloadController.this.a != null) {
                        DownloadController.this.a.downloadProgress(downloadItem, j, j2);
                    }
                }

                @Override
                public void onCancel(DownloadItem downloadItem) {
                    this.a = true;
                    if (DownloadController.this.a != null) {
                        DownloadController.this.a.onCancel(downloadItem);
                    }
                    FileDownloader.this.a(DownloadController.this);
                }

                @Override
                public void onErrorResponse(DownloadItem downloadItem) {
                    if (DownloadController.this.a != null && !this.a) {
                        DownloadController.this.a.onErrorResponse(downloadItem);
                    }
                    FileDownloader.this.a(DownloadController.this);
                }

                @Override
                public void onSuccess(DownloadItem downloadItem) {
                    DownloadController.this.b = 3;
                    if (DownloadController.this.a != null && !this.a) {
                        DownloadController.this.a.onSuccess(downloadItem);
                    }
                    FileDownloader.this.a(DownloadController.this);
                }
            });
            this.b = 1;
            if (FileDownloader.this.a == null) {
                return false;
            }
            FileDownloader.this.a.add(this.d);
            return true;
        }

        public boolean discard() {
            int i = this.b;
            if (i == 0) {
                this.b = 4;
                FileDownloader.this.a(this);
                FileDownloadRequest.FileDownloadListener fileDownloadListener = this.a;
                if (fileDownloadListener != null) {
                    fileDownloadListener.onCancel(this.e);
                }
                return true;
            }
            if (i == 4 || i == 3) {
                return false;
            }
            if (i == 1) {
                this.d.cancel();
            }
            this.b = 4;
            FileDownloader.this.a(this);
            return true;
        }

        public DownloadItem getDownloadItem() {
            return this.e;
        }

        public FileDownloadRequest.FileDownloadListener getDownloadListener() {
            return this.a;
        }

        public int getStatus() {
            return this.b;
        }

        public String getStorePath() {
            return this.e.filePath;
        }

        public String getUrl() {
            return this.e.url;
        }

        public boolean isDownloading() {
            return this.b == 1;
        }

        public boolean pause() {
            if (this.b != 1) {
                return false;
            }
            this.b = 2;
            this.d.cancel();
            FileDownloader.this.a();
            return true;
        }

        public boolean resume() {
            if (this.b != 2) {
                return false;
            }
            this.b = 0;
            FileDownloader.this.a();
            return true;
        }

        public void setDownloadListener(FileDownloadRequest.FileDownloadListener fileDownloadListener) {
            this.a = fileDownloadListener;
        }
    }

    public FileDownloader(RequestQueue requestQueue) {
        this(requestQueue, 0);
    }

    public FileDownloader(RequestQueue requestQueue, int i) {
        this.c = new LinkedList<>();
        this.b = i;
        this.a = requestQueue;
    }

    private void b() {
        if (Looper.myLooper() != Looper.getMainLooper()) {
            throw new IllegalStateException("FileDownloader must be invoked from the main thread.");
        }
    }

    void a() {
        synchronized (this.c) {
            int i = 0;
            Iterator<DownloadController> it = this.c.iterator();
            while (it.hasNext()) {
                if (it.next().isDownloading()) {
                    i++;
                }
            }
            if (i >= this.b) {
                return;
            }
            Iterator<DownloadController> it2 = this.c.iterator();
            while (it2.hasNext()) {
                if (it2.next().a() && (i = i + 1) == this.b) {
                    return;
                }
            }
        }
    }

    void a(DownloadController downloadController) {
        synchronized (this.c) {
            this.c.remove(downloadController);
        }
        a();
    }

    public DownloadController add(DownloadItem downloadItem, FileDownloadRequest.FileDownloadListener fileDownloadListener) {
        DownloadController downloadController = get(downloadItem.filePath, downloadItem.url);
        if (downloadController == null) {
            downloadController = new DownloadController(downloadItem, fileDownloadListener);
            synchronized (this.c) {
                this.c.add(downloadController);
            }
            a();
        }
        return downloadController;
    }

    public FileDownloadRequest buildRequest(DownloadItem downloadItem, FileDownloadRequest.FileDownloadListener fileDownloadListener) {
        return new FileDownloadRequest(downloadItem, fileDownloadListener);
    }

    public void clearAll() {
        synchronized (this.c) {
            while (this.c.size() > 0) {
                this.c.get(0).discard();
            }
        }
    }

    public DownloadController get(String str, String str2) {
        synchronized (this.c) {
            for (DownloadController downloadController : this.c) {
                if (downloadController.getStorePath().equals(str) && downloadController.getUrl().equals(str2)) {
                    return downloadController;
                }
            }
            return null;
        }
    }

    public List<DownloadController> getAll() {
        LinkedList<DownloadController> linkedList;
        synchronized (this.c) {
            linkedList = this.c;
        }
        return linkedList;
    }
}
