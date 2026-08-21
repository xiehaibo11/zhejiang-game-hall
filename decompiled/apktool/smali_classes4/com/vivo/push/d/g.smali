.class final Lcom/vivo/push/d/g;
.super Lcom/vivo/push/d/z;


# direct methods
.method constructor <init>(Lcom/vivo/push/o;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/d/z;-><init>(Lcom/vivo/push/o;)V

    return-void
.end method


# virtual methods
.method protected final a(Lcom/vivo/push/o;)V
    .locals 1

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "delete push info "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/vivo/push/d/g;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "OnClearCacheTask"

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object p1, p0, Lcom/vivo/push/d/g;->a:Landroid/content/Context;

    invoke-static {p1}, Lcom/vivo/push/util/y;->b(Landroid/content/Context;)Lcom/vivo/push/util/y;

    move-result-object p1

    invoke-virtual {p1}, Lcom/vivo/push/util/y;->a()V

    return-void
.end method
