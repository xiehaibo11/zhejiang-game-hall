.class final Lcom/vivo/push/f;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/vivo/push/e;


# direct methods
.method constructor <init>(Lcom/vivo/push/e;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/f;->b:Lcom/vivo/push/e;

    iput-object p2, p0, Lcom/vivo/push/f;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/vivo/push/f;->b:Lcom/vivo/push/e;

    invoke-static {v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e;)Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/vivo/push/f;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/vivo/push/f;->b:Lcom/vivo/push/e;

    invoke-static {v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/vivo/push/f;->b:Lcom/vivo/push/e;

    invoke-static {v1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e;)Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/vivo/push/f;->a:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/vivo/push/util/z;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/vivo/push/f;->b:Lcom/vivo/push/e;

    invoke-virtual {v0}, Lcom/vivo/push/e;->i()V

    :cond_1
    return-void
.end method
