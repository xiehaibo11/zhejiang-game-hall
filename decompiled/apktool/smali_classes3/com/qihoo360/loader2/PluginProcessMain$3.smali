.class final Lcom/qihoo360/loader2/PluginProcessMain$3;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Lcom/qihoo360/loader2/PluginProcessMain$Action;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginProcessMain;->probePluginClientByPid(ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/qihoo360/loader2/PluginProcessMain$Action<",
        "Lcom/qihoo360/loader2/IPluginClient;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic val$info:Lcom/qihoo360/loader2/PluginBinderInfo;

.field final synthetic val$pid:I


# direct methods
.method constructor <init>(ILcom/qihoo360/loader2/PluginBinderInfo;)V
    .locals 0

    .line 393
    iput p1, p0, Lcom/qihoo360/loader2/PluginProcessMain$3;->val$pid:I

    iput-object p2, p0, Lcom/qihoo360/loader2/PluginProcessMain$3;->val$info:Lcom/qihoo360/loader2/PluginBinderInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public call()Lcom/qihoo360/loader2/IPluginClient;
    .locals 5

    .line 396
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->access$200()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    .line 397
    iget v3, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pid:I

    iget v4, p0, Lcom/qihoo360/loader2/PluginProcessMain$3;->val$pid:I

    if-eq v3, v4, :cond_0

    goto :goto_0

    .line 400
    :cond_0
    invoke-static {v1}, Lcom/qihoo360/loader2/PluginProcessMain;->access$400(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)Z

    move-result v0

    if-nez v0, :cond_1

    return-object v2

    .line 403
    :cond_1
    iget-object v0, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->binder:Landroid/os/IBinder;

    invoke-interface {v0}, Landroid/os/IBinder;->pingBinder()Z

    move-result v0

    if-nez v0, :cond_2

    return-object v2

    .line 406
    :cond_2
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessMain$3;->val$info:Lcom/qihoo360/loader2/PluginBinderInfo;

    iget v2, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pid:I

    iput v2, v0, Lcom/qihoo360/loader2/PluginBinderInfo;->pid:I

    .line 407
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessMain$3;->val$info:Lcom/qihoo360/loader2/PluginBinderInfo;

    iget v2, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->index:I

    iput v2, v0, Lcom/qihoo360/loader2/PluginBinderInfo;->index:I

    .line 408
    iget-object v0, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    return-object v0

    :cond_3
    return-object v2
.end method

.method public bridge synthetic call()Ljava/lang/Object;
    .locals 1

    .line 393
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginProcessMain$3;->call()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v0

    return-object v0
.end method
