.class final Lcom/tkay/china/activity/ApkConfirmDialogActivity$7$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/activity/ApkConfirmDialogActivity$7;->onClick(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/activity/ApkConfirmDialogActivity$7;


# direct methods
.method constructor <init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity$7;)V
    .locals 0

    .line 271
    iput-object p1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$7$1;->a:Lcom/tkay/china/activity/ApkConfirmDialogActivity$7;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 274
    invoke-static {}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a()Lcom/tkay/core/common/g/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 275
    invoke-static {}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a()Lcom/tkay/core/common/g/a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/tkay/core/common/g/a;->a(Z)V

    :cond_0
    return-void
.end method
