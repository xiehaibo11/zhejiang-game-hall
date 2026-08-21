.class final Lcom/qihoo360/loader2/PluginProcessMain$7;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Lcom/qihoo360/loader2/PluginProcessMain$Action;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginProcessMain;->sumActivities()I
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/qihoo360/loader2/PluginProcessMain$Action<",
        "Ljava/lang/Integer;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 514
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public call()Ljava/lang/Integer;
    .locals 5

    .line 518
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->access$200()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v1, 0x0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    .line 519
    invoke-static {v2}, Lcom/qihoo360/loader2/PluginProcessMain;->access$400(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)Z

    move-result v3

    if-nez v3, :cond_0

    goto :goto_0

    .line 524
    :cond_0
    :try_start_0
    iget-object v2, v2, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginClient;->sumActivities()I

    move-result v2

    const/4 v3, -0x1

    if-ne v2, v3, :cond_1

    .line 526
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :cond_1
    add-int/2addr v1, v2

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 531
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "ppm.sa e: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "ws001"

    invoke-static {v4, v3, v2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_0

    .line 535
    :cond_2
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    return-object v0
.end method

.method public bridge synthetic call()Ljava/lang/Object;
    .locals 1

    .line 514
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginProcessMain$7;->call()Ljava/lang/Integer;

    move-result-object v0

    return-object v0
.end method
