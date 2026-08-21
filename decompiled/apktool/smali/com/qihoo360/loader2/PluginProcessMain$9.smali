.class final Lcom/qihoo360/loader2/PluginProcessMain$9;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Lcom/qihoo360/loader2/PluginProcessMain$Action;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginProcessMain;->getPidByProcessName(Ljava/lang/String;)I
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


# instance fields
.field final synthetic val$processName:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 665
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginProcessMain$9;->val$processName:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public call()Ljava/lang/Integer;
    .locals 2

    .line 668
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->access$200()Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$9;->val$processName:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    if-eqz v0, :cond_0

    .line 669
    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->access$400(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 670
    iget v0, v0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pid:I

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, -0x1

    .line 672
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    return-object v0
.end method

.method public bridge synthetic call()Ljava/lang/Object;
    .locals 1

    .line 665
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginProcessMain$9;->call()Ljava/lang/Integer;

    move-result-object v0

    return-object v0
.end method
