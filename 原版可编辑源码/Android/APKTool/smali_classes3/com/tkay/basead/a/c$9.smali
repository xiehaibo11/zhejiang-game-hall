.class final Lcom/tkay/basead/a/c$9;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/c;)V
    .locals 0

    .line 809
    iput-object p1, p0, Lcom/tkay/basead/a/c$9;->a:Lcom/tkay/basead/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 813
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/a/c$9;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->A()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x0

    const-string v2, "string"

    if-eqz v0, :cond_0

    .line 814
    :try_start_1
    iget-object v0, p0, Lcom/tkay/basead/a/c$9;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/basead/a/c$9;->a:Lcom/tkay/basead/a/c;

    iget-object v3, v3, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    const-string v4, "basead_click_empty"

    invoke-static {v3, v4, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-static {v0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return-void

    .line 816
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/c$9;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/basead/a/c$9;->a:Lcom/tkay/basead/a/c;

    iget-object v3, v3, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    const-string v4, "basead_click_fail"

    invoke-static {v3, v4, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-static {v0, v2, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    return-void
.end method
