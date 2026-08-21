.class public Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;
.super Ljava/lang/Object;
.source "AfterDownloadUtils.java"


# static fields
.field private static utils:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 9
    new-instance v0, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;->utils:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;
    .locals 1

    .line 12
    sget-object v0, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;->utils:Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;

    return-object v0
.end method


# virtual methods
.method public clearModeData()V
    .locals 1

    const-string v0, ""

    .line 67
    sput-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->pluginId:Ljava/lang/String;

    const/4 v0, 0x0

    .line 68
    sput-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->activity:Landroid/app/Activity;

    .line 69
    sput-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    return-void
.end method

.method public dealWithModeTwo()V
    .locals 5
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 18
    sget-object v0, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->pluginId:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 20
    new-instance v0, Lcom/ymnsdk/replugin/mode/PluginModeTwo;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;-><init>()V

    .line 21
    sget-object v1, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->activity:Landroid/app/Activity;

    sget-object v2, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->pluginId:Ljava/lang/String;

    const/4 v3, 0x1

    new-instance v4, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils$1;

    invoke-direct {v4, p0}, Lcom/ymnsdk/replugin/mode/AfterDownloadUtils$1;-><init>(Lcom/ymnsdk/replugin/mode/AfterDownloadUtils;)V

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->installPlugin(Landroid/app/Activity;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/OpenListener;)V

    :cond_0
    return-void
.end method
