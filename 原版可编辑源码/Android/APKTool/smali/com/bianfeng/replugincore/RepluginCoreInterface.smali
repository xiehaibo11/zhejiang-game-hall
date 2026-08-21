.class public Lcom/bianfeng/replugincore/RepluginCoreInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "RepluginCoreInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->APPLICATION:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field private static final CHECK_HAS_REPLUGIN:Ljava/lang/String; = "check_has_core_replugin"

.field private static final HAS_REPLUGIN:I = 0x21ef8


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method


# virtual methods
.method public checkHasReplugin()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "check_has_core_replugin"
    .end annotation

    const v0, 0x21ef8

    const-string v1, "\u5b58\u5728corereplugin"

    .line 43
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/replugincore/RepluginCoreInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "140"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "replugincore"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x1d

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "2.2.6"

    return-object v0
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 0

    .line 38
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    return-void
.end method
