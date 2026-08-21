.class final Lcom/tkay/china/activity/ApkConfirmDialogActivity$6;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/h;

.field final synthetic b:Lcom/tkay/china/activity/ApkConfirmDialogActivity;


# direct methods
.method constructor <init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;Lcom/tkay/core/common/f/h;)V
    .locals 0

    .line 261
    iput-object p1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$6;->b:Lcom/tkay/china/activity/ApkConfirmDialogActivity;

    iput-object p2, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$6;->a:Lcom/tkay/core/common/f/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 264
    iget-object p1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$6;->b:Lcom/tkay/china/activity/ApkConfirmDialogActivity;

    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$6;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->H()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/core/common/l/l;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method
