.class Lcom/qihoo360/replugin/packages/PluginInfoUpdater$UpdateReceiver;
.super Landroid/content/BroadcastReceiver;
.source "PluginInfoUpdater.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/packages/PluginInfoUpdater;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "UpdateReceiver"
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 59
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/qihoo360/replugin/packages/PluginInfoUpdater$1;)V
    .locals 0

    .line 59
    invoke-direct {p0}, Lcom/qihoo360/replugin/packages/PluginInfoUpdater$UpdateReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    .line 63
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "com.qihoo360.replugin.pms.ACTION_UPDATE_INFO"

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 64
    invoke-static {p2}, Lcom/qihoo360/replugin/packages/PluginInfoUpdater;->access$100(Landroid/content/Intent;)Z

    :cond_0
    return-void
.end method
