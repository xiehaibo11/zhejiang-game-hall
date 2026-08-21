.class final Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/activity/ApkConfirmDialogActivity;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/core/common/ui/component/RoundImageView;

.field final synthetic c:Lcom/tkay/china/activity/ApkConfirmDialogActivity;


# direct methods
.method constructor <init>(Lcom/tkay/china/activity/ApkConfirmDialogActivity;Ljava/lang/String;Lcom/tkay/core/common/ui/component/RoundImageView;)V
    .locals 0

    .line 207
    iput-object p1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;->c:Lcom/tkay/china/activity/ApkConfirmDialogActivity;

    iput-object p2, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;->b:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 210
    iget-object v0, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;->a:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 211
    iget-object p1, p0, Lcom/tkay/china/activity/ApkConfirmDialogActivity$4;->b:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
