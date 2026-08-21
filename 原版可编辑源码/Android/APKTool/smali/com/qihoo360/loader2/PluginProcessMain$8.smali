.class final Lcom/qihoo360/loader2/PluginProcessMain$8;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Lcom/qihoo360/loader2/PluginProcessMain$Action;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginProcessMain;->attachProcess(ILjava/lang/String;ILandroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;Ljava/lang/String;Lcom/qihoo360/replugin/packages/PluginManagerServer;)Ljava/lang/String;
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
.field final synthetic val$pr:Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;


# direct methods
.method constructor <init>(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V
    .locals 0

    .line 587
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginProcessMain$8;->val$pr:Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic call()Ljava/lang/Object;
    .locals 1

    .line 587
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginProcessMain$8;->call()Ljava/lang/Void;

    move-result-object v0

    return-object v0
.end method

.method public call()Ljava/lang/Void;
    .locals 3

    .line 590
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->access$200()Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$8;->val$pr:Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    iget-object v1, v1, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->name:Ljava/lang/String;

    iget-object v2, p0, Lcom/qihoo360/loader2/PluginProcessMain$8;->val$pr:Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v0, 0x0

    return-object v0
.end method
