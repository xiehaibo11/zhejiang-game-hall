.class final Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$10;
.super Ljava/lang/Object;
.source "RepluginSdkJavaBridging.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/OpenListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->openPlugin(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 417
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public installFail(Ljava/lang/String;)V
    .locals 1

    .line 440
    sget-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenSuc:Z

    if-nez v0, :cond_0

    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$600()I

    move-result v0

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    :cond_0
    const/4 p1, 0x1

    .line 441
    sput-boolean p1, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenComplete:Z

    return-void
.end method

.method public installSuccess()V
    .locals 2

    .line 434
    sget-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenSuc:Z

    if-nez v0, :cond_0

    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$500()I

    move-result v0

    const-string v1, "\u5b89\u88c5\u6210\u529f"

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    :cond_0
    const/4 v0, 0x1

    .line 435
    sput-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenComplete:Z

    return-void
.end method

.method public onDownloadFailure(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V
    .locals 1

    .line 476
    sget-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenSuc:Z

    if-nez v0, :cond_0

    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$600()I

    move-result v0

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    :cond_0
    const/4 p1, 0x1

    .line 477
    sput-boolean p1, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenComplete:Z

    return-void
.end method

.method public onDownloading(J)V
    .locals 2

    const-wide/16 v0, 0x64

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    .line 448
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$700()I

    move-result v0

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    const-wide/16 p1, -0x1

    .line 449
    invoke-static {p1, p2}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$802(J)J

    goto :goto_0

    .line 451
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$800()J

    move-result-wide v0

    cmp-long v0, p1, v0

    if-eqz v0, :cond_1

    .line 453
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$700()I

    move-result v0

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    .line 454
    invoke-static {p1, p2}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$802(J)J

    :cond_1
    :goto_0
    return-void
.end method

.method public onDownloadingInStart(J)V
    .locals 2

    const-wide/16 v0, 0x64

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    .line 463
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$2100()I

    move-result v0

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    const-wide/16 p1, -0x1

    .line 464
    invoke-static {p1, p2}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$802(J)J

    goto :goto_0

    .line 466
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$800()J

    move-result-wide v0

    cmp-long v0, p1, v0

    if-eqz v0, :cond_1

    .line 468
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$2100()I

    move-result v0

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    .line 469
    invoke-static {p1, p2}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$802(J)J

    :cond_1
    :goto_0
    return-void
.end method

.method public openFail(Ljava/lang/String;)V
    .locals 1

    .line 427
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$2000()I

    move-result v0

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    const/4 p1, 0x0

    .line 428
    sput-boolean p1, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenSuc:Z

    const/4 p1, 0x1

    .line 429
    sput-boolean p1, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenComplete:Z

    return-void
.end method

.method public openSuccess()V
    .locals 2

    .line 420
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$1900()I

    move-result v0

    const-string v1, "\u6253\u5f00\u6210\u529f"

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    const/4 v0, 0x1

    .line 421
    sput-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenSuc:Z

    .line 422
    sput-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenComplete:Z

    return-void
.end method
