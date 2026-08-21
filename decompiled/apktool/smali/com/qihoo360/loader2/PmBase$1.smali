.class Lcom/qihoo360/loader2/PmBase$1;
.super Landroid/content/BroadcastReceiver;
.source "PmBase.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/PmBase;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/qihoo360/loader2/PmBase;


# direct methods
.method constructor <init>(Lcom/qihoo360/loader2/PmBase;)V
    .locals 0

    .line 179
    iput-object p1, p0, Lcom/qihoo360/loader2/PmBase$1;->this$0:Lcom/qihoo360/loader2/PmBase;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 6

    .line 182
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    .line 183
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 187
    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    const-string v0, "obj"

    .line 188
    invoke-virtual {p2, v0}, Landroid/content/Intent;->getParcelableExtra(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/model/PluginInfo;

    if-eqz v0, :cond_6

    const/4 v1, -0x1

    .line 190
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v2

    const v3, 0x4a300c39    # 2884366.2f

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-eq v2, v3, :cond_2

    const v3, 0x7c9c887b

    if-eq v2, v3, :cond_1

    goto :goto_0

    :cond_1
    const-string v2, "ACTION_NEW_PLUGIN"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move v1, v4

    goto :goto_0

    :cond_2
    const-string v2, "ACTION_UNINSTALL_PLUGIN"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move v1, v5

    :cond_3
    :goto_0
    if-eqz v1, :cond_5

    if-eq v1, v5, :cond_4

    goto :goto_1

    .line 196
    :cond_4
    iget-object p1, p0, Lcom/qihoo360/loader2/PmBase$1;->this$0:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {p1, v0}, Lcom/qihoo360/loader2/PmBase;->pluginUninstalled(Lcom/qihoo360/replugin/model/PluginInfo;)V

    goto :goto_1

    .line 193
    :cond_5
    iget-object p1, p0, Lcom/qihoo360/loader2/PmBase$1;->this$0:Lcom/qihoo360/loader2/PmBase;

    const-string v1, "persist_need_restart"

    invoke-virtual {p2, v1, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result p2

    invoke-virtual {p1, v0, p2}, Lcom/qihoo360/loader2/PmBase;->newPluginFound(Lcom/qihoo360/replugin/model/PluginInfo;Z)V

    :cond_6
    :goto_1
    return-void
.end method
