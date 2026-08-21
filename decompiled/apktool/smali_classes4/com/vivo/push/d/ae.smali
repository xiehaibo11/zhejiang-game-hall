.class final Lcom/vivo/push/d/ae;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/vivo/push/b/i;

.field final synthetic b:Lcom/vivo/push/d/ad;


# direct methods
.method constructor <init>(Lcom/vivo/push/d/ad;Lcom/vivo/push/b/i;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/d/ae;->b:Lcom/vivo/push/d/ad;

    iput-object p2, p0, Lcom/vivo/push/d/ae;->a:Lcom/vivo/push/b/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/vivo/push/d/ae;->b:Lcom/vivo/push/d/ad;

    iget-object v0, v0, Lcom/vivo/push/d/ad;->b:Lcom/vivo/push/sdk/PushMessageCallback;

    iget-object v1, p0, Lcom/vivo/push/d/ae;->b:Lcom/vivo/push/d/ad;

    invoke-static {v1}, Lcom/vivo/push/d/ad;->a(Lcom/vivo/push/d/ad;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/vivo/push/d/ae;->a:Lcom/vivo/push/b/i;

    invoke-virtual {v2}, Lcom/vivo/push/b/i;->h()I

    move-result v2

    iget-object v3, p0, Lcom/vivo/push/d/ae;->a:Lcom/vivo/push/b/i;

    invoke-virtual {v3}, Lcom/vivo/push/b/i;->d()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v1, v2, v3}, Lcom/vivo/push/sdk/PushMessageCallback;->onUnBind(Landroid/content/Context;ILjava/lang/String;)V

    return-void
.end method
