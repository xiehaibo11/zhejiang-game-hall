.class final Lcom/qihoo360/loader2/PluginProcessMain$10;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Lcom/qihoo360/loader2/PluginProcessMain$Action;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginProcessMain;->getProcessNameByPid(I)Ljava/lang/String;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/qihoo360/loader2/PluginProcessMain$Action<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic val$pid:I


# direct methods
.method constructor <init>(I)V
    .locals 0

    .line 683
    iput p1, p0, Lcom/qihoo360/loader2/PluginProcessMain$10;->val$pid:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic call()Ljava/lang/Object;
    .locals 1

    .line 683
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginProcessMain$10;->call()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public call()Ljava/lang/String;
    .locals 4

    .line 686
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->access$200()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    .line 687
    iget v2, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pid:I

    iget v3, p0, Lcom/qihoo360/loader2/PluginProcessMain$10;->val$pid:I

    if-eq v2, v3, :cond_0

    goto :goto_0

    .line 690
    :cond_0
    invoke-static {v1}, Lcom/qihoo360/loader2/PluginProcessMain;->access$400(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)Z

    move-result v2

    if-nez v2, :cond_1

    goto :goto_0

    .line 693
    :cond_1
    iget-object v0, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->name:Ljava/lang/String;

    return-object v0

    :cond_2
    const/4 v0, 0x0

    return-object v0
.end method
