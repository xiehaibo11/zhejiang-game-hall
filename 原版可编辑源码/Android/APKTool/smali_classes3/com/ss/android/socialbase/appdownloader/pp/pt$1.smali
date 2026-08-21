.class final Lcom/ss/android/socialbase/appdownloader/pp/pt$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnKeyListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/pp/pt;->rg(Landroid/app/Activity;Lcom/ss/android/socialbase/appdownloader/q/f;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 91
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onKey(Landroid/content/DialogInterface;ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 p1, 0x0

    const/4 v0, 0x4

    if-ne p2, v0, :cond_1

    .line 95
    invoke-virtual {p3}, Landroid/view/KeyEvent;->getAction()I

    move-result p2

    const/4 p3, 0x1

    if-ne p2, p3, :cond_0

    .line 96
    invoke-static {p1}, Lcom/ss/android/socialbase/appdownloader/pp/pt;->rg(Z)V

    :cond_0
    return p3

    :cond_1
    return p1
.end method
