.class public Lcom/kwad/components/core/webview/jshandler/o;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# instance fields
.field protected final TL:Lcom/kwad/sdk/core/webview/b;

.field private TM:I

.field private TN:Z

.field private final TO:Z

.field private TP:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/e/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private xR:Landroid/content/DialogInterface$OnDismissListener;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V
    .locals 7

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    invoke-direct/range {v0 .. v6}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;ZIZ)V

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;I)V
    .locals 7

    const/4 v4, 0x0

    const/4 v5, 0x1

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    invoke-direct/range {v0 .. v6}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;ZIZ)V

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;IZ)V
    .locals 7

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x2

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v6, p5

    invoke-direct/range {v0 .. v6}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;ZIZ)V

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;Landroid/content/DialogInterface$OnDismissListener;)V
    .locals 7

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    invoke-direct/range {v0 .. v6}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;ZIZ)V

    iput-object p4, p0, Lcom/kwad/components/core/webview/jshandler/o;->xR:Landroid/content/DialogInterface$OnDismissListener;

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;ZIZ)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/o;->TN:Z

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/o;->TP:Ljava/util/List;

    iput-boolean p4, p0, Lcom/kwad/components/core/webview/jshandler/o;->TN:Z

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/o;->TL:Lcom/kwad/sdk/core/webview/b;

    iput p5, p0, Lcom/kwad/components/core/webview/jshandler/o;->TM:I

    if-eqz p2, :cond_0

    const/4 p1, 0x1

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/c;->ar(I)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/o;->TP:Ljava/util/List;

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    iput-object p3, p0, Lcom/kwad/components/core/webview/jshandler/o;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    iput-boolean p6, p0, Lcom/kwad/components/core/webview/jshandler/o;->TO:Z

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Ljava/util/List;Lcom/kwad/sdk/core/webview/d/a/a;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/webview/b;",
            "Ljava/util/List<",
            "Lcom/kwad/components/core/e/d/c;",
            ">;",
            "Lcom/kwad/sdk/core/webview/d/a/a;",
            ")V"
        }
    .end annotation

    const/4 v2, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v3, p3

    invoke-direct/range {v0 .. v6}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;ZIZ)V

    if-eqz p2, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/o;->TP:Ljava/util/List;

    invoke-interface {p1, p2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    :cond_0
    return-void
.end method

.method private static Y(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cb(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    const/16 v0, 0xd

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/o;)Landroid/content/DialogInterface$OnDismissListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/o;->xR:Landroid/content/DialogInterface$OnDismissListener;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/o;Lcom/kwad/sdk/core/webview/d/b/a;)Z
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/core/webview/jshandler/o;->b(Lcom/kwad/sdk/core/webview/d/b/a;)Z

    move-result p0

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/core/webview/jshandler/o;)Lcom/kwad/sdk/core/webview/d/a/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/o;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-object p0
.end method

.method private static b(Lcom/kwad/sdk/core/webview/d/b/a;)Z
    .locals 1

    iget p0, p0, Lcom/kwad/sdk/core/webview/d/b/a;->UZ:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic c(Lcom/kwad/components/core/webview/jshandler/o;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/core/webview/jshandler/o;->TM:I

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/core/webview/jshandler/o;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/webview/jshandler/o;->TO:Z

    return p0
.end method

.method static synthetic e(Lcom/kwad/components/core/webview/jshandler/o;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/webview/jshandler/o;->TN:Z

    return p0
.end method


# virtual methods
.method protected final C(J)Lcom/kwad/components/core/e/d/c;
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/o;->TP:Ljava/util/List;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    const-wide/16 v2, 0x0

    cmp-long v2, p1, v2

    if-gez v2, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/o;->TP:Ljava/util/List;

    const/4 p2, 0x0

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/e/d/c;

    return-object p1

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/o;->TP:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v2}, Lcom/kwad/components/core/e/d/c;->nE()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v3

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v3

    cmp-long v3, v3, p1

    if-nez v3, :cond_2

    return-object v2

    :cond_3
    return-object v1
.end method

.method protected J(I)V
    .locals 0

    return-void
.end method

.method protected a(Lcom/kwad/sdk/core/webview/d/b/a;Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/z$b;
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    iget-object v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    if-eqz v1, :cond_0

    iget-object v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v1, v1, Lcom/kwad/sdk/core/webview/d/b/c;->UP:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v1, v1, Lcom/kwad/sdk/core/webview/d/b/c;->UP:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->dt(Ljava/lang/String;)Lcom/kwad/sdk/core/report/j;

    :cond_0
    iget-object v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    if-eqz v1, :cond_1

    iget-object v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget v1, v1, Lcom/kwad/sdk/core/webview/d/b/c;->aze:I

    if-eqz v1, :cond_1

    iget-object v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget v1, v1, Lcom/kwad/sdk/core/webview/d/b/c;->aze:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cp(I)Lcom/kwad/sdk/core/report/j;

    :cond_1
    invoke-static {p2}, Lcom/kwad/components/core/webview/jshandler/o;->Y(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    if-eqz v1, :cond_2

    iget-object v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v1, v1, Lcom/kwad/sdk/core/webview/d/b/c;->azf:Lcom/kwad/sdk/core/webview/d/b/b;

    if-eqz v1, :cond_2

    new-instance v1, Lcom/kwad/sdk/utils/ac$a;

    invoke-direct {v1}, Lcom/kwad/sdk/utils/ac$a;-><init>()V

    iget-object v2, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v2, v2, Lcom/kwad/sdk/core/webview/d/b/c;->azf:Lcom/kwad/sdk/core/webview/d/b/b;

    iget-wide v2, v2, Lcom/kwad/sdk/core/webview/d/b/b;->x:D

    double-to-float v2, v2

    iget-object v3, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v3, v3, Lcom/kwad/sdk/core/webview/d/b/c;->azf:Lcom/kwad/sdk/core/webview/d/b/b;

    iget-wide v3, v3, Lcom/kwad/sdk/core/webview/d/b/b;->y:D

    double-to-float v3, v3

    invoke-virtual {v1, v2, v3}, Lcom/kwad/sdk/utils/ac$a;->g(FF)V

    iget-object v2, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v2, v2, Lcom/kwad/sdk/core/webview/d/b/c;->azf:Lcom/kwad/sdk/core/webview/d/b/b;

    iget-wide v2, v2, Lcom/kwad/sdk/core/webview/d/b/b;->x:D

    double-to-float v2, v2

    iget-object v3, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v3, v3, Lcom/kwad/sdk/core/webview/d/b/c;->azf:Lcom/kwad/sdk/core/webview/d/b/b;

    iget-wide v3, v3, Lcom/kwad/sdk/core/webview/d/b/b;->y:D

    double-to-float v3, v3

    invoke-virtual {v1, v2, v3}, Lcom/kwad/sdk/utils/ac$a;->f(FF)V

    iget-object v2, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v2, v2, Lcom/kwad/sdk/core/webview/d/b/c;->azf:Lcom/kwad/sdk/core/webview/d/b/b;

    iget v2, v2, Lcom/kwad/sdk/core/webview/d/b/b;->width:I

    iget-object p1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object p1, p1, Lcom/kwad/sdk/core/webview/d/b/c;->azf:Lcom/kwad/sdk/core/webview/d/b/b;

    iget p1, p1, Lcom/kwad/sdk/core/webview/d/b/b;->height:I

    invoke-virtual {v1, v2, p1}, Lcom/kwad/sdk/utils/ac$a;->x(II)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/o;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-object p1, p1, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    if-eqz p1, :cond_3

    invoke-interface {p1}, Lcom/kwad/sdk/widget/e;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    :cond_3
    :goto_0
    const/4 p1, 0x0

    invoke-virtual {v0, p2, p1, p1, p1}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/g/a;)Lcom/kwad/sdk/core/report/j;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/j;->Ca()Lcom/kwad/sdk/core/report/z$b;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/o;->TL:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/b;->DY()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, -0x1

    const-string v0, "native adTemplate is null"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/webview/d/b/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/d/b/a;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/d/b/a;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/o;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-boolean p1, p1, Lcom/kwad/sdk/core/webview/b;->ayg:Z

    if-eqz p1, :cond_1

    new-instance p1, Lcom/kwad/components/core/webview/jshandler/o$1;

    invoke-direct {p1, p0, v0}, Lcom/kwad/components/core/webview/jshandler/o$1;-><init>(Lcom/kwad/components/core/webview/jshandler/o;Lcom/kwad/sdk/core/webview/d/b/a;)V

    :goto_1
    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_2

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/o;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    if-eqz p1, :cond_2

    new-instance p1, Lcom/kwad/components/core/webview/jshandler/o$2;

    invoke-direct {p1, p0, v0}, Lcom/kwad/components/core/webview/jshandler/o$2;-><init>(Lcom/kwad/components/core/webview/jshandler/o;Lcom/kwad/sdk/core/webview/d/b/a;)V

    goto :goto_1

    :cond_2
    :goto_2
    const/4 p1, 0x0

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "clickAction"

    return-object v0
.end method

.method protected jn()V
    .locals 0

    return-void
.end method

.method public final onDestroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/o;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-void
.end method
