.class Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$4;
.super Ljava/lang/Object;
.source "GenLoginAuthActivity.java"

# interfaces
.implements Landroid/content/DialogInterface$OnKeyListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->d()V
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

    .line 214
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$4;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onKey(Landroid/content/DialogInterface;ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 p1, 0x1

    const/4 v0, 0x4

    if-ne p2, v0, :cond_0

    .line 217
    invoke-virtual {p3}, Landroid/view/KeyEvent;->getAction()I

    move-result p2

    if-ne p2, p1, :cond_0

    .line 218
    invoke-virtual {p3}, Landroid/view/KeyEvent;->getRepeatCount()I

    move-result p2

    if-nez p2, :cond_0

    .line 219
    iget-object p2, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$4;->a:Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    invoke-static {p2}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->b(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)Lcom/cmic/gen/sdk/view/d;

    move-result-object p2

    invoke-virtual {p2}, Lcom/cmic/gen/sdk/view/d;->b()V

    :cond_0
    return p1
.end method
