.class final Lcom/vivo/push/d/m;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/vivo/push/b/m;

.field final synthetic b:Lcom/vivo/push/d/l;


# direct methods
.method constructor <init>(Lcom/vivo/push/d/l;Lcom/vivo/push/b/m;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/d/m;->b:Lcom/vivo/push/d/l;

    iput-object p2, p0, Lcom/vivo/push/d/m;->a:Lcom/vivo/push/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    iget-object v0, p0, Lcom/vivo/push/d/m;->b:Lcom/vivo/push/d/l;

    iget-object v0, v0, Lcom/vivo/push/d/l;->b:Lcom/vivo/push/sdk/PushMessageCallback;

    iget-object v1, p0, Lcom/vivo/push/d/m;->b:Lcom/vivo/push/d/l;

    invoke-static {v1}, Lcom/vivo/push/d/l;->a(Lcom/vivo/push/d/l;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/vivo/push/d/m;->a:Lcom/vivo/push/b/m;

    invoke-virtual {v2}, Lcom/vivo/push/b/m;->h()I

    move-result v2

    iget-object v3, p0, Lcom/vivo/push/d/m;->a:Lcom/vivo/push/b/m;

    invoke-virtual {v3}, Lcom/vivo/push/b/m;->d()Ljava/util/ArrayList;

    move-result-object v3

    iget-object v4, p0, Lcom/vivo/push/d/m;->a:Lcom/vivo/push/b/m;

    invoke-virtual {v4}, Lcom/vivo/push/b/m;->g()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v0, v1, v2, v3, v4}, Lcom/vivo/push/sdk/PushMessageCallback;->onListTags(Landroid/content/Context;ILjava/util/List;Ljava/lang/String;)V

    return-void
.end method
