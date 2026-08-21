.class Lcom/sigmob/sdk/mraid2/c$b;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid2/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/c;

.field private b:Landroid/content/Context;

.field private c:I


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/c;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/c$b;->a:Lcom/sigmob/sdk/mraid2/c;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    const/4 p1, -0x1

    iput p1, p0, Lcom/sigmob/sdk/mraid2/c$b;->c:I

    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c$b;->b:Landroid/content/Context;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/c$b;->b:Landroid/content/Context;

    :cond_0
    return-void
.end method

.method public a(Landroid/content/Context;)V
    .locals 2

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/c$b;->b:Landroid/content/Context;

    if-eqz p1, :cond_0

    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "android.intent.action.CONFIGURATION_CHANGED"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p0, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    :cond_0
    return-void
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c$b;->b:Landroid/content/Context;

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string p2, "android.intent.action.CONFIGURATION_CHANGED"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/c$b;->a:Lcom/sigmob/sdk/mraid2/c;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid2/c;->c(Lcom/sigmob/sdk/mraid2/c;)Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/czhj/sdk/common/ClientMetadata;->getScreenOrientation(Landroid/content/Context;)I

    move-result p1

    iget p2, p0, Lcom/sigmob/sdk/mraid2/c$b;->c:I

    if-eq p1, p2, :cond_1

    iput p1, p0, Lcom/sigmob/sdk/mraid2/c$b;->c:I

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/c$b;->a:Lcom/sigmob/sdk/mraid2/c;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/mraid2/c;->a(I)V

    :cond_1
    return-void
.end method
