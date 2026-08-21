.class final Lcom/vivo/push/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/vivo/push/IPushActionListener;


# instance fields
.field final synthetic a:Lcom/vivo/push/e$a;

.field final synthetic b:Lcom/vivo/push/e;


# direct methods
.method constructor <init>(Lcom/vivo/push/e;Lcom/vivo/push/e$a;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/g;->b:Lcom/vivo/push/e;

    iput-object p2, p0, Lcom/vivo/push/g;->a:Lcom/vivo/push/e$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onStateChanged(I)V
    .locals 2

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/vivo/push/g;->a:Lcom/vivo/push/e$a;

    invoke-virtual {p1}, Lcom/vivo/push/e$a;->b()[Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    array-length p1, p1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/vivo/push/g;->b:Lcom/vivo/push/e;

    iget-object v0, p0, Lcom/vivo/push/g;->a:Lcom/vivo/push/e$a;

    invoke-virtual {v0}, Lcom/vivo/push/e$a;->b()[Ljava/lang/Object;

    move-result-object v0

    const/4 v1, 0x0

    aget-object v0, v0, v1

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/vivo/push/e;->a(Ljava/lang/String;)V

    return-void

    :cond_1
    :goto_0
    const-string p1, "PushClientManager"

    const-string v0, "bind app result is null"

    invoke-static {p1, v0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_2
    iget-object p1, p0, Lcom/vivo/push/g;->b:Lcom/vivo/push/e;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e;Ljava/lang/String;)Ljava/lang/String;

    iget-object p1, p0, Lcom/vivo/push/g;->b:Lcom/vivo/push/e;

    invoke-static {p1}, Lcom/vivo/push/e;->b(Lcom/vivo/push/e;)Lcom/vivo/push/util/b;

    move-result-object p1

    const-string v0, "APP_TOKEN"

    invoke-virtual {p1, v0}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;)V

    return-void
.end method
