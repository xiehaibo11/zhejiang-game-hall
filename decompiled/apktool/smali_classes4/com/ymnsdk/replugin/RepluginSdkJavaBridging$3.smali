.class final Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$3;
.super Ljava/lang/Object;
.source "RepluginSdkJavaBridging.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->installPlugin(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 261
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDownloadFailure(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V
    .locals 2

    .line 291
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5ba2\u6237\u7aef\u6536\u5230\u4fe1\u606f"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymn"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 292
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$600()I

    move-result v0

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onDownloading(J)V
    .locals 2

    const-wide/16 v0, 0x64

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    .line 278
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$700()I

    move-result v0

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    const-wide/16 p1, -0x1

    .line 279
    invoke-static {p1, p2}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$802(J)J

    goto :goto_0

    .line 281
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$800()J

    move-result-wide v0

    cmp-long v0, p1, v0

    if-eqz v0, :cond_1

    .line 283
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$700()I

    move-result v0

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    .line 284
    invoke-static {p1, p2}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$802(J)J

    :cond_1
    :goto_0
    return-void
.end method

.method public onFailure(Ljava/lang/String;)V
    .locals 2

    .line 270
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5ba2\u6237\u7aef\u6536\u5230\u4fe1\u606f"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymn"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 271
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$600()I

    move-result v0

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onSuccess()V
    .locals 2

    const-string v0, "ymn"

    const-string v1, "\u5ba2\u6237\u7aef\u6536\u5230\u4fe1\u606f\u4e0b\u8f7d\u6210\u529f"

    .line 264
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 265
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$500()I

    move-result v0

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method
