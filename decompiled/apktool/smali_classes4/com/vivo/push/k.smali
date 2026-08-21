.class final Lcom/vivo/push/k;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/vivo/push/e;


# direct methods
.method constructor <init>(Lcom/vivo/push/e;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/k;->b:Lcom/vivo/push/e;

    iput-object p2, p0, Lcom/vivo/push/k;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/vivo/push/k;->b:Lcom/vivo/push/e;

    iget-object v1, p0, Lcom/vivo/push/k;->a:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/vivo/push/e;->c(Lcom/vivo/push/e;Ljava/lang/String;)Lcom/vivo/push/e$a;

    move-result-object v0

    if-eqz v0, :cond_0

    const/16 v1, 0x3eb

    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    invoke-virtual {v0, v1, v2}, Lcom/vivo/push/e$a;->a(I[Ljava/lang/Object;)V

    :cond_0
    return-void
.end method
