.class final Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Landroid/os/IBinder$DeathRecipient;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/PluginProcessMain;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProcessClientRecord"
.end annotation


# instance fields
.field binder:Landroid/os/IBinder;

.field client:Lcom/qihoo360/loader2/IPluginClient;

.field index:I

.field name:Ljava/lang/String;

.field pid:I

.field plugin:Ljava/lang/String;

.field pluginManager:Lcom/qihoo360/replugin/packages/PluginManagerServer;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;IILandroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;Lcom/qihoo360/replugin/packages/PluginManagerServer;)V
    .locals 0

    .line 99
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 100
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->name:Ljava/lang/String;

    .line 101
    iput-object p2, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->plugin:Ljava/lang/String;

    .line 102
    iput p3, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pid:I

    .line 103
    iput p4, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->index:I

    .line 104
    iput-object p5, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->binder:Landroid/os/IBinder;

    .line 105
    iput-object p6, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    .line 106
    iput-object p7, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pluginManager:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    return-void
.end method


# virtual methods
.method public binderDied()V
    .locals 0

    .line 111
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginProcessMain;->access$000(Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;)V

    return-void
.end method

.method public getClient()Lcom/qihoo360/loader2/IPluginClient;
    .locals 1

    .line 123
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 116
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 117
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " {name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->plugin:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " pid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->pid:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " index="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->index:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " binder="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->binder:Landroid/os/IBinder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " client="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/PluginProcessMain$ProcessClientRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 119
    :cond_0
    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
