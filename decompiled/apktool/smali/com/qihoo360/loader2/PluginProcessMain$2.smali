.class final Lcom/qihoo360/loader2/PluginProcessMain$2;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Lcom/qihoo360/loader2/PluginProcessMain$Action;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginProcessMain;->probePluginClient(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;
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

.field final synthetic val$plugin:Ljava/lang/String;

.field final synthetic val$process:I


# direct methods
.method constructor <init>(ILjava/lang/String;Lcom/qihoo360/loader2/PluginBinderInfo;)V
    .locals 0

    .line 343
    iput p1, p0, Lcom/qihoo360/loader2/PluginProcessMain$2;->val$process:I

    iput-object p2, p0, Lcom/qihoo360/loader2/PluginProcessMain$2;->val$plugin:Ljava/lang/String;

    iput-object p3, p0, Lcom/qihoo360/loader2/PluginProcessMain$2;->val$info:Lcom/qihoo360/loader2/PluginBinderInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public call()Lcom/qihoo360/loader2/IPluginClient;
    .locals 5

    .line 346
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

    if-eqz v1, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    .line 347
    iget v3, p0, Lcom/qihoo360/loader2/PluginProcessMain$2;->val$process:I

    const/4 v4, -0x1

    if-ne v3, v4, :cond_0

    .line 348
    iget-object v3, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->plugin:Ljava/lang/String;

    const-string v4, "ui"

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    goto :goto_0

    .line 353
    :cond_0
    invoke-static {v3}, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->isCustomPluginProcess(I)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 354
    iget-object v3, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->plugin:Ljava/lang/String;

    iget v4, p0, Lcom/qihoo360/loader2/PluginProcessMain$2;->val$process:I

    invoke-static {v4}, Lcom/qihoo360/loader2/PluginProcessMain;->access$300(I)Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    goto :goto_0

    .line 358
    :cond_1
    iget-object v3, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->plugin:Ljava/lang/String;

    iget-object v4, p0, Lcom/qihoo360/loader2/PluginProcessMain$2;->val$plugin:Ljava/lang/String;

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    goto :goto_0

    .line 362
    :cond_2
    invoke-static {v1}, Lcom/qihoo360/loader2/PluginProcessMain;->access$400(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)Z

    move-result v0

    if-nez v0, :cond_3

    return-object v2

    .line 365
    :cond_3
    iget-object v0, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->binder:Landroid/os/IBinder;

    invoke-interface {v0}, Landroid/os/IBinder;->pingBinder()Z

    move-result v0

    if-nez v0, :cond_4

    return-object v2

    .line 368
    :cond_4
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessMain$2;->val$info:Lcom/qihoo360/loader2/PluginBinderInfo;

    iget v2, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pid:I

    iput v2, v0, Lcom/qihoo360/loader2/PluginBinderInfo;->pid:I

    .line 369
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessMain$2;->val$info:Lcom/qihoo360/loader2/PluginBinderInfo;

    iget v2, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->index:I

    iput v2, v0, Lcom/qihoo360/loader2/PluginBinderInfo;->index:I

    .line 370
    iget-object v0, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    return-object v0

    :cond_5
    return-object v2
.end method

.method public bridge synthetic call()Ljava/lang/Object;
    .locals 1

    .line 343
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginProcessMain$2;->call()Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v0

    return-object v0
.end method
