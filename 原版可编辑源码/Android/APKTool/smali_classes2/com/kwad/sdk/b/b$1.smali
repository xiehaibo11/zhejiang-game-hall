.class final Lcom/kwad/sdk/b/b$1;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ajE:Lcom/kwad/sdk/b/b;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/b/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/b/b$1;->ajE:Lcom/kwad/sdk/b/b;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2

    if-nez p2, :cond_0

    return-void

    :cond_0
    :try_start_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    :cond_1
    invoke-virtual {p2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object p2

    if-nez p2, :cond_2

    return-void

    :cond_2
    invoke-virtual {p2}, Landroid/net/Uri;->getSchemeSpecificPart()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    return-void

    :cond_3
    const-string v1, "android.intent.action.PACKAGE_ADDED"

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/b/b$1;->ajE:Lcom/kwad/sdk/b/b;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/b/b;->a(Lcom/kwad/sdk/b/b;Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    const-string p1, "android.intent.action.PACKAGE_REMOVED"

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/kwad/sdk/b/b$1;->ajE:Lcom/kwad/sdk/b/b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/b/b;->a(Lcom/kwad/sdk/b/b;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_5
    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method
