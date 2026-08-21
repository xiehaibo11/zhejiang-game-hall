.class public interface abstract Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/volley/toolbox/FileDownloadRequest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "FileDownloadListener"
.end annotation


# virtual methods
.method public abstract downloadProgress(Lcom/czhj/volley/toolbox/DownloadItem;JJ)V
.end method

.method public abstract onCancel(Lcom/czhj/volley/toolbox/DownloadItem;)V
.end method

.method public abstract onErrorResponse(Lcom/czhj/volley/toolbox/DownloadItem;)V
.end method

.method public abstract onSuccess(Lcom/czhj/volley/toolbox/DownloadItem;)V
.end method
