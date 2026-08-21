.class final Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$8;
.super Ljava/lang/Object;
.source "RepluginSdkJavaBridging.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/PreloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->preloadPlugin(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 381
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public preloadFail(Ljava/lang/String;)V
    .locals 1

    .line 389
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$1600()I

    move-result v0

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public preloadSuccess()V
    .locals 2

    .line 384
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$1500()I

    move-result v0

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method
