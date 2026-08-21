.class Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$11;
.super Landroid/text/method/LinkMovementMethod;
.source "GenLoginAuthActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->i()Landroid/widget/RelativeLayout;
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

    .line 674
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$11;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-direct {p0}, Landroid/text/method/LinkMovementMethod;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouchEvent(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z
    .locals 1

    .line 677
    invoke-super {p0, p1, p2, p3}, Landroid/text/method/LinkMovementMethod;->onTouchEvent(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z

    move-result p2

    if-nez p2, :cond_0

    .line 679
    invoke-virtual {p3}, Landroid/view/MotionEvent;->getAction()I

    move-result p3

    const/4 v0, 0x1

    if-ne p3, v0, :cond_0

    .line 680
    invoke-virtual {p1}, Landroid/widget/TextView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    .line 681
    instance-of p3, p1, Landroid/view/ViewGroup;

    if-eqz p3, :cond_0

    .line 682
    check-cast p1, Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->performClick()Z

    move-result p1

    return p1

    :cond_0
    return p2
.end method
