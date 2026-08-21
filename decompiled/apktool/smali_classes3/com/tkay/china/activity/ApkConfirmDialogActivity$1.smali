.class final Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/g/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/core/common/f/h;

.field final synthetic c:Lcom/tkay/core/common/g/a;


# direct methods
.method constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/g/a;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->b:Lcom/tkay/core/common/f/h;

    iput-object p3, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->c:Lcom/tkay/core/common/g/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 51
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->b:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0, v1}, Lcom/tkay/china/common/a;->a(Lcom/tkay/core/common/f/h;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 53
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->c:Lcom/tkay/core/common/g/a;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/g/a;->a(Z)V

    return-void

    .line 55
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->b:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/tkay/china/common/c/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 58
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->c:Lcom/tkay/core/common/g/a;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/g/a;->a(Z)V

    return-void

    .line 61
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1$1;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
