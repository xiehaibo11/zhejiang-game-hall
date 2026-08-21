.class public Lcom/mbridge/msdk/mbdownload/f;
.super Lcom/mbridge/msdk/mbdownload/b;
.source "MBDownloadAgent.java"


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-string v0, "mb"

    .line 15
    invoke-direct {p0, p1, v0, p2}, Lcom/mbridge/msdk/mbdownload/b;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 16
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->RICH_NOTIFICATION:Z

    const/4 p2, 0x1

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 17
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/mbdownload/f;->setRichNotification(Z)V

    goto :goto_0

    .line 19
    :cond_0
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbdownload/f;->setRichNotification(Z)V

    .line 22
    :goto_0
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->SLIENT_DOWNLOAD:Z

    if-eqz p1, :cond_1

    .line 23
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/mbdownload/f;->setSilentDownload(Z)V

    goto :goto_1

    .line 25
    :cond_1
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbdownload/f;->setSilentDownload(Z)V

    :goto_1
    const-string p1, "com.mbridge.msdk.shell.MBService"

    .line 27
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbdownload/f;->setDownloadClz(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 0

    .line 31
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/mbdownload/b;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 32
    invoke-virtual {p0, p4}, Lcom/mbridge/msdk/mbdownload/f;->setRichNotification(Z)V

    const-string p1, "com.mbridge.msdk.shell.MBService"

    .line 34
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbdownload/f;->setDownloadClz(Ljava/lang/String;)V

    return-void
.end method
