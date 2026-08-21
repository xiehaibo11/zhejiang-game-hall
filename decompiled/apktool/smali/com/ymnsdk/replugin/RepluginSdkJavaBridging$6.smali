.class final Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$6;
.super Ljava/lang/Object;
.source "RepluginSdkJavaBridging.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->startApk(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 351
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailure(Ljava/lang/String;)V
    .locals 1

    .line 359
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$1200()I

    move-result v0

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onSuccess()V
    .locals 2

    .line 354
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$1100()I

    move-result v0

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method
