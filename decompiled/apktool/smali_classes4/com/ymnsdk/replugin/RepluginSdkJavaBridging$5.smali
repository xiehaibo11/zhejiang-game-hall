.class final Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$5;
.super Ljava/lang/Object;
.source "RepluginSdkJavaBridging.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isInstallPlugin(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 337
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onInstalled()V
    .locals 2

    .line 340
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$900()I

    move-result v0

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onNotInstall()V
    .locals 2

    .line 345
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$1000()I

    move-result v0

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method
