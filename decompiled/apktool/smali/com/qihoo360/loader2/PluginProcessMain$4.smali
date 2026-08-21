.class final Lcom/qihoo360/loader2/PluginProcessMain$4;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Lcom/qihoo360/loader2/PluginProcessMain$Action;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginProcessMain;->sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/qihoo360/loader2/PluginProcessMain$Action<",
        "Ljava/util/Map<",
        "Ljava/lang/String;",
        "Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;",
        ">;>;"
    }
.end annotation


# instance fields
.field final synthetic val$target:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 421
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginProcessMain$4;->val$target:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic call()Ljava/lang/Object;
    .locals 1

    .line 421
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginProcessMain$4;->call()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public call()Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;",
            ">;"
        }
    .end annotation

    .line 424
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 425
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->access$200()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    .line 426
    iget-object v3, p0, Lcom/qihoo360/loader2/PluginProcessMain$4;->val$target:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_1

    .line 428
    :cond_1
    iget-object v3, v2, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->name:Ljava/lang/String;

    iget-object v4, p0, Lcom/qihoo360/loader2/PluginProcessMain$4;->val$target:Ljava/lang/String;

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 433
    :goto_1
    iget-object v3, v2, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->name:Ljava/lang/String;

    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_2
    return-object v0
.end method
