.class final Lcom/vivo/push/i;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/vivo/push/IPushActionListener;


# instance fields
.field final synthetic a:Lcom/vivo/push/e;


# direct methods
.method constructor <init>(Lcom/vivo/push/e;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/i;->a:Lcom/vivo/push/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onStateChanged(I)V
    .locals 2

    const-string v0, "APP_TOKEN"

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/vivo/push/i;->a:Lcom/vivo/push/e;

    const-string v1, ""

    invoke-static {p1, v1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e;Ljava/lang/String;)Ljava/lang/String;

    iget-object p1, p0, Lcom/vivo/push/i;->a:Lcom/vivo/push/e;

    invoke-static {p1}, Lcom/vivo/push/e;->b(Lcom/vivo/push/e;)Lcom/vivo/push/util/b;

    move-result-object p1

    invoke-virtual {p1, v0, v1}, Lcom/vivo/push/util/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/vivo/push/i;->a:Lcom/vivo/push/e;

    invoke-static {p1}, Lcom/vivo/push/e;->c(Lcom/vivo/push/e;)V

    iget-object p1, p0, Lcom/vivo/push/i;->a:Lcom/vivo/push/e;

    invoke-static {p1}, Lcom/vivo/push/e;->d(Lcom/vivo/push/e;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/vivo/push/i;->a:Lcom/vivo/push/e;

    const/4 v1, 0x0

    invoke-static {p1, v1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e;Ljava/lang/String;)Ljava/lang/String;

    iget-object p1, p0, Lcom/vivo/push/i;->a:Lcom/vivo/push/e;

    invoke-static {p1}, Lcom/vivo/push/e;->b(Lcom/vivo/push/e;)Lcom/vivo/push/util/b;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;)V

    return-void
.end method
