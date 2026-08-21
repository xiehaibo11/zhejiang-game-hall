.class Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;
.super Ljava/lang/Object;
.source "PluginModeTwo.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/mode/PluginModeTwo;->installPlugin(Landroid/app/Activity;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/OpenListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/mode/PluginModeTwo;

.field final synthetic val$isStart:Z

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

.field final synthetic val$pluginId:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/mode/PluginModeTwo;ZLcom/ymnsdk/replugin/listener/OpenListener;Ljava/lang/String;)V
    .locals 0

    .line 106
    iput-object p1, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->this$0:Lcom/ymnsdk/replugin/mode/PluginModeTwo;

    iput-boolean p2, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$isStart:Z

    iput-object p3, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    iput-object p4, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$pluginId:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDownloadFailure(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V
    .locals 2

    const/4 v0, 0x0

    .line 134
    sput-boolean v0, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->isDownloading:Z

    .line 135
    iget-boolean v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$isStart:Z

    if-eqz v0, :cond_0

    return-void

    .line 136
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/listener/OpenListener;->onDownloadFailure(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    .line 137
    invoke-static {}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->getInstance()Lcom/ymnsdk/replugin/entity/PluginFailInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$pluginId:Ljava/lang/String;

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->savePluginFailInfo(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onDownloading(J)V
    .locals 1

    .line 124
    iget-boolean v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$isStart:Z

    if-eqz v0, :cond_0

    .line 126
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1, p2}, Lcom/ymnsdk/replugin/listener/OpenListener;->onDownloadingInStart(J)V

    return-void

    .line 129
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1, p2}, Lcom/ymnsdk/replugin/listener/OpenListener;->onDownloading(J)V

    return-void
.end method

.method public onFailure(Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x0

    .line 116
    sput-boolean v0, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->isDownloading:Z

    .line 117
    iget-boolean v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$isStart:Z

    if-eqz v0, :cond_0

    return-void

    .line 118
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/listener/OpenListener;->installFail(Ljava/lang/String;)V

    .line 119
    invoke-static {}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->getInstance()Lcom/ymnsdk/replugin/entity/PluginFailInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Lcom/ymnsdk/replugin/entity/PluginFailInfo;->savePluginFailInfo(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onSuccess()V
    .locals 1

    const/4 v0, 0x0

    .line 109
    sput-boolean v0, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->isDownloading:Z

    .line 110
    iget-boolean v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$isStart:Z

    if-eqz v0, :cond_0

    return-void

    .line 111
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;->val$listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    invoke-interface {v0}, Lcom/ymnsdk/replugin/listener/OpenListener;->installSuccess()V

    return-void
.end method
