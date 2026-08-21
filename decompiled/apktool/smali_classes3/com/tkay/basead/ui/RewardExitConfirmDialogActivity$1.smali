.class final Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;)V
    .locals 0

    .line 67
    iput-object p1, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$1;->a:Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 71
    invoke-static {}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->a()Ljava/lang/Runnable;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 72
    invoke-static {}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->a()Ljava/lang/Runnable;

    move-result-object p1

    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    .line 75
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity$1;->a:Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->finish()V

    return-void
.end method
