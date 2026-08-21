.class final Lcom/vivo/push/d/q;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/vivo/push/model/UnvarnishedMessage;

.field final synthetic b:Lcom/vivo/push/d/p;


# direct methods
.method constructor <init>(Lcom/vivo/push/d/p;Lcom/vivo/push/model/UnvarnishedMessage;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/d/q;->b:Lcom/vivo/push/d/p;

    iput-object p2, p0, Lcom/vivo/push/d/q;->a:Lcom/vivo/push/model/UnvarnishedMessage;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/vivo/push/d/q;->b:Lcom/vivo/push/d/p;

    iget-object v0, v0, Lcom/vivo/push/d/p;->b:Lcom/vivo/push/sdk/PushMessageCallback;

    iget-object v1, p0, Lcom/vivo/push/d/q;->b:Lcom/vivo/push/d/p;

    invoke-static {v1}, Lcom/vivo/push/d/p;->a(Lcom/vivo/push/d/p;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/vivo/push/d/q;->a:Lcom/vivo/push/model/UnvarnishedMessage;

    invoke-interface {v0, v1, v2}, Lcom/vivo/push/sdk/PushMessageCallback;->onTransmissionMessage(Landroid/content/Context;Lcom/vivo/push/model/UnvarnishedMessage;)V

    return-void
.end method
