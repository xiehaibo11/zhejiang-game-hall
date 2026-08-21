.class final Lcom/tkay/core/common/b/m$10;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m;->N()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;)V
    .locals 0

    .line 997
    iput-object p1, p0, Lcom/tkay/core/common/b/m$10;->a:Lcom/tkay/core/common/b/m;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3

    .line 1000
    invoke-static {p1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1001
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/m$10$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/b/m$10$1;-><init>(Lcom/tkay/core/common/b/m$10;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 1007
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/b/m$10$2;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/b/m$10$2;-><init>(Lcom/tkay/core/common/b/m$10;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 1013
    invoke-static {}, Lcom/tkay/core/common/k/b;->a()Lcom/tkay/core/common/k/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/k/b;->b()V

    .line 1014
    iget-object v0, p0, Lcom/tkay/core/common/b/m$10;->a:Lcom/tkay/core/common/b/m;

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/b/m$10;->a:Lcom/tkay/core/common/b/m;

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 1017
    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "tkay_log_agent"

    .line 1018
    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "tkay_log_agent_data"

    .line 1019
    invoke-virtual {p2, p1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 1020
    invoke-static {p1}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method
