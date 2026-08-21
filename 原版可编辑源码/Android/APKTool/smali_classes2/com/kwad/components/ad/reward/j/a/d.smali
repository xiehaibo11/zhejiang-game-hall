.class public final Lcom/kwad/components/ad/reward/j/a/d;
.super Lcom/kwad/components/core/webview/b/h;

# interfaces
.implements Lcom/kwad/components/ad/reward/j/r;
.implements Lcom/kwad/components/core/webview/jshandler/n$b;


# instance fields
.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private qq:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/components/ad/reward/j;",
            ">;"
        }
    .end annotation
.end field

.field private xM:Lcom/kwad/components/ad/reward/c/e;

.field private xN:Lcom/kwad/components/ad/reward/j/m;

.field private xO:Lcom/kwad/components/ad/reward/j/l;

.field private xP:Lcom/kwad/components/ad/reward/j/n;

.field private xQ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation
.end field

.field private xR:Landroid/content/DialogInterface$OnDismissListener;


# direct methods
.method public constructor <init>(Lcom/kwad/components/ad/reward/j;JLandroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p2, p3, p4}, Lcom/kwad/components/core/webview/b/h;-><init>(JLandroid/content/Context;)V

    const/4 p2, 0x0

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->xQ:Ljava/util/List;

    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->qq:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public constructor <init>(Lcom/kwad/components/ad/reward/j;JLandroid/content/Context;Landroid/content/DialogInterface$OnDismissListener;)V
    .locals 0

    const-wide/16 p2, -0x1

    invoke-direct {p0, p2, p3, p4}, Lcom/kwad/components/core/webview/b/h;-><init>(JLandroid/content/Context;)V

    const/4 p2, 0x0

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->xQ:Ljava/util/List;

    iput-object p5, p0, Lcom/kwad/components/ad/reward/j/a/d;->xR:Landroid/content/DialogInterface$OnDismissListener;

    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->qq:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public final a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/components/core/webview/b/h;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j/a/d;->qq:Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/ad/reward/j;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    if-eqz p1, :cond_1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j/r;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/components/l;Landroid/view/ViewGroup;)V
    .locals 8

    invoke-super {p0, p1, p2, p3, p4}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/components/l;Landroid/view/ViewGroup;)V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance p4, Lcom/kwad/components/ad/reward/j/q;

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/j/a/d;->xI:J

    iget-object v7, p0, Lcom/kwad/components/ad/reward/j/a/d;->xR:Landroid/content/DialogInterface$OnDismissListener;

    const/4 v3, 0x0

    move-object v0, p4

    move-object v1, p1

    move-object v2, p2

    move-object v6, p0

    invoke-direct/range {v0 .. v7}, Lcom/kwad/components/ad/reward/j/q;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/components/ad/reward/j;JLcom/kwad/sdk/core/webview/d/a/a;Landroid/content/DialogInterface$OnDismissListener;)V

    invoke-interface {p3, p4}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/ad/reward/c/e;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/c/e;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->xM:Lcom/kwad/components/ad/reward/c/e;

    invoke-interface {p3, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/ad/reward/j/s;

    iget-object p4, p0, Lcom/kwad/components/ad/reward/j/a/d;->mContext:Landroid/content/Context;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/d;->qq:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    invoke-direct {p2, p4, v0}, Lcom/kwad/components/ad/reward/j/s;-><init>(Landroid/content/Context;Lcom/kwad/components/ad/reward/j;)V

    invoke-interface {p3, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/ad/reward/j/o;

    iget-object p4, p0, Lcom/kwad/components/ad/reward/j/a/d;->qq:Ljava/lang/ref/WeakReference;

    invoke-virtual {p4}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Lcom/kwad/components/ad/reward/j;

    invoke-direct {p2, p4}, Lcom/kwad/components/ad/reward/j/o;-><init>(Lcom/kwad/components/ad/reward/j;)V

    invoke-interface {p3, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/ad/reward/j/m;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/j/m;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->xN:Lcom/kwad/components/ad/reward/j/m;

    invoke-interface {p3, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/ad/reward/j/l;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/j/l;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->xO:Lcom/kwad/components/ad/reward/j/l;

    invoke-interface {p3, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->xQ:Ljava/util/List;

    if-eqz p2, :cond_0

    iget-object p4, p0, Lcom/kwad/components/ad/reward/j/a/d;->xO:Lcom/kwad/components/ad/reward/j/l;

    invoke-virtual {p4, p2}, Lcom/kwad/components/ad/reward/j/l;->e(Ljava/util/List;)V

    const/4 p2, 0x0

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/a/d;->xQ:Ljava/util/List;

    :cond_0
    new-instance p2, Lcom/kwad/components/core/webview/jshandler/n;

    invoke-direct {p2, p1}, Lcom/kwad/components/core/webview/jshandler/n;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p2, p0}, Lcom/kwad/components/core/webview/jshandler/n;->a(Lcom/kwad/components/core/webview/jshandler/n$b;)V

    invoke-interface {p3, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p1, Lcom/kwad/components/ad/reward/j/n;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/j/n;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j/a/d;->xP:Lcom/kwad/components/ad/reward/j/n;

    invoke-interface {p3, p1}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final ac(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/d;->xP:Lcom/kwad/components/ad/reward/j/n;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/j/n;->ab(Z)V

    :cond_0
    return-void
.end method

.method public final c(Lcom/kwad/sdk/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/ab;
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/d;->qq:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    move-object v2, v0

    new-instance v0, Lcom/kwad/components/ad/reward/j/p;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j/a/d;->getTkTemplateId()Ljava/lang/String;

    move-result-object v3

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/j/a/d;->xI:J

    move-object v1, v0

    move-object v6, p1

    invoke-direct/range {v1 .. v6}, Lcom/kwad/components/ad/reward/j/p;-><init>(Lcom/kwad/components/ad/reward/j;Ljava/lang/String;JLcom/kwad/sdk/core/webview/b;)V

    return-object v0
.end method

.method public final f(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j/a/d;->xQ:Ljava/util/List;

    return-void
.end method

.method public final gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/d;->xN:Lcom/kwad/components/ad/reward/j/m;

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->NOT_HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object v0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j/m;->jm()V

    sget-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object v0
.end method

.method public final jt()Lcom/kwad/components/ad/reward/c/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/d;->xM:Lcom/kwad/components/ad/reward/c/e;

    return-object v0
.end method

.method public final ju()Lcom/kwad/components/ad/reward/j/l;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/d;->xO:Lcom/kwad/components/ad/reward/j/l;

    return-object v0
.end method

.method public final jv()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/h;->jv()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/d;->qq:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j/r;)V

    :cond_1
    return-void
.end method

.method public final y(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/i/c;

    sget v1, Lcom/kwad/components/core/i/e;->AGGREGATION:I

    invoke-direct {v0, p1, v1}, Lcom/kwad/components/core/i/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j/a/d;->qq:Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/ad/reward/j;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    if-eqz p1, :cond_1

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/core/i/c;)V

    :cond_1
    return-void
.end method
