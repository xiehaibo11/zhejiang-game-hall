.class final Lcom/tkay/basead/c/g$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/c/g;->a(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Landroid/app/Dialog;

.field final synthetic c:Lcom/tkay/basead/c/g;


# direct methods
.method constructor <init>(Lcom/tkay/basead/c/g;Landroid/content/Context;Landroid/app/Dialog;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/tkay/basead/c/g$2;->c:Lcom/tkay/basead/c/g;

    iput-object p2, p0, Lcom/tkay/basead/c/g$2;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/basead/c/g$2;->b:Landroid/app/Dialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 9

    .line 95
    :try_start_0
    iget-object p1, p0, Lcom/tkay/basead/c/g$2;->c:Lcom/tkay/basead/c/g;

    iget-object v0, p1, Lcom/tkay/basead/c/g;->b:Ljava/lang/String;

    iget-object p1, p0, Lcom/tkay/basead/c/g$2;->c:Lcom/tkay/basead/c/g;

    invoke-static {p1}, Lcom/tkay/basead/c/g;->b(Lcom/tkay/basead/c/g;)Lcom/tkay/core/common/f/h;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v1

    iget-object p1, p0, Lcom/tkay/basead/c/g$2;->c:Lcom/tkay/basead/c/g;

    iget-object v2, p1, Lcom/tkay/basead/c/g;->a:Ljava/lang/String;

    const/16 v3, 0x8

    const/4 v4, 0x0

    const-wide/16 v5, 0x0

    const-wide/16 v7, 0x0

    invoke-static/range {v0 .. v8}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V

    .line 96
    iget-object p1, p0, Lcom/tkay/basead/c/g$2;->a:Landroid/content/Context;

    iget-object v0, p0, Lcom/tkay/basead/c/g$2;->c:Lcom/tkay/basead/c/g;

    invoke-static {v0}, Lcom/tkay/basead/c/g;->c(Lcom/tkay/basead/c/g;)Lcom/tkay/core/common/f/h;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/basead/a/b;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 98
    iget-object p1, p0, Lcom/tkay/basead/c/g$2;->c:Lcom/tkay/basead/c/g;

    iget-object v0, p1, Lcom/tkay/basead/c/g;->b:Ljava/lang/String;

    iget-object p1, p0, Lcom/tkay/basead/c/g$2;->c:Lcom/tkay/basead/c/g;

    invoke-static {p1}, Lcom/tkay/basead/c/g;->d(Lcom/tkay/basead/c/g;)Lcom/tkay/core/common/f/h;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v1

    iget-object p1, p0, Lcom/tkay/basead/c/g$2;->c:Lcom/tkay/basead/c/g;

    iget-object v2, p1, Lcom/tkay/basead/c/g;->a:Ljava/lang/String;

    const/16 v3, 0x9

    const/4 v4, 0x0

    const-wide/16 v5, 0x0

    const-wide/16 v7, 0x0

    invoke-static/range {v0 .. v8}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V

    .line 100
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/c/g$2;->b:Landroid/app/Dialog;

    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
