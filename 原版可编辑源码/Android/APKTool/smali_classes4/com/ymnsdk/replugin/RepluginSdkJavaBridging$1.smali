.class final Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$1;
.super Ljava/lang/Object;
.source "RepluginSdkJavaBridging.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->getPluginsInfo(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 225
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailure(ILjava/lang/String;)V
    .locals 2

    .line 234
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$100()I

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onSuccess()V
    .locals 2

    .line 229
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->access$000()I

    move-result v0

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->sendResult(ILjava/lang/String;)V

    return-void
.end method
