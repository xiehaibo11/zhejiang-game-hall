.class public final Lcom/kwad/components/ad/reward/j/p;
.super Lcom/kwad/components/core/webview/jshandler/ab;


# instance fields
.field private qq:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/components/ad/reward/j;",
            ">;"
        }
    .end annotation
.end field

.field private xC:J

.field private xD:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/kwad/components/ad/reward/j;Ljava/lang/String;JLcom/kwad/sdk/core/webview/b;)V
    .locals 2

    invoke-direct {p0, p5}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/j/p;->xC:J

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/p;->xD:Ljava/lang/String;

    iput-wide p3, p0, Lcom/kwad/components/ad/reward/j/p;->xC:J

    if-eqz p1, :cond_0

    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/p;->qq:Ljava/lang/ref/WeakReference;

    :cond_0
    return-void
.end method

.method private static U(Ljava/lang/String;)Z
    .locals 1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "elementType"

    invoke-virtual {v0, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v0, 0x12

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/j/p;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j/p;->xD:Ljava/lang/String;

    return-object p0
.end method

.method private b(Lcom/kwad/components/core/webview/jshandler/ab$b;)Z
    .locals 3

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/ab$b;->getActionType()I

    move-result v0

    const/16 v1, 0x8c

    if-ne v0, v1, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->xN()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/ab$b;->rw()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/ad/reward/j/p;->U(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j/p;->qq:Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j/p;->qq:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/ad/reward/j;

    new-instance v0, Lcom/kwad/components/ad/reward/j/p$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/reward/j/p$1;-><init>(Lcom/kwad/components/ad/reward/j/p;Lcom/kwad/components/ad/reward/j;)V

    const-wide/16 v1, 0x5dc

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ab$b;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/j/p;->b(Lcom/kwad/components/core/webview/jshandler/ab$b;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/ab;->a(Lcom/kwad/components/core/webview/jshandler/ab$b;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/report/j;)V
    .locals 4

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/ab;->a(Lcom/kwad/sdk/core/report/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/p;->qq:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/p;->qq:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->getPlayDuration()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/report/j;->af(J)Lcom/kwad/sdk/core/report/j;

    return-void

    :cond_0
    iget-wide v0, p0, Lcom/kwad/components/ad/reward/j/p;->xC:J

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-lez v2, :cond_1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/report/j;->af(J)Lcom/kwad/sdk/core/report/j;

    :cond_1
    return-void
.end method
