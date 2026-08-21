.class Lcom/qihoo360/loader2/Plugin$UpdateInfoTask;
.super Ljava/lang/Object;
.source "Plugin.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/Plugin;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "UpdateInfoTask"
.end annotation


# instance fields
.field mInfo:Lcom/qihoo360/replugin/model/PluginInfo;


# direct methods
.method constructor <init>(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 0

    .line 164
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 165
    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin$UpdateInfoTask;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 171
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v0

    iget-object v1, p0, Lcom/qihoo360/loader2/Plugin$UpdateInfoTask;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-interface {v0, v1}, Lcom/qihoo360/loader2/IPluginHost;->updatePluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 174
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ph u p i: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ws001"

    invoke-static {v2, v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_0
    return-void
.end method
