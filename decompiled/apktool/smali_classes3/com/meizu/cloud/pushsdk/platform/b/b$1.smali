.class Lcom/meizu/cloud/pushsdk/platform/b/b$1;
.super Landroid/os/Handler;


# instance fields
.field final synthetic a:Lcom/meizu/cloud/pushsdk/platform/b/b;


# direct methods
.method constructor <init>(Lcom/meizu/cloud/pushsdk/platform/b/b;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/meizu/cloud/pushsdk/platform/b/b$1;->a:Lcom/meizu/cloud/pushsdk/platform/b/b;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 0

    iget p1, p1, Landroid/os/Message;->what:I

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/meizu/cloud/pushsdk/platform/b/b$1;->a:Lcom/meizu/cloud/pushsdk/platform/b/b;

    invoke-virtual {p1}, Lcom/meizu/cloud/pushsdk/platform/b/b;->m()Z

    :cond_0
    return-void
.end method
