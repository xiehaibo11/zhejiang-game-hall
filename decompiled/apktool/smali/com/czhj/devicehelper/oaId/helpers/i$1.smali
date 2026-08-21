.class Lcom/czhj/devicehelper/oaId/helpers/i$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/devicehelper/oaId/helpers/i;->d()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/devicehelper/oaId/helpers/i;


# direct methods
.method constructor <init>(Lcom/czhj/devicehelper/oaId/helpers/i;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/i$1;->a:Lcom/czhj/devicehelper/oaId/helpers/i;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0xb

    if-ne v0, v1, :cond_0

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v0

    const-string v1, "type"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    const-string v1, "appid"

    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/i$1;->a:Lcom/czhj/devicehelper/oaId/helpers/i;

    invoke-static {v1, v0, p1}, Lcom/czhj/devicehelper/oaId/helpers/i;->a(Lcom/czhj/devicehelper/oaId/helpers/i;ILjava/lang/String;)Ljava/lang/String;

    :cond_0
    return-void
.end method
