.class final Lcom/tkay/china/activity/ApkConfirmDialogActivity$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;


# direct methods
.method constructor <init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;)V
    .locals 0

    .line 61
    iput-object p1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1$1;->a:Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 64
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1$1;->a:Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;

    iget-object v0, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->b:Lcom/tkay/core/common/f/h;

    sput-object v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a:Lcom/tkay/core/common/f/h;

    .line 65
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1$1;->a:Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;

    iget-object v0, v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->c:Lcom/tkay/core/common/g/a;

    invoke-static {v0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a(Lcom/tkay/core/common/g/a;)Lcom/tkay/core/common/g/a;

    .line 67
    new-instance v0, Landroid/content/Intent;

    iget-object v1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1$1;->a:Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;

    iget-object v1, v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->a:Landroid/content/Context;

    const-class v2, Lcom/tkay/china/activity/ApkConfirmDialogActivity;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 68
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 69
    iget-object v1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1$1;->a:Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;

    iget-object v1, v1, Lcom/tkay/china/activity/ApkConfirmDialogActivity$1;->a:Landroid/content/Context;

    invoke-virtual {v1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method
