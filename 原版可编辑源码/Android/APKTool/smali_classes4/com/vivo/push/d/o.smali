.class final Lcom/vivo/push/d/o;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/vivo/push/b/n;

.field final synthetic b:Lcom/vivo/push/d/n;


# direct methods
.method constructor <init>(Lcom/vivo/push/d/n;Lcom/vivo/push/b/n;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/d/o;->b:Lcom/vivo/push/d/n;

    iput-object p2, p0, Lcom/vivo/push/d/o;->a:Lcom/vivo/push/b/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    iget-object v0, p0, Lcom/vivo/push/d/o;->b:Lcom/vivo/push/d/n;

    iget-object v0, v0, Lcom/vivo/push/d/n;->b:Lcom/vivo/push/sdk/PushMessageCallback;

    iget-object v1, p0, Lcom/vivo/push/d/o;->b:Lcom/vivo/push/d/n;

    invoke-static {v1}, Lcom/vivo/push/d/n;->a(Lcom/vivo/push/d/n;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/vivo/push/d/o;->a:Lcom/vivo/push/b/n;

    invoke-virtual {v2}, Lcom/vivo/push/b/n;->d()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/vivo/push/d/o;->a:Lcom/vivo/push/b/n;

    invoke-virtual {v3}, Lcom/vivo/push/b/n;->e()I

    move-result v3

    iget-object v4, p0, Lcom/vivo/push/d/o;->a:Lcom/vivo/push/b/n;

    invoke-virtual {v4}, Lcom/vivo/push/b/n;->f()Z

    move-result v4

    invoke-interface {v0, v1, v2, v3, v4}, Lcom/vivo/push/sdk/PushMessageCallback;->onLog(Landroid/content/Context;Ljava/lang/String;IZ)V

    return-void
.end method
