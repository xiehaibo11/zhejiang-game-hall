.class public Lcom/kwad/components/core/webview/b/h;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/components/i;
.implements Lcom/kwad/sdk/core/webview/d/a/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/b/h$a;
    }
.end annotation


# static fields
.field private static We:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/components/core/webview/b/c/d;",
            ">;>;"
        }
    .end annotation
.end field


# instance fields
.field private Db:J

.field private QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

.field private Tj:Lcom/kwad/sdk/core/download/e;

.field private VP:Lcom/kwad/components/core/webview/b/c/d;

.field protected VQ:Lcom/kwad/components/core/webview/b/i;

.field private VR:Lcom/kwad/sdk/core/webview/c/g;

.field private VS:Lcom/kwad/components/core/offline/api/b/c;

.field private VT:Ljava/util/concurrent/Future;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/Future<",
            "*>;"
        }
    .end annotation
.end field

.field private VU:Lcom/kwad/sdk/components/l;

.field private VV:Lcom/kwad/components/core/webview/b/a/p;

.field private VW:Z

.field private VX:Z

.field private VY:Z

.field private VZ:Z

.field private Wa:I

.field private Wb:J

.field private Wc:J

.field private Wd:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private Wf:I

.field protected Wg:Lcom/kwad/sdk/core/webview/e;

.field private Wh:Lcom/kwad/components/core/webview/b/h$a;

.field private Wi:Lcom/kwad/sdk/components/j;

.field private final Wj:Ljava/lang/Runnable;

.field private mActivity:Landroid/app/Activity;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field protected final mContext:Landroid/content/Context;

.field private mInitTime:J

.field private final mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private final wp:Lcom/kwad/components/core/webview/b/b/y;

.field protected xI:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/kwad/components/core/webview/b/h;->We:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>(JLandroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VW:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VX:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VY:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VZ:Z

    iput v0, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->xI:J

    const/16 v0, 0x3e8

    iput v0, p0, Lcom/kwad/components/core/webview/b/h;->Wf:I

    new-instance v0, Lcom/kwad/sdk/core/webview/e;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/e;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    new-instance v0, Lcom/kwad/components/core/webview/b/h$16;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/h$16;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wh:Lcom/kwad/components/core/webview/b/h$a;

    new-instance v0, Lcom/kwad/components/core/webview/b/h$18;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/h$18;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wi:Lcom/kwad/sdk/components/j;

    new-instance v0, Lcom/kwad/components/core/webview/b/h$19;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/h$19;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wj:Ljava/lang/Runnable;

    new-instance v0, Lcom/kwad/components/core/webview/b/h$13;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/h$13;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    iput-object p3, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iput-wide p1, p0, Lcom/kwad/components/core/webview/b/h;->xI:J

    new-instance p1, Lcom/kwad/components/core/webview/b/b/y;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/y;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->wp:Lcom/kwad/components/core/webview/b/b/y;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VW:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VX:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VY:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VZ:Z

    iput v0, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->xI:J

    const/16 v2, 0x3e8

    iput v2, p0, Lcom/kwad/components/core/webview/b/h;->Wf:I

    new-instance v3, Lcom/kwad/sdk/core/webview/e;

    invoke-direct {v3}, Lcom/kwad/sdk/core/webview/e;-><init>()V

    iput-object v3, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    new-instance v3, Lcom/kwad/components/core/webview/b/h$16;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/webview/b/h$16;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v3, p0, Lcom/kwad/components/core/webview/b/h;->Wh:Lcom/kwad/components/core/webview/b/h$a;

    new-instance v3, Lcom/kwad/components/core/webview/b/h$18;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/webview/b/h$18;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v3, p0, Lcom/kwad/components/core/webview/b/h;->Wi:Lcom/kwad/sdk/components/j;

    new-instance v3, Lcom/kwad/components/core/webview/b/h$19;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/webview/b/h$19;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v3, p0, Lcom/kwad/components/core/webview/b/h;->Wj:Ljava/lang/Runnable;

    new-instance v3, Lcom/kwad/components/core/webview/b/h$13;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/webview/b/h$13;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v3, p0, Lcom/kwad/components/core/webview/b/h;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iput-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->xI:J

    iput v2, p0, Lcom/kwad/components/core/webview/b/h;->Wf:I

    new-instance p1, Lcom/kwad/components/core/webview/b/b/y;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/y;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->wp:Lcom/kwad/components/core/webview/b/b/y;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;I)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/kwad/components/core/webview/b/h;->VW:Z

    iput-boolean p2, p0, Lcom/kwad/components/core/webview/b/h;->VX:Z

    iput-boolean p2, p0, Lcom/kwad/components/core/webview/b/h;->VY:Z

    iput-boolean p2, p0, Lcom/kwad/components/core/webview/b/h;->VZ:Z

    iput p2, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->xI:J

    const/16 p2, 0x3e8

    iput p2, p0, Lcom/kwad/components/core/webview/b/h;->Wf:I

    new-instance v0, Lcom/kwad/sdk/core/webview/e;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/e;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    new-instance v0, Lcom/kwad/components/core/webview/b/h$16;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/h$16;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wh:Lcom/kwad/components/core/webview/b/h$a;

    new-instance v0, Lcom/kwad/components/core/webview/b/h$18;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/h$18;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wi:Lcom/kwad/sdk/components/j;

    new-instance v0, Lcom/kwad/components/core/webview/b/h$19;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/h$19;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wj:Ljava/lang/Runnable;

    new-instance v0, Lcom/kwad/components/core/webview/b/h$13;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/h$13;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iput p2, p0, Lcom/kwad/components/core/webview/b/h;->Wf:I

    new-instance p1, Lcom/kwad/components/core/webview/b/b/y;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/y;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->wp:Lcom/kwad/components/core/webview/b/b/y;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/core/webview/b/h;->Db:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;Landroid/app/Activity;)Landroid/app/Activity;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->mActivity:Landroid/app/Activity;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/core/webview/b/c/d;)Lcom/kwad/components/core/webview/b/c/d;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->VP:Lcom/kwad/components/core/webview/b/c/d;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/h$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/h;->Wh:Lcom/kwad/components/core/webview/b/h$a;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/core/webview/jshandler/aa$a;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->b(Lcom/kwad/components/core/webview/jshandler/aa$a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/offline/api/tk/TKDownloadListener;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/offline/api/tk/TKDownloadListener;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->b(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/offline/api/tk/model/StyleTemplate;Lcom/kwad/components/core/webview/b/h$a;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;Lcom/kwad/components/core/webview/b/h$a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->aL(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;Ljava/lang/Throwable;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->f(Ljava/lang/Throwable;)V

    return-void
.end method

.method private a(Lcom/kwad/components/offline/api/tk/TKDownloadListener;)V
    .locals 14

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/response/b/b;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget-object v3, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateId:Ljava/lang/String;

    iget-object v4, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateMd5:Ljava/lang/String;

    iget-object v5, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    iget-wide v6, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateVersionCode:J

    long-to-int v6, v6

    move-object v7, p1

    invoke-interface/range {v1 .. v7}, Lcom/kwad/components/core/offline/api/b/c;->loadTkFileByTemplateId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/kwad/components/offline/api/tk/TKDownloadListener;)V

    return-void

    :cond_1
    iget-object v7, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    iget-object v8, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget-object v9, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget-object v10, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateMd5:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget-object v11, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget v12, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    move-object v13, p1

    invoke-interface/range {v7 .. v13}, Lcom/kwad/components/core/offline/api/b/c;->loadTkFileByTemplateId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/kwad/components/offline/api/tk/TKDownloadListener;)V

    return-void
.end method

.method private a(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;Lcom/kwad/components/core/webview/b/h$a;)V
    .locals 5

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "addTKView mTKPlugin.getState(): "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    invoke-interface {v1}, Lcom/kwad/components/core/offline/api/b/c;->getState()Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TKLoadController"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    invoke-interface {v0}, Lcom/kwad/components/core/offline/api/b/c;->getState()Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    move-result-object v0

    sget-object v1, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;->SO_FAIL:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    if-ne v0, v1, :cond_1

    const-string p1, "so_fail"

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->aM(Ljava/lang/String;)V

    if-eqz p2, :cond_0

    invoke-interface {p2}, Lcom/kwad/components/core/webview/b/h$a;->onFailed()V

    :cond_0
    return-void

    :cond_1
    iget-object v0, p1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->jsStr:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-string p1, "no_template"

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->aN(Ljava/lang/String;)V

    if-eqz p2, :cond_2

    invoke-interface {p2}, Lcom/kwad/components/core/webview/b/h$a;->onFailed()V

    :cond_2
    return-void

    :cond_3
    :try_start_0
    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rO()V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->Wc:J

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget-object v2, p1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateId:Ljava/lang/String;

    iget v3, p1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    iget v4, p1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->tkSouce:I

    invoke-interface {v0, v1, v2, v3, v4}, Lcom/kwad/components/core/offline/api/b/c;->getView(Landroid/content/Context;Ljava/lang/String;II)Lcom/kwad/sdk/components/l;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/components/l;->getUniqId()I

    move-result v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1, v2}, Lcom/kwad/components/core/offline/api/b/a/a;->a(ILcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->Wi:Lcom/kwad/sdk/components/j;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/components/l;->a(Lcom/kwad/sdk/components/j;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v1, :cond_4

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rR()Ljava/util/Map;

    move-result-object v1

    const-string v2, "adStyle"

    iget-object v3, p0, Lcom/kwad/components/core/webview/b/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v3}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_4
    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rR()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/components/l;->setCustomEnv(Ljava/util/Map;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VU:Lcom/kwad/sdk/components/l;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VR:Lcom/kwad/sdk/core/webview/c/g;

    if-eqz v1, :cond_5

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VR:Lcom/kwad/sdk/core/webview/c/g;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/components/l;->b(Lcom/kwad/sdk/core/webview/c/g;)V

    :cond_5
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/kwad/components/core/webview/b/h;->Wc:J

    sub-long/2addr v1, v3

    iput-wide v1, p0, Lcom/kwad/components/core/webview/b/h;->mInitTime:J

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/components/core/webview/b/h;->Wb:J

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rK()V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;)V

    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    iget-object v3, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget-object v4, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v4}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Lcom/kwad/components/core/offline/api/b/c;->getJsBaseDir(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iget-object p1, p1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->jsStr:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/core/webview/b/h$17;

    invoke-direct {v2, p0, p2}, Lcom/kwad/components/core/webview/b/h$17;-><init>(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/core/webview/b/h$a;)V

    invoke-interface {v0, p1, v1, v2}, Lcom/kwad/sdk/components/l;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/components/k;)V

    invoke-interface {v0}, Lcom/kwad/sdk/components/l;->getView()Landroid/view/View;

    move-result-object p1

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/i;->getTKContainer()Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->f(Ljava/lang/Throwable;)V

    if-eqz p2, :cond_6

    invoke-interface {p2}, Lcom/kwad/components/core/webview/b/h$a;->onFailed()V

    :cond_6
    return-void
.end method

.method private a(Lcom/kwad/sdk/components/l;)V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-interface {v1, p1, v2}, Lcom/kwad/components/core/webview/b/i;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/a/s;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/b/a/s;-><init>()V

    new-instance v2, Lcom/kwad/components/core/webview/b/h$21;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/webview/b/h$21;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/webview/b/a/s;->a(Lcom/kwad/components/core/webview/b/a/s$a;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/webview/b/h;->c(Lcom/kwad/sdk/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/ab;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/sdk/core/webview/d/a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/webview/d/a;-><init>()V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/a/f;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/b/a/f;-><init>()V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->mS()Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-direct {v1, v2, v0, p0}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    goto :goto_1

    :cond_1
    new-instance v1, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-direct {v1, v2, v0, p0}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    :goto_1
    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/q;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/jshandler/q;-><init>()V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/a/k;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/b/a/k;-><init>()V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-direct {v1, v2}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-direct {v1, v2}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-direct {v1, v2}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    new-instance v2, Lcom/kwad/components/core/webview/b/h$22;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/webview/b/h$22;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/webview/jshandler/t;->a(Lcom/kwad/components/core/webview/jshandler/t$b;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/aa;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    new-instance v3, Lcom/kwad/components/core/webview/b/h$2;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/webview/b/h$2;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/aa;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/webview/jshandler/aa$b;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/ah;

    new-instance v2, Lcom/kwad/components/core/webview/b/h$3;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/webview/b/h$3;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-direct {v1, v2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v2, v1}, Lcom/kwad/components/core/webview/b/i;->a(Lcom/kwad/components/core/webview/jshandler/am;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/a/p;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/b/a/p;-><init>()V

    iput-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VV:Lcom/kwad/components/core/webview/b/a/p;

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VV:Lcom/kwad/components/core/webview/b/a/p;

    invoke-interface {v1, v2}, Lcom/kwad/components/core/webview/b/i;->a(Lcom/kwad/components/core/webview/b/a/p;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    if-eqz v1, :cond_2

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    new-instance v1, Lcom/kwad/components/core/webview/b/a/l;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/b/a/l;-><init>()V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v2, Lcom/kwad/components/core/webview/b/h$4;

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v3

    invoke-direct {v2, p0, v3, v1}, Lcom/kwad/components/core/webview/b/h$4;-><init>(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/a/l;)V

    iput-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Tj:Lcom/kwad/sdk/core/download/e;

    invoke-static {}, Lcom/kwad/sdk/core/download/c;->Aw()Lcom/kwad/sdk/core/download/c;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->Tj:Lcom/kwad/sdk/core/download/e;

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/kwad/sdk/core/download/c;->a(Lcom/kwad/sdk/core/download/d;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_2
    new-instance v1, Lcom/kwad/components/core/webview/b/a/t;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/b/a/t;-><init>()V

    new-instance v2, Lcom/kwad/components/core/webview/b/h$5;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/webview/b/h$5;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/webview/b/a/t;->a(Lcom/kwad/components/core/webview/b/a/t$a;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/a/u;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/b/a/u;-><init>()V

    new-instance v2, Lcom/kwad/components/core/webview/b/h$6;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/webview/b/h$6;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/webview/b/a/u;->a(Lcom/kwad/components/core/webview/b/a/u$a;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/a/o;

    invoke-direct {v1}, Lcom/kwad/components/core/webview/b/a/o;-><init>()V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v2, v1}, Lcom/kwad/components/core/webview/b/i;->a(Lcom/kwad/components/core/webview/b/a/o;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/h$7;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b/h$7;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/h$8;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b/h$8;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/p;

    new-instance v2, Lcom/kwad/components/core/webview/b/h$9;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/webview/b/h$9;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-direct {v1, v2}, Lcom/kwad/components/core/webview/jshandler/p;-><init>(Lcom/kwad/sdk/core/webview/d/a/b;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/h$10;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b/h$10;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/h$11;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b/h$11;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/a/a;

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/kwad/components/core/webview/b/a/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v1, Lcom/kwad/components/core/webview/b/a;

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/kwad/components/core/webview/b/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {p1, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v2}, Lcom/kwad/components/core/webview/b/i;->getTKContainer()Landroid/widget/FrameLayout;

    move-result-object v2

    invoke-virtual {p0, v1, v0, p1, v2}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/components/l;Landroid/view/ViewGroup;)V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/c/a;)V
    .locals 0

    invoke-interface {p0, p1}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/h;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/webview/b/h;->VW:Z

    return p1
.end method

.method private aL(Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rM()V

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->aM(Ljava/lang/String;)V

    return-void
.end method

.method private aM(Ljava/lang/String;)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rJ()Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    iget v3, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    invoke-direct {v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;-><init>(I)V

    const/4 v3, 0x4

    invoke-virtual {v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setRenderState(I)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v2

    invoke-virtual {v2, p1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setErrorReason(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p1

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v2}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setTemplateId(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p1

    iget v0, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setVersionCode(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    const-string v0, "ad_client_error_log"

    invoke-virtual {v1, v0, p1}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKPerform(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private aN(Ljava/lang/String;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "logTkRenderFail : "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", templateId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tkRender"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VX:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VY:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VY:Z

    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    iget v2, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    invoke-direct {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;-><init>(I)V

    const/4 v2, 0x2

    invoke-virtual {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setRenderState(I)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setErrorReason(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setTemplateId(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget v1, v1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setVersionCode(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    const-string v1, "ad_client_error_log"

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKPerform(Ljava/lang/String;Lorg/json/JSONObject;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rM()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/webview/b/h;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/b/h;->aN(Ljava/lang/String;)V

    return-void
.end method

.method private b(Lcom/kwad/components/core/webview/jshandler/aa$a;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/i;->getTKContainer()Landroid/widget/FrameLayout;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/FrameLayout$LayoutParams;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget v3, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    int-to-float v3, v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/FrameLayout$LayoutParams;->height:I

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget v3, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->leftMargin:I

    int-to-float v3, v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/FrameLayout$LayoutParams;->leftMargin:I

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget v3, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->rightMargin:I

    int-to-float v3, v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/FrameLayout$LayoutParams;->rightMargin:I

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->bottomMargin:I

    int-to-float p1, p1

    invoke-static {v2, p1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p1

    iput p1, v1, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    const/4 p1, -0x1

    iput p1, v1, Landroid/widget/FrameLayout$LayoutParams;->width:I

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method private b(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V
    .locals 5

    iget-object v0, p1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateId:Ljava/lang/String;

    iget-object v1, p1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateUrl:Ljava/lang/String;

    const-string v2, ""

    const-string v3, "renderType_tk"

    invoke-static {v2, v3, v0, v1}, Lcom/kwad/sdk/utils/i;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "\u8bfb\u53d6\u5b8c\u6bd5\uff0c\u603b\u8017\u65f6"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/kwad/components/core/webview/b/h;->Db:J

    sub-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ", \u8bfb\u53d6\u6210\u529f"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TKLoadController"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VW:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const-string v0, "\u6ca1\u6709\u8d85\u65f6"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wj:Ljava/lang/Runnable;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/h$12;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/webview/b/h$12;-><init>(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/webview/b/h;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/webview/b/h;->VZ:Z

    return p1
.end method

.method static synthetic c(Lcom/kwad/components/core/webview/b/h;)Landroid/app/Activity;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/h;->mActivity:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rQ()V

    return-void
.end method

.method static synthetic e(Lcom/kwad/components/core/webview/b/h;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/webview/b/h;->VZ:Z

    return p0
.end method

.method static synthetic f(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rP()V

    return-void
.end method

.method private f(Ljava/lang/Throwable;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "logTkRenderFail : "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", templateId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tkRender"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    iget v2, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    invoke-direct {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;-><init>(I)V

    const/4 v2, 0x3

    invoke-virtual {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setRenderState(I)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v1

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setErrorReason(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setTemplateId(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget v1, v1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setVersionCode(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    const-string v1, "ad_client_error_log"

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKPerform(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic g(Lcom/kwad/components/core/webview/b/h;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->Wc:J

    return-wide v0
.end method

.method static synthetic h(Lcom/kwad/components/core/webview/b/h;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->Db:J

    return-wide v0
.end method

.method static synthetic i(Lcom/kwad/components/core/webview/b/h;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->mInitTime:J

    return-wide v0
.end method

.method static synthetic j(Lcom/kwad/components/core/webview/b/h;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->Wb:J

    return-wide v0
.end method

.method static synthetic k(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/c/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/h;->VP:Lcom/kwad/components/core/webview/b/c/d;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/b/y;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/h;->wp:Lcom/kwad/components/core/webview/b/b/y;

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/a/p;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/h;->VV:Lcom/kwad/components/core/webview/b/a/p;

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    return-object p0
.end method

.method private rH()V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VX:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VY:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VW:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VZ:Z

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->Db:J

    iput-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->Wc:J

    iput-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->mInitTime:J

    iput-wide v0, p0, Lcom/kwad/components/core/webview/b/h;->Wb:J

    return-void
.end method

.method private rI()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wj:Ljava/lang/Runnable;

    iget v1, p0, Lcom/kwad/components/core/webview/b/h;->Wf:I

    int-to-long v1, v1

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    invoke-static {}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->CW()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/webview/b/h$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b/h$1;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VT:Ljava/util/concurrent/Future;

    return-void
.end method

.method private rJ()Lcom/kwad/components/offline/api/tk/model/StyleTemplate;
    .locals 8

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/h;->rL()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/response/b/b;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    return-object v0

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    if-nez v1, :cond_2

    new-instance v1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    invoke-direct {v1}, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;-><init>()V

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateId:Ljava/lang/String;

    iput-object v2, v1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateId:Ljava/lang/String;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateMd5:Ljava/lang/String;

    iput-object v2, v1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateMd5:Ljava/lang/String;

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    iput-object v2, v1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateUrl:Ljava/lang/String;

    iget-wide v2, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateVersionCode:J

    long-to-int v0, v2

    iput v0, v1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    const/4 v0, 0x0

    iput v0, v1, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->tkSouce:I

    goto :goto_0

    :cond_2
    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget-object v3, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateId:Ljava/lang/String;

    iget-object v4, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateMd5:Ljava/lang/String;

    iget-object v5, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    iget-wide v6, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateVersionCode:J

    long-to-int v6, v6

    invoke-interface/range {v1 .. v6}, Lcom/kwad/components/core/offline/api/b/c;->checkStyleTemplateById(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    move-result-object v1

    :goto_0
    return-object v1
.end method

.method private rK()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v2}, Lcom/kwad/components/core/webview/b/i;->getTouchCoordsView()Lcom/kwad/sdk/widget/e;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v3}, Lcom/kwad/components/core/webview/b/i;->getTKContainer()Landroid/widget/FrameLayout;

    move-result-object v3

    iget-object v4, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v4}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/kwad/sdk/core/webview/e;->a(ILcom/kwad/sdk/widget/e;Landroid/view/ViewGroup;Ljava/lang/String;)V

    return-void
.end method

.method private rM()V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/b/h$20;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/h$20;-><init>(Lcom/kwad/components/core/webview/b/h;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method private rN()V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rJ()Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget v1, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->tkSouce:I

    iput v1, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    iget v3, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    invoke-direct {v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;-><init>(I)V

    const/4 v3, -0x1

    invoke-virtual {v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setRenderState(I)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v3}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setTemplateId(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v2

    iget v0, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setVersionCode(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    const-string v2, "ad_client_apm_log"

    invoke-virtual {v1, v2, v0}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKPerform(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private rO()V
    .locals 3

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VX:Z

    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    iget v2, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    invoke-direct {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;-><init>(I)V

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setRenderState(I)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v2}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setTemplateId(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget v2, v2, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setVersionCode(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "ad_client_apm_log"

    invoke-virtual {v0, v2, v1}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKPerform(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private rP()V
    .locals 6

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VX:Z

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VY:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/b/h;->VY:Z

    iget-wide v1, p0, Lcom/kwad/components/core/webview/b/h;->Wb:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/kwad/components/core/webview/b/h;->Wb:J

    sub-long v3, v1, v3

    :cond_1
    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    iget v5, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    invoke-direct {v2, v5}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;-><init>(I)V

    invoke-virtual {v2, v0}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setRenderState(I)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v0

    invoke-virtual {v0, v3, v4}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setRenderTime(J)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v2}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setTemplateId(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v0

    iget-wide v2, p0, Lcom/kwad/components/core/webview/b/h;->Wc:J

    iget-wide v4, p0, Lcom/kwad/components/core/webview/b/h;->Db:J

    sub-long/2addr v2, v4

    invoke-virtual {v0, v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setLoadTime(J)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v0

    iget-wide v2, p0, Lcom/kwad/components/core/webview/b/h;->mInitTime:J

    invoke-virtual {v0, v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setInitTime(J)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget v2, v2, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setVersionCode(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    const-string v2, "ad_client_apm_log"

    invoke-virtual {v1, v2, v0}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKPerform(Ljava/lang/String;Lorg/json/JSONObject;)V

    :cond_2
    :goto_0
    return-void
.end method

.method private rQ()V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "logTkRenderFail : timeout, templateId = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tkRender"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rJ()Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    iget v3, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    invoke-direct {v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;-><init>(I)V

    const/4 v3, 0x3

    invoke-virtual {v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setRenderState(I)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v2

    const-string v3, "timeout"

    invoke-virtual {v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setErrorReason(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v3}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setTemplateId(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v2

    iget v0, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateVersionCode:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setVersionCode(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    const-string v2, "ad_client_error_log"

    invoke-virtual {v1, v2, v0}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKPerform(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private rR()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wd:Ljava/util/Map;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wd:Ljava/util/Map;

    const-string v1, "TKVersion"

    const-string v2, "5.0.3"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wd:Ljava/util/Map;

    const-string v1, "SDKVersion"

    const-string v2, "3.3.42"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wd:Ljava/util/Map;

    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "sdkType"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wd:Ljava/util/Map;

    return-object v0
.end method

.method private rS()V
    .locals 10

    const-string v0, "TKLoadController"

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VU:Lcom/kwad/sdk/components/l;

    if-nez v1, :cond_0

    goto/16 :goto_1

    :cond_0
    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    iget-object v3, p0, Lcom/kwad/components/core/webview/b/h;->mContext:Landroid/content/Context;

    iget-object v4, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v4}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Lcom/kwad/components/core/offline/api/b/c;->getJsBaseDir(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    new-instance v2, Ljava/io/File;

    const-string v3, "kcov.json"

    invoke-direct {v2, v1, v3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    return-void

    :cond_1
    :try_start_0
    invoke-static {v2}, Lcom/kwad/sdk/utils/q;->V(Ljava/io/File;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    return-void

    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "kcov.json:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "gitHeadCommit"

    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const-string v1, "coverageApi"

    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v1, "coverageTaskId"

    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v1, "currentBranch"

    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_0

    :cond_3
    const-string v1, "\u5c1d\u8bd5\u83b7\u53d6\u8986\u76d6\u7387\u7edf\u8ba1..."

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VU:Lcom/kwad/sdk/components/l;

    const-string v1, "JSON.stringify(this.__coverage__)"

    invoke-interface {v0, v1}, Lcom/kwad/sdk/components/l;->execute(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    instance-of v1, v0, Ljava/lang/String;

    if-nez v1, :cond_4

    return-void

    :cond_4
    move-object v9, v0

    check-cast v9, Ljava/lang/String;

    new-instance v0, Lcom/kwad/components/core/webview/b/h$15;

    move-object v3, v0

    move-object v4, p0

    invoke-direct/range {v3 .. v9}, Lcom/kwad/components/core/webview/b/h$15;-><init>(Lcom/kwad/components/core/webview/b/h;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void

    :cond_5
    :goto_0
    const-string v1, "kcov.json\u6570\u636e\u4e0d\u5408\u6cd5\uff0c\u7f3a\u5c11\u5173\u952e\u5b57\u6bb5gitHeadCommit | coverageApi | coverageTaskId | currentBranch"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_6
    :goto_1
    return-void
.end method

.method static synthetic rT()Ljava/util/Map;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/webview/b/h;->We:Ljava/util/Map;

    return-object v0
.end method


# virtual methods
.method public a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->mActivity:Landroid/app/Activity;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/webview/e;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object p3, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rH()V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {p1}, Lcom/kwad/components/core/webview/b/i;->getTKContainer()Landroid/widget/FrameLayout;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/widget/FrameLayout;->removeAllViews()V

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->isCanUseTk()Z

    move-result p1

    if-nez p1, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rM()V

    return-void

    :cond_1
    const-class p1, Lcom/kwad/components/core/offline/api/b/c;

    invoke-static {p1}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/offline/api/b/c;

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rN()V

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "bind mTKPlugin: "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "TKLoadController"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    if-eqz p1, :cond_2

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rI()V

    return-void

    :cond_2
    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rM()V

    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    iget p3, p0, Lcom/kwad/components/core/webview/b/h;->Wa:I

    invoke-direct {p2, p3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;-><init>(I)V

    const/4 p3, 0x4

    invoke-virtual {p2, p3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setRenderState(I)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p2

    const-string p3, "offline_failed"

    invoke-virtual {p2, p3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setErrorReason(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p2

    iget-object p3, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {p3}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->setTemplateId(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/components/offline/api/tk/model/report/TKPerformMsg;->toJson()Lorg/json/JSONObject;

    move-result-object p2

    const-string p3, "ad_client_error_log"

    invoke-virtual {p1, p3, p2}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKPerform(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    return-void
.end method

.method protected a(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/components/l;Landroid/view/ViewGroup;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/c/g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h;->VR:Lcom/kwad/sdk/core/webview/c/g;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/components/core/webview/b/i;->a(Lcom/kwad/sdk/core/webview/d/b/a;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rR()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method protected c(Lcom/kwad/sdk/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/ab;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ab;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    return-object v0
.end method

.method public final callJS(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VU:Lcom/kwad/sdk/components/l;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-interface {v0, p1, v1, v1}, Lcom/kwad/sdk/components/l;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/components/k;)V

    :cond_0
    return-void
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public jv()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VT:Ljava/util/concurrent/Future;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Ljava/util/concurrent/Future;->cancel(Z)Z

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wj:Ljava/lang/Runnable;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Tj:Lcom/kwad/sdk/core/download/e;

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/core/download/c;->Aw()Lcom/kwad/sdk/core/download/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h;->Tj:Lcom/kwad/sdk/core/download/e;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/download/c;->a(Lcom/kwad/sdk/core/download/d;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VP:Lcom/kwad/components/core/webview/b/c/d;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/c/d;->dismiss()V

    :cond_2
    sget-object v0, Lcom/kwad/components/core/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/h;->rS()V

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VS:Lcom/kwad/components/core/offline/api/b/c;

    if-eqz v0, :cond_4

    invoke-interface {v0}, Lcom/kwad/components/core/offline/api/b/c;->onDestroy()V

    :cond_4
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->VU:Lcom/kwad/sdk/components/l;

    if-eqz v0, :cond_5

    invoke-interface {v0}, Lcom/kwad/sdk/components/l;->getUniqId()I

    move-result v1

    invoke-static {v1}, Lcom/kwad/components/core/offline/api/b/a/a;->av(I)V

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/kwad/components/core/webview/b/h;->VU:Lcom/kwad/sdk/components/l;

    new-instance v1, Lcom/kwad/components/core/webview/b/h$14;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/core/webview/b/h$14;-><init>(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/sdk/components/l;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    :cond_5
    return-void
.end method

.method protected mS()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final rG()Lcom/kwad/sdk/core/webview/b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    return-object v0
.end method

.method protected final rL()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h;->Wg:Lcom/kwad/sdk/core/webview/e;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/e;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    return-object v0
.end method
