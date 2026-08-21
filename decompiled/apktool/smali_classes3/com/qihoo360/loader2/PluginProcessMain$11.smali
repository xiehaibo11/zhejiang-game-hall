.class final Lcom/qihoo360/loader2/PluginProcessMain$11;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Lcom/qihoo360/loader2/PluginProcessMain$Action;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginProcessMain;->handleBinderDiedLocked(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/qihoo360/loader2/PluginProcessMain$Action<",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic val$p:Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;


# direct methods
.method constructor <init>(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V
    .locals 0

    .line 739
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginProcessMain$11;->val$p:Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic call()Ljava/lang/Object;
    .locals 1

    .line 739
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginProcessMain$11;->call()Ljava/lang/Void;

    move-result-object v0

    return-object v0
.end method

.method public call()Ljava/lang/Void;
    .locals 2

    .line 742
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->access$200()Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$11;->val$p:Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    iget-object v1, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->name:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    .line 743
    iget-object v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$11;->val$p:Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    if-ne v0, v1, :cond_0

    .line 744
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->access$200()Ljava/util/Map;

    move-result-object v1

    iget-object v0, v0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->name:Ljava/lang/String;

    invoke-interface {v1, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method
