.class final Lcom/tkay/china/activity/ApkConfirmDialogActivity$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/activity/ApkConfirmDialogActivity;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/activity/ApkConfirmDialogActivity;


# direct methods
.method constructor <init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;)V
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$2;->a:Lcom/tkay/china/activity/ApkConfirmDialogActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 142
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    new-instance v0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$2$1;

    invoke-direct {v0, p0}, Lcom/tkay/china/activity/ApkConfirmDialogActivity$2$1;-><init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity$2;)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 151
    iget-object p1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$2;->a:Lcom/tkay/china/activity/ApkConfirmDialogActivity;

    invoke-virtual {p1}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->finish()V

    return-void
.end method
