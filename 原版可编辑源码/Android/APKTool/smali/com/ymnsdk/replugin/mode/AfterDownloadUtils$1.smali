.class Lcom/ymnsdk/replugin/mode/AfterDownloadUtils$1;
.super Ljava/lang/Object;
.source "AfterDownloadUtils.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/OpenListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;->dealWithModeTwo()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils$1;->this$0:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public installFail(Ljava/lang/String;)V
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils$1;->this$0:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;->clearModeData()V

    .line 41
    sget-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/listener/OpenListener;->installFail(Ljava/lang/String;)V

    return-void
.end method

.method public installSuccess()V
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils$1;->this$0:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;->clearModeData()V

    .line 35
    sget-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0}, Lcom/ymnsdk/replugin/listener/OpenListener;->installSuccess()V

    return-void
.end method

.method public onDownloadFailure(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils$1;->this$0:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;->clearModeData()V

    .line 53
    sget-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/listener/OpenListener;->onDownloadFailure(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    return-void
.end method

.method public onDownloading(J)V
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils$1;->this$0:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;->clearModeData()V

    .line 47
    sget-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1, p2}, Lcom/ymnsdk/replugin/listener/OpenListener;->onDownloading(J)V

    return-void
.end method

.method public onDownloadingInStart(J)V
    .locals 1

    .line 58
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils$1;->this$0:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;->clearModeData()V

    .line 59
    sget-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1, p2}, Lcom/ymnsdk/replugin/listener/OpenListener;->onDownloadingInStart(J)V

    return-void
.end method

.method public openFail(Ljava/lang/String;)V
    .locals 1

    .line 29
    sget-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/listener/OpenListener;->openFail(Ljava/lang/String;)V

    return-void
.end method

.method public openSuccess()V
    .locals 1

    .line 24
    sget-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0}, Lcom/ymnsdk/replugin/listener/OpenListener;->openSuccess()V

    return-void
.end method
