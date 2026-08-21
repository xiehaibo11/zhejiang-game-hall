.class public Lcom/ymnsdk/replugin/mode/PluginModeOne;
.super Ljava/lang/Object;
.source "PluginModeOne.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public installPlugin(Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 10

    .line 22
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/other/PluginModeOneEvent;

    invoke-direct {v1, p1, p2}, Lcom/ymnsdk/replugin/event/other/PluginModeOneEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 23
    invoke-static {}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->getInstance()Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    move-result-object v2

    new-instance v9, Lcom/ymnsdk/replugin/mode/PluginModeOne$1;

    invoke-direct {v9, p0, p3, p2}, Lcom/ymnsdk/replugin/mode/PluginModeOne$1;-><init>(Lcom/ymnsdk/replugin/mode/PluginModeOne;Lcom/ymnsdk/replugin/listener/OpenListener;Ljava/lang/String;)V

    const/4 v5, 0x5

    const/16 v6, 0xf

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v3, p1

    move-object v4, p2

    invoke-virtual/range {v2 .. v9}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installPlugin(Landroid/app/Activity;Ljava/lang/String;IIZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method
