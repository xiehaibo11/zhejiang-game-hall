.class final Lcom/qihoo360/loader2/PluginDesc$1;
.super Landroid/content/BroadcastReceiver;
.source "PluginDesc.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginDesc;->registerReceiverIfNeeded()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 186
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    .line 190
    invoke-static {}, Lcom/qihoo360/loader2/PluginDesc;->access$000()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 191
    invoke-static {}, Lcom/qihoo360/loader2/PluginDesc;->access$100()Ljava/lang/String;

    move-result-object p1

    const-string p2, "Receiver.onReceive(): Mark change!"

    invoke-static {p1, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p1, 0x1

    .line 194
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginDesc;->access$202(Z)Z

    .line 195
    invoke-static {}, Lcom/qihoo360/loader2/PluginDesc;->access$300()Ljava/util/HashMap;

    return-void
.end method
