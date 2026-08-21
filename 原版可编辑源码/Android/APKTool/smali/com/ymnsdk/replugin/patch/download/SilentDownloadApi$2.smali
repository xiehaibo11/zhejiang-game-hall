.class Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$2;
.super Ljava/lang/Object;
.source "SilentDownloadApi.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->loadHostConfig(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)V
    .locals 0

    .line 117
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$2;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailure(ILjava/lang/String;)V
    .locals 0

    .line 130
    iget-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$2;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->access$100(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)V

    return-void
.end method

.method public onSuccessAvailable(Ljava/lang/String;)V
    .locals 0

    .line 125
    iget-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$2;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->access$100(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)V

    return-void
.end method

.method public onSuccessUnAvailable(Ljava/lang/String;)V
    .locals 0

    .line 120
    iget-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$2;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->access$100(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)V

    return-void
.end method
