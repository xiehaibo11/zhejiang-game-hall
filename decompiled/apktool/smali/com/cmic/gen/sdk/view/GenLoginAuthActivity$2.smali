.class Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$2;
.super Ljava/lang/Object;
.source "GenLoginAuthActivity.java"

# interfaces
.implements Lcom/cmic/gen/sdk/view/AuthLoginCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->onClick(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V
    .locals 0

    .line 945
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$2;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAuthLoginCallBack(Z)V
    .locals 1

    if-eqz p1, :cond_0

    .line 949
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$2;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->i(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Landroid/widget/CheckBox;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 950
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$2;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {p1, v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->a(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;I)I

    .line 951
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$2;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->l(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    :cond_0
    return-void
.end method
