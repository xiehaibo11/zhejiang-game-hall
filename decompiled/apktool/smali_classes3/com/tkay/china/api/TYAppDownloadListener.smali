.class public interface abstract Lcom/tkay/china/api/TYAppDownloadListener;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYEventInterface;


# virtual methods
.method public abstract onDownloadFail(Lcom/tkay/core/api/TYAdInfo;JJLjava/lang/String;Ljava/lang/String;)V
.end method

.method public abstract onDownloadFinish(Lcom/tkay/core/api/TYAdInfo;JLjava/lang/String;Ljava/lang/String;)V
.end method

.method public abstract onDownloadPause(Lcom/tkay/core/api/TYAdInfo;JJLjava/lang/String;Ljava/lang/String;)V
.end method

.method public abstract onDownloadStart(Lcom/tkay/core/api/TYAdInfo;JJLjava/lang/String;Ljava/lang/String;)V
.end method

.method public abstract onDownloadUpdate(Lcom/tkay/core/api/TYAdInfo;JJLjava/lang/String;Ljava/lang/String;)V
.end method

.method public abstract onInstalled(Lcom/tkay/core/api/TYAdInfo;Ljava/lang/String;Ljava/lang/String;)V
.end method
