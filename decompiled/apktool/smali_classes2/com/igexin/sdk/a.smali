.class Lcom/igexin/sdk/a;
.super Landroid/os/Handler;


# instance fields
.field final synthetic a:Lcom/igexin/sdk/GTIntentService;


# direct methods
.method public constructor <init>(Lcom/igexin/sdk/GTIntentService;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/sdk/a;->a:Lcom/igexin/sdk/GTIntentService;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p1

    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    goto :goto_0

    :cond_1
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    instance-of v0, v0, Landroid/content/Intent;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/igexin/sdk/a;->a:Lcom/igexin/sdk/GTIntentService;

    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Landroid/content/Intent;

    invoke-virtual {v0, v0, v1}, Lcom/igexin/sdk/GTIntentService;->processOnHandleIntent(Landroid/content/Context;Landroid/content/Intent;)V

    :cond_2
    :goto_0
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    return-void
.end method
