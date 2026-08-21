.class final Lcom/tkay/expressad/a/a/a$1;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/a/a/a;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/a/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/a/a/a;)V
    .locals 0

    .line 284
    iput-object p1, p0, Lcom/tkay/expressad/a/a/a$1;->a:Lcom/tkay/expressad/a/a/a;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    .line 287
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string p2, "android.net.conn.CONNECTIVITY_CHANGE"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 288
    iget-object p1, p0, Lcom/tkay/expressad/a/a/a$1;->a:Lcom/tkay/expressad/a/a/a;

    invoke-static {p1}, Lcom/tkay/expressad/a/a/a;->b(Lcom/tkay/expressad/a/a/a;)Landroid/os/Handler;

    move-result-object p1

    const/4 p2, 0x2

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_0
    return-void
.end method
